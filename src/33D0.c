#include "common.h"

typedef struct unk_1d924_s2
{
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    f32 unk24;
    f32 unk28;
    f32 unk2C;
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
    f32 unk48;
    f32 unk4C;
    s16 unk50;
    s16 unk52;
    f32 unk54;
    char unk56[0x8];
    u16 unk60;
}unk1d924s2;

typedef struct {
    s16 unk0;
    s16 unk2;
    s16 unk4;
}unk6604s;

void func_800056D0(BrianData2* arg0, s32 arg1, unk232f4s* arg2);
void func_80006604(unk6604s* arg0, BrianData2* arg1, s32 arg2);

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_800027D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_80002918.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_80002EA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_80002F60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_80003870.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_80003A1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_80003B60.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_80003F5C.s")
void func_80003F5C(unk3f5cs* arg0, unk3f5cs2* arg1, s32 arg2) {
    arg0->unk20 = 0.0f;
    arg0->unk18 = 0.0f;
    arg1->unk4--;
    if (arg1->unk4 == 0) {
        arg1->unk0 = 0;
        arg0->unk60 &= 0xFFFC;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_80003F98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_80004040.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_800041B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_80004260.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_800043C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_80004448.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_800045F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_80004708.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_800048D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_8000496C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_80004AB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_80004BD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_80004D30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_80004E58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_8000534C.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_800056D0.s") 
/*This is correct, but the structs need to be cleaned up to make it work.*/

void func_800056D0(BrianData2* arg0, s32 arg1, unk232f4s* arg2) {
    func_80006720(arg0);
    func_8001D924(arg0, (arg0->animID * 0xC) + arg1, arg0->scale);
    arg2->unk0 = -arg0->unkDoor44;
    arg2->unk4 = arg0->unkDoor4C;
    func_800232F4(arg0->yrot, arg2);
}

void func_80005740(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_80005748.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_80005A10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_80005C6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_8000600C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_800060D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_80006340.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_80006604.s")
void func_80006604(unk6604s* arg0, BrianData2* arg1, s32 arg2) {
    func_8001D8B0((unk1e0acs* ) arg1, 0x1C, 1, 0x1D, 1, (u16) 1);
    func_80006720(arg1);
    func_8001D924(arg1, (arg1->animID * 0xC) + arg2, arg1->scale);
    arg0->unk0 = 0xB;
    arg0->unk4 = 0x5A;
    arg1->unk60 |= 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_8000669C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_80006720.s")


#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_80006774.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_800069FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_80006A74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_80006B1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_80006BEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_80006F6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_80007030.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_800070C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_800072A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_800073CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_800074A0.s")
