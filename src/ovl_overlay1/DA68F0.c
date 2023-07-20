#include "common.h"

typedef struct {
    s16 unk0;
    u16 unk2;
    f32 unk4;
    f32 unk8;
}unkTitleScreen;


extern s32 D_80103420_DA9D10;
extern s32 D_80103424_DA9D14;
extern s32 D_8011AD30;
extern s32 gGlobalStartScreenTimer;
extern s32 D_8011AD38;
extern s32 gPushStartBlinkTimer;
extern s32 gPushStartBlinkFrequency;
extern s32 D_8011AD44;
extern u8 D_80103138_DA9A28[];
extern s32 D_80103110_DA9A00;
extern s8 D_8011AD50;
extern s32 D_8011AD54;
extern u8 D_801033A0_DA9C90[];
extern s32 D_8011AD60;
extern unkTitleScreen D_80103428_DA9D18;
extern s16 D_8010342A_DA9D1A;
extern f32 D_80103430_DA9D20;
extern s8 D_8006AC60;
extern u8 D_8007B344;
extern u8 D_80103114_DA9A04;
extern u32 D_80103118_DA9A08;
extern u16 D_8010311C_DA9A0C;
extern u8 D_80103120_DA9A10;



void func_80100000_DA68F0(void);
s32 func_8010004C_DA693C(void);
s32 func_801000A8_DA6998();

u16 func_801006D8_DA6FC8(void);
void func_80100B14_DA7404(void);
void func_80100BA0_DA7490(u32 arg0);
void func_80102F14_DA9804(unkTitleScreen *arg0);


