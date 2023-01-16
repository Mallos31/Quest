#include "common.h"

#define ON_GROUND 0
#define FLYING 1
#define MAMMON 2
#define U_CBUTTONS	CONT_E
#define L_CBUTTONS	CONT_C
#define R_CBUTTONS	CONT_F
#define D_CBUTTONS	CONT_D


typedef struct {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    u16 unk8;
}unk202e4s3;

typedef struct {
    char unk0[0x12];
    u8 unk12[7];
    char unk19[0x2B];
    unk202e4s3* unk44[4];
}unk202e4s2;

typedef struct {
    char unk0[0x68];
    unk202e4s2* unk68;
}unk202e4s;


typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
}unk20e2cs;

typedef struct {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    u16 unk6;
    u16 unk8;
    s16 unkA;
    u16 unkC;
    u16 unkE;
    char unk10[0x16];
    u16 unk26;
    u16 unk28;
    u16 unk2A;
}unk203d0s2;

typedef struct {
    char unk0[0x20];
    unk203d0s2* unk20;
    char unk24[0x6C];
    u16 unk90;    
}unk203d0s;

typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    
}unks;

typedef struct unk_20888_s{
    u16 unk0;
    s16 unk2;
    unks* unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    u16 unk14;
    u16 unk16;
    u16 unk18;
    u16 unk1A;
}unk20888s;

typedef struct {
    char unk0[0x24];
    u8 unk24[1]; // some size
}unk1ebdcs;

typedef struct {
    char unk0[0x24];
    u8 unk24;
    u8 unk25;
    u8 unk26;
    u8 unk27;
}unk1f3dcTEST2; //Something to do with Brian's struct. Starts in the middle? 

typedef struct {
    char unk0[0x10];
    unk1f3dcTEST2* unk10;
}unk1f3dcTEST;

extern u8 D_8007BAA4;
extern u8 D_8007BAA5;
extern u8 D_8007BAA6;
extern u8 D_8007BAA7;

extern s32 D_8008C650;
extern s32 D_8008C654;
extern s32 D_8008C658;
extern s32 D_8008C65C;
extern unk20888s D_8008C668;
extern u8 D_803A2960[]; //Status icons palette
extern unk20e2cs D_803A6F70;
extern u8 D_8004D44C;
extern unk20e2cs D_803A6F80;
extern void* D_803A6FB0[];
extern unk203d0s* D_8007D088;
extern s32 *D_8007D0AC;
extern u8 D_80399AB0[];
extern u8 D_8039D990[];
extern unk20e2cs D_803A6F60;
extern f64 D_800716C0; //.rodata value 4075E00000000000 or 350.0 
extern EnemyAction D_8007C998[]; //enemy action data
extern Gfx D_803A8CF8[]; //Staff icon DL
extern unk20e2cs D_803A6F40;
extern s32 D_8007B2F8;
extern f32 D_80086DEC;
extern s32 D_8008C648;
extern s32 D_8008C64C;
extern Mtx D_2000000[];
extern Gfx D_803A8EA0[]; //Compass Display List
extern Gfx D_803A8C80[];

void func_8001EBDC(unk1ebdcs* arg0);
void func_8001EA84(Mtx *arg0);
void func_80020D4C(u16 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_8002413C(f32 arg0, f32 arg1, f32 arg2, s32* arg3, s32* arg4);
void func_80020F8C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void func_800210FC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8);
void func_80020E2C(unk20e2cs* arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);

