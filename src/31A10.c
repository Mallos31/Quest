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

