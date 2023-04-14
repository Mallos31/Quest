#include "common.h"
//!TODO this struct is wrong, as stated by mkst. 
typedef struct {
    Mtx unk0[3];
    Mtx unkC0[1];
} mkst;

typedef struct unk_Shadow_s{
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
}unkShadows;

extern unkShadows D_80085BD0[];

extern u8 D_1000230[];
extern u8 D_1000270[];
extern s16 D_8007B318;
extern s16 D_8007B31A;
extern s32 D_800862D0;

void func_800118D4(mkst *arg0);

//#pragma GLOBAL_ASM("asm/nonmatchings/shadow/func_80011850.s")

void func_80011850(void) {
    D_800862D0 = 0;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/shadow/func_80011860.s")

void func_80011860(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    unkShadows* temp_v1;

    if (D_800862D0 < 0x40U) {        
        temp_v1 = &D_80085BD0[D_800862D0++];
        temp_v1->unk0 = arg0;
        temp_v1->unk4 = arg1;
        temp_v1->unk8 = arg2;
        temp_v1->unkC = arg3;
        temp_v1->unk10 = arg4;
        temp_v1->unk14 = arg5;
        temp_v1->unk18 = arg6;
    }
}

//#pragma GLOBAL_ASM("asm/nonmatchings/shadow/func_800118D4.s")

//!TODO This function needs reworking. mkst left some nice comments to tell me where.
void func_800118D4(mkst *arg0)
{
  s32 var_s4;
  s32 pad;
  f32 sp60[4][4];


  unkShadows *var_s0;
    
  var_s4 = D_800862D0;
  var_s0 = D_80085BD0;

  if (var_s4 != 0)
  {
    gSPDisplayList(gMasterGfxPos++, D_1000270);
    gSPFogPosition(gMasterGfxPos++, D_8007B31A, D_8007B318);
  }
    
  while (var_s4 != 0)
  {
    func_80023A08(&sp60[0], var_s0->unkC, var_s0->unk10, var_s0->unk14);

    sp60[3][0] = var_s0->unk0;
    sp60[3][1] = var_s0->unk4;
    sp60[3][2] = var_s0->unk8;

    func_80023DF4(&sp60[0], var_s0->unk18, var_s0->unk18, var_s0->unk18);

      // fuuuu
    guMtxF2L(&sp60[0], &arg0->unkC0[D_8007B2F8]); // this is wrong
    gSPMatrix(
        gMasterGfxPos++, 
        (&D_2000000[D_8007B2F8]) + 3, 
        (G_MTX_NOPUSH | G_MTX_LOAD) | G_MTX_MODELVIEW
    );
    D_8007B2F8++;
      
    gSPVertex(gMasterGfxPos++, D_1000230, 4, 0);
    gSP2Triangles(gMasterGfxPos++, 0, 1, 2, 0, 1, 3, 2, 0);
    var_s0++;
      var_s4--;
  }
}
