#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/os/vigetcurrframebuf/osViGetCurrentFramebuffer.s")
#ifdef NON_MATCHING //matches, but needs some stuff done with the next funtction to work out some bad data. 
void *osViGetCurrentFramebuffer(void)
{
    register u32 saveMask;
    void *framep;
    saveMask = __osDisableInt();
    framep = __osViCurr->framep;
    __osRestoreInt(saveMask);
    return framep;
}
#endif
