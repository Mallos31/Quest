#include "common.h"
#include "monsters.h"

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
typedef struct {
    s32 fileStart;
    s32 fileEnd;
    void* unk8;
    void* baseStats; //this struct may be separate from the normal enemy data struct. 
    void* namePtr;
}unkMonsterData; //size = 0x14

typedef struct {
    f32 unk0;
    char unk4[0x4];
    f32 unk8;
    char unkC[0x4];
    f32 unk10;
}unka3f4s;


extern s32 D_8007BA68;
extern s32 D_8007BA6C;
extern unk232f4s D_8007D0D0;
extern void** D_8007D0A8;
extern void* D_8007D0AC;
extern unkMonsterData* D_8007D0BC;
extern unkMonsterData D_80054160[];
extern void* D_8020E6F0; //RAM address where monster data is loaded when entering a new area. 
extern s32 D_8007C990;
extern unk7D0C0s D_8007D0C0;
extern void* D_80054640[];
extern EnemyAction D_8007C998[];
extern u16 D_8007D0B0;
extern u16 D_8008C598;
extern UnknownMonsterData2* D_8007BB34;
extern void (*D_8004C290[])(s32, void*, void*);
extern f64 D_80071160;
extern f64 D_80071168;
extern f64 D_80071170;
extern f64 D_80071178;
extern f64 D_80071180;
extern f64 D_80071188;
extern f64 D_80071190;
extern MonsterBattleData D_8007C9BC;
extern s32 D_8007D0C4;

#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_80008BB0.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_80008C20.s")
void func_80008C20(void)
{
  EnemyAction *monster;
  MonsterBattleData *monsterData;
  s32 var_s1;
  var_s1 = D_8007C990;
  if (var_s1 != 0)
  {
    for (monster = D_8007C998; var_s1 != 0; monster++)
    {
      monsterData = &monster->battleData;
      if ((monster->battleData.modelID) != (-1))
      {
        D_8004C290[monster->actionID](monsterData, monster, D_8007D0A8[monsterData->modelID]);
        var_s1 -= 1;
      }
    }

  }
  if (gBattleState & 0x100)
  {
    func_8000B300();
  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_80008CF4.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_80008EF4.s")
void func_80008EF4(void)
{
  s32 start;
  s32 end;
  s32 size;
  unkMonsterData *areaMonsterData;
  areaMonsterData = (D_8007D0BC = &D_80054160[D_80084F1C->unk12]);
  D_8007D0A8 = areaMonsterData->unk8;
  D_8007D0AC = areaMonsterData->namePtr;
  start = areaMonsterData->fileStart;
  end = areaMonsterData->fileEnd;
  size = end - start;
  dma_write((u8 *) start, &D_8020E6F0, size);
}

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
/*function matches but does not build. Needs investigation*/
#ifdef NON_MATCHING
void func_80009818(MonsterBattleData* arg0, EnemyAction* arg1, s32 arg2) {
    func_8000A7D8((BrianData2* ) arg0, &D_8007D0D0);
    func_8000A508(0, D_8007D0D0.unk0, D_8007D0D0.unk4, (unk202e4s* ) arg0, arg1);
    arg1->actionTimer -= 1;
    if (arg1->actionTimer == 0) {
        if (arg1->currHP == 0) {
            func_800202E4(arg0);
            func_8000B170((BrianData2* ) arg0);
            arg0->modelID = -1;
            arg0->unk60 &= 0xFFFE;
            D_8007C990 -= 1;
            D_8007BA68 += arg0->unk64->expValue;
            D_8007BA6C += arg0->unk64->unk14;
            func_800268D4(0, 0xA, 0xFF);
            return;
        }
        arg1->actionID = 0;
        arg0->unk60 &= 0xFFFC;
    }
}
#endif

#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_80009934.s")

#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_800099DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_80009D78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_8000A008.s")

#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_8000A284.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_8000A3F4.s")
void func_8000A3F4(unka3f4s *arg0, f32 arg1, f32 arg2) {
  f32 var_f2;
    
    arg1 -= arg0->unk0;
    arg2 -= arg0->unk8;
    var_f2 = func_80023210(arg1, arg2) - arg0->unk10;
    if (var_f2 > M_PI) {
        var_f2 -= 2 * M_PI;
    } else if (var_f2 < (-M_PI)) {
        var_f2 += 2 * M_PI;
    }

    arg0->unk10 += var_f2 * 0.05;

    if (arg0->unk10 > M_PI) {
        arg0->unk10 -= 2 * M_PI;
    } else if (arg0->unk10 < (-M_PI)) {
        arg0->unk10 += 2 * M_PI;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_8000A508.s")

#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_8000A7D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_8000A854.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/97B0/func_8000ABF4.s")
s32 func_8000ABF4(MonsterBattleData *arg0)
{
  s16 sp1E;
  int temp_v0;
  temp_v0 = arg0->unk68->unk86;
  sp1E = (s16) (((s32) (temp_v0 * 0x64)) / ((s32) (temp_v0 + (((s32) (D_8007BB34->unk86 + 7)) >> 3))));
  return getRandomNumber(0x64U) < ((u32) sp1E);
}

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
    Setup_MISS_Icon();
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
