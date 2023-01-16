#include "common.h"

typedef struct {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    char unk8[0x10];
}unk1d474s2;

typedef struct {
    unk1d474s2* unk0;
    s32 unk4;  //probably very wrong
}unk1d474s;

typedef struct unk_1c560_s{
    char unk0[0x30];
    s32 unk30;
    s32 unk34;
}unk1c560s; //Map Data Struct

extern s32 gNextSubmap; //gNextSubmap
extern u16 gAllowBattles; //gAllowBattles
extern s32 D_8008C560;
extern s32 D_8008C564;
extern f32 D_8008C574;
extern s16 D_8008C578;
extern u16 D_8008C592;
//extern unk1c560s* gMapData; //gMapData


//#pragma GLOBAL_ASM("asm/nonmatchings/1D160/func_8001C560.s")
void func_8001C560(void) {
    s32 temp_v1;

    D_8008C592 &= 0x8000;
    D_8008C574 = 0.0f;
    D_8008C578 = 0;
    if (gAllowBattles & 1) {
        if (gMapData->unk30 != 0) {
            D_8008C560 = gMapData->unk30 + (gNextSubmap * 8);
            D_8008C564 = gMapData->unk34 + (gNextSubmap * 0x10);
            return;
        }
        D_8008C560 = 0;
        D_8008C564 = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/1D160/func_8001C5F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/1D160/func_8001C8C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/1D160/func_8001CACC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/1D160/func_8001CFE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/1D160/func_8001D358.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/1D160/func_8001D474.s") //!TODO rejigger the loop
void* func_8001D474(f32 arg0, f32 arg1, unk1d474s* arg2) {
    s32 var_v0;
    unk1d474s2* var_v1;

    var_v1 = NULL;
    if (arg2 != NULL) {
        var_v0 = arg2->unk4;
        var_v1 = arg2->unk0;
        
        while (var_v0 != 0) {
            if (!(var_v1->unk0 <= arg0) || !(var_v1->unk2 <= arg1) || !((arg0 - var_v1->unk0) <= var_v1->unk4) || !((arg1 - var_v1->unk2) <= var_v1->unk6)) {
                var_v0--;
                var_v1++;
            } else {
                break;
            }
        }
        if (var_v0 == 0) {
            var_v1 = NULL;
        }
    }
    return var_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/1D160/func_8001D538.s")

#pragma GLOBAL_ASM("asm/nonmatchings/1D160/func_8001D640.s")

void func_8001D820(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/1D160/func_8001D828.s")

void func_8001D89C(void) {
}
