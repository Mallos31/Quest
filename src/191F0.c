#include "common.h"

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
}unk18684s;

typedef struct {
    s32 unk0;
    char unk4[0x14];
    s32 unk18;
    char unk1C[0x14];
    s32 unk30;
    char unk34[0x14];
    s32 unk48;
    char unk4C[0x14];
}unk19324s;


typedef struct {
    u16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    s16 unk8;
    s16 unkA;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    f32 unk24;
    f32 unk28;
    f32 unk2C;
    f32 unk30;
    s32 unk34; //may be u32
    s16 unk38;
    s16 unk3A;
    s32 unk3C;
    s32 unk40;
    s32 unk44;
    s32 unk48;
    s32 unk4C;
    s32 unk50;
    s32 unk54;
}unk1a238s;


typedef struct {
/* 0x00 */ s16 fenceState;
/* 0x02 */ s16 animTimer;
/* 0x04 */ s16 fenceType;
/* 0x06 */ s16 unk6; //padding?
/* 0x08 */ char unk8[0x8];
/* 0x10 */ f32 x1;
/* 0x14 */ f32 y1;
/* 0x18 */ f32 z1;
/* 0x1C */ f32 x2;
/* 0x20 */ f32 y2;
/* 0x24 */ f32 z2;
/* 0x28 */ f32 x3;
/* 0x2C */ f32 y3;
/* 0x30 */ f32 z3;
/* 0x34 */ f32 x4;
/* 0x38 */ f32 y4;
/* 0x3C */ f32 z4;
/* 0x40 */ f32 x5;
/* 0x44 */ f32 y5;
/* 0x48 */ f32 z5;
/* 0x4C */ f32 x6;
/* 0x50 */ f32 y6;
/* 0x54 */ f32 z6;
/* 0x58 */ f32 x7;
/* 0x5C */ f32 y7;
/* 0x60 */ f32 z7;
/* 0x64 */ f32 x8;
/* 0x68 */ f32 y8;
/* 0x6C */ f32 z8;
/* 0x70 */ char unk70[0x60];
}BattleFence;

typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
}test3;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
}unk800DA828s;

extern BattleFence D_800880A8[];
extern unk18684s D_80087210;
extern unk19324s D_800874E8;
extern unk1a238s D_800875A8;
extern test3 D_800EB9EC[];
extern unk800DA828s D_800DA828[]; //updates when enemy defeated. 
extern void* D_800CB4E0[];


void func_80018684(void);
void func_80019324(void);
void func_8001A238(void);

//#pragma GLOBAL_ASM("asm/nonmatchings/191F0/func_800185F0.s")
void func_800185F0(void) {
    func_80018684();
    func_800188C4();
    func_80019324();
    func_80018DB4();
    func_8001A238();
    func_80019A70();
}

#pragma GLOBAL_ASM("asm/nonmatchings/191F0/func_80018638.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/191F0/func_80018684.s")
void func_80018684(void) {
    unk18684s* var_v1;
    s32 var_v0;

    var_v0 = 8;
    var_v1 = &D_80087210;
    do {
        var_v0 -= 4;
        var_v1->unk0 = 0;
        var_v1->unk8 = 0;
        var_v1->unk10 = 0;
        var_v1->unk18 = 0;
        var_v1++;
    } while (var_v0 != 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/191F0/func_800186B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/191F0/func_800186F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/191F0/func_800187F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/191F0/func_800188C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/191F0/func_80018918.s")

#pragma GLOBAL_ASM("asm/nonmatchings/191F0/func_80018B14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/191F0/func_80018BF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/191F0/func_80018CF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/191F0/func_80018D34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/191F0/func_80018DB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/191F0/func_80018DF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/191F0/func_80018F60.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/191F0/func_80019324.s")
void func_80019324(void) {
    unk19324s* var_v0;
    s32 var_v1;

    var_v0 = &D_800874E8;
    var_v1 = 8;
    do {
        var_v1 -= 4;
        var_v0->unk0 = 0;
        var_v0->unk18 = 0;
        var_v0->unk30 = 0;
        var_v0->unk48 = 0;
        var_v0++;
    } while (var_v1 != 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/191F0/func_80019354.s")

#pragma GLOBAL_ASM("asm/nonmatchings/191F0/func_800193B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/191F0/func_800195E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/191F0/func_80019738.s")

#pragma GLOBAL_ASM("asm/nonmatchings/191F0/func_80019918.s")

#pragma GLOBAL_ASM("asm/nonmatchings/191F0/func_80019A70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/191F0/func_80019A98.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/191F0/func_80019CA4.s") //! TODO
void func_80019CA4(s32 arg0) {
    D_800880A8[arg0].fenceState = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/191F0/func_80019CCC.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/191F0/func_8001A238.s")
void func_8001A238(void) {
    unk1a238s* var_v1;
    s32 var_v0;

    var_v0 = 0x20;
    var_v1 = &D_800875A8;
    do {
        var_v0--;
        var_v1->unk0 = 0;
        var_v1++;
    } while (var_v0 != 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/191F0/func_8001A268.s")

#pragma GLOBAL_ASM("asm/nonmatchings/191F0/func_8001A398.s")

#pragma GLOBAL_ASM("asm/nonmatchings/191F0/func_8001A620.s")

#pragma GLOBAL_ASM("asm/nonmatchings/191F0/func_8001A834.s")
