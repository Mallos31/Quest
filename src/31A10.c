#include "common.h"

//#pragma GLOBAL_ASM("asm/nonmatchings/31A10/func_80030E10.s")
void func_80030E10(u8 *arg0, u8 *arg1)
{
    s32 i;

    for(i = 0; arg1[i] != 0xFF; i++) {
        arg0[i] = arg1[i];
    }
    arg0[i] = 0xFF;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/31A10/func_80030E58.s")
void func_80030E58(void) {
    func_80024260(D_D3E240, &D_80331A30, 0x80);    //text palettes
    func_80024260(D_D3E2C0, &D_803232A0, 0xE790);  //text gfx
}

#pragma GLOBAL_ASM("asm/nonmatchings/31A10/func_80030EA0.s")
