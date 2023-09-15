#include "common.h"

typedef struct {  //needs more work
    s16 unk0;
    s16 unk2;
    u8 unk4;
    u8 unk5;
    s8 unk6;
    s8 unk7;
    s32 unk8;
    s32 unkC;    
}unk32218s;

typedef struct {
    u8 unk0;
    u8 unk1;
    u8 unk2;
}unk31cf0s;

typedef struct {
    char unk0[0x8];
}unk6f3c0s;

extern unk32218s D_8006CC88;
extern unk32218s D_8006E288;
extern unk32218s D_8006E298;
extern u8 gPakMenuScrollAmt;
extern u16 D_80092D1A;
extern s32 D_80092D1C;
extern s32 D_80092D20; //Probably a struct/array
extern s32 D_80092D30;
extern s16 D_80092D34;
extern s16 D_80092D36;
extern s32 D_8006E4B4;
extern OSMesgQueue* D_80092D28;
extern void* D_80092D2C;
extern void* D_8006E4B8[];
extern u8* D_8006E4C0[]; //alphabet texture
extern s32 D_80092CC0;


//these two MAY use some sort of struct, but that is currently unknown. Matches as-is. 
extern s32  D_8006F3C0[];
extern u16* D_8006F3F8;

void func_80031CF0(u16 arg0, s8* arg1);
void func_80031DD4(s32 arg0);
void func_80031F1C(s16 arg0, s16 arg1);
void func_80031F74(u8 *arg0);

//#pragma GLOBAL_ASM("asm/nonmatchings/328F0/func_80031CF0.s")
void func_80031CF0(u16 arg0, s8* arg1) {

    if (arg0 >= 1000) {
        arg0 = 999;
    }
    arg1[0] = (arg0 / 100) + (arg0 >= 100) + 15;
    arg1[1] = ((arg0 % 100) / 10) + (arg0 >= 10) + 15;
    arg1[2] = (arg0 % 10) + 16;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/328F0/func_80031DD4.s")
void func_80031DD4(s32 arg0)
{
    u8 temp_t7;
    u16 *var_a0;
    s32 i;
    s32 j;
    u32* var_a1;
    
    if (arg0 == 1) {
        D_80092D30 += 6;
        return;
    }
    
    if (arg0 == 0xA) {
        D_80092D36 += 0xD;
        func_80031F1C(D_80092D34, D_80092D36);
        return;
    }
    
    if ((arg0 < 0xF) || (D_80092CC0 < arg0)) {
        arg0 = 0x3B;
    }

    arg0 -= 0xF;
    var_a0 = (u16*)D_80092D30;
    i = 0;
    var_a1 = (((((arg0) & 0xF8) * 0xC) / 2) * 8) 
             + ((((arg0) & 7) * 8) / 2) + (s32)D_8006E4C0;
    
    for (i = 0; i < 0xC; i++) {
        for(j = 28; j >= 0; j -= 4, var_a0++) {
            temp_t7 = ((*var_a1) >> j) % 0x10;
            if (temp_t7 != 0) {
                *var_a0 = D_8006F3F8[temp_t7];
            }
        }

        var_a0 += 0x138;
        var_a1 += 0x8;
    }
    
    D_80092D30 += 0x12;
}


//#pragma GLOBAL_ASM("asm/nonmatchings/328F0/func_80031F1C.s")
void func_80031F1C(s16 arg0, s16 arg1) {
    D_80092D34 = arg0;
    D_80092D36 = arg1;
    D_80092D30 = (arg0 + arg1 * 0x140) * 2 + D_80092D20;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/328F0/func_80031F74.s")
void func_80031F74(u8* arg0) {
    while (*arg0 != 0) {
        func_80031DD4(*arg0++);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/328F0/func_80031FBC.s")


//#pragma GLOBAL_ASM("asm/nonmatchings/328F0/func_80032020.s")

void func_80032020(s32 arg0) {
    D_8006F3F8 = &D_8006F3C0[arg0 * 2];
}

#pragma GLOBAL_ASM("asm/nonmatchings/328F0/func_80032040.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/328F0/func_80032218.s")
void func_80032218(unk32218s* arg0, s32 arg1) {
    s32 var_s1;
    unk32218s* var_s0;

    var_s1 = 0;
    if (arg1 > 0) {
        var_s0 = arg0;
        do {
            func_80032040(var_s0->unk0, var_s0->unk2, var_s0->unk4, var_s0->unk5, var_s0->unk8, var_s0->unkC, 2);
            var_s1++;
            var_s0++;
        } while (var_s1 != arg1);
    }
}

//#pragma GLOBAL_ASM("asm/nonmatchings/328F0/func_8003228C.s")
void func_8003228C(void)
{
  s32 temp_v0;
  osWritebackDCacheAll();
  osRecvMesg(D_80092D28, &D_80092D2C, 1);
  if (D_80092D1C != 0)
  {
    osViSwapBuffer(D_8006E4B8[D_8006E4B4 & 1]);
    temp_v0 = D_8006E4B4 + 1;
    do { 
        D_8006E4B4 = temp_v0; D_80092D20 = D_8006E4B8[temp_v0 & 1]; 
       } while (0);
    D_80092D1C = 0;
  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/328F0/func_8003232C.s")


//#pragma GLOBAL_ASM("asm/nonmatchings/328F0/func_80032560.s")
void func_80032560(u16 arg0) {
    unk31cf0s sp1C;

    func_80032020(1);
    func_80031CF0(arg0, &sp1C);
    func_80031F1C(0xC8, 0xAD);
    func_80031FBC((u8* ) &sp1C, 3U);
}

#pragma GLOBAL_ASM("asm/nonmatchings/328F0/func_800325A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/328F0/func_800325FC.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/328F0/func_8003265C.s")
void func_8003265C(void) {
    s32 var_s0;
    u8 temp_v0;

    func_80032218(&D_8006CC88, 0xF0);
    func_80032560(D_80092D1A);
    temp_v0 = gPakMenuScrollAmt;
    if (temp_v0 != 0) {
        func_80032218(&D_8006E288, 1);
    }
    temp_v0 = gPakMenuScrollAmt;
    if ((s32) temp_v0 < 0xA) {
        func_80032218(&D_8006E298, 1);
    }
    var_s0 = 0;
    do {
        func_8003232C(var_s0);
        var_s0 += 1;
    } while (var_s0 != 6);
    D_80092D1C = 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/328F0/func_80032704.s")
