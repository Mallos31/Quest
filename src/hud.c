#include "common.h"
#include "monsters.h"
#include "player.h"
//#include "hud.h" !TODO once everything at the top of this file is named and updated, put it in hud.h and uncomment.

#define U_CBUTTONS	CONT_E
#define L_CBUTTONS	CONT_C
#define R_CBUTTONS	CONT_F
#define D_CBUTTONS	CONT_D

typedef struct {
    void* unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
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

typedef struct unk_20888_s{
    u16 displayTimer;
    s16 unk2;
    Vec3f* pos;
    f32 offsetX;
    f32 offsetY;
    f32 offsetZ;
    u16 unk14;
    u16 unk16;
    u16 width;
    u16 height;
}MissIcon;

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

typedef struct temp4 {
/* 0x00 */ u8 unk_00;
/* 0x01 */ char unk_01[5];
} temp4;

typedef struct temp2 {
/* 0x00 */ char unk_00[0x14];
/* 0x14 */ Vec3f unk_14;
/* 0x20 */ char unk_20[0x64];
} temp2; //NPC struct. 

typedef struct STRUCT_D_803A8DD8 {
    char unk00[10];
} STRUCT_D_803A8DD8;

typedef struct VEC4_MEM {
    float unk0;
    float unk4;
    float unk8;
    float unkC;
} VEC4_MEM;

typedef struct STRUCT_803A8E0C {
    s16 unk0;
    s16 unk2;
    u16 unk4;
    float unk8;
    float unkC;
} STRUCT_803A8E0C;

extern STRUCT_803A8E0C D_803A8E0C[];

VEC4_MEM D_8008C748;

extern STRUCT_D_803A8DD8 D_803A8DD8[];

extern sPlayerAction D_8007BAB8;

extern s32 D_8007BA74;
extern temp2 D_8007BD30[];
extern s32 D_8008C644;
extern Gfx D_803A8B90[];

extern u8 gFireSpirits;
extern u8 gEarthSpirits;
extern u8 gWaterSpirits;
extern u8 gWindSpirits;

extern s32 D_8008C650; //number of lines to cover from left to right (HUD)
extern s32 D_8008C654; //number of lines to cover from top to bottom (HUD)
extern s32 D_8008C658; //number of lines to draw from left to right (HUD)
extern s32 D_8008C65C; //number of lines to draw from top to bottom (HUD) 
extern MissIcon gMISSData;
extern u8 gBattleStatusPal[]; //Status icons palette
extern unk20e2cs D_803A6F70; //pointers to status icons and text
extern unk20e2cs D_803A6F60;
extern unk20e2cs gTex_HUD_and_Menu;
extern u8 gAlphaNumerics[]; //0-9, punctuation, and capital letters
extern u8 gAlphaNumericTexture[]; //texture corresponds perfectly with gAlphaNumerics
extern void* D_803A6FB0[]; //array of palettes
extern unk203d0s* D_8007D088;
extern s32 *D_8007D0AC;
extern u8 D_80399AB0[];
extern u8 D_8039D990[];
extern f64 D_800716C0; //.rodata value 4075E00000000000 or 350.0 
extern EnemyAction D_8007C998[]; //enemy action data
extern Gfx gDL_StaffIcon[]; //Staff icon DL
extern s32 D_8007B2F8;
extern f32 D_80086DEC;
extern s32 gHUDResolutionX;
extern s32 gHUDResolutionY;
extern Mtx D_2000000[];
extern Gfx D_803A8EA0[]; //Compass Display List
extern Gfx D_803A8C80[];
extern f64 D_800716C8;
extern s16 D_8008C630;
extern s32 D_8008C638;
extern s32 D_8008C63C;
extern s32 D_8008C640;
extern Gfx gExclamationMarkPalette[]; //exclamation mark display list
extern u8 D_8004D2B4;
extern s32 D_8004D2B8;
extern s32 D_8004D2BC;
extern s32 D_8007BA78;
extern s32 gTreasureChestPointer;
extern u16 D_8007BABA;
extern u16 D_8007BAC0;
extern unk1ebdcs* D_8007BAC8;
extern f32 D_8007BAE4;
extern f32 D_8007BAEC;
extern u16 D_8007BB2C;
extern s32 D_8007C990;
extern u16 D_80084EE0;
extern s32 D_80086F10;
extern s32 D_8008C660;
extern s32 D_8008C664;
extern u8 D_803A6FC0[];
extern u16 D_8004D2CC[];
extern u16 D_8004D2DC[];

s32 func_800177F8(u16 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, void* arg6, void* arg7, void* arg8);
s32 func_8002413C(f32 arg0, f32 arg1, f32 arg2, s32 *arg3, s32 *arg4); //from camera.c (soon to be quest_math.c)
void func_80020B4C(temp4* arg0, s32 arg1, s32 arg2, u8* arg3);

void HUDInit(void);

void func_8001E7FC(BrianData2 *arg0);
void func_8001EA84(Mtx *arg0);
void func_8001EBDC(unk1ebdcs* arg0);

void func_8001F3DC(unk1f3dcTEST* arg0);
void func_8001F818(void);
void func_8001F900(void);
void func_8001F9B0(void);
void func_8001FA60(u16 monsterNum);
void func_8001FB94(void);


void func_800202E4(MonsterBattleData *arg0);
void func_800203A8(void);
void func_800203B0(void);
void func_800203B8(void);
void func_800203C0(void);
void func_800203C8(void);
void func_800203D0(void);
void Init_MISS_Icon(void);
void Setup_MISS_Icon(MonsterBattleData* arg0);
void Draw_MISS_Icon(void);


s32 func_80020D18(u8* arg0);
void func_80020D4C(u16 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80020E24(void);
void func_80020E2C(unk20e2cs* arg0, s32 s, s32 t, s32 lrx, s32 lry);
void func_80020F8C(s32 ulx, s32 uly, s32 lrx, s32 lry, s32 s, s32 t, s32 dsdx, s32 dtdy);
void func_800210FC(unk20e2cs* arg0, s32 ulx, s32 uly, s32 lrx, s32 lry, s32 s, s32 t, s32 dsdx, s32 dtdy);

//#pragma GLOBAL_ASM("asm/nonmatchings/hud/HUDInit.s")
void HUDInit(void)
{
  D_8008C638 = 0;
  D_8008C63C = 0;
  D_8008C640 = -1;
  gHUDResolutionX = gHUDResolutionY = 0;
  D_8008C650 = D_8008C654 = 0;  
  D_8008C658 = 0x140; //HUD height
  D_8008C65C = 0xF0; //HUD Width
  D_8008C630 = 0;
}
#pragma GLOBAL_ASM("asm/nonmatchings/hud/func_8001E25C.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/hud/func_8001E7FC.s")
void func_8001E7FC(BrianData2 *arg0)
{
  s32 temp_lo;
  unk20e2cs *gfxHUD;
  BrianData1 *brianData;
  brianData = arg0->brianData1;
  gfxHUD = &gTex_HUD_and_Menu;
    
  func_800210FC(gfxHUD, 0, 1, 0x3E, 0x11, 0x20, 0x27, 0x400, 0x400);
  func_800210FC(gfxHUD, 0, 0x12, 0x3E, 0x12, 0x20, 0x38, 0x400, 0x400);
  temp_lo = ((s32) (brianData->currHP * 0x38)) / ((s32) brianData->maxHP);
  if (temp_lo != 0)
  {
    func_800210FC(gfxHUD, 3, 0xB, temp_lo, 5, 0x5E, 0x27, 0x400, 0x400);
  }
  temp_lo = ((s32) (brianData->currMP * 0x38)) / ((s32) brianData->maxMP);
  if (temp_lo != 0)
  {
    func_800210FC(gfxHUD, 3, 0x15, temp_lo, 5, 0x5E, 0x2C, 0x400, 0x400);
  }
  func_80020E2C(gfxHUD, 0x20, 0x1D, 0x80, 0xA);
  func_80020D4C(3, 0xC, 0, (s32) brianData->currHP);
  func_80020D4C(1, 0x36, 0, (s32) brianData->maxHP);
  func_80020D4C(3, 0xC, 0x1B, (s32) brianData->currMP);
  func_80020D4C(1, 0x36, 0x1B, (s32) brianData->maxMP);
  func_80020F8C(0x2F, 0, 8, 0xA, 0x70, 0x1D, 0x400, 0x400);
  func_80020F8C(0x2F, 0x1B, 8, 0xA, 0x70, 0x1D, 0x400, 0x400);
}
//#pragma GLOBAL_ASM("asm/nonmatchings/hud/func_8001EA84.s")
void func_8001EA84(Mtx *arg0) {
    MtxF sp38;

    gHUDResolutionX = 0x104;
    gHUDResolutionY = 0x18;
    func_80023570(&sp38, 0.0f, 0.0f, D_80086DEC);
    sp38.mf[3][0] = (f32) (gHUDResolutionX + 0x11);
    sp38.mf[3][1] = (f32) (gHUDResolutionY + 0x11);
    sp38.mf[3][2] = 0.0f;
    
    guMtxF2L(sp38.mf, arg0 + 3 + D_8007B2F8);

    gSPMatrix(gMasterGfxPos++, &D_2000000[D_8007B2F8] + 3, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);

    D_8007B2F8++;

    gSPDisplayList(gMasterGfxPos++, D_803A8EA0); //Compass DL

    //Pointer to texture, X, Y, NumPixelsX, NumPixelsY, SheetLocationX, unknown, resolutionX, resolutionY
    func_800210FC(&gTex_HUD_and_Menu, 0xD, 0xA, 0xB, 0xE, 0x93, 0, 0x400, 0x400);
}
//#pragma GLOBAL_ASM("asm/nonmatchings/hud/func_8001EBDC.s")
void func_8001EBDC(unk1ebdcs* arg0) {
    s32 var_s0;
    s32 i;
    void* HUDTex;

    HUDTex = &gTex_HUD_and_Menu;
    func_800210FC(HUDTex, 0, 0, 0xC, 0xC, 0x20, 0x10, 0x400, 0x400);
    func_800210FC(HUDTex, 0x16, 0, 0xC, 0xC, 0x2C, 0x10, 0x400, 0x400);
    func_800210FC(HUDTex, 0x2C, 0, 0xC, 0xC, 0x38, 0x10, 0x400, 0x400);
    func_800210FC(HUDTex, 0x42, 0, 0xC, 0xC, 0x44, 0x10, 0x400, 0x400);
    func_80020E2C(HUDTex, 0x20, 0x1D, 0x80, 0xA);
    
    var_s0 = 6;
    for (i = 0; i < 4; i++) {
        func_80020D4C(1U, var_s0, 6, arg0->unk24[i]);
        var_s0 += 0x16;
    }
}
#pragma GLOBAL_ASM("asm/nonmatchings/hud/func_8001ED5C.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/hud/func_8001F3DC.s")
void func_8001F3DC(unk1f3dcTEST* arg0) { //sBrianAction
    s32 var_t9;
    unk1f3dcTEST2* temp_v0_14;
    unk20e2cs* temp;
    
    
    gHUDResolutionX = 0;
    gHUDResolutionY = 0;

    gDPPipeSync(gMasterGfxPos++);
    gDPSetTextureImage(gMasterGfxPos++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, D_8039D990);
    gDPTileSync(gMasterGfxPos++);
    gDPSetTile(gMasterGfxPos++, G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 0x0100, G_TX_LOADTILE, 0, G_TX_NOMIRROR |
        G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);
    gDPLoadSync(gMasterGfxPos++);
    gDPLoadTLUTCmd(gMasterGfxPos++, G_TX_LOADTILE, 255);
    gDPPipeSync(gMasterGfxPos++);

    temp = &D_803A6F60;
    func_800210FC(temp, 0x81, 0x48, 0x40, 0x14, 0, 0, 0x400, 0x400);
    func_800210FC(temp, 0x81, 0x5C, 0x40, 0x14, 0, 0x14, 0x400, 0x400);
    func_800210FC(temp, 0x81, 0x70, 0x40, 0x14, 0, 0x28, 0x400, 0x400);
    func_800210FC(temp, 0x81, 0x84, 0x40, 0x14, 0, 0x3C, 0x400, 0x400);
    func_80020E2C(&gTex_HUD_and_Menu, 0x20, 0x1D, 0x80, 0xA);

    gDPSetTextureImage(gMasterGfxPos++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, D_80399AB0);
    gDPTileSync(gMasterGfxPos++);
    gDPSetTile(gMasterGfxPos++, G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 0x0100, G_TX_LOADTILE, 0, G_TX_NOMIRROR | 
        G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);
    gDPLoadSync(gMasterGfxPos++);
    gDPLoadTLUTCmd(gMasterGfxPos++, G_TX_LOADTILE, 255);
    gDPPipeSync(gMasterGfxPos++);
    
    func_80020D4C(5U, 0x9D, 0x6C, (s32) gFireSpirits); //fire
    func_80020D4C(5U, 0x8B, 0x7C, (s32) gEarthSpirits); //earth
    func_80020D4C(5U, 0x9D, 0x8B, (s32) gWaterSpirits); //water
    func_80020D4C(5U, 0xAF, 0x7C, (s32) gWindSpirits); //wind
    
    if ((D_80092876 & U_CBUTTONS) && (arg0->unk10->unk24 < 0x32)) { 
        arg0->unk10->unk24++;
        gGameState &= ~8; 
    } else if ((D_80092876 & D_CBUTTONS) && (arg0->unk10->unk26 < 0x32)) {  
        arg0->unk10->unk26++;
        gGameState &= ~8;
    } else if ((D_80092876 & R_CBUTTONS) && (arg0->unk10->unk27 < 0x32)) { 
        arg0->unk10->unk27++;
        gGameState &= ~8;
    } else if ((D_80092876 & L_CBUTTONS) && (arg0->unk10->unk25 < 0x32)) {  
        arg0->unk10->unk25++;
        gGameState &= ~8;
    }

    if ((gGameState & 8) == 0) {
        func_800268D4(0, 4, 0xFF);
    }
}

//#pragma GLOBAL_ASM("asm/nonmatchings/hud/func_8001F818.s") //Matched by rainchus
void func_8001F818(void) {
    s32 sp34; //probably a struct of 8 size to align stack
    Vec3f* temp_v0;

    temp_v0 = &D_8007BD30[D_8007BA74 - 1].unk_14;
    
    if (func_8002413C(temp_v0->x, (temp_v0->y + 14.0), temp_v0->z, &sp34, &D_8008C644) != 0) {
        gSPDisplayList(gMasterGfxPos++, D_803A8B90);
        func_80020F8C(sp34, D_8008C644 - 0x1E, 0x40, 0x1D, 0, 0, 0x400, 0x400);
        return;
    }
    
    D_8008C644 = 0xF0;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/hud/func_8001F900.s")
void func_8001F900(void) {
    s32 sp34;
    s32 sp30;

    if (func_8002413C(D_8007BAB8.xpos, (D_8007BAB8.ypos + 11.0), D_8007BAB8.zpos, &sp34, &sp30) != 0) {
        gSPDisplayList(gMasterGfxPos++, D_803A8C80);
        func_80020F8C(sp34, sp30 - 0x1E, 0x18, 0x1E, 0, 0, 0x400, 0x400);
    }
}
//#pragma GLOBAL_ASM("asm/nonmatchings/hud/func_8001F9B0.s")
//displays exclamation mark above brian's head

void func_8001F9B0(void) {
    s32 sp34;
    s32 sp30;

    if (func_8002413C(D_8007BAB8.xpos, (f32) ((f64) D_8007BAB8.ypos + 11.0), D_8007BAB8.zpos, &sp34, &sp30) != 0) {

        gSPDisplayList(gMasterGfxPos++, gExclamationMarkPalette);
        func_80020F8C(sp34, sp30 - 0x1E, 0x10, 0x1E, 0, 0, 0x400, 0x400);
    }
}
//#pragma GLOBAL_ASM("asm/nonmatchings/hud/func_8001FA60.s")

/*This is set as non-matching until the enemy data structs are fixed*/
void func_8001FA60(u16 monsterNum) {
    s32 sp44;
    s32 sp40;
    f32 var_f14;
    MonsterBaseData* MonsterBaseData;
    MonsterBattleData* MonsterBattleData;

    MonsterBattleData = &D_8007C998[monsterNum].battleData;

    /*if enemy is flying, the y positioin of the 
    staff icon should be moved upward to match*/
    
    if (MonsterBattleData->unk64->monsterType == FLYING) {
        var_f14 = MonsterBattleData->unk68->unk94;
    } else {
        MonsterBaseData = MonsterBattleData->unk64;
        if (MonsterBaseData->monsterType == MAMMON) {
            var_f14 = MonsterBattleData->pos.y + (D_800716C0 * MonsterBattleData->scale);
        } else {
            var_f14 = MonsterBattleData->pos.y + (MonsterBaseData->hitboxWidth * MonsterBattleData->scale);
        }
    }
    if (func_8002413C(MonsterBattleData->pos.x, var_f14, MonsterBattleData->pos.z, &sp44, &sp40)) {
        gSPDisplayList(gMasterGfxPos++, gDL_StaffIcon);
        func_80020F8C(sp44 - 4, sp40 - 0x2A, 0x18, 0x2A, 0, 0, 0x400, 0x400);
    }
}


//#pragma GLOBAL_ASM("asm/nonmatchings/hud/func_8001FB94.s")
void func_8001FB94(void) {

    s32 sp5C;
    s32 sp58;
    s32 pad;
    f32 temp = D_8007BAB8.unk38 * D_8007BAB8.unk78->unk1C;
    
    if (func_8002413C(D_8007BAB8.xpos, 
        D_8007BAB8.ypos + temp, 
        D_8007BAB8.zpos, 
        &sp5C, 
        &sp58) != 0) {
        
        gDPPipeSync(gMasterGfxPos++);
        gDPSetTextureImage(gMasterGfxPos++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gBattleStatusPal);
        gDPTileSync(gMasterGfxPos++);
        gDPSetTile(gMasterGfxPos++, G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 0x0100, G_TX_LOADTILE, 0, G_TX_NOMIRROR | 
            G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);
        
        gDPLoadSync(gMasterGfxPos++);
        gDPLoadTLUTCmd(gMasterGfxPos++, G_TX_LOADTILE, 255);
        gDPPipeSync(gMasterGfxPos++);
        
        
        func_800210FC(&D_803A6F70, sp5C - 0x17, sp58 - 0xF, 0x2E, 0xF, 0x51, 0x31, 0x400, 0x400);
    }
}

//#pragma GLOBAL_ASM("asm/nonmatchings/hud/func_8001FCF8.s") //matched by 1superchip
void func_8001FCF8(MonsterBattleData* arg0, u16 arg1, u16 arg2, s16 arg3) {
    u32 i = 0;
    UnknownMonsterData2* t2 = arg0->unk68;
    for(i = 0; i < 7; i++) {
        if (D_8004D2CC[i] & arg1) {
            t2->status[i] = arg2;
            t2->unk22[i] = arg3;
            break;
        }
    }
    for(i = 0; i < 4; i++) {
        f32 fv0;
        void* p;
        u16 temp;
        if ((D_8004D2DC[i] & arg1) && (t2->unk44[i] == 0)) {
            t2->unk32[i] = arg3;
            D_8008C748.unk0 = D_803A8E0C[arg2].unk8;
            D_8008C748.unk4 = D_803A8E0C[arg2].unkC;
            D_8008C748.unk8 = 1.0f;
            p = &D_803A8DD8[D_803A8E0C[arg2].unk0];
            if (arg0->unk64->monsterType == FLYING) {
                fv0 = (D_803A8E0C[arg2].unk4 & 0x100) ? arg0->unk68->unk94 : arg0->unk68->unk94 - (arg0->unk64->hitboxHeight * arg0->scale);
            } else {
                fv0 = (D_803A8E0C[arg2].unk4 & 0x100) ? (f32)(arg0->pos.y + (arg0->unk64->hitboxWidth * 0.5 * arg0->scale)) : arg0->pos.y;
            }
            t2->unk44[i] = 
                func_800177F8(D_803A8E0C[arg2].unk2, D_803A8E0C[arg2].unk4, arg0->pos.x, fv0, arg0->pos.z, 0.0f, p, &D_8008C748, (void*)arg0);
            return;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/hud/func_8001FEEC.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/hud/func_800202E4.s")//Matched by EllipticEllipsis and StuckPixel

/*This funciton has something to do with status effects and buffs/debuffs on monsters*/
void func_800202E4(MonsterBattleData *arg0)
{
    u32 i;
    UnknownMonsterData2 *temp_v0;
    UnknownMonsterData3 *temp_a0;

    temp_v0 = arg0->unk68;

    for(i = 0; i < 7; i++) {
        if(temp_v0->status[i] != 0) {
            temp_v0->status[i] = 0;
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

//#pragma GLOBAL_ASM("asm/nonmatchings/hud/func_800203D0.s")
void func_800203D0(void)
{
  unk20e2cs *new_var;
  gHUDResolutionX = 0xB5;
  gHUDResolutionY = 0x1A;
  gDPPipeSync(gMasterGfxPos++);
  gDPSetTextureImage(gMasterGfxPos++, 0, G_IM_SIZ_16b, 1, D_8039D990);
  gDPTileSync(gMasterGfxPos++);
  gDPSetTile(gMasterGfxPos++, G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 0x0100, G_TX_LOADTILE, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);  gDPLoadSync(gMasterGfxPos++);
  gDPLoadTLUTCmd(gMasterGfxPos++, G_TX_LOADTILE, 255);  gDPPipeSync(gMasterGfxPos++);
  new_var = &D_803A6F60;
  if (D_8007D088->unk90 & 0x80)
  {
    func_800210FC(new_var, 0, 0, 0x6E, 0x10, 0x64, 0x1C, 0x400, 0x400);
    func_800210FC(new_var, 0, 0x10, 0x6E, 0x10, 0x64, 0x2C, 0x400, 0x400);
    func_800210FC(new_var, 0, 0x20, 0x6E, 0x10, 0x64, 0x3C, 0x400, 0x400);
    func_800210FC(new_var, 0, 0x30, 0x6E, 4, 0x64, 0x4C, 0x400, 0x400);
  }
  else
  {
    func_800210FC(new_var, 0, 0, 0x6E, 0x10, 0x64, 0x1C, 0x400, 0x400);
    func_800210FC(new_var, 0, 0x10, 0x6E, 0xA, 0x64, 0x2C, 0x400, 0x400);
    func_800210FC(new_var, 0, 0x1A, 0x6E, 2, 0x64, 0x4E, 0x400, 0x400);
  }
  func_80020B4C(4, 0x11, 0, D_8007D0AC[D_8007D088->unk20->unk2]);
  func_80020E2C(&gTex_HUD_and_Menu, 0x20, 0x1D, 0x80, 0xA);
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
      func_800210FC(&gTex_HUD_and_Menu, 0x5B, 3, 0xC, 0xC, (D_8007D088->unk20->unk26 * 0xC) + 0x20, 0x10, 0x400, 0x400);
    }
  }
}
//#pragma GLOBAL_ASM("asm/nonmatchings/hud/Init_MISS_Icon.s")
void Init_MISS_Icon(void) {
    MissIcon* missIconData;
    s32 var_v1;

    missIconData = &gMISSData;
    var_v1 = 8;
    while (var_v1 > 0){
        
        missIconData->displayTimer = 0;
        missIconData++;
        var_v1--;
    }
}
//#pragma GLOBAL_ASM("asm/nonmatchings/hud/Setup_MISS_Icon.s") 
/*may be a different struct for the argument since it also applies to the MISS above Brian, but this works for now*/
void Setup_MISS_Icon(MonsterBattleData* arg0) {
    MonsterBaseData* monsterData;
    s32 i;
    MissIcon* missIconData;

    missIconData = &gMISSData;
    for (i = 7; i != 0 && missIconData->displayTimer != 0; i--, missIconData++) {
        
    }
    missIconData->displayTimer = 0x2D; //length of time "MISS" appears.
    missIconData->pos = arg0; //pointer to the position "MISS" should appear.
    missIconData->offsetZ = 0.0f; //"MISS" location offset (yPos?)
    missIconData->offsetX = 0.0f; //"MISS" location offset (xPos?)
    monsterData = arg0->unk64;
    if (monsterData->monsterType == ON_GROUND) {
        missIconData->offsetY = monsterData->hitboxWidth * arg0->scale;
    } else if (monsterData->monsterType == FLYING) {
        missIconData->offsetY = arg0->unk68->unk94 - arg0->pos.y;
    } else {
        missIconData->offsetY = (f32) ((f64) arg0->scale * D_800716C8);
    }
    missIconData->unk14 = 0x23; //xpos on texture for MISS icons
    missIconData->unk16 = 0x31; //ypos on texture for MISS icons
    missIconData->width = 0x29;
    missIconData->height = 0xE;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/hud/Draw_MISS_Icon.s")
void Draw_MISS_Icon(void)
{
    
  unk20e2cs *new_var;
  f32 var_f0;
  f32 var_f12;
  f32 var_f14;
  s32 sp74;
  s32 sp70;
  MissIcon *missIconData;
  s32 var_s1;


  gDPPipeSync(gMasterGfxPos++);
  gDPSetTextureImage(gMasterGfxPos++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gBattleStatusPal);
  gDPTileSync(gMasterGfxPos++);
  gDPSetTile(gMasterGfxPos++, G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 0x0100, G_TX_LOADTILE, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);
  gDPLoadSync(gMasterGfxPos++);
  gDPLoadTLUTCmd(gMasterGfxPos++, G_TX_LOADTILE, 255);
  gDPPipeSync(gMasterGfxPos++);
  missIconData = &gMISSData;
  var_s1 = 8;
  while (var_s1 != 0)
  {
    if (missIconData->displayTimer != 0)
    {
      var_f12 = missIconData->offsetX;
      var_f14 = missIconData->offsetY;
      new_var = &D_803A6F70;
      var_f0 = missIconData->offsetZ;
      if (missIconData->pos != NULL)
      {
        var_f12 += missIconData->pos->x;
        var_f14 += missIconData->pos->y;
        var_f0 += missIconData->pos->z;
      }
      func_8002413C(var_f12, var_f14, var_f0, &sp74, &sp70);
      func_800210FC(new_var, sp74 - (((s32) missIconData->width) >> 1), sp70 - missIconData->height, (s32) missIconData->width, (s32) missIconData->height, (s32) missIconData->unk14, (s32) missIconData->unk16, 0x400, 0x400);
      missIconData->displayTimer--;
    }
    var_s1--;
    missIconData++;
  }
}

//#pragma GLOBAL_ASM("asm/nonmatchings/hud/func_80020B4C.s")
void func_80020B4C(temp4* arg0, s32 arg1, s32 arg2, u8* arg3) {
    u32 i;
    
    gDPPipeSync(gMasterGfxPos++);

    gDPSetTextureImage(gMasterGfxPos++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, D_803A6FB0[arg2]);
        
    gDPTileSync(gMasterGfxPos++);
    
    gDPSetTile(gMasterGfxPos++, G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 0x0100, G_TX_LOADTILE, 0, G_TX_NOMIRROR | 
        G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);
    
    gDPLoadSync(gMasterGfxPos++);
    
    gDPLoadTLUTCmd(gMasterGfxPos++, G_TX_LOADTILE, 15);
    
    gDPPipeSync(gMasterGfxPos++);

    
    while (*arg3) {
        if (*arg3 == ' ') {
            arg3++;
            arg0++;
            continue;
        } else {
            for (i = 0; i < 44; i++) {
                if (gAlphaNumerics[i] != *arg3) {
                    continue;
                } else {
                    break;
                }
            }
        }
        
        func_800210FC(gAlphaNumericTexture, arg0, arg1, 6, 8, i * 6, 0, 0x400, 0x400);
        arg0++;
        arg3++;
    }
}


//#pragma GLOBAL_ASM("asm/nonmatchings/hud/func_80020D18.s")
s32 func_80020D18(u8* arg0) {
    s32 ret;
    u8 val;

    ret = 0;
    val = *arg0;
    
    arg0 += 1;
    if (val != 0) {
        do {
            val = *arg0;
            ret++;
            arg0++;
        } while (val != 0);
    }
    return ret;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/hud/func_80020D4C.s")
void func_80020D4C(u16 arg0, s32 arg1, s32 arg2, s32 arg3)
{
  u8 *var_s1;
  u8 sp48[0xC];
  s32 var_s2;

    
  var_s1 = sp48;
  var_s2 = count_digits(arg3, sp48, arg0);
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

//#pragma GLOBAL_ASM("asm/nonmatchings/hud/func_80020E2C.s") //Assist by StuckPixel
/*This function sets up the graphics pipeline for loading a texture image and rendering it to the screen.*/
void func_80020E2C(unk20e2cs* arg0, s32 s, s32 t, s32 lrx, s32 lry) {
        
    gDPSetTextureImage(gMasterGfxPos++, G_IM_FMT_CI, G_IM_SIZ_8b, arg0->unk8, arg0->unk0);
    gDPSetTile(gMasterGfxPos++, G_IM_FMT_CI, G_IM_SIZ_8b, ((((s + lrx) - s) + 8)) >> 3, 0x0000, G_TX_LOADTILE, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);
    gDPLoadSync(gMasterGfxPos++);
    gDPLoadTile(gMasterGfxPos++, G_TX_LOADTILE, s * 4, t * 4, (s + lrx) * 4, (t + lry) * 4);
    gDPPipeSync(gMasterGfxPos++);
    gDPSetTile(gMasterGfxPos++, G_IM_FMT_CI, G_IM_SIZ_8b, ((((s + lrx) - s) + 8)) >> 3, 0x0000, G_TX_RENDERTILE, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);
    gDPSetTileSize(gMasterGfxPos++, G_TX_RENDERTILE, s * 4, t * 4, (s + lrx) * 4, (t + lry) * 4);
}

//#pragma GLOBAL_ASM("asm/nonmatchings/hud/func_80020F8C.s") 
void func_80020F8C(s32 ulx, s32 uly, s32 lrx, s32 lry, s32 s, s32 t, s32 dsdx, s32 dtdy) //!TODO Get rid of dummy label if possible! 
{
  ulx += gHUDResolutionX;
  lrx += ulx;
  uly += gHUDResolutionY;
  if (lrx >= D_8008C650)
  {
    lry += uly;
    if (((lry >= D_8008C654) && (D_8008C658 >= ulx)) && (D_8008C65C >= uly))
    {
      if (D_8008C658 < lrx)
      {
        lrx = D_8008C658;
      }
      if (D_8008C65C < lry)
      {
        lry = D_8008C65C;
      }
      if (ulx < D_8008C650)
      {
        s = (s - ulx) + D_8008C650;
        ulx = D_8008C650;
      }
      if (uly < D_8008C654)
      {
        t = (t - uly) + D_8008C654;
        uly = D_8008C654;
      }
      gSPTextureRectangle(gMasterGfxPos++, ulx << 2, uly << 2, lrx << 2, lry << 2, 0, s << 5, t << 5, dsdx, dtdy);
    }
  }
 dummy_label_814065: ;
}
//#pragma GLOBAL_ASM("asm/nonmatchings/hud/func_800210FC.s")
void func_800210FC(unk20e2cs* arg0, s32 ulx, s32 uly, s32 lrx, s32 lry, s32 s, s32 t, s32 dsdx, s32 dtdy) {
    func_80020E2C(arg0, s, t, lrx, lry);
    func_80020F8C(ulx, uly, lrx, lry, s, t, dsdx, dtdy);
}