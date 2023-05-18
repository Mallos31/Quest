#include "common.h"
#include <libaudio.h>


//#pragma GLOBAL_ASM("asm/nonmatchings/seqpgetstate/func_800390F0.s")

s32 alSeqpGetState(ALSeqPlayer *seqp)
{
    return seqp->state;
}
