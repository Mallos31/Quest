#include <os_internal.h>
#include <sptask.h>
#include <bstring.h>
#include <rcp.h>

/*Needs help from .bss migration*/

#pragma GLOBAL_ASM("asm/nonmatchings/sptask/_VirtualToPhysicalTask.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sptask/osSpTaskLoad.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sptask/osSpTaskStartGo.s")
