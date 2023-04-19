#include "common.h"
#include "nnsched.h"

extern u16 D_8007B2D0;

//#pragma GLOBAL_ASM("asm/nonmatchings/1130/nnScCreateScheduler.s")
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

#pragma GLOBAL_ASM("asm/nonmatchings/1130/func_8000062C.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/1130/nnScGetAudioMQ.s")
OSMesgQueue* nnScGetAudioMQ(NNSched* sc) {
    return &sc->audioRequestMQ;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/1130/nnScGetGfxMQ.s")
OSMesgQueue* nnScGetGfxMQ(NNSched* sc) {
    return &sc->graphicsRequestMQ;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/1130/func_80000710.s")
void func_80000710(NNSched* sc) {
    
    OSMesg msg = (OSMesg)0;

while(1){
    osRecvMesg(&sc->retraceMQ, &msg, OS_MESG_BLOCK);
    D_8007B2D0++;
    
    switch ( (int)msg ) {
            case VIDEO_MSG:
                func_800008B0(sc, &sc->retraceMsg);
                break;
            case PRE_NMI_MSG:
                func_800008B0(sc, &sc->prenmiMsg);
                break;
        }
    }
}

//#pragma GLOBAL_ASM("asm/nonmatchings/1130/nnScAddClient.s")
void nnScAddClient(NNSched *sc, NNScClient *c, OSMesgQueue *msgQ)
{
  OSIntMask mask;
  mask = osSetIntMask(OS_IM_NONE);
  c->msgQ = msgQ;
  c->next = sc->clientList;
  sc->clientList = c;
  osSetIntMask(mask);
}

//#pragma GLOBAL_ASM("asm/nonmatchings/1130/nnScRemoveClient.s")
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

#pragma GLOBAL_ASM("asm/nonmatchings/1130/func_800008B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/1130/func_80000900.s")

#pragma GLOBAL_ASM("asm/nonmatchings/1130/func_80000A80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/1130/func_80000BB4.s")