//#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay1/DA68F0/func_80100000_DA68F0.s")
void func_80100000_DA68F0(void) {
    D_8011AD30 = 0;
    D_8011AD44 = 0;
    D_80103424_DA9D14 = 1;
    D_80103420_DA9D10 = 0;
    gGlobalStartScreenTimer = 1;
    gPushStartBlinkTimer = 0;
    gPushStartBlinkFrequency = 8;
    D_8011AD38 = 0;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay1/DA68F0/func_8010004C_DA693C.s")
s32 func_8010004C_DA693C(void) { //s32 may be incorrect, but seeing as the funciton is uncalled, I can't tell. 
    if (func_801000A8_DA6998() == 0) {
        if (D_8011AD44 == 0) {
            return 1;
        }
        if (D_8011AD44 == 0xF) {
            D_8011AD44 = 0;
            return 0;
        }
    }
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay1/DA68F0/func_801000A8_DA6998.s")


//#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay1/DA68F0/func_801006D8_DA6FC8.s")
u16 func_801006D8_DA6FC8(void)
{
  gSPDisplayList(gMasterGfxPos++, D_80103138_DA9A28);
  gDPSetEnvColor(gMasterGfxPos++, 0x00, 0x00, 0x00, gPushStartBlinkTimer);
  
  func_80100BA0_DA7490(D_8011AD44);
  gPushStartBlinkTimer += gPushStartBlinkFrequency;
  if (gPushStartBlinkTimer >= 0x100)
  {
    gPushStartBlinkTimer = 0xFF;
    gPushStartBlinkFrequency = -gPushStartBlinkFrequency;
  }
  else
    if (gPushStartBlinkTimer < 0)
  {
    gPushStartBlinkTimer = 0;
    gPushStartBlinkFrequency = -gPushStartBlinkFrequency;
    
  }
  D_8011AD54 = gPushStartBlinkTimer;
  if (D_80103420_DA9D10 == 0)
  {
    if ((D_8011AD44 == 0) && (D_80092876 & 0x1000))
    {
      func_80025B8C(1, 0xFF, 0x40);
      gPushStartBlinkTimer = 0;
      gPushStartBlinkFrequency = 0x80;
      D_8011AD44 = 1;
      gGlobalStartScreenTimer = 0x3C;
    }
    else
      if (D_8011AD44 == 2)
    {
      if (D_80092876 & 0xB000)
      {
        func_80025B8C(1, 0xFF, 0x40);
        gPushStartBlinkTimer = 0;
        gPushStartBlinkFrequency = 0x80;
        D_8011AD44 = 3;
        gGlobalStartScreenTimer = 0x3C;
        D_80103110_DA9A00 = 1;
      }
      else if (D_80092876 & 0x4000)
      {
        func_80025B8C(2, 0xFF, 0x40);
        gPushStartBlinkTimer = 0xFF;
        gPushStartBlinkFrequency = 0x80;
        D_8011AD44 = 4;
        gGlobalStartScreenTimer = 2;
        D_80103110_DA9A00 = 1;
      }
    }
    else
      if ((D_8011AD44 == 8) || (D_8011AD44 == 7))
    {
      if (D_80092876 & 0xB000)
      {
        func_80025B8C(1, 0xFF, 0x40);
        gPushStartBlinkTimer = 0;
        gPushStartBlinkFrequency = 0x80;
        D_80103110_DA9A00 = 1;
        gGlobalStartScreenTimer = 0x3C;
        if (D_8011AD50 == 0)
        {
          if (D_8011AD44 == 8)
          {
            D_8011AD44 = 0xB;
          }
          else
          {
            D_8011AD44 = 0xD;
          }
        }
        else
          if (D_8011AD44 == 8)
        {
          D_8011AD44 = 0xC;
        }
        else
        {
          D_8011AD44 = 0xE;
        }
      }
      else
        if (D_80092876 & 0x4000)
      {
        func_80025B8C(2, 0xFF, 0x40);
        gPushStartBlinkTimer = 0xFF;
        gPushStartBlinkFrequency = 0x80;
        D_8011AD44 = 2;
        gGlobalStartScreenTimer = 2;
        D_80103110_DA9A00 = 1;
      }
    }
    else
      if (D_8011AD44 == 6)
    {
      if (D_80092876 & 0xF000)
      {
        func_80025B8C(2, 0xFF, 0x40);
        gPushStartBlinkTimer = 0xFF;
        gPushStartBlinkFrequency = 0x80;
        D_8011AD44 = 2;
        gGlobalStartScreenTimer = 2;
      }
    }
    else
      if (D_8011AD44 == 9)
    {
      if (D_80092876 & 0xB000)
      {
        func_80025B8C(1, 0xFF, 0x40);
        D_80103110_DA9A00 = 1;
      }
    }
    else
      if ((D_8011AD44 == 0xA) && (D_80092876 & 0xB000))
    {
      func_80025B8C(1, 0xFF, 0x40);
      block_34:
      D_80103110_DA9A00 = 1;

    }
  }
  gGlobalStartScreenTimer -= 1;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay1/DA68F0/func_80100B14_DA7404.s")
void func_80100B14_DA7404(void) {
    gSPDisplayList(gMasterGfxPos++, D_80103138_DA9A28);
    gDPSetEnvColor(gMasterGfxPos++, 0x00, 0x00, 0x00, 0xFF);
    func_80100BA0_DA7490(D_8011AD44);
    gGlobalStartScreenTimer--;
    if (gGlobalStartScreenTimer == 0) {
        D_8011AD44 = 0xF;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay1/DA68F0/func_80100BA0_DA7490.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay1/DA68F0/func_80102E30_DA9720.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay1/DA68F0/func_80102F14_DA9804.s")
void func_80102F14_DA9804(unkTitleScreen *arg0) //match assist by Alex
{
  s32 temp_t0;
  s32 var_v0;
  arg0->unk2--;
  if (D_80103420_DA9D10 & 1)
  {
    arg0->unk8 += arg0->unk4;
  }
  else
  {
    arg0->unk8 -= arg0->unk4;
  }
  switch (D_80103420_DA9D10)
  {
    case 3:
    case 4:
      var_v0 = 0xFF;
      break;

    default:
      var_v0 = 0;
      break;
      
    case 1:
    case 2:
      var_v0 = 0;
      break;
  }

  if (arg0->unk8 <= 0.0f)
  {
    D_80103420_DA9D10 = 0;
    arg0->unk8 = 0.0f;
    arg0->unk0 = 0;
  }
  else
    if (arg0->unk8 > 255.0f)
  {
    D_80103420_DA9D10 = 0;
    arg0->unk8 = 255.0f;
    arg0->unk0 = 0;
  }
  if (arg0->unk2 == 0)
  {
    if ((D_80103420_DA9D10 == 3) || (D_80103420_DA9D10 == 1))
    {
      D_80103420_DA9D10 = 0;
      arg0->unk8 = 255.0f;
      arg0->unk0 = 0;
    }
    else
      if ((D_80103420_DA9D10 == 4) || (D_80103420_DA9D10 == 2))
    {
      D_80103420_DA9D10 = 0;
      arg0->unk8 = 0.0f;
      arg0->unk0 = 0;
    }
  }
  temp_t0 = arg0->unk8;
  gDPPipeSync(gMasterGfxPos++);
  gDPSetPrimColor(gMasterGfxPos++, 0, 0, var_v0, var_v0, var_v0, temp_t0);
  gDPSetRenderMode(gMasterGfxPos++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
  gSPDisplayList(gMasterGfxPos++, D_801033A0_DA9C90);
  gDPFillRectangle(gMasterGfxPos++, 0, 0, 336, 960);
  D_8011AD60 = var_v0;
}
