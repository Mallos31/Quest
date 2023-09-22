/*rename to ovl_load.c*/

#include "common.h"

extern u8 D_DA68F0[];
extern u8 D_DC1620[];
extern u8 D_E27840[];
extern u8 gSoundBank0Ctl[];
extern u8 D_80100000[];

//#pragma GLOBAL_ASM("asm/nonmatchings/32840/LoadOvl_TitleScreen.s")
void LoadOvl_TitleScreen(void) {
    dma_write(D_DA68F0, D_80100000, D_DC1620 - D_DA68F0);
}

//#pragma GLOBAL_ASM("asm/nonmatchings/32840/LoadOvl_Splash_and_Intro.s")
void LoadOvl_Splash_and_Intro(void) {
    dma_write(D_DC1620, D_80100000, D_E27840 - D_DC1620);
}

//#pragma GLOBAL_ASM("asm/nonmatchings/32840/LoadOvl_Ending.s")
void LoadOvl_Ending(void) {
    dma_write(D_E27840, D_80100000, gSoundBank0Ctl - D_E27840);
}

