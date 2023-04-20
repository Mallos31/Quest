/*Adapted from nnsched.h from NINTENDO64 SAMPLE PROGRAM 1 
     from the Nintendo 64 Technical Support Center for 
                   use with Quest 64                   */

#include "common.h"
#include "nnsched.h"

extern u16 D_8007B2D0; //named framecont in nnsched.c
extern u64 D_800792D0;
extern u64 D_8007A2D0;

void nnScCreateScheduler(NNSched * sc, u8 numFields) {
    
    sc->curGraphicsTask = 0;
    sc->curAudioTask    = 0;
    sc->graphicsTaskSuspended = 0;
    sc->clientList      = 0;
    sc->firstTime       = 1; 
    sc->retraceMsg      = NN_SC_RETRACE_MSG;
    sc->prenmiMsg       = NN_SC_PRE_NMI_MSG;
    
    osCreateMesgQueue(&sc->retraceMQ, sc->retraceMsgBuf, NN_SC_MAX_MESGS);
    osCreateMesgQueue(&sc->rspMQ, sc->rspMsgBuf, NN_SC_MAX_MESGS);
    osCreateMesgQueue(&sc->rdpMQ, sc->rdpMsgBuf, NN_SC_MAX_MESGS);
    osCreateMesgQueue(&sc->graphicsRequestMQ, sc->graphicsRequestBuf, NN_SC_MAX_MESGS);
    osCreateMesgQueue(&sc->audioRequestMQ, sc->audioRequestBuf, NN_SC_MAX_MESGS);
    osCreateMesgQueue(&sc->waitMQ, sc->waitMsgBuf, NN_SC_MAX_MESGS);
    
    osViSetEvent(&sc->retraceMQ, (OSMesg)VIDEO_MSG, numFields);    
    osSetEventMesg(OS_EVENT_SP, &sc->rspMQ, (OSMesg)RSP_DONE_MSG);
    osSetEventMesg(OS_EVENT_DP, &sc->rdpMQ, (OSMesg)RDP_DONE_MSG);
    osSetEventMesg(OS_EVENT_PRENMI, &sc->retraceMQ, (OSMesg)PRE_NMI_MSG);
}

void nnScStartScheduler(NNSched* sc) {

    osCreateThread(&sc->schedulerThread, 0x13, (void (*)(void*)) nnScEventHandler, sc, &D_800792D0, NN_SC_PRI);
    osStartThread(&sc->schedulerThread);
    osCreateThread(&sc->audioThread, 0x12, (void (*)(void*)) nnScExecuteAudio, sc, &D_8007A2D0, NN_SC_AUDIO_PRI);
    osStartThread(&sc->audioThread);
    osCreateThread(&sc->graphicsThread, 0x11, (void (*)(void*)) nnScExecuteGraphics, sc, &D_8007B2D0, NN_SC_GRAPHICS_PRI);
    osStartThread(&sc->graphicsThread);
}

OSMesgQueue* nnScGetAudioMQ(NNSched* sc) {
    return &sc->audioRequestMQ;
}

OSMesgQueue* nnScGetGfxMQ(NNSched* sc) {
    return &sc->graphicsRequestMQ;
}

void nnScEventHandler(NNSched* sc) {
    
    OSMesg msg = (OSMesg)0;

while(1){
    osRecvMesg(&sc->retraceMQ, &msg, OS_MESG_BLOCK);
    D_8007B2D0++;
    
    switch ( (int)msg ) {
            case VIDEO_MSG:
                nnScEventBroadcast(sc, &sc->retraceMsg);
                break;
            case PRE_NMI_MSG:
                nnScEventBroadcast(sc, &sc->prenmiMsg);
                break;
        }
    }
}

void nnScAddClient(NNSched *sc, NNScClient *c, OSMesgQueue *msgQ)
{
  OSIntMask mask;
  mask = osSetIntMask(OS_IM_NONE);
  c->msgQ = msgQ;
  c->next = sc->clientList;
  sc->clientList = c;
  osSetIntMask(mask);
}

void nnScRemoveClient(NNSched *sc, NNScClient *c)
{
  NNScClient *client = sc->clientList; 
  NNScClient *prev   = 0;
  OSIntMask  mask;
  mask = osSetIntMask(OS_IM_NONE);
    
  while (client != 0) {
    if (client == c) {
      if(prev)
	prev->next = c->next;
      else
	sc->clientList = c->next;
      break;
    }
    prev   = client;
    client = client->next;
  }
  osSetIntMask(mask);
}

