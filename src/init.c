#include <ultra64.h>
#include "common.h"

void func_800004B0(void *arg0);
void func_80000C50(s32 arg0);

extern OSThread D_80074E90;
extern OSThread D_80075040;
extern s32      D_800761F0;
extern OSMesgQueue D_800781F0;
extern OSMesg   D_80078208;

void func_80000450(s32 arg0) {
    osInitialize();
    osCreateThread(&D_80074E90, 1, (void*)func_800004B0, 0, &D_800761F0, 1);
    osStartThread(&D_80074E90);
}

void func_800004B0(void *arg0) {
    osCreatePiManager(150, &D_800781F0, &D_80078208, 50);
    osCreateThread(&D_80075040, 6, (void*)func_80000C50, arg0, &D_800781F0, 5);
    osStartThread(&D_80075040);
    do {} while (TRUE);
}
