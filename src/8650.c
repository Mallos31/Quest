#include "common.h"
#include "player.h"
#include "npc.h"

typedef struct {
    s16 unk0;
    s16 unk2;
}unk8948s3;

typedef struct {
    s16 unk0;
    s16 unk2;
    u8 unk4;
    u8 unk5;
    s16 unk6;
    s32 unk8;
    s32 unkC;
    unk8948s3* unk10;
    u8* unk14;
}unk8948s2;

typedef struct unk_1d8b0_s
{
    char unk0[0x52];
    s16 unk52;
    s16 unk54;
    s16 unk56;
    s16 unk58;
    s16 unk5A;
    s16 unk5C;
    s16 unk5E;
    u16 unk60;
}unk1d8b0s;

typedef struct {
    s16 unk0;
    s16 unk2;
    char unk4[0x10];
    unk1d8b0s* unk14;
    char unk18[0x68];
    unk8948s2* unk80;
}unk8948s;

typedef struct {
    s32 start;
    s32 end;
}NPCFile;




extern f64 D_80071110;
extern f64 D_80071118;
extern f32 D_80071120;
extern Coordinates2D D_8007BCB8;

extern NPCFile D_800547F0[];

extern unk8948s D_8007BD30[];
extern u8 D_8007C570[];
extern u8 D_8007C970[]; //speaker name

extern u8 D_80054828;
extern u8 D_80054C04;
extern NPCFile* D_8007BCB0;
extern s16 D_8007BCB4;
extern s32 D_8007BCE4;
extern void* D_8020C0D0; //A few unused things are loaded here. Hammer, tray with whiskey, and the actually used whiskey tumblers. 
extern void* D_8020E6F0; //NPCs loaded here. 
extern void* D_802A0000; //Shannon loaded here.
extern s32 D_871900;
extern s32 D_873F20;
extern s32 D_A725D0;
extern s32 D_A7A190;

void func_80008948(s32 arg0);

#pragma GLOBAL_ASM("asm/nonmatchings/8650/func_80007A50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/8650/func_80007B64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/8650/func_80007F18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/8650/func_800080E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/8650/func_80008290.s")

#pragma GLOBAL_ASM("asm/nonmatchings/8650/func_8000835C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/8650/func_800086E4.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/8650/func_80008948.s") 99.7% matched by me, the rest by Wiseguy
/*!TODO Probably uses an NPC struct that is identical to Brian's*/
void func_80008948(s32 arg0) {
    unk8948s2* temp_v0;

    temp_v0 = D_8007BD30[arg0].unk80;
    if (temp_v0->unk4 == 2) {
        D_8007BD30[arg0].unk0 = 0;
        D_8007BD30[arg0].unk2 = getRandomNumber(0x1EU) + 0x1E;
        return;
    }
    if (temp_v0->unk5 & 2) {
        D_8007BD30[arg0].unk0 = 0;
        D_8007BD30[arg0].unk2 = temp_v0->unk10->unk2;
        return;
    }
    D_8007BD30[arg0].unk0 = 3;
    D_8007BD30[arg0].unk2 = 0xF;
    func_8001D8B0((BrianData2* ) &D_8007BD30[arg0].unk14, 1, 1, 1, 1, (u16) 1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/8650/func_80008A00.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/8650/func_80008AD8.s") //Massive match assist by several people. 
void func_80008AD8(s32 arg0, u8 *arg1)
{
  s32 var_v1;
  u8 *var_v0;
  unk8948s *temp_v0;
    
  var_v0 = D_8007C570;
    
  for (var_v1 = 0x400; var_v1 != 0; var_v1--)
  {
    *var_v0++ = *arg1++;
  }

  temp_v0 = &D_8007BD30[arg0];

  if (temp_v0->unk80->unk14 != 0)
  {
      for (var_v1 = 0; var_v1 != 0x20; var_v1++) {
          D_8007C970[var_v1] = (temp_v0->unk80->unk14)[var_v1];
      }
  } else {
      D_8007C970[0] = 0xFF;
  }
}

