#include "common.h"
#include "player.h"
#include "monsters.h"

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

typedef struct {
    s32 start;
    s32 end;
}fileBounds;

typedef struct {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    char unk6[0x5E];
    s16 unk64;
    char unk66[0xE];
    u16 unk74;
    char unk76[0xA0];
    s16 unk116;
    s8 unk118;
}unkBAB8;

typedef struct {
    s16 unk0;
    s16 unk2;
    s16 unk4;
}unk69fcs;

typedef struct unk_3f5c_s{
    char unk0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    char unk24[0x3C];
    u16 unk60;
}unk3f5cs;

typedef struct unk_3f5c_s2{
    s16 unk0;
    s16 unk2;
    u16 unk4;
}unk3f5cs2;

typedef struct {
    u16 map;
    u16 submap;
    f32 x;
    f32 z;
    f32 yrot;
}RespawnLocation;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
}unk80085368;

/*beginning of stuff for func_800074A0*/
typedef struct unkStruct4 {
    char unk00[4];
    u16 unk4;
    u16 unk6;
    u16 unk8;
    u16 unkA;
    u16 unkC;
    u16 unkE;
    s32 unk10;
} unkStruct4;

typedef struct unkStruct3 {
    char unk00[0x64];
    unkStruct4* unk64;
} unkStruct3;

typedef struct ElementLevels {
    u8 fire;
    u8 earth;
    u8 water;
    u8 wind;
} ElementLevels;

typedef struct unkStruct2 {
    char unk_00[0x24];
    ElementLevels elements;
    u16 unk28;
    u16 unk2A;
    u16 unk2C;
    u16 unk2E;
    u8 unk30;
    u8 unk31;
    u8 unk32;
    u8 unk33;
    u8 unk34;
} unkStruct2;

typedef struct unkStruct {
    u16 unk0;
    char unk_02[6];
    u16 unk8;
    char unk_0A[6];
    unkStruct2* unk10;

    //0x34 is a substruct within this struct
    //char unk_14[0x50]; //unk size
} unkStruct;

extern u32 D_80053D3C[];
extern u16 D_80053ECC[];
extern f64 D_800710F8;
extern f64 D_80071100;
extern s32 D_8007B2E4;
extern f32 D_8007BA5C;
extern s32 D_8007BA70;
//extern u8 D_8007BA73;
extern f32 D_8007BC10;
extern f32 D_8007BC14;
extern f32 D_8007BC18;
extern f32 D_8007BC1C;
extern u16 gAllowBattles;
extern u16 gBattleState;

void func_800268D4(s32 arg0, s8 arg1, s32 arg2);
void func_800120C0(s32);
void func_8002E768(s32);
void AddItemToInventory(u8);

/*end of stuff for func_800074A0*/

extern RespawnLocation gRespawnLocationTbl[];
extern BrianData1* D_8007BAC8;
extern unk80085368 D_80085368;
extern void* D_80054158;  //the address after the end of the table of respawn locations. 

extern f32 D_8007BA40; //spawn/load x
extern f32 D_8007BA44; //spawn/load z
extern f32 D_8007BA48; //spawn/load yrot
extern s32 gCurrentMap;
extern s32 gCurrentSubmap;
extern unkBAB8 D_8007BAB8;
extern s32 D_8007BC2C;

typedef struct {
    /* 0x000 */ u8 unk_000[0x116];
    /* 0x114 */ s16 unk_116;
} struct_80053D00;

extern struct_80053D00 *D_80053D00[];

extern fileBounds D_80053F58[];

