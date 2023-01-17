#include "common.h"

extern u8 D_80053CAC;
extern u8 D_8008FCC6;

typedef struct {
    s16 unk0;
    s16 unk2;
    s8 unk4;
}unk53B00s;

extern unk53B00s D_80053B00;

#pragma GLOBAL_ASM("asm/nonmatchings/271F0/func_800265F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/271F0/func_80026658.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/271F0/func_800267B8.s")
void func_800267B8(s8 arg0) { //UpdateBGM
    if (arg0 != gCurrentBGM) {
        gCurrentBGM = arg0;
        gPlayBGM |= 1;
    }
}

//#pragma GLOBAL_ASM("asm/nonmatchings/271F0/func_800267F8.s")
void func_800267F8(s8 arg0, u16 arg1) {
    if (arg0 != gCurrentBGM) {
        gCurrentBGM = arg0;
        gPlayBGM |= 1;
        gBGMDelay = arg1 & 0xFFFF;
    }
}

//#pragma GLOBAL_ASM("asm/nonmatchings/271F0/func_8002684C.s")
void func_8002684C(s32 arg0, s32 arg1, u16 arg2) {
    s16 temp_a2;
    s32 var_v1;
    unk53B00s* var_v0;

    var_v0 = &D_80053B00;

    for (var_v1 = 0x46; var_v1 != 0; var_v1--) {
        if ((arg0 == var_v0->unk0) && ((arg1 == var_v0->unk2) || (var_v0->unk2 == -1))) {
            break;
        }
        var_v0++;
    }
    if (var_v1 != 0) {
        if (gCurrentBGM != var_v0->unk4) {
            gCurrentBGM = var_v0->unk4;
            gPlayBGM |= 1;
            gBGMDelay = arg2;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/271F0/func_800268D4.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/271F0/func_8002699C.s")
void func_8002699C(s8 arg0, u8 arg1)
{
  func_80025B8C(arg0, (u32) ((*((&D_80053CAC) + arg0) * arg1) * D_8008FCC6) >> (0, 0x10), 0x40);
}

//#pragma GLOBAL_ASM("asm/nonmatchings/271F0/func_80026A04.s")
void func_80026A04(void) {
    func_80026554(*(&D_80053CA4 + D_8005F010));
}
