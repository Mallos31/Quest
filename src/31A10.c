#include "common.h"

extern void* gTextPalettes;
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
