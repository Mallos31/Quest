#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/23740/func_80022B40.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/23740/func_80022F60.s")
void func_80022F60(f32 arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4)
{
  f32 temp_f0;
  f32 temp_f16;
  f32 temp_f18;
  f32 temp_f2;
  f64 temp_f14;
    
  temp_f0 = arg0 * arg0;
  temp_f2 = arg0 * temp_f0;
  temp_f14 = temp_f2;
  temp_f18 = temp_f2 - temp_f0;
  temp_f16 = ((( temp_f0 * 3.0) - temp_f14) - temp_f14);
  *arg1 = 1.0 - temp_f16;
  *arg2 = temp_f16;
  temp_f18 = temp_f2 - temp_f0;
  *arg3 = (temp_f18 - temp_f0) + arg0;
  *arg4 = temp_f18;
}