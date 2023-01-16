#include "common.h"

extern OSPfs D_80092898[];
extern s8 D_80092870;
extern OSMesgQueue D_80092880;
extern u8 D_8005FB40;
extern s32 D_8005FB74;

void func_800319E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8* arg4);

#pragma GLOBAL_ASM("asm/nonmatchings/31F00/func_80031300.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/31F00/func_800314C0.s")
void func_800314C0(s32 arg0) {
    OSContPad* temp_v0;
    u16 temp_v1;

    osContSetCh(4U);
    osContStartReadData(&D_80092880);
    if (osRecvMesg(&D_80092880, NULL, 1) != -1) {
        osContGetReadData(&D_80092AA8);
    }
    temp_v0 = &(&D_80092AA8)[arg0];
    temp_v1 = temp_v0->button;
    D_80092874 = temp_v1;
    D_80092871 = temp_v0->stick_x;
    D_80092872 = temp_v0->stick_y;
    D_80092876 = temp_v1 & D_80092878;
    D_80092878 = ~temp_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/31F00/func_80031574.s")

#pragma GLOBAL_ASM("asm/nonmatchings/31F00/func_80031800.s")

#pragma GLOBAL_ASM("asm/nonmatchings/31F00/func_80031890.s")

#pragma GLOBAL_ASM("asm/nonmatchings/31F00/func_8003195C.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/31F00/func_800319E0.s")
void func_800319E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8* arg4) {
    osPfsReadWriteFile(&D_80092898[arg0], arg1, 0U, arg2, arg3, arg4);
}

//#pragma GLOBAL_ASM("asm/nonmatchings/31F00/func_80031A44.s")
void func_80031A44(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 *arg4)
{
  OSPfs *temp_a0;
  s32 sp28;
    
  temp_a0 = &D_80092898[arg0];
  if (osPfsFreeBlocks(temp_a0, &sp28) != 0)
  {
 goto dummy_label_534526; dummy_label_534526: ;  //may be something that was #IFDEFd out. Otherwise, this function needs more work. 
    return;
  }
  osPfsReadWriteFile(temp_a0, arg1, 1U, arg2, arg3, arg4);
}

//#pragma GLOBAL_ASM("asm/nonmatchings/31F00/func_80031ACC.s")
s32 func_80031ACC(s32 arg0, s32 arg1)
{
    s32 var_v1;
    u32 temp_a2;
  
  
  temp_a2 = D_80092870;
  if (arg1 == 0xA)
  {
    if (osMotorInit(&D_80092880, &D_80092898[temp_a2], (s32) temp_a2) != 0)
    {
      var_v1 = osPfsInitPak(&D_80092880, &D_80092898[temp_a2], (s32) temp_a2);
      if (((var_v1 != PFS_ERR_DEVICE) && (var_v1 != PFS_ERR_NOPACK)) && (var_v1 != PFS_ERR_NEW_PACK))
      {
        var_v1 = func_8003C530(&D_80092898[temp_a2]);
      }
    }
    else
    {
      var_v1 = 4;
    }
  }
  else
  {
    var_v1 = osPfsInitPak(&D_80092880, &D_80092898[temp_a2], (s32) temp_a2);
  }
  return var_v1;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/31F00/func_80031BB0.s")
s32 func_80031BB0(s32 pfsErr) {
    s32 var_v1;

    switch (pfsErr) {
    case PFS_ERR_NOPACK:
        var_v1 = -1;
        break;
    case PFS_ERR_CONTRFAIL:
    case PFS_ERR_DEVICE:
        var_v1 = -2;
        break;
    case PFS_ERR_INCONSISTENT:
    case PFS_ERR_ID_FATAL:
        var_v1 = -3;
        break;
    case PFS_ERR_NEW_PACK:
        var_v1 = -4;
        break;
    case PFS_ERR_EXIST:
        var_v1 = -5;
        break;
    default:
        var_v1 = -6;
        break;
    }
    return var_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/31F00/func_80031C0C.s")
