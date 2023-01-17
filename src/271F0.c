#include "common.h"

extern u8 D_80053CAC;
extern u8 D_8008FCC6;

typedef struct {
    s16 map;
    s16 submap;
    s8 bgm;
    s8 pad;
}bgmData;


extern bgmData D_80053B00[];

#pragma GLOBAL_ASM("asm/nonmatchings/271F0/func_800265F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/271F0/func_80026658.s")

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
