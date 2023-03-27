#include "common.h"



//#pragma GLOBAL_ASM("asm/nonmatchings/1E4B0/func_8001D8B0.s")
/*This seems to be the function that plays brian's next animation*/
void func_8001D8B0(BrianData2 *brian, s32 nextAnim, s32 nextFramerate, s32 arg3, s32 arg4, u16 arg5)
{
  if (nextAnim != -1)
  {
    if (nextAnim != brian->animID)
    {
      brian->animID = (s16) nextAnim;
      brian->unk60 = brian->unk60 | 0x400;
      brian->unk60 = brian->unk60 & 0xFDFF;
    }
    brian->animeFramerate = (s16) nextFramerate;
    if (arg5 & 1)
    {
      brian->animFrame = (brian->totalAnimFrames = 0);
    }
  }
  if (arg3 != (-1))
  {
    if (arg3 != brian->unk5A)
    {
      brian->unk5A = (s16) arg3;
    }
    brian->unk5C = (u16) arg4;
  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/1E4B0/func_8001D924.s")

#pragma GLOBAL_ASM("asm/nonmatchings/1E4B0/func_8001DB38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/1E4B0/func_8001DC78.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/1E4B0/func_8001E0AC.s")
void func_8001E0AC(s32 arg0, unk1e0acs *arg1, unk1e0acs2 *arg2)
{
  s32 temp_v0;
  temp_v0 = (arg1->unk54 += arg0);
  if (temp_v0 >= arg2->unk2)
  {
    if (arg1->unk52 != arg1->unk5A)
    {
      arg1->unk52 = arg1->unk5A;
      arg1->unk54 = 0U;
      arg1->unk56 = 0U;
      arg1->unk58 = (u16) arg1->unk5C;
      (*arg1).unk60 = (u16) (arg1->unk60 | 0x400);
    }
    else
    {
      arg1->unk54 = (u16) (temp_v0 - arg2->unk2);
      arg1->unk60 = (u16) (arg1->unk60 | 0x200);
    }
  }
  else
  {
    arg1->unk60 = (u16) (arg1->unk60 & 0xF9FF);
  }
  arg1->unk56 = (u16) (arg1->unk56 + 1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/1E4B0/func_8001E138.s")
#ifdef NON_MATCHING
void func_8001E138(MtxF* arg0, MtxF* arg1) {
    arg0->mf[3][0] -= (arg0->mf[0][0] * arg1->mf[0][2]) + (arg0->mf[1][0] * arg1->mf[0][3]) + (arg0->mf[2][0] * arg1->mf[1][0]);
    arg0->mf[3][1] -= (arg0->mf[0][1] * arg1->mf[0][2]) + (arg0->mf[1][1] * arg1->mf[0][3]) + (arg0->mf[2][1] * arg1->mf[1][0]);
    arg0->mf[3][2] -= (arg0->mf[0][2] * arg1->mf[0][2]) + (arg0->mf[1][2] * arg1->mf[0][3]) + (arg0->mf[2][2] * arg1->mf[1][0]);
}
#endif