//#pragma GLOBAL_ASM("asm/nonmatchings/1EDF0/func_8001E1F0.s")
void func_8001E1F0(void)
{
  D_8008C638 = 0;
  D_8008C63C = 0;
  D_8008C640 = -1;
  D_8008C648 = D_8008C64C = 0;
  D_8008C650 = D_8008C654 = 0;  
  D_8008C658 = 0x140; //HUD height
  D_8008C65C = 0xF0; //HUD Width
  D_8008C630 = 0;
}
#pragma GLOBAL_ASM("asm/nonmatchings/1EDF0/func_8001E25C.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/1EDF0/func_8001E7FC.s")
void func_8001E7FC(BrianData2 *arg0)
{
  s32 temp_lo;
  unk20e2cs *gfxHUD;
  BrianData1 *brianData;
  brianData = arg0->brianData1;
  gfxHUD = &D_803A6F40;
    
  func_800210FC((s32) gfxHUD, 0, 1, 0x3E, 0x11, 0x20, 0x27, 0x400, 0x400);
  func_800210FC((s32) gfxHUD, 0, 0x12, 0x3E, 0x12, 0x20, 0x38, 0x400, 0x400);
  temp_lo = ((s32) (brianData->currHP * 0x38)) / ((s32) brianData->maxHP);
  if (temp_lo != 0)
  {
    func_800210FC((s32) gfxHUD, 3, 0xB, temp_lo, 5, 0x5E, 0x27, 0x400, 0x400);
  }
  temp_lo = ((s32) (brianData->currMP * 0x38)) / ((s32) brianData->maxMP);
  if (temp_lo != 0)
  {
    func_800210FC((s32) gfxHUD, 3, 0x15, temp_lo, 5, 0x5E, 0x2C, 0x400, 0x400);
  }
  func_80020E2C(gfxHUD, 0x20, 0x1D, 0x80, 0xA);
  func_80020D4C(3, 0xC, 0, (s32) brianData->currHP);
  func_80020D4C(1, 0x36, 0, (s32) brianData->maxHP);
  func_80020D4C(3, 0xC, 0x1B, (s32) brianData->currMP);
  func_80020D4C(1, 0x36, 0x1B, (s32) brianData->maxMP);
  func_80020F8C(0x2F, 0, 8, 0xA, 0x70, 0x1D, 0x400, 0x400);
  func_80020F8C(0x2F, 0x1B, 8, 0xA, 0x70, 0x1D, 0x400, 0x400);
}
//#pragma GLOBAL_ASM("asm/nonmatchings/1EDF0/func_8001EA84.s")
void func_8001EA84(Mtx *arg0) {
    MtxF sp38;

    D_8008C648 = 0x104;
    D_8008C64C = 0x18;
    func_80023570(&sp38, 0.0f, 0.0f, D_80086DEC);
    sp38.mf[3][0] = (f32) (D_8008C648 + 0x11);
    sp38.mf[3][1] = (f32) (D_8008C64C + 0x11);
    sp38.mf[3][2] = 0.0f;
    
    guMtxF2L(sp38.mf, arg0 + 3 + D_8007B2F8);

    gSPMatrix(gMasterGfxPos++, &D_2000000[D_8007B2F8] + 3, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);

    D_8007B2F8++;

    gSPDisplayList(gMasterGfxPos++, D_803A8EA0);

    
    func_800210FC((s32) &D_803A6F40, 0xD, 0xA, 0xB, 0xE, 0x93, 0, 0x400, 0x400);
}
//#pragma GLOBAL_ASM("asm/nonmatchings/1EDF0/func_8001EBDC.s")
void func_8001EBDC(unk1ebdcs* arg0) {
    s32 var_s0;
    s32 i;
    void* temp;

    temp = &D_803A6F40;
    func_800210FC((s32)temp, 0, 0, 0xC, 0xC, 0x20, 0x10, 0x400, 0x400);
    func_800210FC((s32)temp, 0x16, 0, 0xC, 0xC, 0x2C, 0x10, 0x400, 0x400);
    func_800210FC((s32)temp, 0x2C, 0, 0xC, 0xC, 0x38, 0x10, 0x400, 0x400);
    func_800210FC((s32)temp, 0x42, 0, 0xC, 0xC, 0x44, 0x10, 0x400, 0x400);
    func_80020E2C((unk20e2cs*)temp, 0x20, 0x1D, 0x80, 0xA);
    
    var_s0 = 6;
    for (i = 0; i < 4; i++) {
        func_80020D4C(1U, var_s0, 6, arg0->unk24[i]);
        var_s0 += 0x16;
    }
}
#pragma GLOBAL_ASM("asm/nonmatchings/1EDF0/func_8001ED5C.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/1EDF0/func_8001F3DC.s")
void func_8001F3DC(unk1f3dcTEST* arg0) {
    s32 var_t9;
    unk1f3dcTEST2* temp_v0_14;
    unk20e2cs* temp;
    
    
    D_8008C648 = 0;
    D_8008C64C = 0;

    gDPPipeSync(gMasterGfxPos++);
    gDPSetTextureImage(gMasterGfxPos++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, D_8039D990);
    gDPTileSync(gMasterGfxPos++);
    gDPSetTile(gMasterGfxPos++, G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 0x0100, G_TX_LOADTILE, 0, G_TX_NOMIRROR |
        G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);
    gDPLoadSync(gMasterGfxPos++);
    gDPLoadTLUTCmd(gMasterGfxPos++, G_TX_LOADTILE, 255);
    gDPPipeSync(gMasterGfxPos++);

    temp = &D_803A6F60;
    func_800210FC((s32) temp, 0x81, 0x48, 0x40, 0x14, 0, 0, 0x400, 0x400);
    func_800210FC((s32) temp, 0x81, 0x5C, 0x40, 0x14, 0, 0x14, 0x400, 0x400);
    func_800210FC((s32) temp, 0x81, 0x70, 0x40, 0x14, 0, 0x28, 0x400, 0x400);
    func_800210FC((s32) temp, 0x81, 0x84, 0x40, 0x14, 0, 0x3C, 0x400, 0x400);
    func_80020E2C(&D_803A6F40, 0x20, 0x1D, 0x80, 0xA);

    gDPSetTextureImage(gMasterGfxPos++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, D_80399AB0);
    gDPTileSync(gMasterGfxPos++);
    gDPSetTile(gMasterGfxPos++, G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 0x0100, G_TX_LOADTILE, 0, G_TX_NOMIRROR | 
        G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);
    gDPLoadSync(gMasterGfxPos++);
    gDPLoadTLUTCmd(gMasterGfxPos++, G_TX_LOADTILE, 255);
    gDPPipeSync(gMasterGfxPos++);
    
    func_80020D4C(5U, 0x9D, 0x6C, (s32) D_8007BAA4); //fire
    func_80020D4C(5U, 0x8B, 0x7C, (s32) D_8007BAA5); //earth
    func_80020D4C(5U, 0x9D, 0x8B, (s32) D_8007BAA6); //water
    func_80020D4C(5U, 0xAF, 0x7C, (s32) D_8007BAA7); //wind
    
    if ((D_80092876 & U_CBUTTONS) && (arg0->unk10->unk24 < 0x32)) { 
        arg0->unk10->unk24++;
        D_8007B2E4 &= ~8; 
    } else if ((D_80092876 & D_CBUTTONS) && (arg0->unk10->unk26 < 0x32)) {  
        arg0->unk10->unk26++;
        D_8007B2E4 &= ~8;
    } else if ((D_80092876 & R_CBUTTONS) && (arg0->unk10->unk27 < 0x32)) { 
        arg0->unk10->unk27++;
        D_8007B2E4 &= ~8;
    } else if ((D_80092876 & L_CBUTTONS) && (arg0->unk10->unk25 < 0x32)) {  
        arg0->unk10->unk25++;
        D_8007B2E4 &= ~8;
    }

    if ((D_8007B2E4 & 8) == 0) {
        func_800268D4(0, 4, 0xFF);
    }
}
#pragma GLOBAL_ASM("asm/nonmatchings/1EDF0/func_8001F818.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/1EDF0/func_8001F900.s")
void func_8001F900(void) {
    s32 sp34;
    s32 sp30;

    if (func_8002413C(D_8007BAB8.xpos, (D_8007BAB8.ypos + 11.0), D_8007BAB8.zpos, &sp34, &sp30) != 0) {
        gSPDisplayList(gMasterGfxPos++, D_803A8C80);
        func_80020F8C(sp34, sp30 - 0x1E, 0x18, 0x1E, 0, 0, 0x400, 0x400);
    }
}
//#pragma GLOBAL_ASM("asm/nonmatchings/1EDF0/func_8001F9B0.s")
//displays exclamation mark above brian's head

