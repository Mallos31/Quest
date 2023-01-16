#include "common.h"

extern unk232f4s D_80085358;
extern u16 D_8008C592;

#pragma GLOBAL_ASM("asm/nonmatchings/FA60/func_8000EE60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/FA60/func_8000F0BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/FA60/func_8000F238.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/FA60/func_8000F5A4.s")
s32 func_8000F5A4(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    if (((arg3 <= arg1) && (arg1 < arg5)) || ((arg5 <= arg1) && (arg1 < arg3))) {
        if ((arg2 <= arg0) && (arg4 < arg0)) {
            return 1;
        }
        if ((arg0 <= arg2) && (arg0 < arg4)) {
            return 0;
        }
        if ((arg3 != arg5) && ((((arg1 - arg3) * ((arg2 - arg4) / (arg3 - arg5))) + arg2) < arg0)) {
            return 1;
        }
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/FA60/func_8000F6A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/FA60/func_8000FCBC.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/FA60/func_8000FDE0.s") //!TODO cleanup
s32 func_8000FDE0(f32 arg0, f32 arg1, f32 arg2)
{
  f32 var_f0;
  s32 ret;
  unk84f1cs *new_var;
  f32 var_f2;
  s32 var_s2;
  unkfde0s *var_s0;
  new_var = D_80084F1C;
  ret = 0;
  if ((D_80084F1C->unk8 == 0) || ((var_s2 = new_var->unk8, (D_8008C592 & 1) != 0)))
  {
    return 0;
  }
  var_s0 = D_80084F1C->unk4;
  if (D_80084F1C->unk8 != 0)
  {
    loop_5:
    if (func_8000FFE8(var_s0) != 0)
    {
      D_80085358.unk0 = arg0 - var_s0->unk0;
      D_80085358.unk4 = arg1 - var_s0->unk4;
      func_800232F4(var_s0->unk8, &D_80085358);
      var_f0 = D_80085358.unk0;
      if (var_f0 < 0.0f)
      {
        var_f0 = -var_f0;
      }
      var_f2 = D_80085358.unk4;
      if (var_f2 < 0.0f)
      {
        var_f2 = -var_f2;
      }
      if ((var_f0 < var_s0->unkC) && (var_f2 < var_s0->unk10))
      {
        if ((var_s0->unk14 & 2) || (func_8000FF54(arg2 - var_s0->unk8) != 0))
        {
          func_80010080(var_s0);
          ret = 1;
        }
      }
      else
      {
        goto block_15;
      }
    }
    else
    {
      block_15:
      var_s2 -= 1;

      var_s0 += 0x1;
      if (var_s2 != 0)
      {
        goto loop_5;
      }
    }

  }
  return ret;
}

#pragma GLOBAL_ASM("asm/nonmatchings/FA60/func_8000FF54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/FA60/func_8000FFE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/FA60/func_80010080.s")

#pragma GLOBAL_ASM("asm/nonmatchings/FA60/func_800100D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/FA60/func_80010150.s")

#pragma GLOBAL_ASM("asm/nonmatchings/FA60/func_800102D0.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/FA60/func_80010510.s")
void func_80010510(s32 arg0) {
    s32 temp_v1;

    currentTime = arg0;
    if (dayLength <= currentTime) {
        currentTime = currentTime - dayLength;
        if (currentDay < 9999) {
            currentDay++;
            }
    }
    D_800859D8 = currentTime;
}

#pragma GLOBAL_ASM("asm/nonmatchings/FA60/func_80010564.s")

#pragma GLOBAL_ASM("asm/nonmatchings/FA60/func_80010B58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/FA60/func_80010CAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/FA60/func_80010E70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/FA60/func_80010EC4.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/FA60/func_800110D0.s")
void func_800110D0(void) {
    unk110d0s* var_v0;
    s32 var_v1;

    var_v0 =(unk110d0s*) &D_800859E8;
    var_v1 = 8;
    while (var_v1 > 0) {
        var_v0->unk0 = 0;
        var_v0++;
        var_v1--;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/FA60/func_80011100.s")

#pragma GLOBAL_ASM("asm/nonmatchings/FA60/func_80011150.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/FA60/func_80011170.s")
void func_80011170(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    unk11170s* temp_v0;

    temp_v0 = &D_800859E8[arg0];
    temp_v0->unk4 = arg1;
    temp_v0->unkC = arg2;
    temp_v0->unk8 = arg2;
    temp_v0->unk14 = arg3;
    temp_v0->unk10 = arg3;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/FA60/func_800111A4.s")
void func_800111A4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    unk11170s* temp_v0;

    temp_v0 = &D_800859E8[arg0];
    temp_v0->unk18 = arg1;
    temp_v0->unk1C = arg2;
    temp_v0->unk20 = arg2;
    temp_v0->unk28 = arg3;
    temp_v0->unk24 = arg3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/FA60/func_800111D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/FA60/func_800111F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/FA60/func_80011768.s")
