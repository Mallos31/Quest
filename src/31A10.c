#include "common.h"

typedef short int16_t;
typedef int16_t   qs510_t;
#define qs510(n)                      ((qs510_t)((n)*0x0400))

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
}temps;

extern u8 D_8005FAA0[];
extern temps D_8005FA90[];
extern s32 D_80092860;
extern s32 D_80092864;

typedef struct test2 {
    /* 0x00 */ char unk00[0x20];
} test2; // size = 0x20
extern test2 gTextPalettes[];
extern u8 D_D3E240[];
extern u8 gTexAlphabetPhys[];


//#pragma GLOBAL_ASM("asm/nonmatchings/31A10/string_copy.s")
/*as far as I can tell, @UNUSED*/
void string_copy(u8 *arg0, u8 *arg1)
{
    s32 i;

    for(i = 0; arg1[i] != 0xFF; i++) {
        arg0[i] = arg1[i];
    }
    arg0[i] = 0xFF;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/31A10/loadTextTextureAndPal.s")
void loadTextTextureAndPal(void) {
    dma_write(D_D3E240, &gTextPalettes, 0x80);    //text palettes
    dma_write(gTexAlphabetPhys, &D_803232A0, 0xE790);  //text gfx
}

#pragma GLOBAL_ASM("asm/nonmatchings/31A10/func_80030EA0.s")
#ifdef NON_MATCHING
void func_80030EA0(s32 arg0, s32 arg1, u8 *arg2)
{
  s32 temp_t3;
  temps *temp_t0;
  gDPPipeSync(gMasterGfxPos++);
  gDPSetTextureLUT(gMasterGfxPos++, 2 << 14);
  for (; (*arg2) != 0xFF; arg2++)
  {
    if ((*arg2) & 0x80)
    {
      temp_t3 = (*arg2) & 0x1F;
      switch ((*arg2) & 0x60)
      {
        case 0x0:
          gDPLoadTextureTile_4b(gMasterGfxPos++, &D_803232A0[temp_t3], 2, 304, 0, 0, 0, 303, 12, 0, 0 | 0, 0 | 0, 0, 0, 0, 0);
          break;

        case 0x20:
          gDPLoadTLUT_pal16(gMasterGfxPos++, 0, &gTextPalettes[temp_t3 & 0xFFFF]);
          break;

        case 0x40:
          if (temp_t3 < 0x10)
        {
          D_80092860 = temp_t3;
        }
        else
        {
          D_80092864 = temp_t3;
        }
          break;

        case 0x60:
          if (temp_t3 != 0)
        {
          if (((temp_t3 != 0x13) && (temp_t3 != 0x14)) && (temp_t3 == 0x1E))
          {
            gSPDisplayList(gMasterGfxPos++, D_8005FAA0);
          }
        }
        else
        {
          arg1 += D_8005FA90[D_80092860].unkC;
        }
          break;

      }

    }
    else
    {
      temp_t0 = &D_8005FA90[D_80092860];
      temp_t3 = (*arg2) & 0x7F;
      if (temp_t3 == 0x7F)
      {
        arg0 += temp_t0->unk8 + D_80092864;
      }
      else
      {
        gSPTextureRectangle(gMasterGfxPos++, arg0 << 2, arg1 << 2, (arg0 + temp_t0->unk0) << 2, (0, (arg1 + temp_t0->unk4) << 2), 0, (D_8005FA90[D_80092860].unk0 * temp_t3) * 32, 0, (qs510_t) (1 * 0x0400), (qs510_t) (1 * 0x0400));
        arg0 = (arg0 + D_8005FA90[D_80092860].unk8) + D_80092864;
      }
    }
  }

  gDPPipeSync(gMasterGfxPos++);
  gDPSetTextureLUT(gMasterGfxPos++, 0 << 14);
}
#endif
