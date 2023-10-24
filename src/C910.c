#include "common.h"

typedef struct unk_db38_s //door animation struct
{
    s32 timer;
    s32 unkDoorState;
    s32 unkCurrDoorAnimFrame;
    s32 unkDoorFlag; //200 when entering with handle on left, 201 when handle on right, 300 if big door probably others. 
    void* position; //struct containing the position, rotation, and other door data. Looks like an array of structs. 
    f32 xSlideOffset;
    f32 yRotation;
}DoorAnimData;

/*These two may be the same struct.*/
typedef struct {
    char unk0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    char unk24[0xC];
    f32 unk30;
    f32 unk34;
    f32 unk38;
}unke224s;

typedef struct {
    u16 unk0;
    u16 unk2;
    char unk4[0x18];
    f32 unk1C;
    char unk20[0x14];
    f32 unk34;
}unke350s;

typedef struct unk_e3c4_s 
{
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
}unke3c4s; //size 0x70

extern DoorAnimData gDoorAnimData[];
extern u16 D_80084ED0;
extern s32 D_8007D2D0;
extern unke3c4s D_80084098[];
extern unke3c4s D_80084180[];


void func_8000DB10(void);

#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000BD10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000C42C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000C4C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000CE8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000D518.s")

#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000D9BC.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000DB10.s")
void func_8000DB10(void)
{
    DoorAnimData *var_v0 = gDoorAnimData;
    s32 var_a0 = 4;

  while (var_a0--)
  {
      var_v0->timer = 0;
      var_v0++;
  }
}

//#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000DB38.s")
s32 func_8000DB38(void* arg0) {
    s32 i = 4;
    DoorAnimData* DoorAnimData = gDoorAnimData;
    
    while (i != 0) {
        if ((DoorAnimData->timer != 0) && (arg0 == DoorAnimData->position)) {
            i = 5 - i;
            break;
        }
        DoorAnimData++;
        i--;
    }
    return i;
}

#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000DB7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000DC4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000DDB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000E10C.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000E224.s")
void func_8000E224(unke224s* arg0) {

    arg0->unk18 += arg0->unk30;
    arg0->unk1C += arg0->unk34;
    arg0->unk20 = (arg0->unk20 + arg0->unk38);
    arg0->unk34 = (arg0->unk34 - 0.9);

    gDPSetEnvColor(gMasterGfxPos++, 255, 255, 255, (D_80084ED0 & 1) ? 220 : 120);
}

#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000E2C0.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000E350.s")
void func_8000E350(unke350s *arg0)
{
  arg0->unk1C = (f32) (arg0->unk1C + (arg0->unk34 / 2));
  arg0->unk34 = (f32) (((f64) arg0->unk34) - 0.2);
  gDPSetEnvColor(gMasterGfxPos++, 0xFF, 0xFF, 0xFF, arg0->unk0 * 5);
}

//#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000E3C4.s")//assist from anon58
void func_8000E3C4(void) {
    unke3c4s* var_a0;
    unke3c4s* var_v1;
    s32 var_v0;

    D_8007D2D0 = 0;
    var_v0 = 8;
    var_v1 = D_80084098;
    var_a0 = D_80084180;

    for (; var_v0 != 0; var_v1++, var_a0++, var_v0--) {
        var_a0->unk0 = 0;
        var_v1->unk0 = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000E418.s")

#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000E588.s")

#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000E774.s")

#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000EB30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/C910/func_8000EDD8.s")
