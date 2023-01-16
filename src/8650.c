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
}unk8948s2;

typedef struct {
    s16 unk0;
    s16 unk2;
    char unk4[0x10];
    unk1d8b0s* unk14;
    char unk18[0x68];
    unk8948s2* unk80;
}unk8948s;

extern unk8948s D_8007BD30[];

#pragma GLOBAL_ASM("asm/nonmatchings/8650/func_80007A50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/8650/func_80007B64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/8650/func_80007F18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/8650/func_800080E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/8650/func_80008290.s")

#pragma GLOBAL_ASM("asm/nonmatchings/8650/func_8000835C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/8650/func_800086E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/8650/func_80008948.s")
//Matching pending struct updates
/*
void func_80008948(s32 arg0) {
    
    unk8948s* temp_v1;

    temp_v1 = &D_8007BD30[arg0];
    
    if (temp_v1->unk80->unk4 == 2) {
        temp_v1->unk0 = 0;
        temp_v1->unk2 = (s16) (func_80022FD0(0x1EU) + 0x1E);
        return;
    }
    if (temp_v1->unk80->unk5 & 2) {
        temp_v1->unk0 = 0;
        temp_v1->unk2 = (s16) temp_v1->unk80->unk10->unk2;
        return;
    }
    temp_v1->unk0 = 3;
    temp_v1->unk2 = 0xF;
    func_8001D8B0(temp_v1->unk14, 1, 1, 1, 1, (u16) 1);
}
*/
#pragma GLOBAL_ASM("asm/nonmatchings/8650/func_80008A00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/8650/func_80008AD8.s")
