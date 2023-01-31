#include "common.h"
typedef struct {
    u16 unk0;
    u16 unk2;
    char unk4[0x18];
    f32 unk1C;
    char unk20[0x14];
    f32 unk34;
}unke350s;
extern f64 D_80071238;



typedef struct Unkstruct {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    s16 unk8;
    s16 unkA;
    char unkC[0x186];
    s16 unk192;
} Unkstruct;

extern Unkstruct D_800826D8[];
extern Unkstruct D_80082866[];
extern s32 D_8004C428;
extern u16 D_80082868;
extern u16 D_8008286A;

#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000BD10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000C42C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000C4C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000CE8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000D518.s")

#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000D9BC.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000DB10.s")
//
void func_8000DB10(void)
{
  s32 var_a0;
  s32 *var_v0;
  s32 new_var;
  var_v0 = &D_80084E60; //Door anim data
  new_var = var_a0;
  var_a0 = 3;
  do
  {
    new_var = var_a0;
    *var_v0 = 0;
    var_v0 += 7;
    var_a0 -= 1;
  }
  while (new_var);
}

//#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000DB38.s")
//var_v0->unk0 is door anim countdown timer unk10 is a pointer to door position data
s32 func_8000DB38(s32 arg0) {
    s32 var_v1;
    unkdb38s* var_v0;

    var_v1 = 4;
    var_v0 = &D_80084E60;
loop_1:
    if ((var_v0->unk0 != 0) && (arg0 == var_v0->unk10)) {
        var_v1 = 5 - var_v1;
    } else {
        var_v1--;
        var_v0++;
        if (var_v1 != 0) {
            goto loop_1;
        }
    }
    return var_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000DB7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000DC4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000DDB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000E10C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000E224.s")

#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000E2C0.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000E350.s")
void func_8000E350(unke350s *arg0)
{
  arg0->unk1C = (f32) (arg0->unk1C + (arg0->unk34 / 2));
  arg0->unk34 = (f32) (((f64) arg0->unk34) - D_80071238);
  gDPSetEnvColor(gMasterGfxPos++, 0xFF, 0xFF, 0xFF, arg0->unk0 * 5);
}

//#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000E3C4.s")
void func_8000E3C4(void) {
    unke3c4s* var_a0;
    unke3c4s* var_v1;
    s32 var_v0;

    D_8007D2D0 = 0;
    var_v0 = 8;
    var_v1 = &D_80084098;
    var_a0 = &D_80084180;
    do {
        var_a0->unk0 = 0;
        var_v1->unk0 = 0;
        var_a0->unk1C = 0;
        var_v1->unk1C = 0;
        var_a0->unk38 = 0;
        var_v1->unk38 = 0;
        var_a0->unk54 = 0;
        var_v0 -= 4;
        var_v1->unk54 = 0;
        var_v1++;
        var_a0++;
    } while (var_v0 != 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000E418.s")

#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000E588.s")

#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000E774.s")

#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000EB30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000EDD8.s")

