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

#ifdef NON_MATCHING
s32 func_80024330(s32 arg0, u8 *arg1, u16 arg2)
{
  s32 temp_hi;
  s32 temp_hi_2;
  s32 temp_hi_3;
  s32 temp_lo;
  //s32 temp_lo;
  //s32 temp_lo;
  s32 temp_t1;
  s32 var_a0;
  s32 var_a2_2;
  s32 var_v0;
  s32 var_v1;
  u8 *var_a1_2;
    
  if (arg2 & 2)
  {
    var_v1 = 10000;
    var_a0 = 4;
  }
  else
  {
    var_a0 = 0;
    if (arg2 & 4)
    {
      var_v1 = 10;
      var_a0 = 1;
    }
    else
    {
      var_v1 = 10;
      if (arg0 >= 10)
      {
        do
        {
          var_a0 += 1;
          var_v1 *= 10;
        }
        while (arg0 >= var_v1);
      }
      var_v1 /= 10;
    }
  }
  if (var_a0 != 0)
  {
    temp_t1 = -(var_a0 & 3);
    if (temp_t1 != 0)
    {
      do
      {
        temp_lo = arg0 / var_v1;
        arg0 %= var_v1;
        var_a0 -= 1;
        *arg1 = (u8) temp_lo;
        var_v1 /= 10;
        arg1 += 1;
      }
      while ((temp_t1 + var_a0) != var_a0);
      if (var_a0 != 0)
      {
        goto loop_13;
      }
    }
    else
    {
      do
      {
        loop_13:
        temp_hi = arg0 % var_v1;

        var_a0 -= 4;
        *arg1 = (u8) (arg0 / var_v1);
        temp_lo = var_v1 / 10;
        arg1 += 4;
        temp_hi_2 = temp_hi % temp_lo;
        arg1[1] = (s8) (temp_hi / temp_lo);
        temp_lo /= 10;
        temp_hi_3 = temp_hi_2 % temp_lo;
        arg1[2] = (s8) (temp_hi_2 / temp_lo);
        temp_lo = temp_lo / 10;
        arg0 = temp_hi_3 % temp_lo;
        arg1[3] = (s8) (temp_hi_3 / temp_lo);
        var_v1 = temp_lo / 10;
      }
      while (var_a0 != 0);
    }
  }
  arg1[0] = (u8) arg0;
  arg1[1] = 0xFF;
  if (arg2 & 1)
  {
    var_v0 = 1;
    var_a1_2 = arg1;
    var_a2_2 = var_a0;
    if (var_a0 != 0)
    {
      loop_17:
      var_a2_2 -= 1;

      if ((*var_a1_2) == 0)
      {
        *var_a1_2 = 0x20;
      }
      else
      {
        var_v0 = 0;
      }
      var_a1_2 += 1;
      if ((var_a2_2 != 0) && (var_v0 != 0))
      {
        goto loop_17;
      }
    }
  }
  return var_a0 + 1;
}
#endif
