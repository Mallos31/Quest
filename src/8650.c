#include "common.h"

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

typedef struct {
    s16 unk0;
    s16 unk2;
    char unk4[0x10];
    unk1d8b0s* unk14;
    char unk18[0x68];
    unk8948s2* unk80;
}unk8948s;






extern f64 D_80071110;
extern f64 D_80071118;
extern f32 D_80071120;
extern unk232f4s D_8007BCB8;

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
#ifdef NON_MATCHING

void func_80007A50(void)
{
  s32 start;
  s32 end;
  s32 size;

    
  D_8007BCE4 = 0;
  if (!(gAllowBattles & 1))
  {
    D_8007BCB0 = &D_800547F0[D_80084F1C->unk12];
      
    start = D_871900;
    end = D_873F20;
    size = end - start;  
    func_80024260(start, D_8020C0D0, size);

    start = D_A725D0;
    end = D_A7A190;
    size = end - start;
    func_80024260(start, D_802A0000, size);
      
    start = D_8007BCB0->start;
    end = D_8007BCB0->end;
    size = end - start;
    func_80024260((u8 *) start, &D_8020E6F0, size);
      
    func_800080E8();
    D_8007BCB4 = 0;
    if (((u16) D_8007B2E8) == 1)
    {
      func_80008AD8(0, &D_80054828);
      func_8002E768(1);
      return;
    }
    if (((u16) D_8007B2E8) == 4)
    {
      func_80008AD8(0, &D_80054C04);
      func_8002E768(1);
    }
  }
}
#endif

#pragma GLOBAL_ASM("asm/nonmatchings/8650/func_80007B64.s")
#ifdef NON_MATCHING
void func_80007B64(void)
{
  PosRot *new_var;
  NPC *npc;
  PosRot *npcPosRot;
  f32 temp_f20;
  f32 temp_f22;
  f32 var_f8;
  s32 var_s4;
    
  npc = (NPC *) D_8007BD30;
  for (var_s4 = D_8007BCE4; var_s4 != 0; var_s4--)
  {
    {
      new_var = &npc->PosRot;
      switch (npc->action)
      {
        case 0:
          if (npc->unk80->unk4 == 2)
        {
          npc->actionTimer--;
          if (npc->actionTimer == 0)
          {
            if (((s32) ((u16) D_8007BCB4)) < 3)
            {
              npc->action = 1;
              npcPosRot = &npc->PosRot;
              npc->actionTimer = (func_80022FD0(2U) + 1) * npc->unk80->unk10->unkE;
              func_8001D8B0((NPC *) npcPosRot, 1, 1, 1, 1, (u16) 1);
              temp_f20 = npc->xWanderOrigin - npcPosRot->pos.x;
              temp_f22 = npc->zWanderOrigin - npcPosRot->pos.z;
              if (_nsqrtf((temp_f20 * temp_f20) + (temp_f22 * temp_f22)) > 50.0)
              {
                npcPosRot->rot.y = func_80023210(temp_f20, temp_f22);
              }
              else
              {
                var_f8 = func_80022FD0(0x10U);
                npcPosRot->rot.y = (f32) ((var_f8 * (M_PI / 8)) - (M_PI / 2));
              }
              D_8007BCB4++;
            }
            else
            {
              npc->actionTimer = (1 + func_80022FD0(2U)) * npc->unk80->unk10->unk2;
            }
          }
        }
          break;

        case 1:
          npcPosRot = new_var;
          D_8007BCB8.unk0 = 0.0f;
          D_8007BCB8.unk4 = 0.4f;
          func_800232F4(npcPosRot->rot.y, &D_8007BCB8);
          func_80008290(D_8007BCB8.unk0, D_8007BCB8.unk4, (NPC *) npcPosRot);
          npc->actionTimer--;
          if (!npc->actionTimer)
        {
          npc->action = 0;
          npc->actionTimer = (u16) npc->unk80->unk10->unk2;
          func_8001D8B0((NPC *) npcPosRot, 0, 1, 0, 1, (u16) 1);
          D_8007BCB4--;
        }
          break;

        case 2:
          if (npc->actionTimer != 0)
        {
          npc->actionTimer--;
          npcPosRot = new_var;
          npcPosRot->rot.f[1] += npc->unk10 / 15.0f;
          if (npc->actionTimer == 0)
          {
            func_8001D8B0((NPC *) npcPosRot, (s32) npc->unk80->unk18, 1, (s32) npc->unk80->unk18, 1, (u16) 1);
          }
        }
          break;

        case 3:
          npcPosRot = new_var;
          npc->actionTimer -= 1;
          npcPosRot->rot.y -= npc->unk10 / 15.0f;
          if (npc->actionTimer == 0)
        {
          npc->action = 0;
          npc->actionTimer = (u16) npc->unk80->unk10->unk2;
          npcPosRot->rot.y = npc->yRotReturn;
          func_8001D8B0((NPC *) npcPosRot, 0, 1, 0, 1, (u16) 1);
        }
          break;

      }
      npc++;
    }
  }
}
#endif


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
        D_8007BD30[arg0].unk2 = func_80022FD0(0x1EU) + 0x1E;
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