void func_8001F9B0(void) {
    s32 sp34;
    s32 sp30;

    if (func_8002413C(D_8007BAB8.xpos, (f32) ((f64) D_8007BAB8.ypos + 11.0), D_8007BAB8.zpos, &sp34, &sp30) != 0) {

        gSPDisplayList(gMasterGfxPos++, D_803A8C08);
        func_80020F8C(sp34, sp30 - 0x1E, 0x10, 0x1E, 0, 0, 0x400, 0x400);
    }
}
//#pragma GLOBAL_ASM("asm/nonmatchings/1EDF0/func_8001FA60.s")
void func_8001FA60(u16 monsterNum) {
    s32 sp44;
    s32 sp40;
    f32 var_f14;
    MonsterBaseData* MonsterBaseData;
    MonsterBattleData* MonsterBattleData;

    MonsterBattleData = &D_8007C998[monsterNum].pos;

    /*if enemy is flying, the y positioin of the 
    staff icon should be moved upward to match*/
    
    if (MonsterBattleData->unk64->monsterType == FLYING) {
        var_f14 = MonsterBattleData->unk68->unk94;
    } else {
        MonsterBaseData = MonsterBattleData->unk64;
        if (MonsterBaseData->monsterType == MAMMON) {
            var_f14 = MonsterBattleData->y + (D_800716C0 * MonsterBattleData->scale);
        } else {
            var_f14 = MonsterBattleData->y + (MonsterBaseData->hitboxWidth * MonsterBattleData->scale);
        }
    }
    if (func_8002413C(MonsterBattleData->x, var_f14, MonsterBattleData->z, &sp44, &sp40)) {
        gSPDisplayList(gMasterGfxPos++, D_803A8CF8);
        func_80020F8C(sp44 - 4, sp40 - 0x2A, 0x18, 0x2A, 0, 0, 0x400, 0x400);
    }
}
#pragma GLOBAL_ASM("asm/nonmatchings/1EDF0/func_8001FB94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/1EDF0/func_8001FCF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/1EDF0/func_8001FEEC.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/1EDF0/func_800202E4.s")//Matched by EllipticEllipsis and StuckPixel
void func_800202E4(unk202e4s *arg0)
{
    u32 i;
    unk202e4s2 *temp_v0;
    unk202e4s3 *temp_a0;

    temp_v0 = arg0->unk68;

    for(i = 0; i < 7; i++) {
        if(temp_v0->unk12[i] != 0) {
            temp_v0->unk12[i] = 0;
        }
    }

    for(i = 0; i < 4; i++) {
        if (temp_v0->unk44[i] != NULL)
        {
            temp_a0 = temp_v0->unk44[i];
            temp_a0->unk0 = 8;
            temp_a0->unk8 &= ~1;
            temp_v0->unk44[i] = NULL;
        }
    }
}
void func_800203A8(void) {
}