void nnScEventBroadcast(NNSched *sc, NNScMsg *msg)
{
  NNScClient *client;
  
  /* inform necessary clients of  retrace message */
  for (client = sc->clientList; client != 0; client = client->next) {
    osSendMesg(client->msgQ, (OSMesg *)msg, OS_MESG_NOBLOCK);
  }
}

void nnScExecuteAudio(NNSched *sc)
{
  OSMesg msg = (OSMesg)0;
  NNScTask *task = (NNScTask *)0;
  NNScTask *gfxTask = (NNScTask *)0;
  u32 yieldFlag;

  while(1) {
    /* wait for audio execution request */
    osRecvMesg(&sc->audioRequestMQ, (OSMesg *)&task, OS_MESG_BLOCK);
    osWritebackDCacheAll();	/* flash cache */
    /* Inspect current RSP stack */
    yieldFlag = 0;
    gfxTask = sc->curGraphicsTask;
    if( gfxTask ) {
      /* wait for graphic task to end (yield) */
      osSpTaskYield();		/* task yield */
      osRecvMesg(&sc->rspMQ, &msg, OS_MESG_BLOCK);
      /* verify that task has actually yielded */
      if (osSpTaskYielded(&gfxTask->list)){
	yieldFlag =1;
      } else {
	yieldFlag =2;
      }
    }

    sc->curAudioTask = task;
    osSpTaskStart(&task->list);        /* execute task */
    /* wait for end of RSP task */
    osRecvMesg(&sc->rspMQ, &msg, OS_MESG_BLOCK);
    sc->curAudioTask = (NNScTask *)0;

    if( sc->graphicsTaskSuspended )
      osSendMesg( &sc->waitMQ, &msg, OS_MESG_BLOCK );
    /* restart graphic task that yielded */
    if( yieldFlag == 1 ) {
      osSpTaskStart(&gfxTask->list);    
    } else if ( yieldFlag == 2 ) {
      osSendMesg(&sc->rspMQ, &msg, OS_MESG_BLOCK);
    }
    /* inform thread started by audio task that task has ended */
    osSendMesg(task->msgQ, task->msg, OS_MESG_BLOCK);
  }
}

void nnScExecuteGraphics(NNSched *sc)
{
  OSMesg msg = (OSMesg)0;
  NNScTask *task;

  while(1) {
    /* wait for graphic task execution request */
    osRecvMesg(&sc->graphicsRequestMQ, (OSMesg *)&task, OS_MESG_BLOCK);
    /* wait for frame buffer to become available for use */
    nnScWaitTaskReady(sc, task);
    if( sc->curAudioTask ) {
      sc->graphicsTaskSuspended = task;
      osRecvMesg( &sc->waitMQ, &msg, OS_MESG_BLOCK );
      sc->graphicsTaskSuspended = (NNScTask *)0;
    }

    sc->curGraphicsTask = task;
    osSpTaskStart(&task->list);        /* execute task */
    /* wait for end of RSP task */
    osRecvMesg(&sc->rspMQ, &msg, OS_MESG_BLOCK);
    sc->curGraphicsTask = (NNScTask *)0;

    /* wait for end of  RDP task */
    osRecvMesg(&sc->rdpMQ, &msg, OS_MESG_BLOCK);

    /* invalidate video blackout first time only */
    if (sc->firstTime) {
      osViBlack(FALSE); //!WARNING webSym thought this was osViRepeatLine.
      sc->firstTime = 0;
    }
    /* specify next frame buffer to display */
    if ( task->flags & NN_SC_SWAPBUFFER ){
      osViSwapBuffer(task->framebuffer);

    }
    /* inform thread started by graphic task that task has ended */
    osSendMesg(task->msgQ, task->msg, OS_MESG_BLOCK);
  }
}

void nnScWaitTaskReady(NNSched* sc, NNScTask* task) {
    
    OSMesg msg = (OSMesg)0;
    NNScClient client;

    void* fb = task->framebuffer;
    if (osViGetCurrentFramebuffer() == fb) {
        do {
            nnScAddClient(sc, &client, &sc->waitMQ);
            osRecvMesg(&sc->waitMQ, &msg, OS_MESG_BLOCK);
            nnScRemoveClient(sc, &client);
        } while (osViGetCurrentFramebuffer() == fb);
    }
}
