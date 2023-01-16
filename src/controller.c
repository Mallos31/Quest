#include "common.h"
#include <os_internal.h>
#include <rcp.h>
#include "controller.h"
#include "siint.h"

/*OSTime osClockRate = OS_CLOCK_RATE;
#define OS_CLOCK_RATE           62500000LL
#define OS_CPU_COUNTER          (OS_CLOCK_RATE*3/4)

#define OS_NSEC_TO_CYCLES(n)    (((u64)(n)*(osClockRate))/(1000000000LL))
#define OS_USEC_TO_CYCLES(n)    (((u64)(n)*(osClockRate))/(1000000LL))


s32 __osContinitialized = 0;
OSPifRam __osContPifRam;
u8 __osMaxControllers;
OSMesgQueue __osEepromTimerQ;
OSMesg __osEepromTimerMsg;

*/
#pragma GLOBAL_ASM("asm/nonmatchings/controller/osContInit.s")
/*s32 osContInit(OSMesgQueue* mq, u8* bitpattern, OSContStatus* data) {
    OSMesg dummy;
    s32 ret = 0;
    OSTime t;
    OSTimer mytimer;
    OSMesgQueue timerMesgQueue;
    
    if (__osContinitialized != 0) {
        return 0;
    }

    __osContinitialized = 1;

    t = osGetTime();
    if (t < OS_USEC_TO_CYCLES(500000)) {
        osCreateMesgQueue(&timerMesgQueue, &dummy, 1);
        osSetTimer(&mytimer, OS_USEC_TO_CYCLES(500000) - t, 0, &timerMesgQueue, &dummy);
        osRecvMesg(&timerMesgQueue, &dummy, OS_MESG_BLOCK);
    }

    __osMaxControllers = 4;

    __osPackRequestData(CONT_CMD_REQUEST_STATUS);

    ret = __osSiRawStartDma(OS_WRITE, __osContPifRam.ramarray);
    osRecvMesg(mq, &dummy, OS_MESG_BLOCK);

    ret = __osSiRawStartDma(OS_READ, __osContPifRam.ramarray);
    osRecvMesg(mq, &dummy, OS_MESG_BLOCK);

    __osContGetInitData(bitpattern, data);
    __osContLastCmd = CONT_CMD_REQUEST_STATUS;
    __osSiCreateAccessQueue();
    osCreateMesgQueue(&__osEepromTimerQ, &__osEepromTimerMsg, 1);

    return ret;
}*/

#pragma GLOBAL_ASM("asm/nonmatchings/controller/__osContGetInitData.s")

#pragma GLOBAL_ASM("asm/nonmatchings/controller/__osPackRequestData.s")
