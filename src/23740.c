/*rename to animation.c*/

#include "common.h"

typedef struct {
/*0x00*/ Vec3f pos;
/*0x0C*/ f32 yrot;
/*0x10*/ f32 zrot;
/*0x14*/ f32 xrot;
/*0x18*/ Vec3f scale;
/*0x24*/ f32 unk24;
/*0x28*/ f32 unk28;
/*0x2C*/ f32 unk2C;
/*0x30*/ s16 unk30; //maybe padding. 
/*0x32*/ u16 startingFrame;
}LimbKeyframe;

typedef struct {
    LimbKeyframe* unk0; //pointer to an array
    u16 unk4;
    u16 numFramesInAnim;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    s8 unk14;
    s8 unk15;
    u8 unk16;
    char unk17; //unread?
    s32 unk18;
    char unk1C[4];
}unk22b40s;

void func_80022F60(f32 arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4);

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