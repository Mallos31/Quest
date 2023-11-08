#include "common.h"
#include "monsters.h"

typedef struct {
    s32 unk0;
    u16 unk4;
    char unk6[0x36];
}unk15b50s;

typedef struct unk_16ffc_s{
    char unk0[0x24];
    s32 unk24;
    s32 unk28;
}unk16ffcs;

typedef struct unk_164e4_s{
    char unk0[0xA];
    u16 unkA;
}unk164e4s;

typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
}tempStruct14F48_3;
typedef struct {
    char unk0[0x1C];
    f32 unk1C;
}tempStruct14F48_2;
typedef struct {
    char unk0[0xC];
    f32 unkC;
    f32 unk10;
    f32 unk14;
    char unk18[0x10];
    tempStruct14F48_3* unk28;
    tempStruct14F48_2* unk2C;
}tempStruct14F48;


extern s32 D_80086F10;
extern s16 D_80087170;
extern s16 D_80087188;
extern s16 D_800871A0;
extern s16 D_800871B8;
extern u16 D_8004CD74[];
extern unk15b50s D_80086F18[];
extern Coordinates2D D_800871D0;
extern f32 D_800871D4;



#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80014840.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80014890.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_800149D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80014A98.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80014E80.s")
void func_80014E80(tempStruct14F48* arg0, MonsterBattleData* monster) {

    arg0->unkC = monster->pos.x;
    arg0->unk14 = monster->pos.z;
    if (monster->unk64->monsterType == FLYING) {
        arg0->unk10 = monster->unk68->unk94 - (monster->unk64->hitboxHeight * monster->scale);
        return;
    }
    arg0->unk10 = monster->pos.y;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80014ED4.s")
void func_80014ED4(tempStruct14F48* arg0, MonsterBattleData* monster) {
    
    arg0->unkC = monster->pos.x;
    arg0->unk14 = monster->pos.z;
    if (monster->unk64->monsterType == FLYING) {
        arg0->unk10 = monster->unk68->unk94;
        return;
    }
    arg0->unk10 = (f32) ((f64) monster->pos.y + ((f64) monster->unk64->hitboxWidth * 0.5 * (f64) monster->scale));
}

//#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80014F48.s")
void func_80014F48(tempStruct14F48* arg0, MonsterBattleData* monster) {

    arg0->unkC = monster->pos.x;
    arg0->unk14 = monster->pos.z;
    if (monster->unk64->monsterType == FLYING) {
        arg0->unk10 = (monster->unk68->unk94 + (monster->unk64->hitboxHeight * arg1->scale) + arg0->unk2C->unk1C);
        return;
    }
    arg0->unk10 = (monster->pos.y + (2.0 * monster->unk64->hitboxWidth * monster->scale) + arg0->unk2C->unk1C);
}

//#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80014FDC.s")
void func_80014FDC(tempStruct14F48* arg0, MonsterBattleData* monster) {

    D_800871D0.x = 0.0f;
    D_800871D0.y = (monster->unk64->hitboxHeight * monster->scale) + arg0->unk2C->unk1C;
    rotateCoordinatesByAngle(monster->yrot, &D_800871D0);
    arg0->unkC = monster->pos.x + D_800871D0.x;
    arg0->unk14 = monster->pos.z + D_800871D0.y;
    if (monster->unk64->monsterType == FLYING) {
        arg0->unk10 =  monster->unk68->unk94;
        return;
    }
    arg0->unk10 =  ( monster->pos.y + ( monster->unk64->hitboxWidth * 0.5 *  monster->scale));
}

//#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_800150C8.s")
void func_800150C8(tempStruct14F48* arg0, MonsterBattleData* monster) {

    D_800871D0.x = 0.0f;
    D_800871D0.y = (monster->unk64->hitboxHeight * monster->scale) + arg0->unk2C->unk1C;
    rotateCoordinatesByAngle(monster->yrot, &D_800871D0);
    arg0->unkC = monster->pos.x + D_800871D0.x;
    arg0->unk14 = monster->pos.z + D_800871D0.y;
    if (monster->unk64->monsterType == FLYING) {
        arg0->unk10 = monster->unk68->unk94 + (monster->unk64->hitboxHeight * monster->scale) + arg0->unk2C->unk1C;
        return;
    }
    arg0->unk10 =  ( monster->pos.y+ (2.0 *  monster->unk64->hitboxWidth *  monster->scale) +  arg0->unk2C->unk1C);
}


//#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_800151D4.s")
void func_800151D4(tempStruct14F48* arg0, MonsterBattleData* arg1) {

    D_800871D0.x = 0.0f;
    D_800871D0.y = (-arg1->unk64->hitboxHeight * arg1->scale) + arg0->unk2C->unk1C;
    rotateCoordinatesByAngle(arg1->yrot, &D_800871D0);
    arg0->unkC = arg1->pos.x + D_800871D0.x;
    arg0->unk14 = arg1->pos.z + D_800871D0.y;
    if (arg1->unk64->monsterType == FLYING) {
        arg0->unk10 = arg1->unk68->unk94 + (arg1->unk64->hitboxHeight * arg1->scale) + arg0->unk2C->unk1C;
        return;
    }
    arg0->unk10 =  (arg1->pos.y + (2.0 *  arg1->unk64->hitboxWidth *  arg1->scale) +  arg0->unk2C->unk1C);
}

//#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_800152E4.s")
void func_800152E4(tempStruct14F48* arg0, MonsterBattleData* arg1) {

    if (arg0->unk28 != NULL) {
        arg1 = arg0->unk28;
    }
    arg0->unkC = arg1->pos.x;
    arg0->unk14 = arg1->pos.z;
    if (arg1->unk64->monsterType == FLYING) {
        arg0->unk10 = arg1->unk68->unk94 - (arg1->unk64->hitboxHeight * arg1->scale);
        return;
    }
    if (arg1->unk64->monsterType == MAMMON) {
        arg0->unk10 = arg1->pos.y + (100.0f * arg1->scale);
        return;
    }
    arg0->unk10 = arg1->pos.y;
}


//#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80015370.s")
void func_80015370(tempStruct14F48* arg0, MonsterBattleData* arg1) {

    D_800871D0.x = 0.0f;
    D_800871D0.y = (f32) ((f64) (f32) getRandomNumber(0x14U) + 20.0);
    rotateCoordinatesByAngle((f32) ((((f64) (f32) getRandomNumber(0x10U) * M_PI) / 8) - M_PI), &D_800871D0);
    arg0->unkC = arg1->pos.x + D_800871D0.x;
    arg0->unk14 = arg1->pos.z + D_800871D0.y;
    if (arg1->unk64->monsterType == FLYING) {
        arg0->unk10 = arg1->unk68->unk94 + (arg1->unk64->hitboxHeight * arg1->scale) + arg0->unk2C->unk1C;
        return;
    }
    arg0->unk10 = (f32) ((f64) arg1->pos.y + (2.0 * (f64) arg1->unk64->hitboxWidth * (f64) arg1->scale) + (f64) arg0->unk2C->unk1C);
}

//#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_800154EC.s")
void func_800154EC(tempStruct14F48 *arg0, MonsterBattleData *arg1)
{
  f32 temp_f0;
  f32 temp_f2;
  f32 var_f2;
    
  if (((u16) arg1->unk5E) & 1)
  {
    temp_f0 = arg0->unk28->unk0 - arg1->pos.x;
    temp_f2 = temp_f0;
    temp_f0 = arg0->unk28->unk8 - arg1->pos.z;
    var_f2 = _nsqrtf((temp_f2 * temp_f2) + (temp_f0 * temp_f0));
  }
  else
  {
    var_f2 = (f32) ((((f64) arg1->unk64->hitboxHeight) * 10.0) * ((f64) arg1->scale));
  }
  D_800871D0.y = var_f2;
  D_800871D0.x = (f32) (((f64) var_f2) * 1.5);
  rotateCoordinatesByAngle(arg1->yrot, &D_800871D0);
  arg0->unkC = arg1->pos.x + D_800871D0.x;
  arg0->unk14 = arg1->pos.z + D_800871D0.y;
  if (arg1->unk64->monsterType == FLYING)
  {
    arg0->unk10 = arg1->unk68->unk94 - (arg1->unk64->hitboxHeight * arg1->scale);
    return;
  }
  arg0->unk10 = arg1->pos.y;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80015630.s")
void func_80015630(tempStruct14F48* arg0, MonsterBattleData* arg1) {
    D_800871D0.x = 0.0f;
    D_800871D0.y = 380.0f;
    rotateCoordinatesByAngle(arg1->yrot, &D_800871D0);
    arg0->unkC = arg1->pos.x + (D_800871D0.x * arg1->scale);
    arg0->unk10 = arg1->pos.y + (380.0f * arg1->scale);
    arg0->unk14 = arg1->pos.z + (D_800871D0.y * arg1->scale);
}

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
void func_80017094(s32 arg0, MonsterBattleData* arg1) {
    u16* temp_v0;

    temp_v0 = (u16*)arg1->unk68;
    *temp_v0 |= 2;
    func_8001FCF8(arg1, 2, 2, -1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_800170DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_8001715C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_800171E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_800172A0.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_8001737C.s")
void func_8001737C(s32 arg0, MonsterBattleData* arg1) {
    UnknownMonsterData2* temp_v0;  

    if (!(gBattleState & 0x100)) {
        temp_v0 = arg1->unk68;
        temp_v0->unk0 |= 0x40;
        func_8001FCF8(arg1, 0x40, 0xB, -1);
        return;
    }
    Setup_MISS_Icon(arg1);
}



//#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_800173E0.s")
void func_800173E0(s32 arg0, MonsterBattleData* arg1) {
    u16* temp_v0;

    temp_v0 = (u16*)arg1->unk68;
    *temp_v0 |= 0x80;
    func_8001FCF8(arg1, 0x80, 0xA, -1);
}


//#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80017428.s")
void func_80017428(s32 arg0, MonsterBattleData* arg1) {
    u16* temp_v0;

    temp_v0 = (u16*)arg1->unk68;
    *temp_v0 |= 0x100;
    func_8001FCF8(arg1, 0x100U, 4U, -1);
}

//#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80017470.s")
void func_80017470(s32 arg0, MonsterBattleData* arg1) {
    u16* temp_v0;

    temp_v0 = (u16*)arg1->unk68;
    *temp_v0 |= 0x200;
    func_8001FCF8(arg1, 0x200U, 3U, -1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_800174B8.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_800175B8.s")
void func_800175B8(s32 arg0, MonsterBattleData* arg1) {
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
s32 func_80018278(s32 arg0, MonsterBattleData* arg1) {
    return *(&D_8004CD74[arg0]) & arg1->unk68->unk8C;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_8001829C.s")
void func_8001829C(s32 arg0, MonsterBattleData* arg1) {
    arg1->unk68->unk8C |= D_8004CD74[arg0];
}

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_800182C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80018318.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_800183C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80018484.s")

#pragma GLOBAL_ASM("asm/nonmatchings/15440/func_80018524.s")
