#include "common.h"



//#pragma GLOBAL_ASM("asm/nonmatchings/1E4B0/func_8001D8B0.s")
void func_8001D8B0(unk1e0acs *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u16 arg5)
{
  if (arg1 != -1)
  {
    if (arg1 != arg0->unk52)
    {
      arg0->unk52 = (s16) arg1;
      arg0->unk60 = arg0->unk60 | 0x400;
      arg0->unk60 = arg0->unk60 & 0xFDFF;
    }
    arg0->unk58 = (s16) arg2;
    if (arg5 & 1)
    {
      arg0->unk54 = (arg0->unk56 = 0);
    }
  }
  if (arg3 != (-1))
  {
    if (arg3 != arg0->unk5A)
    {
      arg0->unk5A = (s16) arg3;
    }
    arg0->unk5C = (u16) arg4;
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
