#include "common.h"
#include "monsters.h"

typedef struct {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    char unk8[0x10];
}unk1d474s2;

typedef struct {
    unk1d474s2* unk0;
    s32 unk4;  //probably very wrong
}unk1d474s;

typedef struct unk_1c560_s{
    char unk0[0x30];
    s32 unk30;
    s32 unk34;
}unk1c560s; //Map Data Struct

typedef struct {
    void* stats;
    Vec3f* pos;
    Vec3f* rot;
    f32 unk1C;
    f32 unk20;
    f32 unk24;
    f32 scale;
    f32 collisionScale;
    Vec3f* shadowPos;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
    f32 unk48;
    f32 unk4C;
    s16 modelID;
    s16 animID;
    u16 animFrame;
    u16 totalFrameCnt;
    u16 animSpeed;
    u16 nextAnimID;
    s16 unk5C;
    s16 unk5E;
    u16 unk60;
    u16 unk62;
    MonsterBaseData *unk64;
    UnknownMonsterData2 *unk68;
    UnknownMonsterData2 unk6C;
}unkEnemy;

typedef struct {
    s16 unk0;
    s16 unk2;
}unkEncounterSomething;

typedef struct {
    void* unk0;
    void* unk4;
    unkEncounterSomething* unk8;
    s32 unkC; //encounter rate? 
}unkEncounterData;

extern unkEnemy* D_8007C9B8[];
extern u16 D_8008C59A;
extern s32 gNextSubmap;
extern u16 gAllowBattles;
extern void* D_8008C560;
extern unkEncounterData* D_8008C564;
extern f32 D_8008C574;
extern s16 D_8008C578;
extern f32 max_encounter_distance_sqr; //.rodata
extern f32 min_encounter_distance_sqr; //.rodata


//#pragma GLOBAL_ASM("asm/nonmatchings/1D160/func_8001C560.s")
void func_8001C560(void) {

    gBattleState &= 0x8000;
    D_8008C574 = 0.0f;
    D_8008C578 = 0;
    if (gAllowBattles & 1) {
        if (gMapData->unk30 != 0) {
            D_8008C560 = gMapData->unk30 + (gNextSubmap * 8);
            D_8008C564 = gMapData->unk34 + (gNextSubmap * 0x10);
            return;
        }
        D_8008C560 = 0;
        D_8008C564 = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/1D160/func_8001C5F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/1D160/func_8001C8C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/1D160/func_8001CACC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/1D160/func_8001CFE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/1D160/func_8001D358.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/1D160/func_8001D474.s") //!TODO rejigger the loop
void* func_8001D474(f32 arg0, f32 arg1, unk1d474s* arg2) {
    s32 var_v0;
    unk1d474s2* var_v1;

    var_v1 = NULL;
    if (arg2 != NULL) {
        var_v0 = arg2->unk4;
        var_v1 = arg2->unk0;
        
        while (var_v0 != 0) {
            if (!(var_v1->unk0 <= arg0) || !(var_v1->unk2 <= arg1) || !((arg0 - var_v1->unk0) <= var_v1->unk4) || !((arg1 - var_v1->unk2) <= var_v1->unk6)) {
                var_v0--;
                var_v1++;
            } else {
                break;
            }
        }
        if (var_v0 == 0) {
            var_v1 = NULL;
        }
    }
    return var_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/1D160/func_8001D538.s")

#pragma GLOBAL_ASM("asm/nonmatchings/1D160/func_8001D640.s")

void func_8001D820(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/1D160/func_8001D828.s")

