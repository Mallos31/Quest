#include "common.h"

//#pragma GLOBAL_ASM("asm/nonmatchings/aigetlen/osAiGetLength.s")
u32 osAiGetLength(void)
{
    return IO_READ(AI_LEN_REG);
}
