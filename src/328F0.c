#include "common.h"

typedef struct {  //needs more work
    s16 unk0;
    s16 unk2;
    u8 unk4;
    u8 unk5;
    s8 unk6;
    s8 unk7;
    s32 unk8;
    s32 unkC;    
}unk32218s;

typedef struct {
    s8 unk0;
    s8 unk1;
    s8 unk2;
}unk31cf0s;

extern s32 D_80092D20; //Probably a struct/array
extern s32 D_80092D30;
extern s16 D_80092D34;
extern s16 D_80092D36;

#pragma GLOBAL_ASM("asm/nonmatchings/328F0/func_80031CF0.s")


#pragma GLOBAL_ASM("asm/nonmatchings/328F0/func_80031DD4.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/328F0/func_80031F1C.s")
void func_80031F1C(s16 arg0, s16 arg1) {
    D_80092D34 = arg0;
    D_80092D36 = arg1;
    D_80092D30 = ((arg0 + (arg1 * 0x140)) * 2) + D_80092D20;  //! TODO make this make sense
}

#pragma GLOBAL_ASM("asm/nonmatchings/328F0/func_80031F74.s")
/*void func_80031F74(u8* arg0) {
    u8 var_s0;

    var_s0 = *arg0;
    if (var_s0 != 0) {
        do {
            arg0++;
            func_80031DD4((s32) var_s0);
            var_s0 = *arg0;
        } while (var_s0 != 0);
    }
}*/

#pragma GLOBAL_ASM("asm/nonmatchings/328F0/func_80031FBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/328F0/func_80032020.s")

#pragma GLOBAL_ASM("asm/nonmatchings/328F0/func_80032040.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/328F0/func_80032218.s")
void func_80032218(unk32218s* arg0, s32 arg1) {
    s32 var_s1;
    unk32218s* var_s0;

    var_s1 = 0;
    if (arg1 > 0) {
        var_s0 = arg0;
        do {
            func_80032040(var_s0->unk0, var_s0->unk2, var_s0->unk4, var_s0->unk5, var_s0->unk8, var_s0->unkC, 2);
            var_s1++;
            var_s0++;
        } while (var_s1 != arg1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/328F0/func_8003228C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/328F0/func_8003232C.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/328F0/func_80032560.s")
void func_80032560(u16 arg0) {
    unk31cf0s sp1C;

    func_80032020(1);
    func_80031CF0(arg0, &sp1C);
    func_80031F1C(0xC8, 0xAD);
    func_80031FBC((u8* ) &sp1C, 3U);
}

#pragma GLOBAL_ASM("asm/nonmatchings/328F0/func_800325A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/328F0/func_800325FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/328F0/func_8003265C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/328F0/func_80032704.s")