void func_800203B0(void) {
}

void func_800203B8(void) {
}

void func_800203C0(void) {
}

void func_800203C8(void) {
}

//#pragma GLOBAL_ASM("asm/nonmatchings/1EDF0/func_800203D0.s")
void func_800203D0(void)
{
  unk20e2cs *new_var;
  D_8008C648 = 0xB5;
  D_8008C64C = 0x1A;
  gDPPipeSync(gMasterGfxPos++);
  gDPSetTextureImage(gMasterGfxPos++, 0, G_IM_SIZ_16b, 1, D_8039D990);
  gDPTileSync(gMasterGfxPos++);
  gDPSetTile(gMasterGfxPos++, G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 0x0100, G_TX_LOADTILE, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);  gDPLoadSync(gMasterGfxPos++);
  gDPLoadTLUTCmd(gMasterGfxPos++, G_TX_LOADTILE, 255);  gDPPipeSync(gMasterGfxPos++);
  new_var = &D_803A6F60;
  if (D_8007D088->unk90 & 0x80)
  {
    func_800210FC((s32) new_var, 0, 0, 0x6E, 0x10, 0x64, 0x1C, 0x400, 0x400);
    func_800210FC((s32) new_var, 0, 0x10, 0x6E, 0x10, 0x64, 0x2C, 0x400, 0x400);
    func_800210FC((s32) new_var, 0, 0x20, 0x6E, 0x10, 0x64, 0x3C, 0x400, 0x400);
    func_800210FC((s32) new_var, 0, 0x30, 0x6E, 4, 0x64, 0x4C, 0x400, 0x400);
  }
  else
  {
    func_800210FC((s32) new_var, 0, 0, 0x6E, 0x10, 0x64, 0x1C, 0x400, 0x400);
    func_800210FC((s32) new_var, 0, 0x10, 0x6E, 0xA, 0x64, 0x2C, 0x400, 0x400);
    func_800210FC((s32) new_var, 0, 0x1A, 0x6E, 2, 0x64, 0x4E, 0x400, 0x400);
  }
  func_80020B4C(4, 0x11, 0, D_8007D0AC[D_8007D088->unk20->unk2]);
  func_80020E2C(&D_803A6F40, 0x20, 0x1D, 0x80, 0xA);
  gDPSetTextureImage(gMasterGfxPos++, 0, G_IM_SIZ_16b, 1, D_80399AB0);
  gDPTileSync(gMasterGfxPos++);
  gDPSetTile(gMasterGfxPos++, G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 0x0100, G_TX_LOADTILE, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);  gDPLoadSync(gMasterGfxPos++);
  gDPLoadTLUTCmd(gMasterGfxPos++, G_TX_LOADTILE, 255);
  gDPPipeSync(gMasterGfxPos++);
  if (D_8007D088->unk90 & 0x80)
  {
    func_80020D4C(3U, 0x10, 0x1C, (s32) D_8007D088->unk20->unk6);
    func_80020D4C(3U, 0x10, 0x26, (s32) D_8007D088->unk20->unkE);
    func_80020D4C(3U, 0x46, 0x1C, (s32) D_8007D088->unk20->unk2A);
    func_80020D4C(3U, 0x46, 0x26, (s32) D_8007D088->unk20->unkC);
    if (D_8007D088->unk20->unk26 != 4)
    {
      func_800210FC((s32) (&D_803A6F40), 0x5B, 3, 0xC, 0xC, (D_8007D088->unk20->unk26 * 0xC) + 0x20, 0x10, 0x400, 0x400);
    }
  }
}
//#pragma GLOBAL_ASM("asm/nonmatchings/1EDF0/func_80020888.s")
void func_80020888(void) {
    unk20888s* var_v0;
    s32 var_v1;

    var_v0 = &D_8008C668;
    var_v1 = 8;
    while (var_v1 > 0){
        
        var_v0->unk0 = 0;
        var_v0++;
        var_v1--;
    }
}
#pragma GLOBAL_ASM("asm/nonmatchings/1EDF0/func_800208B8.s") 
//https://decomp.me/scratch/e4B4a
/*This function seems to use the EnemyBattleData struct, but also references the 
BrianData2 struct at the same time. This may mean that both structs are identical*/

