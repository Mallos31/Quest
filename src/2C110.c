#include "common.h"

extern Gfx D_8005FAA0[];
extern u16 D_8008FD0C;
extern char D_80071750[];
extern u16 D_8008FD20;
extern s8 D_8008FD22;
extern s32 D_8008FD24;
extern s8 D_8008FD29;
extern s8 D_8008FD2A;
extern u8 D_8008FD2C;
extern s8 D_8008FD31[];
extern s8 D_8008FD22;
extern u8 D_8008FD28;
extern s8 D_8008FD2B;

//#pragma GLOBAL_ASM("asm/nonmatchings/2C110/func_8002B510.s")
void func_8002B510(s32 arg0) {
    gGameMode = 2;
    D_8008FD0C = D_8008FD0C | arg0 | 0x4000;
    D_8008FD20 = 0x1000;
    D_8008FD28 = 0xFF;
    D_8008FD2A = 0;
    D_8008FD29 = 0;
    D_8008FD22 = 0;
    D_8008FD2B = 0;
    D_8008FD2C = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/2C110/func_8002B57C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/2C110/func_8002B6F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/2C110/func_8002B8C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/2C110/func_8002BCA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/2C110/func_8002C818.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/2C110/func_8002D5D4.s")
void func_8002D5D4(void) {

    D_8008FD29 -= 1;
    if (D_8008FD29 < 0) {
        D_8008FD20 &= ~7;
        D_8008FD20 = D_8008FD20;
    }
}

void func_8002D614(void) {
    s32 temp_v0;
    s32 temp_v1;
    

    temp_v0 = func_8003195C(D_80092870, *&D_8008FD31[D_8008FD2A * 2]);
    if (temp_v0 != 0) {
        D_8008FD24 = temp_v0;
        // temp_v1 = -func_80031BB0(temp_v0);
        switch (-func_80031BB0(temp_v0)) {
            case 1:
            D_8008FD22 = 8;
            D_8008FD29 = 0xA;
            break;
                
            case 4:
            D_8008FD22 = 0xC;
            D_8008FD29 = 0xA;
            break;
                
            default:
            D_8008FD22 = 0x11;
            D_8008FD29 = 0xA;
            break;
        }

        D_8008FD20 &= ~7 ;
        D_8008FD20 |= 5;
        D_8008FD20 &= ~0x2000;
    } else {
        D_8008FD20 &= ~7 ;
        D_8008FD20 |= 5;
        D_8008FD20 &= ~0x2000;
        D_8008FD22 = 0x16;
        D_8008FD29 = 0xA;
        D_8008FD31[D_8008FD2A * 2] = -1;
    }
   
}

#pragma GLOBAL_ASM("asm/nonmatchings/2C110/func_8002D748.s")

#pragma GLOBAL_ASM("asm/nonmatchings/2C110/func_8002D8BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/2C110/func_8002DBE0.s")
/*void func_8002DBE0(void) {
    s32 temp_v0;
    s32 temp_v1;
    u16 temp_t2;
    u16 temp_t4;
    u16 temp_t6;
    u16 temp_t6_2;
    u16 temp_t8;

    func_8003A7BC(D_80071750, D_8008FD2A, D_8008FD24);
    temp_v0 = func_80031ACC(*(&D_8008FD30 + (D_8008FD2A * 2)), D_8008FD24);
    if (temp_v0 != 0) {
        D_8008FD24 = temp_v0;
        temp_v1 = -func_80031BB0(temp_v0);
        if (temp_v1 != 1) {
            if (temp_v1 != 3) {
                D_8008FD22 = 0x11;
                D_8008FD29 = 0xA;
            } else {
                D_8008FD22 = 0x10;
                D_8008FD29 = 0xA;
            }
        } else {
            D_8008FD22 = 8;
            D_8008FD29 = 0xA;
        }
        temp_t6 = D_8008FD20 & 0xFFF8;
        temp_t8 = temp_t6 & 0xBFFF;
        D_8008FD20 = temp_t6;
        D_8008FD20 = temp_t8;
        D_8008FD20 = temp_t8 | 0x1000;
        return;
    }
    temp_t2 = D_8008FD20 & 0xDFFF;
    temp_t4 = temp_t2 & 0xFFF8;
    temp_t6_2 = temp_t4 & 0xBFFF;
    D_8008FD20 = temp_t6_2 | 0x1000;
    D_8008FD2C++;
}*/

#pragma GLOBAL_ASM("asm/nonmatchings/2C110/func_8002DD18.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/2C110/func_8002DF6C.s")
void func_8002DF6C(void) {
    gSPDisplayList(gMasterGfxPos++, D_8005FAA0);
    gDPSetTextureLUT(gMasterGfxPos++, G_TT_RGBA16);
    D_8008FD0C &= -17;
}

#pragma GLOBAL_ASM("asm/nonmatchings/2C110/func_8002DFD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/2C110/func_8002E234.s")

#pragma GLOBAL_ASM("asm/nonmatchings/2C110/func_8002E404.s")
