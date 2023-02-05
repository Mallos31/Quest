#include "common.h"

typedef struct {
    s16 unk0;
    s16 unk2;
    s32 unk4;
    s32 unk8;
    void* unkC;
}unk7D0C0s;

typedef struct {
    char unk0[0x90];
    u16 unk90;
    char unk92[0x82];
    u16 unk114;
    char unk116[0x4];
    u16 unk11A;
}unkac84s;

extern unk7D0C0s D_8007D0C0;
extern void* D_80054640[];
extern EnemyAction D_8007C998[];
extern u16 D_8007D0B0;
extern u16 D_8008C598;


#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_80008BB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_80008C20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_80008CF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_80008EF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_80008F6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_80008FE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_80009260.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_8000932C.s")
void func_8000932C(void) {
    EnemyAction* temp_v0;

    temp_v0 = &D_8007C998[*(&D_8007D0B0 + D_8008C598)];
    temp_v0->unk8 |= 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_80009378.s")

#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_80009588.s")

#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_80009818.s")

#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_80009934.s")

#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_800099DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_80009D78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_8000A008.s")

#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_8000A284.s")

#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_8000A3F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_8000A508.s")

#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_8000A7D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_8000A854.s")

#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_8000ABF4.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_8000AC84.s")
u32 func_8000AC84(unkac84s *arg0)
{
  u32 var_v1;
    
  var_v1 = (((s32) ((var_v1 = arg0->unk114) * arg0->unk11A)) >> 4) & 0xFFFF;
  if (arg0->unk90 & 1)
  {
    var_v1 = (var_v1 >> 1) & 0xFFFF;
  }
  return var_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_8000ACC0.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_8000B110.s")
void func_8000B110(void) {
    func_800208B8();
    func_800268D4(0, 0x17, 0xFF);
}

#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_8000B140.s")

#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_8000B170.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_8000B2B8.s")
void func_8000B2B8(void) {
    D_8007D0C4 = 0;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_8000B2C8.s")
void func_8000B2C8(s32 arg0, s32 arg1) {
    D_8007D0C0.unk0 = 0;
    D_8007D0C0.unk4 = (s32) D_80054640[arg0];
    D_8007D0C0.unk8 = arg1;
    D_8007D0C0.unkC = &D_8007C9BC;
    
}

#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_8000B300.s")
