#include "common.h"

typedef struct {
    s32 unk0;
    u16 unk4;
    char unk6[0x36];
}unk15b50s;

typedef struct {
    char unk0[0x8C];
    u16 unk8C;
}unk18278s2;

typedef struct {
    char unk0[0x68];
    unk18278s2* unk68;
}unk18278s;

typedef struct {
    char unk0[0xC];
    f32 unkC;
    f32 unk10;
    f32 unk14;
}unk14e80a0s;

extern s32 D_80086F10;
extern s16 D_80087170;
extern s16 D_80087188;
extern s16 D_800871A0;
extern s16 D_800871B8;
extern u16 D_8004CD74[];
extern unk15b50s D_80086F18[];

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80014840.s")


#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80014890.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_800149D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80014A98.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80014E80.s")
void func_80014E80(unk14e80a0s* arg0, MonsterBattleData* arg1) {

    arg0->unkC = arg1->x;
    arg0->unk14 = arg1->z;
    if (arg1->unk64->monsterType == 1) {
        arg0->unk10 = arg1->unk68->unk94 - (arg1->unk64->hitboxHeight * arg1->scale);
        return;
    }
    arg0->unk10 = arg1->y;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80014ED4.s")
void func_80014ED4(unk14e80a0s* arg0, MonsterBattleData* arg1) {
    
    arg0->unkC = arg1->x;
    arg0->unk14 = arg1->z;
    if (arg1->unk64->monsterType == 1) {
        arg0->unk10 = arg1->unk68->unk94;
        return;
    }
    arg0->unk10 = (f32) ((f64) arg1->y + ((f64) arg1->unk64->hitboxWidth * 0.5 * (f64) arg1->scale));
}

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80014F48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80014FDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_800150C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_800151D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_800152E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80015370.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_800154EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80015630.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_800156D0.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80015B50.s")
s32 func_80015B50(void) {
    unk15b50s* var_v0;
    s32 var_v1;
    var_v1 = 10;
    var_v0 = D_80086F18;
    while (var_v1 != 0 && var_v0->unk4 == 0) {
        var_v1--;
        var_v0++;
    }
    return var_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80015B8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80015FE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_8001613C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_800163E8.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_800164E4.s")
s32 func_800164E4(unk164e4s* arg0) {
    s32 var_v1;

    var_v1 = 0;
    if ((arg0->unkA & 1) != 0) {
        var_v1 = func_8001613C();
    }
    return var_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80016520.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_800165E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_8001679C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80016940.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_800169C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80016A84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80016B18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80016BEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80016CB0.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80016D60.s")
void func_80016D60(s32 arg0, s32 arg1) {
    func_80016520(arg0, arg1);
    func_80016CB0(arg0, arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80016D98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80016F88.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80016FFC.s")
void func_80016FFC(unk16ffcs* arg0) {
    arg0->unk28 = (s32) arg0->unk24;
}

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_8001700C.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80017094.s")
void func_80017094(s32 arg0, unk173e0s* arg1) {
    u16* temp_v0;

    temp_v0 = (u16*)arg1->unk68;
    *temp_v0 |= 2;
    func_8001FCF8(arg1, 2, 2, -1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_800170DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_8001715C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_800171E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_800172A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_8001737C.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_800173E0.s")
void func_800173E0(s32 arg0, unk173e0s* arg1) {
    u16* temp_v0;

    temp_v0 = (u16*)arg1->unk68;
    *temp_v0 |= 0x80;
    func_8001FCF8(arg1, 0x80, 0xA, -1);
}


//#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80017428.s")
void func_80017428(s32 arg0, unk173e0s* arg1) {
    u16* temp_v0;

    temp_v0 = (u16*)arg1->unk68;
    *temp_v0 |= 0x100;
    func_8001FCF8(arg1, 0x100U, 4U, -1);
}

//#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80017470.s")
void func_80017470(s32 arg0, unk173e0s* arg1) {
    u16* temp_v0;

    temp_v0 = (u16*)arg1->unk68;
    *temp_v0 |= 0x200;
    func_8001FCF8(arg1, 0x200U, 3U, -1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_800174B8.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_800175B8.s")
void func_800175B8(s32 arg0, unk173e0s* arg1) {
    u16* temp_v0;

    temp_v0 = (u16*)arg1->unk68;
    *temp_v0 |= 0x800;
}

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_800175D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_800177F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80017998.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80017BD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80017D04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80017FA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_8001817C.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80018278.s")
s32 func_80018278(s32 arg0, unk18278s* arg1) {
    return *(&D_8004CD74[arg0]) & arg1->unk68->unk8C;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_8001829C.s")
void func_8001829C(s32 arg0, unk18278s* arg1) {
    arg1->unk68->unk8C |= D_8004CD74[arg0];
}

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_800182C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80018318.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_800183C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80018484.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80018524.s")
