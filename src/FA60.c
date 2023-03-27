#include "common.h"

typedef struct {
    s32 unk0[0xC];
}unk111d8s; //For probably unused function func_800111D8

typedef struct {
    s32 unk0;
    s32 unk4;
    char unk8[0x10];
    s32 unk18;
    char unk1C[0x10];
    s32 unk2C;
}unk80011100s; //size 0x30

extern unk80011100s D_80085B38;

extern unk111d8s D_80085A14[]; //For probably unused function func_800111D8

extern unk232f4s D_80085358;
extern u16 D_8008C592;
extern f64 D_80071268;
extern f64 D_80071270;
extern f64 D_80071278;
extern s32 D_80085B68[4][3];
extern s32 D_8008C634;

extern s32 D_8008538C;
extern s32 D_80085390;
extern s32 D_80085394;
extern u16* D_80085398;
extern u8 D_800853A0[];

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
#ifdef NON_MATCHING
s32 func_8000F6A4(f32 *arg0, f32 *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6)
{
  s32 sp5C;
  f32 sp58;
  f32 sp54;
  f32 sp4C;
  f32 sp3C;
  f32 sp34;
  f32 sp30;
  f32 sp2C;
  f32 sp28;
  f32 sp24;
  f32 sp20;
  f32 temp_f0;
  f32 temp_f0_2;
  f32 temp_f0_3;
  f32 temp_f0_4;
  f32 temp_f0_5;
  f32 temp_f12_2;
  f32 temp_f12_3;
  f32 temp_f12_4;
  f32 temp_f14;
  f32 temp_f14_2;
  f32 temp_f14_3;
  f32 temp_f16;
  f32 temp_f16_2;
  f32 temp_f18;
  f32 temp_f18_2;
  f32 temp_f2_2;
  f32 temp_f2;
  f32 temp_f2_3;
  f32 temp_f2_4;
  f32 temp_f2_5;
  f32 temp_f6;
  f32 var_f12;
  f32 var_f14;
  f32 var_f14_2;
  f32 var_f14_3;
  f32 var_f14_4;
  f32 var_f16;
  f32 var_f16_2;
  f32 var_f16_3;
  f32 var_f18;
  f32 var_f18_2;
  f32 var_f18_3;
  f32 var_f20;
  f32 var_f20_2;
  f32 var_f20_3;
  f32 var_f2;
  s32 var_v1;
    
  var_f18 = (arg3 <= arg5) ? (arg3) : (arg5);
  var_f16 = (arg5 < arg3) ? (arg3) : (arg5);
  var_f20 = (arg4 <= arg6) ? (arg4) : (arg6);
  var_f14 = (arg6 < arg4) ? (arg4) : (arg6);
  if (((((*arg0) < (var_f18 - arg2)) || ((var_f16 + arg2) < (*arg0))) || ((temp_f2 = *arg1, temp_f2 < (var_f20 - arg2)))) || ((var_f14 + arg2) < temp_f2))
  {
    return 0;
  }
  if (arg3 == arg5)
  {
    var_f18_2 = (-(arg6 - arg4)) / (arg5 - arg3);
    var_f18_2 = 1.0f;
    var_f16_2 = 0.0f;
    var_f20_2 = -arg3;
  }
  else
    if (arg4 == arg6)
  {
    var_f18_2 = 0.0f;
    var_f16_2 = 1.0f;
    var_f20_2 = -arg4;
  }
  else
  {
    var_f16_2 = 1.0f;
    var_f20_2 = ((-var_f18_2) * arg3) - arg4;
  }
  var_f14_2 = ((temp_f2 * var_f16_2) + (var_f18_2 * (*arg0))) + var_f20_2;
  if (var_f14_2 < 0.0f)
  {
    var_f14_2 = -var_f14_2;
  }
  sp5C = 0;
  sp4C = var_f14_2;
  sp54 = var_f16_2;
  sp58 = var_f18_2;
  var_v1 = 0;
  temp_f2_2 = var_f14_2 / _nsqrtf((var_f18_2 * var_f18_2) + (var_f16_2 * (sp58 = var_f16_2)));
  sp3C = temp_f2_2;
  if (temp_f2_2 < arg2)
  {
    if (var_f18_2 == 0.0f)
    {
      temp_f0 = *arg0;
      var_f2 = 1.0f;
      var_f12 = 0.0f;
      sp24 = temp_f0;
      var_f14_3 = -temp_f0;
      sp20 = *arg1;
    }
    else
      if (var_f16_2 == 0.0f)
    {
      temp_f0_2 = *arg1;
      var_f2 = 0.0f;
      var_f12 = 1.0f;
      sp20 = temp_f0_2;
      var_f14_3 = -temp_f0_2;
      sp24 = *arg0;
    }
    else
    {
      var_f2 = (-1.0f) / var_f18_2;
      sp24 = *arg0;
      temp_f6 = *arg1;
      var_f12 = 1.0f;
      sp20 = temp_f6;
      var_f14_3 = ((-var_f2) * sp24) - temp_f6;
    }
    temp_f0_3 = (var_f18_2 * var_f12) - (var_f2 * var_f16_2);
    sp34 = ((var_f14_3 * var_f16_2) - (var_f20_2 * var_f12)) / temp_f0_3;
    sp30 = ((var_f2 * var_f20_2) - (var_f18_2 * var_f14_3)) / temp_f0_3;
      
    var_f2 = arg3;
    var_f18_3 = (arg3 <= arg5) ? (arg5) : (arg3);
    var_f16_3 = (arg5 < arg3) ? (arg5) : (arg3);
    var_f20_3 = (arg4 <= arg6) ? (arg4) : (arg6);
    var_f14_4 = (arg6 < arg4) ? (arg4) : (arg6);
    if ((((sp34 < var_f18_3) || (var_f16_3 < sp34)) || (sp30 < var_f20_3)) || (var_f14_4 < sp30))
    {
      temp_f18 = var_f2 - sp24;
      temp_f16 = arg4 - sp20;
      temp_f0_4 = _nsqrtf((temp_f18 * temp_f18) + (temp_f16 * temp_f16));
      if (temp_f0_4 < arg2)
      {
        temp_f2_3 = var_f2 - (*arg0);
        temp_f14 = arg4 - (*arg1);
        sp2C = temp_f2_3;
        sp28 = temp_f14;
        temp_f12_2 = (f32) (((((f64) arg2) + D_80071268) - ((f64) temp_f0_4)) / ((f64) _nsqrtf((temp_f2_3 * temp_f2_3) + (temp_f14 * temp_f14))));
        *arg0 -= temp_f2_3 * temp_f12_2;
        *arg1 -= temp_f14 * temp_f12_2;
        return 1;
      }
      temp_f18_2 = arg5 - (*arg0);
      temp_f16_2 = arg6 - (*arg1);
      temp_f0_5 = _nsqrtf((temp_f18_2 * temp_f18_2) + (temp_f16_2 * temp_f16_2));
        
      if (temp_f0_5 < arg2)
      {
        var_f16_2 = 1.0f;
        temp_f2_4 = var_f2 - (*arg0);
        temp_f14_2 = arg4 - (*arg1);
        sp2C = temp_f2_4;
        sp28 = temp_f14_2;
        temp_f12_3 = (f32) (((((f64) arg2) + D_80071270) - ((f64) temp_f0_5)) / ((f64) _nsqrtf((temp_f2_4 * temp_f2_4) + (temp_f14_2 * temp_f14_2))));
        *arg0 -= temp_f2_4 * temp_f12_3;
        *arg1 -= temp_f14_2 * temp_f12_3;
        return 1;
      }
      return 0;
    }
    temp_f2_5 = sp34 - sp24;
    temp_f14_3 = sp30 - sp20;
    if (sp3C != 0.0f)
    {
      sp2C = temp_f2_5;
      sp28 = temp_f14_3;
      if (var_f18_2)
      {
        var_f12 = var_f12;
      }
      temp_f12_4 = (f32) (((((f64) arg2) + D_80071278) - ((f64) sp3C)) / ((f64) _nsqrtf((temp_f2_5 * temp_f2_5) + (temp_f14_3 * temp_f14_3))));
      *arg0 -= temp_f2_5 * temp_f12_4;
      *arg1 -= temp_f14_3 * temp_f12_4;
    }
    var_v1 = 1;
    goto block_48;
  }
  block_48:
  return var_v1;

}
#endif



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
/*needs data migration to match*/
#ifdef NON_MATCHING
void func_800100D0(void) {
    s32 i;
    currentTime = 0x1EC3;
    dayLength = 0x6978;
    currentDay = 1;
    D_8008C634 = 7;
    for (i = 0; i < 4; i++) {
        D_80085B68[i][0] = 0;
        D_80085B68[i][1] = 0;
        D_80085B68[i][2] = 0;
    }
}
#endif

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
//likely uses the unk80011100s struct. Needs research. Used in actor lighting. 
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

//#pragma GLOBAL_ASM("asm/nonmatchings/FA60/func_80011100.s")
//something to do with environment lighting. Possibly actor lighting as well. 
s32 func_80011100(void) {
    s32 i;
    unk80011100s* var_v1;

    var_v1 = &D_80085B38;
    for (i = 7; i != 0 && var_v1->unk0 != 0; i--) {
        var_v1--;
    }
    var_v1->unk0 = 1;
    var_v1->unk4 = 0;
    var_v1->unk18 = 0;
    var_v1->unk2C = 0;
    return i;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/FA60/func_80011150.s")
void func_80011150(s32 arg0) {
    D_800859E8[arg0].unk0 = 0;
}

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

//#pragma GLOBAL_ASM("asm/nonmatchings/FA60/func_800111D8.s")
/*This function appears to be uncalled. If so, the struct and global variable associated with it are also unused.*/
void func_800111D8(s32 arg0, s32 arg1) {
    D_80085A14[arg0].unk0[0] = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/FA60/func_800111F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/FA60/func_80011768.s")