//#pragma GLOBAL_ASM("asm/nonmatchings/1EDF0/func_80020988.s")
void func_80020988(void)
{
    
  unk20e2cs *new_var;
  f32 var_f0;
  f32 var_f12;
  f32 var_f14;
  s32 sp74;
  s32 sp70;
  unk20888s *var_s0;
  s32 var_s1;

  gDPPipeSync(gMasterGfxPos++);
  gDPSetTextureImage(gMasterGfxPos++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, D_803A2960);
  gDPTileSync(gMasterGfxPos++);
  gDPSetTile(gMasterGfxPos++, G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 0x0100, G_TX_LOADTILE, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);
  gDPLoadSync(gMasterGfxPos++);
  gDPLoadTLUTCmd(gMasterGfxPos++, G_TX_LOADTILE, 255);
  gDPPipeSync(gMasterGfxPos++);
  var_s0 = &D_8008C668;
  var_s1 = 8;
  while (var_s1 != 0)
  {
    if (var_s0->unk0 != 0)
    {
      var_f12 = var_s0->unk8;
      var_f14 = var_s0->unkC;
      new_var = &D_803A6F70;
      var_f0 = var_s0->unk10;
      if (var_s0->unk4 != NULL)
      {
        var_f12 += var_s0->unk4->unk0;
        var_f14 += var_s0->unk4->unk4;
        var_f0 += var_s0->unk4->unk8;
      }
      func_8002413C(var_f12, var_f14, var_f0, &sp74, &sp70);
      func_800210FC((s32) new_var, sp74 - (((s32) var_s0->unk18) >> 1), sp70 - var_s0->unk1A, (s32) var_s0->unk18, (s32) var_s0->unk1A, (s32) var_s0->unk14, (s32) var_s0->unk16, 0x400, 0x400);
      var_s0->unk0--;
    }
    var_s1--;
    var_s0++;
  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/1EDF0/func_80020B4C.s")

/*
void func_80020B4C(s32 arg0, s32 arg1, s32 arg2, u8 *arg3)
{
  s32 i;
  u8 *var_v0;
    
  gDPPipeSync(gMasterGfxPos++);
  gDPSetTextureImage(gMasterGfxPos++, 0, G_IM_SIZ_16b, 1, D_803A6FB0[arg2]);
  gDPTileSync(gMasterGfxPos++);
  gDPSetTile(gMasterGfxPos++, 0, G_IM_SIZ_4b, 0, 0x0100, 7, 0, 0 | 0, 0, 0, 0 | 0, 0, 0);
  gDPLoadSync(gMasterGfxPos++);
  gDPLoadTLUTCmd(gMasterGfxPos++, 7, 15);
  gDPPipeSync(gMasterGfxPos++);
    
  if ((*arg3) != 0)
  {
    do
    {
      if ((*arg3) == ' ')
      {
        arg3 += 1;
        arg0 += 6;
      }
      else
      {
        var_v0 = D_8004D44C;
        i = 0;
        loop_4:
        if ((*var_v0) != (*arg3))
        {
          i += 1;
          var_v0 += 1;
          if (i != 0x2C)
          {
            goto loop_4;
          }
          i = 0;
        }

        func_800210FC((s32) (&D_803A6F80), arg0, arg1, 6, 8, i * 6, 0, 0x400, 0x400);
        arg0 += 6;
        arg3 += 1;
      }
    }
    while ((*arg3) != 0);
  }
}
*/


//#pragma GLOBAL_ASM("asm/nonmatchings/1EDF0/func_80020D18.s")
s32 func_80020D18(u8* arg0) {
    s32 var_v1;
    u8 temp_v0;
    u8 val;

    var_v1 = 0;
    val = *arg0;
    arg0 += 1;
    if (val != 0) {
        do {
            temp_v0 = *arg0;
            var_v1 += 1;
            arg0 += 1;
        } while (temp_v0 != 0);
    }
    return var_v1;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/1EDF0/func_80020D4C.s")
void func_80020D4C(u16 arg0, s32 arg1, s32 arg2, s32 arg3)
{
  u8 *var_s1;
  u8 sp48[0xC];
  s32 var_s2;

    
  var_s1 = sp48;
  var_s2 = func_80024330(arg3, sp48, arg0);
    for (;var_s2 != 0; var_s2--, var_s1++)
    {
      if (*var_s1 != ' ')
      {
        func_80020F8C(arg1, arg2, 8, 0xA, (*var_s1 * 8) + ' ', 0x1D, 0x400, 0x400);
        arg1 += 7;
      } else
      if (arg0 & 6)
      {
        arg1 += 7;

      }
    }
}

void func_80020E24(void) {
}

//#pragma GLOBAL_ASM("asm/nonmatchings/1EDF0/func_80020E2C.s") //Assist by StuckPixel
void func_80020E2C(unk20e2cs* arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
        
    gDPSetTextureImage(gMasterGfxPos++, G_IM_FMT_CI, G_IM_SIZ_8b, arg0->unk8, arg0->unk0);
    gDPSetTile(gMasterGfxPos++, G_IM_FMT_CI, G_IM_SIZ_8b, ((((arg1 + arg3) - arg1) + 8)) >> 3, 0x0000, G_TX_LOADTILE, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);
    gDPLoadSync(gMasterGfxPos++);
    gDPLoadTile(gMasterGfxPos++, G_TX_LOADTILE, arg1 * 4, arg2 * 4, (arg1 + arg3) * 4, (arg2 + arg4) * 4);
    gDPPipeSync(gMasterGfxPos++);
    gDPSetTile(gMasterGfxPos++, G_IM_FMT_CI, G_IM_SIZ_8b, ((((arg1 + arg3) - arg1) + 8)) >> 3, 0x0000, G_TX_RENDERTILE, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);
    gDPSetTileSize(gMasterGfxPos++, G_TX_RENDERTILE, arg1 * 4, arg2 * 4, (arg1 + arg3) * 4, (arg2 + arg4) * 4);
}

//#pragma GLOBAL_ASM("asm/nonmatchings/1EDF0/func_80020F8C.s")
void func_80020F8C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7)
{
  arg0 += D_8008C648;
  arg2 += arg0;
  arg1 += D_8008C64C;
  if (arg2 >= D_8008C650)
  {
    arg3 += arg1;
    if (((arg3 >= D_8008C654) && (D_8008C658 >= arg0)) && (D_8008C65C >= arg1))
    {
      if (D_8008C658 < arg2)
      {
        arg2 = D_8008C658;
      }
      if (D_8008C65C < arg3)
      {
        arg3 = D_8008C65C;
      }
      if (arg0 < D_8008C650)
      {
        arg4 = (arg4 - arg0) + D_8008C650;
        arg0 = D_8008C650;
      }
      if (arg1 < D_8008C654)
      {
        arg5 = (arg5 - arg1) + D_8008C654;
        arg1 = D_8008C654;
      }
      gSPTextureRectangle(gMasterGfxPos++, arg0 << 2, arg1 << 2, arg2 << 2, arg3 << 2, 0, arg4 << 5, arg5 << 5, arg6, arg7);
    }
  }
 dummy_label_814065: ;
}
//#pragma GLOBAL_ASM("asm/nonmatchings/1EDF0/func_800210FC.s")
void func_800210FC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    func_80020E2C((unk20e2cs* ) arg0, arg5, arg6, arg3, arg4);
    func_80020F8C(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}