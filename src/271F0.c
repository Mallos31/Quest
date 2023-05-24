#include "common.h"



typedef struct {
    s16 map;
    s16 submap;
    s8 bgm;
    s8 pad;
}bgmData;

typedef struct unk26658_s{
    u8 unk0;
    s8 unk1;
    u8 unk2;
}unk26658s;

extern unk26658s D_8008FCC8;
extern s8 D_80053CA4;
extern u8 D_80053CAC;
extern u8 D_8008FCC6;
extern bgmData D_80053B00[];
extern s8 D_8005F010;
extern s8 gCurrentBGM;
extern u16 gPlayBGM;
extern u16 gBGMDelay;
extern s8 D_8008FCC0;
s32 func_8002543C(s32);                               /* extern */

void func_80026A04(void);

#pragma GLOBAL_ASM("asm/nonmatchings/271F0/func_800265F0.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/271F0/func_80026658.s")
void func_80026658(void)
{
  unk26658s *var_s0;
  s32 i;
  u8 temp;
  
  if ((gPlayBGM & 1) != 0)
  {
    if (gBGMDelay == 0)
    {
      if (D_8008FCC0 != (-1))
      {
        gPlayBGM = gPlayBGM | 2;
      }
      else
      {
        gPlayBGM = gPlayBGM | 4;
      }
      gPlayBGM = gPlayBGM & (~0x1);
    }
    else
    {
      gBGMDelay--;
    }
  }
  if (gPlayBGM & 2)
  {
    gPlayBGM = gPlayBGM & 0xFFFD;
    gPlayBGM = gPlayBGM | 4;
    func_800253F0(0);
  }
  else
    if ((gPlayBGM & 4) && (!func_8002543C(0)))
  {
    gPlayBGM &= ~0x4;
    D_8008FCC0 = gCurrentBGM;
    if (D_8008FCC0 != (-1))
    {
      func_800252D8(0, D_8008FCC0);
      func_80026A04();
      func_80025364(0);
    }
  }

  i = 16;
  var_s0 = &D_8008FCC8;
  for (i; i > 0; i--)
  {
    if (var_s0->unk0 != 0)
    {
      var_s0->unk0--;
      if (!var_s0->unk0)
      {
        func_80025B8C(var_s0->unk1, var_s0->unk2, 64);
      }
    }
    var_s0++;
  }
}

//#pragma GLOBAL_ASM("asm/nonmatchings/271F0/UpdateBGM.s")
void UpdateBGM(s8 newBGM) { //UpdateBGM
    if (newBGM != gCurrentBGM) {
        gCurrentBGM = newBGM;
        gPlayBGM |= 1;
    }
}

//#pragma GLOBAL_ASM("asm/nonmatchings/271F0/UpdateBGMDelay.s")
void UpdateBGMDelay(s8 newBGM, u16 delay) {
    if (newBGM != gCurrentBGM) {
        gCurrentBGM = newBGM;
        gPlayBGM |= 1;
        gBGMDelay = delay & 0xFFFF;
    }
}

//#pragma GLOBAL_ASM("asm/nonmatchings/271F0/func_8002684C.s")
void func_8002684C(s32 nextMap, s32 nextSubmap, u16 delay) {
    s32 mapNum;
    bgmData* bgmData;

    bgmData = D_80053B00;

    for (mapNum = 0x46; mapNum != 0; mapNum--) {
        if ((nextMap == bgmData->map) && ((nextSubmap == bgmData->submap) || (bgmData->submap == -1))) {
            break;
        }
        bgmData++;
    }
    if (mapNum != 0) {
        if (gCurrentBGM != bgmData->bgm) {
            gCurrentBGM = bgmData->bgm;
            gPlayBGM |= 1;
            gBGMDelay = delay;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/271F0/func_800268D4.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/271F0/func_8002699C.s")
void func_8002699C(s8 arg0, u8 arg1)
{
  func_80025B8C(arg0, (u32) ((*((&D_80053CAC) + arg0) * arg1) * D_8008FCC6) >> (0, 0x10), 0x40);
}

//#pragma GLOBAL_ASM("asm/nonmatchings/271F0/func_80026A04.s")
void func_80026A04(void) {
    func_80026554(*(&D_80053CA4 + D_8005F010));
}
