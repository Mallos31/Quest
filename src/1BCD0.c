#include "common.h"

typedef struct {
/*0x00*/ u16 unk0;
/*0x02*/ u8 unk2;
/*0x03*/ char pad;
/*0x04*/ void* unk4;
/*0x08*/ u8 unk8;
/*0x09*/ u8 unk9;
/*0x0A*/ u8 unkA;
/*0x0B*/ u8 unkB;
/*0x0C*/ u8 unkC;
/*0x0D*/ char unkD[3];
/*0x10*/ u8* dustTexture;
/*0x14*/ u8* dustDL;
/*0x18*/ f32 unk18;
/*0x1C*/ f32 unk1C;
/*0x20*/ f32 unk20;
/*0x24*/ f32 unk24;
/*0x28*/ f32 unk28;
/*0x2C*/ f32 unk2C;
/*0x30*/ f32 unk30;
/*0x34*/ f32 unk34;
/*0x38*/ f32 unk38;
/*0x3C*/ char unk3C[4];
}Dust;


extern s32 D_80088420;
extern Dust D_80088428[0x100];


void func_8001B0D0(void) {
    s32 var_v1;
    Dust* var_v0;

    var_v0 = D_80088428;
    var_v1 = 0x100;
    while (var_v1 > 0) {
        var_v0->unk0 = 0;
        var_v0++;
        var_v1--;
    }
    D_80088420 = 0;
}

Dust* func_8001B108(Dust* arg0) {
    Dust* ret = D_80088428;
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
