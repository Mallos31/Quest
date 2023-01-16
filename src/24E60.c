#include "common.h"


extern OSMesgQueue D_8007B320;
extern OSIoMesg D_8008D070;
//#pragma GLOBAL_ASM("asm/nonmatchings/24E60/func_80024260.s")
void func_80024260(u8* arg0, void* arg1, u32 arg2) {
    u32 var_s0;

    osInvalICache(arg1, (s32) arg2);
    osInvalDCache(arg1, (s32) arg2);
    if (arg2 != 0) {
        do {
            if ((s32) arg2 >= 0x4001) {
                var_s0 = 0x4000;
            } else {
                var_s0 = arg2;
            }
            osPiStartDma(&D_8008D070, 0, 0, (u32) arg0, arg1, var_s0, &D_8007B320);
            osRecvMesg(&D_8007B320, NULL, 1);
            arg2 -= var_s0;
            arg0 = &arg0[var_s0];
            arg1 = (void*)((u8*)arg1 + var_s0);
        } while (arg2 != 0);
    }
}
#pragma GLOBAL_ASM("asm/nonmatchings/24E60/func_80024330.s")
