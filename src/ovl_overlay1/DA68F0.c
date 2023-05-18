#include "common.h"

extern s32 D_80103420_DA9D10;
extern s32 D_80103424_DA9D14;
extern s32 D_8011AD30;
extern s32 D_8011AD34;
extern s32 D_8011AD38;
extern s32 D_8011AD3C;
extern s32 D_8011AD40;
extern s32 D_8011AD44;
extern u8 D_80103138_DA9A28[];


void func_80100BA0_DA7490(u32 arg0);

//#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay1/DA68F0/func_80100000_DA68F0.s")
void func_80100000_DA68F0(void) {
    D_8011AD30 = 0;
    D_8011AD44 = 0;
    D_80103424_DA9D14 = 1;
    D_80103420_DA9D10 = 0;
    D_8011AD34 = 1;
    D_8011AD3C = 0;
    D_8011AD40 = 8;
    D_8011AD38 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay1/DA68F0/func_8010004C_DA693C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay1/DA68F0/func_801000A8_DA6998.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay1/DA68F0/func_801006D8_DA6FC8.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay1/DA68F0/func_80100B14_DA7404.s")
void func_80100B14_DA7404(void) {
    gSPDisplayList(gMasterGfxPos++, D_80103138_DA9A28);
    gDPSetEnvColor(gMasterGfxPos++, 0x00, 0x00, 0x00, 0xFF);
    func_80100BA0_DA7490(D_8011AD44);
    D_8011AD34--;
    if (D_8011AD34 == 0) {
        D_8011AD44 = 0xF;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay1/DA68F0/func_80100BA0_DA7490.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay1/DA68F0/func_80102E30_DA9720.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay1/DA68F0/func_80102F14_DA9804.s")
