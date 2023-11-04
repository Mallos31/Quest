#include "common.h"

typedef struct {
    char unk0[4];
    s16 unk4;
    s16 unk6;
    char unk8[0x14];
    f32 unk1C;
    f32 unk20;
    s16 unk24;
    s16 unk26;
    s16 unk28;
    s16 unk2A;
    s16 unk2C;
    char unk2E[0x6];
    s16 unk34;
    char unk36[2];
    s32 unk38;
    u8 pad3C[0x14];
}unkOvl2s;

extern unkOvl2s D_80166250[];

#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay2/DC1620/func_80100000.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay2/DC1620/func_8010009C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay2/DC1620/func_80100634.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay2/DC1620/func_80101004.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay2/DC1620/func_80101080.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay2/DC1620/func_80101148.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay2/DC1620/func_8010126C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay2/DC1620/func_80101310.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay2/DC1620/func_801013C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay2/DC1620/func_80101470.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay2/DC1620/func_80101558.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay2/DC1620/func_801016BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay2/DC1620/func_80101818.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay2/DC1620/func_80101854.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay2/DC1620/func_80101958.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay2/DC1620/func_80101A5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay2/DC1620/func_80101CD8.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay2/DC1620/func_80101D0C.s")
u32 func_80101D0C(s32 arg0, s32 arg1)
{
  f32 var_f0;
  s32 temp_f18;
  s32 var_a1;
  s32 var_v0;
  unkOvl2s *temp_v1;
  if (!(arg1 & 0x80000000)) {
    return 0xFF;
  }

  temp_v1 = &D_80166250[arg0];
  temp_v1->unk24++;
  var_f0 = (((f32) temp_v1->unk2A) - ((f32) temp_v1->unk26)) / ((f32) temp_v1->unk38);
  if (var_f0 < 0) {
    var_f0 = -var_f0;
  }
  temp_v1->unk1C += var_f0;
  temp_f18 = (s32) temp_v1->unk1C;
  var_a1 = temp_f18;
  if (temp_v1->unk4 < temp_v1->unk2A) {
    var_v0 = 1;
  }
  else {
    var_a1 = -temp_f18;
    var_v0 = 2;
  }
  temp_v1->unk4 += var_a1;
  if (temp_v1->unk1C >= 1.0f) {
    temp_v1->unk1C -= temp_f18;
  }
  if (temp_v1->unk24 >= temp_v1->unk38) {
    temp_v1->unk4 = (s16) temp_v1->unk2A;
  }
  if (var_v0 & 1) {
    if (temp_v1->unk4 >= temp_v1->unk2A) {
      temp_v1->unk4 = temp_v1->unk2A;
    }
  }
  else
    if ((var_v0 & 2) && (temp_v1->unk2A >= temp_v1->unk4))  {
    temp_v1->unk4 = temp_v1->unk2A;
  }
  if (temp_v1->unk24 >= temp_v1->unk38)  {
    temp_v1->unk24 = 0;
    temp_v1->unk1C = 0.0f;
    temp_v1->unk20 = 0.0f;
    return 0xFF;
  }
  return temp_v1->unk4 * 0; //!TODO fakematch!
}


//#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay2/DC1620/func_80101E8C.s")
u32 func_80101E8C(s32 arg0, s32 arg1) {
  f32 var_f0;
  s32 temp_f18;
  s32 var_a1;
  s32 var_v0;
  unkOvl2s *temp_v1;

  if (!(arg1 & 0x80000000)) {
    return 0xFF;
  }

  temp_v1 = &D_80166250[arg0];
  temp_v1->unk24++;
  var_f0 = ((f32)temp_v1->unk2C - (f32)temp_v1->unk28) / (f32)temp_v1->unk38;

  if (var_f0 < 0) {
    var_f0 = -var_f0;
  }

  temp_v1->unk20 += var_f0;
  temp_f18 = temp_v1->unk20;
  var_a1 = temp_f18;

  if (temp_v1->unk6 < temp_v1->unk2C) {
    var_v0 = 4;
  } else {
    var_v0 = 8;
    var_a1 = -temp_f18;
  }

  temp_v1->unk6 += var_a1;

  if (temp_v1->unk20 >= 1.0f) {
    temp_v1->unk20 -= temp_f18;
  }

  if (temp_v1->unk24 >= temp_v1->unk38) {
    temp_v1->unk6 = (s16)temp_v1->unk2C;
  }

  if (var_v0 & 4) {
    if (temp_v1->unk6 >= temp_v1->unk2C) {
      temp_v1->unk6 = temp_v1->unk2C;
    }
  } else if ((var_v0 & 8) && (temp_v1->unk2C >= temp_v1->unk6)) {
    temp_v1->unk6 = temp_v1->unk2C;
  }

  if (temp_v1->unk24 >= temp_v1->unk38) {
    temp_v1->unk24 = 0;
    temp_v1->unk1C = 0.0f;
    temp_v1->unk20 = 0.0f;
    return 0xFF;
  }

  return temp_v1->unk6 * 0; //!TODO fakematch. 
}





//#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay2/DC1620/func_8010200C.s")
u8 func_8010200C(s32 arg0) { //may be wrong return type
    unkOvl2s* temp_v0;

    temp_v0 = &D_80166250[arg0];
    temp_v0->unk34 = (s16) (temp_v0->unk34 + 1);
    if (temp_v0->unk34 >= temp_v0->unk38) {
        return 0xFF;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay2/DC1620/func_80102058.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl_overlay2/DC1620/func_80102074.s")
