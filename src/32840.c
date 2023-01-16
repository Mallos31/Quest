#include "common.h"

extern u8 D_DA68F0[];
extern u8 D_DC1620[];
extern u8 D_E27840[];
extern u8 D_E7E800[];
extern u8 D_80100000[];

//#pragma GLOBAL_ASM("asm/nonmatchings/32840/func_80031C40.s")
void func_80031C40(void) {
    func_80024260(D_DA68F0, D_80100000, D_DC1620 - D_DA68F0);
}

//#pragma GLOBAL_ASM("asm/nonmatchings/32840/func_80031C78.s")
void func_80031C78(void) {
    func_80024260(D_DC1620, D_80100000, D_E27840 - D_DC1620);
}

//#pragma GLOBAL_ASM("asm/nonmatchings/32840/func_80031CB0.s")
void func_80031CB0(void) {
    func_80024260(D_E27840, D_80100000, D_E7E800 - D_E27840);
}
