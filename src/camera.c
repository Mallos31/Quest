#include "common.h"

typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    f32 unk24;
    f32 unk28;
    f32 unk2C;
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
}unk23360s;

typedef struct unk_23df4_s
{
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    f32 unk24;
    f32 unk28;
}unk23df4s;

extern f64 D_800716D0;
extern f64 D_800716D8;
extern MtxF D_8008D030;
extern f32 D_80086E88[4];
extern f32 D_80086ECC;
extern f32 D_80086ED4;
extern u32 D_8004D748; //possibly RNG seed
extern f64 D_800716D0;
extern f64 D_800716D8;
extern f64 D_800716E0;
extern f64 D_800716E8;
extern f64 D_800716F0;
extern f64 D_800716F8;



u32 getRandomNumber(u32 arg0);
f32 calc_arctan_in_radians(f32 x);
void func_800231B0(f32* arg0, f32* arg1);
f32 func_80023210(f32 arg0, f32 arg1);
void func_800232F4(f32 arg0, unk232f4s* arg1);
void func_80023360(unk23360s *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7);
void func_80023500(Mtx* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7);
void func_80023570(MtxF *arg0, f32 arg1, f32 arg2, f32 arg3);
void func_800236CC(Mtx* arg0, f32 arg1, f32 arg2, f32 arg3);
void func_8002371C(MtxF *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6);
void func_8002387C(Mtx* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6);
void func_800238E4(unk23df4s* arg0, f32 arg1, f32 arg2, f32 arg3, f32* arg4, f32* arg5, f32* arg6);
void func_80023974(unk23df4s* arg0, f32 arg1, f32 arg2, f32 arg3, f32* arg4, f32* arg5, f32* arg6);

void func_80023BCC(Mtx* arg0, f32 arg1, f32 arg2, f32 arg3);

void func_80023DF4(f32 (*arg0)[4], f32 arg1, f32 arg2, f32 arg3);


