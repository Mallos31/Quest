#include "common.h"

typedef struct test2 {
               u16 unk0;
               u8 unk2;
               u8 unk3;
               s32 unk4;
               u8 unk8;
               u8 unk9;
               u8 unkA;
               u8 unkB;
               u8 unkC;
               char unkD[0x3];
               s32 unk10;
               s32 unk14;
               f32 unk18;
               f32 unk1C;
               f32 unk20;
               f32 unk24;
               f32 unk28;
               f32 unk2C;
               f32 unk30;
               f32 unk34;
               f32 unk38;
               s32 unk3C;
} test2;


extern s32 D_80088420;
extern test2 D_80088428[0x100];
extern Gfx gDL_DustAndSmoke[];


void func_8001B0D0(void) {
    s32 var_v1;
    test2* var_v0;

    var_v0 = D_80088428;
    var_v1 = 0x100;
    while (var_v1 > 0) {
        var_v0->unk0 = 0;
        var_v0++;
        var_v1--;
    }
    D_80088420 = 0;
}

test2* func_8001B108(test2* arg0) {
    test2* ret = D_80088428;
    u32 i = 0x100;

    while((i > 0) && (ret->unk0 != 0)){
        i--;
        ret++;
    }

    if (i != 0) {
        *ret = *arg0;
        D_80088420++;
    } else {
        ret = NULL;
    }
    return ret;
}

#pragma GLOBAL_ASM("asm/nonmatchings/1BCD0/func_8001B19C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/1BCD0/func_8001B448.s")