//
//
void func_80002EA0(void);
//
//
//
//
void func_80003F5C(unk3f5cs* arg0, unk3f5cs2* arg1, s32 arg2);
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
void func_800056D0(BrianData2* arg0, s32 arg1, unk232f4s* arg2);
void func_80005740(void);
//
//
//
//
//
//
void func_80006604(unk6604s* arg0, BrianData2* arg1, s32 arg2);
void func_8000669C(u8 arg0);
void func_80006720(BrianData2* arg0);
void func_800069FC(sPlayerAction* arg0, BrianData2* arg1, MonsterBattleData* arg2);

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_800027D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_80002918.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_80002EA0.s")
void func_80002EA0(void) {
    int i;

    D_8007BAC8->colissionSize = 50.0f;
    gCurrentMap = gNextMap;
    gCurrentSubmap = gNextSubmap;
    D_80085368.unk8 = 0;
    for(i = 0; i < 17; i++) {
        if ((gNextMap == gRespawnLocationTbl[i].map) && (gNextSubmap == gRespawnLocationTbl[i].submap)) {
            D_8007BA40 = gRespawnLocationTbl[i].x;
            D_8007BA44 = gRespawnLocationTbl[i].z;
            D_8007BA48 = gRespawnLocationTbl[i].yrot;
            D_80085368.unk8 = -1;
            break;
        }
    }
    gNextMap = -1;
    gNextSubmap = -1;
}

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
    func_8001D8B0(arg1, 0x1C, 1, 0x1D, 1, (u16) 1);
    func_80006720(arg1);
    func_8001D924(arg1, (arg1->animID * 0xC) + arg2, arg1->scale);
    arg0->unk0 = 0xB;
    arg0->unk4 = 0x5A;
    arg1->unk60 |= 1;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_8000669C.s")