//#pragma GLOBAL_ASM("asm/nonmatchings/camera/getRandomNumber.s")
u32 getRandomNumber(u32 arg0)
{
  if (arg0 != 0)
  {
    return ((u32) ((D_8004D748 = (D_8004D748 * 0x41C64E6D) + 0x3039) >> 0x10)) % arg0;
  }
  return 0U;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/camera/calc_arctan_in_radians.s")//Major match assist by EllipticEllipsis
f32 calc_arctan_in_radians(f32 x) {
    f32 var_f2 = 0.0f;
    s32 temp_lo;
    s32 var_v0;
    s32 var_v1;
    
    if (x > 1.0f) {
        var_v0 = 1;
        x = 1.0f / x;
    } else if (x < -1.0f) {
        var_v0 = -1;
        x = 1.0f / x;
    } else {
        var_v0 = 0;
  }

    for (var_v1 = 12; var_v1 > 0; var_v1--) {
        temp_lo = var_v1 * var_v1;
        var_f2 = ((temp_lo * x * x) / (var_v1 * 2 + 1 + var_f2));
    }

    if (var_v0 > 0) {
        return D_800716D0 - (x / (1.0f + var_f2));
    } else if (var_v0 < 0) {
        return D_800716D8 - (x / (1.0f + var_f2));
    } else {
        return x / (1.0f + var_f2);
    }
}

/*once rodata is split, and some defines are created, this needs to look like this
f32 calc_arctan_in_radians(f32 x) {
    f32 conv = 0.0f;
    s32 sector;
    s32 i;
    
    if (x > 1.0f) {
        sector = 1;
        x = 1.0f / x;
    } else if (x < -1.0f) {
        sector = -1;
        x = 1.0f / x;
    } else {
        sector = 0;
    }

    for (i = 12; i > 0; i--) {
        conv = ((SQ(i) * x * x) / (i * 2 + 1 + conv));
    }

    if (sector > 0) {
        return M_PI / 2 - (x / (1.0f + conv));
    } else if (sector < 0) {
        return - M_PI / 2 - (x / (1.0f + conv));
    } else {
        return x / (1.0f + conv);
    }
}
*/

//#pragma GLOBAL_ASM("asm/nonmatchings/camera/func_800231B0.s")
/*Normalizes a vector. What vector?*/
void func_800231B0(f32* arg0, f32* arg1) {
    
    f32 temp_f2_2;
   
    temp_f2_2 = 1.0f / _nsqrtf((*arg0 * *arg0) + (*arg1 * *arg1));
    *arg0 *= temp_f2_2;
    *arg1 *= temp_f2_2;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/camera/func_80023210.s")
f32 func_80023210(f32 arg0, f32 arg1)
{
  f32 var_f2;
  f32 var_f6;
  if (arg1 == 0.0f)
  {
    if (arg0 >= 0.0f)
    {
      var_f2 = (f32) D_800716E0;
    }
    else
    {
      var_f6 = (f32) D_800716E8;
      var_f2 = (f32) var_f6;
    }
  }
  else
    if (arg1 > 0.0f)
  {
    var_f2 = calc_arctan_in_radians(arg0 / arg1);
  }
  else
    if ((arg1 < 0.0f) && (arg0 <= 0.0f))
  {
    var_f2 = calc_arctan_in_radians(arg0 / arg1) - D_800716F0;
  }
  else
  {
    var_f6 = ( calc_arctan_in_radians( (arg0 / arg1))) + D_800716F8;
    var_f2 = (f32) var_f6;

  }
  return var_f2;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/camera/func_800232F4.s")
/*rotates a 2D vector*/
void func_800232F4(f32 arg0, unk232f4s* arg1) {
    f32 sp1C;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;

    sp1C = sinf(arg0);
    temp_f0 = cosf(arg0);
    temp_f2 = arg1->unk0;
    arg1->unk0 = (arg1->unk4 * sp1C) - (temp_f2 * temp_f0);
    arg1->unk4 = (arg1->unk4 * temp_f0) + (temp_f2 * sp1C);
}

//#pragma GLOBAL_ASM("asm/nonmatchings/camera/func_80023360.s")
void func_80023360(unk23360s *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7)
{
    
  f32 s1;    
  f32 s2;
  f32 s3;
  f32 c1;    
  f32 c2;    
  f32 c3;
    
  s1 = sinf(arg1);
  c1 = cosf(arg1);
  s2 = sinf(arg2);
  c2 = cosf(arg2);
  s3 = sinf(arg3);
  c3 = cosf(arg3);
  
  arg0->unk0 = (f32) (((c3 * c2) + ((s3 * s1) * s2)) * arg4);
  arg0->unk4 = (f32) ((s3 * c1) * arg4);
  arg0->unk8 = (f32) ((((-s2) * c3) + ((s3 * s1) * c2)) * arg4);
  arg0->unkC = 0.0f;
  arg0->unk10 = (f32) ((((-s3) * c2) + ((c3 * s1) * s2)) * arg4);
  arg0->unk14 = (f32) ((c3 * c1) * arg4);
  arg0->unk18 = (f32) ((((-s3) * (-s2)) + ((c3 * s1) * c2)) * arg4);
  arg0->unk1C = 0.0f;
  arg0->unk20 = (f32) ((c1 * s2) * arg4);
  arg0->unk24 = (f32) ((-s1) * arg4);
  arg0->unk28 = (f32) ((c1 * c2) * arg4);
  arg0->unk2C = 0.0f;
  arg0->unk30 = arg5;
  arg0->unk34 = arg6;
  arg0->unk38 = arg7;
  arg0->unk3C = 1.0f; 
}



//#pragma GLOBAL_ASM("asm/nonmatchings/camera/func_80023500.s")
void func_80023500(Mtx* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7) {
    func_80023360((unk23360s* ) &D_8008D030, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    guMtxF2L((f32 (*)[4]) &D_8008D030, arg0);
}

//#pragma GLOBAL_ASM("asm/nonmatchings/camera/func_80023570.s")

/*createRotationMatrix or rotateMatrix
  This is dependant on what I find this
  function is actually being used for.*/

  /*This function appears to be creating a 4x4 matrix arg0 that represents a rotation transformation in 3D space. 
  The three input parameters arg1, arg2, and arg3 specify the rotation angles around the X, Y, and Z axes, respectively, 
  in radians.
  The function computes the sine and cosine values of each angle using the sinf() and cosf() math functions and uses them to 
  fill the corresponding elements of the arg0 matrix. The resulting matrix can then be used to apply the rotation transformation 
  to a 3D point or vector.

  The function starts by computing the sine and cosine values of the three input angles using the sinf() and cosf() functions. 
  It then uses these values to compute the elements of the rotation matrix arg0. Finally, the function sets the last row of arg0 
  to the identity matrix.*/
void func_80023570(MtxF *arg0, f32 arg1, f32 arg2, f32 arg3)
{
    f32 sin1;
    f32 sin2;
    f32 sin3;
    f32 cos1;
    f32 cos2;
    f32 cos3;
  
  
    sin1 = sinf(arg1);
    cos1 = cosf(arg1);
    sin2 = sinf(arg2);
    cos2 = cosf(arg2);
    sin3 = sinf(arg3);
    cos3 = cosf(arg3);

    arg0->mf[0][0] = (cos3 * cos2) + (sin3 * sin1 * sin2);
    arg0->mf[0][1] = sin3 * cos1;
    arg0->mf[0][2] = (-sin2 * cos3) + (sin3 * sin1 * cos2);
    arg0->mf[0][3] = 0.0f;

    arg0->mf[1][0] = (-sin3 * cos2) + (cos3 * sin1 * sin2);
    arg0->mf[1][1] = cos3 * cos1;
    arg0->mf[1][2] = (-sin3 * -sin2) + (cos3 * sin1 * cos2);
    arg0->mf[1][3] = 0.0f;

    arg0->mf[2][0] = cos1 * sin2;
    arg0->mf[2][1] = -sin1;
    arg0->mf[2][2] = cos1 * cos2;
    arg0->mf[2][3] = 0.0f;

    arg0->mf[3][0] = 0.0f;
    arg0->mf[3][1] = 0.0f;
    arg0->mf[3][2] = 0.0f;
    arg0->mf[3][3] = 1.0f;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/camera/func_800236CC.s")
void func_800236CC(Mtx* arg0, f32 arg1, f32 arg2, f32 arg3) {
    func_80023570(&D_8008D030, arg1, arg2, arg3);
    guMtxF2L((f32 (*)[4]) &D_8008D030, arg0);
}

//#pragma GLOBAL_ASM("asm/nonmatchings/camera/func_8002371C.s")
void func_8002371C(MtxF *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6)
{
  
  f32 temp_f0_2;
  f32 temp_f16;
  f32 temp_f16_2;
  f32 temp_f0;
  f32 temp_f2;
  f32 var_f12;
  f32 var_f18;
  f32 var_f20;
  f32 var_f2;
    
  temp_f2 = arg4 - arg1;
  temp_f16 = arg6 - arg3;
  temp_f0 = _nsqrtf((temp_f2 * temp_f2) + (temp_f16 * temp_f16));
  if (temp_f0 == 0.0f)
  {
    var_f18 = 0.0f;
    var_f20 = 1.0f;
  }
  else
  {
    var_f18 = temp_f2 / temp_f0;
    var_f20 = temp_f16 / temp_f0;
  }
  temp_f16_2 = arg5 - arg2;
  temp_f0_2 = _nsqrtf((temp_f0 * temp_f0) + (temp_f16_2 * temp_f16_2));
  if (temp_f0_2 == 0.0f)
  {
    var_f2 = 0.0f;
    var_f12 = 1.0f;
  }
  else
  {
    var_f2 = (-temp_f16_2) / temp_f0_2;
    var_f12 = temp_f0 / temp_f0_2;
  }
  arg0->mf[0][0] = var_f20;
  arg0->mf[0][1] = 0.0f;
  arg0->mf[0][2] = -var_f18;
  arg0->mf[0][3] = 0.0f;
    
  arg0->mf[1][0] = var_f2 * var_f18;
  arg0->mf[1][1] = var_f12;
  arg0->mf[1][2] = var_f2 * var_f20;
  arg0->mf[1][3] = 0.0f;
    
  arg0->mf[2][0] = var_f12 * var_f18;
  arg0->mf[2][1] = -var_f2;
  arg0->mf[2][2] = var_f12 * var_f20;
  arg0->mf[2][3] = 0.0f;
    
  arg0->mf[3][0] = arg1;
  arg0->mf[3][1] = arg2;
  arg0->mf[3][2] = arg3;
  arg0->mf[3][3] = 1.0f;
}


//#pragma GLOBAL_ASM("asm/nonmatchings/camera/func_8002387C.s")
void func_8002387C(Mtx* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    func_8002371C(&D_8008D030, arg1, arg2, arg3, arg4, arg5, arg6);
    guMtxF2L((f32 (*)[4]) &D_8008D030, arg0);
}

//#pragma GLOBAL_ASM("asm/nonmatchings/camera/func_800238E4.s")
void func_800238E4(unk23df4s* arg0, f32 arg1, f32 arg2, f32 arg3, f32* arg4, f32* arg5, f32* arg6) {
    *arg4 = (arg0->unk8 * arg3) + ((arg0->unk0 * arg1) + (arg0->unk4 * arg2));
    *arg5 = (arg0->unk18 * arg3) + ((arg0->unk10 * arg1) + (arg0->unk14 * arg2));
    *arg6 = (arg0->unk28 * arg3) + ((arg0->unk20 * arg1) + (arg0->unk24 * arg2));
}
  
//#pragma GLOBAL_ASM("asm/nonmatchings/camera/func_80023974.s")
void func_80023974(unk23df4s* arg0, f32 arg1, f32 arg2, f32 arg3, f32* arg4, f32* arg5, f32* arg6) {
    *arg4 = (arg0->unk20 * arg3) + ((arg0->unk0 * arg1) + (arg0->unk10 * arg2));
    *arg5 = (arg0->unk24 * arg3) + ((arg0->unk4 * arg1) + (arg0->unk14 * arg2));
    *arg6 = -((arg0->unk28 * arg3) + ((arg0->unk8 * arg1) + (arg0->unk18 * arg2)));
}

#pragma GLOBAL_ASM("asm/nonmatchings/camera/func_80023A08.s")


//#pragma GLOBAL_ASM("asm/nonmatchings/camera/func_80023BCC.s")
void func_80023BCC(Mtx* arg0, f32 arg1, f32 arg2, f32 arg3) {
    func_80023A08((f32 (*)[4]) &D_8008D030, arg1, arg2, arg3);
    guMtxF2L((f32 (*)[4]) &D_8008D030, arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/camera/func_80023C1C.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/camera/func_80023DF4.s")
void func_80023DF4(f32 (*arg0)[4], f32 arg1, f32 arg2, f32 arg3) {
    arg0[0][0] *= arg1;
    arg0[0][1] *= arg1;
    arg0[0][2] *= arg1;
    arg0[1][0] *= arg2;
    arg0[1][1] *= arg2;
    arg0[1][2] *= arg2;
    arg0[2][0] *= arg3;
    arg0[2][1] *= arg3;
    arg0[2][2] *= arg3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/camera/func_80023E80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/camera/func_8002413C.s")
/*s32 func_8002413C(f32 arg0, f32 arg1, f32 arg2, s32 *arg3, s32 *arg4)
{
  f32 new_var3;
  f32 sp38;
  f32 sp34;
  f32 sp30;
  f32 temp_f0;
  s32 ret;
    
  guMtxXFMF((f32 (*)[4]) D_80086E88, arg0, arg1, arg2, &sp38, &sp34, &sp30);
  ret = 0;
  new_var3 = D_80086ECC;
  if (sp30 < -D_80086ECC)
  {
    ret = 1;
  }
  if (ret != 0)
  {
    temp_f0 = sp30 * D_80086ED4;
    ret = 0;
    *arg3 = 0xA0 - ((s32) (((sp38 * 160.0) / temp_f0) * 0.75));
    
    *arg4 = ((s32) ((sp34 * 120.0f) / temp_f0)) + 0x78;
    if (sp30 < -new_var3)
    {
      ret = 1;
    }
  }
  return ret;
}*/
