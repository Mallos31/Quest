#include "common.h"

typedef struct test {
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
} test;


extern s32 D_80088420;
extern test D_80088428[0x100];
extern Gfx D_8004D050[];



//#pragma GLOBAL_ASM("asm/nonmatchings/1BCD0/func_8001B0D0.s")
void func_8001B0D0(void) {
    s32 var_v1;
    test* var_v0;

    var_v0 = D_80088428;
    var_v1 = 0x100;
    while (var_v1 > 0) {
        var_v0->unk0 = 0;
        var_v0++;
        var_v1--;
    }
    D_80088420 = 0;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/1BCD0/func_8001B108.s")
test* func_8001B108(test* arg0) {
    test* ret = D_80088428;
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
#ifdef NONMATCHING
void func_8001B19C(s32 arg0) {
    s32 var_s5;
    s32 var_s6;
    test* var_s0;
    MtxF spB4;
    MtxF sp74;

   
    var_s6 = 0;
    var_s0 = D_80088428;
    for ( var_s5 = D_80088420; var_s5 != 0; var_s0++){
            if (var_s0->unk0 != 0) {
                var_s0->unk0--;
                if (var_s6 != var_s0->unk10) {
                    var_s6 = var_s0->unk10;
                    func_8001B448(var_s0->unk8, var_s6, var_s0->unk9, var_s0->unkA, (s32) var_s0->unkB, (s32) var_s0->unkC);
                }
                if (var_s0->unk4 != 0) {
                    ((void (*)(test*)) var_s0->unk4)(var_s0);
                } else {
                    gSPDisplayList(gMasterGfxPos++, D_8004D050);
                }
                if (var_s0->unk2 & 1) {
                    func_80023A08((f32 (*)[4])&spB4, var_s0->unk30, var_s0->unk34, var_s0->unk38);
                    spB4.xw = var_s0->unk18;
                    spB4.yw = var_s0->unk1C;
                    spB4.zw = var_s0->unk20;
                    func_80023DF4((unk23df4s* ) &spB4, var_s0->unk28, var_s0->unk28, var_s0->unk28);
                } else {
                    func_8002371C((MtxF* ) &spB4, var_s0->unk18, var_s0->unk1C, var_s0->unk20, D_80086DC0.unkC, D_80086DC0.unk10, D_80086DC0.unk14);
                    if (var_s0->unk24 != 0.0f) {
                        func_80023570(&sp74, 0.0f, 0.0f, var_s0->unk24);
                        guMtxCatF( &sp74,  (f32 (*)[4])&spB4,  (f32 (*)[4])&spB4);
                    }
                    func_80023DF4((unk23df4s* ) &spB4, var_s0->unk28, var_s0->unk2C, 1.0f);
                }
                guMtxF2L((f32 (*)[4]) &spB4, arg0 + (D_8007B2F8 << 6) + 0xC0);

                gSPMatrix(gMasterGfxPos++, &D_2000000[D_8007B2F8 + 3], G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
                
                
                D_8007B2F8++;
                var_s5--;

                gSPDisplayList(gMasterGfxPos++, var_s0->unk14);
                
                
                if (var_s0->unk0 == 0) {
                    D_80088420--;
                }
            }
    }
}
#endif
#pragma GLOBAL_ASM("asm/nonmatchings/1BCD0/func_8001B448.s")
