#include "common.h"

//#pragma GLOBAL_ASM("asm/nonmatchings/shadow/func_80011850.s")

void func_80011850(void) {
    D_800862D0 = 0;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/shadow/func_80011860.s")

void func_80011860(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    unkShadows* temp_v1;

    if (D_800862D0 < 0x40U) {        
        temp_v1 = &D_80085BD0[D_800862D0++];
        temp_v1->unk0 = arg0;
        temp_v1->unk4 = arg1;
        temp_v1->unk8 = arg2;
        temp_v1->unkC = arg3;
        temp_v1->unk10 = arg4;
        temp_v1->unk14 = arg5;
        temp_v1->unk18 = arg6;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/shadow/func_800118D4.s")