void func_8000669C(u8 arg0) {
    struct_80053D00 *x = D_80053D00[D_8007BAB8.unk64];
    D_8007BAB8.unk118 =  arg0;
    D_8007BAB8.unk0 = 0xC;
    D_8007BAB8.unk4  = x->unk_116;
    D_8007BAB8.unk74 |= 1;
    func_8001D8B0(&gPlayerPos, 0x17, 1, 0x16, 1, (u16) 1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_80006720.s") 
//!TODO matches, but keeps putting 8004C270 into .rodata

/*void func_80006720(BrianData2* arg0) {
    s32 start;
    s32 size;
    fileBounds* fb;
    static s32 D_8004C270 = 0; // or could be .bss

    if (D_8004C270 != arg0->animID) {

        D_8004C270 = arg0->animID;
        
        fb = &D_80053F58[D_8004C270];      
        
        start = fb->start;
        size = fb->end - start;      
        
        dma_write(start, 0x80200000, size);
    }
}*/

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_80006774.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_800069FC.s")
/*!TODO Confirm the structs are correct here*/
void func_800069FC(sPlayerAction* arg0, BrianData2* arg1, MonsterBattleData* arg2) {
    arg0->unk0 = 0xD;
    arg0->dustTimer = 0x14;
    arg1->unk60 |= 1;
    func_8001D8B0(arg1, 0xA, 1, D_8007BC2C, 1, 1);
    func_800140EC(0x23, arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_80006A74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_80006B1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_80006BEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_80006F6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_80007030.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_800070C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_800072A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_800073CC.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/33D0/func_800074A0.s")
void func_800074A0(unkStruct* arg0, unkStruct3* arg1) {
    u16 var_a0;
    ElementLevels* elementsInstance;

    if (!(gBattleState & 1)) {
        if (gAllowBattles & 1) {
            D_8007BC10 += D_8007BA5C;
            if (D_8007BC10 > 200.0) {
                D_8007BC10 -= 200.0;
            }
            D_8007BC18 += D_8007BA5C;
            if (1000.0 < D_8007BC18) { //D_800710F8 is 1000.0
                D_8007BC18 -= 1000.0;
                arg0->unk10->unk2C++;
            }
        } else {
            D_8007BC14 += D_8007BA5C;
            if (D_8007BC14 > 800.0) {
                D_8007BC14 -= 800.0;
            }
            D_8007BC1C += D_8007BA5C;
            if (2000.0 < D_8007BC1C) { //D_80071100 is 2000.0
                D_8007BC1C -= 2000.0;
                arg0->unk10->unk2C++;
            }
        }
    }
    if (arg1->unk64->unk6 < 500) {
        if (arg0->unk10->unk28 >= D_80053ECC[arg0->unk10->unk30]) {
            arg0->unk10->unk28 = arg0->unk10->unk28 - D_80053ECC[arg0->unk10->unk30];
            var_a0 = 1;
            if ((arg1->unk64->unk6 + 1) > 500) {
                var_a0 = 500 - arg1->unk64->unk6;
            }
            arg1->unk64->unk6 += var_a0;
            arg1->unk64->unk4 += var_a0;
            if (arg0->unk10->unk30 < 54) {
                arg0->unk10->unk30++;
            }
        }
    } else {
        arg0->unk10->unk28 = 0;
    }
    if (arg1->unk64->unkA < 500) {
        if (arg0->unk10->unk2A >= D_80053ECC[arg0->unk10->unk31] * 4) {
            arg0->unk10->unk2A -= D_80053ECC[arg0->unk10->unk31] * 4;
            var_a0 = 1;
            if ((arg1->unk64->unkA + 1) > 500) {
                var_a0 = (500 - arg1->unk64->unkA);
            }
            arg1->unk64->unkA += var_a0;
            arg1->unk64->unk8 += var_a0;
            if (arg0->unk10->unk31 < 54) {
                arg0->unk10->unk31++;
            }
        }
    } else {
        arg0->unk10->unk2A = 0;
    }
    if (arg1->unk64->unkC < 255) {
        if (arg0->unk10->unk2C >= D_80053ECC[arg0->unk10->unk32]) {
            arg0->unk10->unk2C -= D_80053ECC[arg0->unk10->unk32];
            var_a0 = 1;
            if ((arg1->unk64->unkC + 1) > 255) {
                var_a0 = (255 - arg1->unk64->unkC);
            }
            arg1->unk64->unkC += var_a0;
            if (arg0->unk10->unk32 < 54) {
                arg0->unk10->unk32++;
            }
        }
    } else {
        arg0->unk10->unk2C = 0;
    }
    if (arg1->unk64->unkE < 255) {
        if (arg0->unk10->unk2E >= D_80053ECC[arg0->unk10->unk33] * 2) {
            arg0->unk10->unk2E -= D_80053ECC[arg0->unk10->unk33] * 2;
            var_a0 = 1;
            if ((arg1->unk64->unkE + 1) > 255) {
                var_a0 = (255 - arg1->unk64->unkE);
            }
            arg1->unk64->unkE += var_a0;
            if (arg0->unk10->unk33 < 54) {
                arg0->unk10->unk33++;
            }
        }
    } else {
        arg0->unk10->unk2E = 0;
    }
    if (!(D_8007B2E4 & 8)) {
        if (arg0->unk10->unk34 >= 98) {
            arg1->unk64->unk10 = 0;
        } else {
            if (arg1->unk64->unk10 >= D_80053D3C[arg0->unk10->unk34]) {
                arg1->unk64->unk10 -= D_80053D3C[arg0->unk10->unk34];
                if (arg0->unk10->unk34 < 98) {
                    arg0->unk10->unk34++;
                }
                elementsInstance = &arg0->unk10->elements;
                if ((elementsInstance->fire != 50) || (elementsInstance->earth != 50) || (elementsInstance->water != 50) || (elementsInstance->wind != 50)) {
                    D_8007B2E4 |= 8;
                    arg0->unk0 = 0;
                    func_800268D4(0, 1, 0xFF);
                }
            }
        }
    }
    if (!(D_8007B2E4 & 0xA) && (D_8007BA70 != 255)) {
        func_800120C0(D_8007BA70);
        func_8002E768(1);
        AddItemToInventory(D_8007BA70);
        D_8007BA70 = 255;
        arg0->unk8 |= 2;
        D_8007B2E4 |= 2;
        func_800268D4(0, 0x3B, 255);
    }
}