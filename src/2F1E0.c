#include "common.h"
typedef struct Message
{
/*0x00*/    s32 unk0; //textbox state? 
/*0x04*/    s16 xpos; //textbox xpos
/*0x06*/    s16 ypos; //textbox ypos
/*0x08*/    s16 width; //width
/*0x0A*/    s16 height; //height
/*0x0C*/    s16 quillTimer; //quill position timer
/*0x0E*/    u8 unkE;
/*0x0F*/    s8 unkF;
/*0x10*/    s8 unk10;
/*0x11*/    s8 unk11;
/*0x12*/    s16 unk12;
/*0x14*/    s8 unk14;
/*0x15*/    s8 unk15;
/*0x16*/    s8 unk16[0x20];
/*0x36*/    s16 unk_36;
/*0x38*/    s16 unk38;
/*0x3A*/    s8 unk3A;
/*0x3B*/    s8 unk3B;
/*0x3C*/    char unk3C[0x17];
/*0x53*/    s8 unk_53[0x18];
/*0x6B*/    s8 unk_6B[0x18];
/*0x83*/    s8 unk_83[0x18];
/*0x3C*/    char unk9B[0x400];
/*0x43C*/    char unk49B[0x400];
} Message; // size = 0x89C

extern Message D_800905E0[];
extern u8 D_8004C460[];
extern u8 D_8007C570[];
extern u8 D_8007C574[];
extern u8 D_8007C970[];
extern u8* D_803A9954[]; //array of pointers to item names

//#pragma GLOBAL_ASM("asm/nonmatchings/2F1E0/func_8002E5E0.s")
void func_8002E5E0(s32 arg0) {
    s32 i;

for (i = 0; i != 4; i++){
    func_8002E628(i, 0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/2F1E0/func_8002E628.s")
/*
void func_8002E628(s32 arg0, u8 arg1) {
    //Message* temp_a1;
    Message* temp_v0;
    //Message* var_a0;
    //Message* var_a2;
    //Message* var_a2_2;
    s32 i;
    //s32 j;
    //s32 var_v1_3;

    if (!arg1) {
        temp_v0 = &D_800905E0[arg0];
        temp_v0->ypos = 0;
        temp_v0->height = 0;
        temp_v0->unk0 = 0;
        temp_v0->xpos = temp_v0->ypos;
        temp_v0->width = temp_v0->height;
    }
    temp_v0 = &D_800905E0[arg0];
    temp_v0->quillTimer = 1;
    temp_v0->unkE = 0;
    temp_v0->unkF = 0;
    temp_v0->unk10 = 0;
    temp_v0->unk12 = 0;
    temp_v0->unk14 = -1;
    temp_v0->unk15 = 0;
    temp_v0->unk16[0] = 0;
    
    for (i = 0; i < 0x20; i++) {
        D_800905E0[arg0].unk16[i + 1] = 0xFF;
    }

    for (i = 0; i < 0x400; i++) {
        temp_v0->unk9B[i] = -1;
        temp_v0->unk49B[i] = -1;

    }
    
    temp_v0->unk38 = 0;
    temp_v0->unk3A = 0;
    
    

    
    // i = 0;
    // var_a0 = temp_v0;
    // do {
    //     i += 1;
    //     var_a0 += 1;
    //     var_a0->unk3C[0x17] = -1;
    //     var_a0->unk3C[0x2F] = -1;
    //     var_a0->unk3C[0x47] = -1;
    //     var_a0->unk3B = -1;
    // } while (i != 0x18);
}*/

#pragma GLOBAL_ASM("asm/nonmatchings/2F1E0/func_8002E768.s")

#pragma GLOBAL_ASM("asm/nonmatchings/2F1E0/func_8002EAA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/2F1E0/func_8002FB30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/2F1E0/func_8002FD90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/2F1E0/func_8002FEA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/2F1E0/func_80030068.s")

#pragma GLOBAL_ASM("asm/nonmatchings/2F1E0/func_800303E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/2F1E0/func_80030668.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/2F1E0/func_80030754.s")
s32 func_80030754(s32 arg0, s32 arg1) {
    Message *var_a1;
    s32 i;
    s32 ret = -1;
    
    if (arg0 >= 0)
    {
        for(i = 0, var_a1 = D_800905E0; i < 4; i++, var_a1++) {
            if(arg0 == var_a1->unkE) {
                ret = i;
                break;
            }  
        }
    }
    else
    {
        for(i = 0, var_a1 = D_800905E0; i < 4; i++, var_a1++) {
            if((var_a1->unk0 & 7) == arg1) {
                ret = i;
                break;
            }
        }
    }
    return ret;
}

#pragma GLOBAL_ASM("asm/nonmatchings/2F1E0/func_800307D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/2F1E0/func_80030BF0.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/2F1E0/func_80030D70.s")
void func_80030D70(void) {
    D_80092852 = 0;
}
//#pragma GLOBAL_ASM("asm/nonmatchings/2F1E0/func_80030D80.s")
u32 func_80030D80(void)
{
  u32 ret;
  u32 new_var;
  ret = 0;
  if (D_80092850 != 0)
  {
    ret = D_80092871;
    new_var = (u32) ((D_80092871 * D_80092871) + (D_80092872 * D_80092872));
    ret = 0;
    if (new_var >= 0xE11U)
    {
      D_80092852++;
      if (D_80092852 >= 5)
      {
        ret = 1;
      }
    }
    else
    {
      D_80092852 = 0;
    }
  }
  return ret;
}