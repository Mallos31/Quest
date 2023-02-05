#include "common.h"



typedef struct {
    char unk0[0x24];
    f32 bossX;
    f32 bossY;
    f32 bossZ;
}unkD_7D1A8s;

typedef struct {
    /* 0x00 */ u16 bossMap;
    /* 0x02 */ u16 bossSubmap;
    /* 0x04 */ u16 bossNumber;
    /* 0x06 */ u16 unk6; //possibly padding
    /* 0x08 */ void* modelVram;
    /* 0x0C */ f32 x;
    /* 0x10 */ f32 y;
    /* 0x14 */ f32 z;
}BossData;

typedef struct {
    s32 fileStart;
    s32 fileEnd;
}bossFile;

typedef struct player_Action_s
{
            s16 unk0;
            s16 unk2;
            s16 dustTimer;
            s16 doorSide;
            u16 unk8;
            s16 unkA;
            s32 unkC;
            void* unk10;
            f32 xpos;
            f32 ypos;
            f32 zpos;
            char unk1C[0x18];
            f32 unk38; //
            char unk3C[0x3C];
            BrianData1* unk78;            
}sPlayerAction;

extern unkD_7D1A8s D_8007D1A8; //boss position data
extern f32 D_803A9B8C[]; //apparently a table of distances to be away from the boss to start an encounter
extern s32 D_8007D1A0; //boss cutscene model loaded when !=0
extern s32 D_80084EE4;
extern void* D_802A7BC0;
extern bossFile D_803A9A90[]; //ptr to boss file ROM addresses
extern BossData D_803A9AD0[];
extern s32 gNextSubmap;
extern u8 D_8007D19C[];
extern sPlayerAction D_8007BAB8;

u32 func_8000B9D8(u32 arg0);
void func_8000B7DC(s32, f32, f32, f32, void*);

//#pragma GLOBAL_ASM("asm/nonmatchings/C120/func_8000B520.s")
void func_8000B520(void) {
    *D_8007D19C = 0;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/C120/func_8000B530.s") //match assist by stuckpixel and M0liusX
void func_8000B530(void)
{
  s32 fileStart;
  s32 fileEnd;
  int i;
  s32 fileSize;
  BossData *data;
  D_8007D1A0 = 0;
    
  for (i = 0; i < 8; i++)
  {
    data = &D_803A9AD0[i];
    if ((D_80084EE4 == data->bossMap) && (gNextSubmap == data->bossSubmap))
    {
      if (func_8000B9D8(i) == 0)
      {
        fileStart = D_803A9A90[data->bossNumber].fileStart;
        fileEnd = D_803A9A90[data->bossNumber].fileEnd;
        fileSize = fileEnd - fileStart;
        func_80024260((u8*)fileStart, &D_802A7BC0, fileSize); //load boss file from RAM
        func_8000B7DC(i, data->x, data->y, data->z, &D_8007D1A8);
        D_8007D1A0 = i + 1;
      }
      return;
    }
  }

}

#pragma GLOBAL_ASM("asm/nonmatchings/C120/func_8000B618.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/C120/func_8000B740.s")
s32 func_8000B740(void) {
    s32 var_v1;
    f32 temp_f0;
    f32 temp_f2;

    var_v1 = 0;
    if (D_8007D1A0 != 0) {
        temp_f0 = D_8007D1A8.bossX - D_8007BAB8.xpos;
        temp_f2 = D_8007D1A8.bossZ - D_8007BAB8.zpos;
        if (_nsqrtf((temp_f0 * temp_f0) + (temp_f2 * temp_f2)) < *(&D_803A9B8C[D_8007D1A0])) {
            var_v1 = D_8007D1A0;
        }
    }
    return var_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/C120/func_8000B7DC.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/C120/func_8000B9D8.s")
u32 func_8000B9D8(u32 arg0) {
    return D_8007D19C[arg0 >> 3] & 0xFF & D_8004D740[arg0 & 7];
}

//#pragma GLOBAL_ASM("asm/nonmatchings/C120/func_8000BA0C.s")
void func_8000BA0C(u16 arg0) {
    D_8007D19C[arg0 >> 3] |= D_8004D740[arg0 & 7];
}

#pragma GLOBAL_ASM("asm/nonmatchings/C120/func_8000BA4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/C120/func_8000BB68.s")
