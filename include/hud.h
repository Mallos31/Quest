#ifndef _HUD_H_
#define _HUD_H_


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
extern u8 gAlphaNumerics[]; //0-9, punctuation, and capital letters
extern u8 gAlphaNumericTexture[]; //texture corresponds perfectly with gAlphaNumerics
extern void* D_803A6FB0[]; //array of palettes
extern unk203d0s* D_8007D088;
extern s32 *D_8007D0AC;
extern u8 D_80399AB0[];
extern u8 D_8039D990[];
extern unk20e2cs D_803A6F60;
extern EnemyAction D_8007C998[]; //enemy action data
extern Gfx gDL_StaffIcon[]; //Staff icon DL
extern unk20e2cs gTex_HUD_and_Menu;
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

void func_8001EBDC(unk1ebdcs* arg0);
void func_8001EA84(Mtx *arg0);
void func_80020D4C(u16 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_8002413C(f32 arg0, f32 arg1, f32 arg2, s32* arg3, s32* arg4);
void DrawHUDTexture(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void func_800210FC(unk20e2cs* arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8);
void func_80020E2C(unk20e2cs* arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_80020B4C(temp4* arg0, s32 arg1, s32 arg2, u8* arg3);

#endif
