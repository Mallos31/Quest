#ifndef _MONSTERS_H_
#define _MONSTERS_H_

#define ON_GROUND 0
#define FLYING 1
#define MAMMON 2

typedef struct {
    u8 unk0[0x18];
}AIScript;

typedef struct {
    /* 0x00 */ u16 monsterType; //Ground, Flying, or Mammon (doesn't render a shadow)
    /* 0x02 */ u16 monsterID;
    /* 0x04 */ u16 currHP;
    /* 0x06 */ u16 maxHP;
    /* 0x08 */ f32 unk8; //possibly monster MP which would be unused since monsters don't USE MP
    /* 0x0C */ u16 agi;
    /* 0x0E */ u16 def;
    /* 0x10 */ s32 expValue;
    /* 0x14 */ s32 unk14;
    /* 0x18 */ f32 hitboxHeight;
    /* 0x1C */ f32 hitboxWidth;
    /* 0x20 */ f32 modelScale;
    /* 0x24 */ u16 unk24; //type may be wrong
    /* 0x26 */ u16 element; //type may be wrong
    /* 0x28 */ u16 unk28;
    /* 0x2A */ u16 atk; //spell id or actual attack power? 
    /* 0x2C */ u16 aiScriptNumber;
    /* 0x2E */ u16 unk2E;
    /* 0x30 */ AIScript* AIScript;
    /* 0x34 */ u8 itemDrop;
    /* 0x35 */ u8 unk35;
    /* 0x36 */ u16 unk36;
} MonsterBaseData; // size 0x38

typedef struct {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    u16 unk8;
}UnknownMonsterData3;

typedef struct {
/*0x00*/ u16  unk0;
/*0x02*/ char unk2[0x10];
/*0x12*/ u8 status[7];
/*0x19*/ char unk19[0x2B];
/*0x44*/ UnknownMonsterData3* unk44[4];
/*0x54*/ char unk54[0x32];
/*0x86*/ u16 unk86;
/*0x88*/ u16 unk88;
/*0x8A*/ u16 unk8A;
/*0x8C*/ u16 unk8C;
/*0x8E*/ char unk8E[2];
/*0x90*/ f32 unk90;
/*0x94*/ f32 unk94;
} UnknownMonsterData2;

typedef struct {
    /* 0x00 */ Vec3f pos;
    /* 0x0C */ f32 xrot;
    /* 0x10 */ f32 yrot;
    /* 0x14 */ f32 zrot;
    /* 0x18 */ f32 unk18;   
    /* 0x1C */ f32 unk1C;
    /* 0x20 */ f32 unk20;
    /* 0x24 */ f32 scale;
    /* 0x28 */ f32 collisionScale;
    /* 0x2C */ f32 shadowXRot;
    /* 0x30 */ f32 shadowYRot;
    /* 0x34 */ f32 shadowZRot;
    /* 0x38 */ f32 unk38;
    /* 0x3C */ f32 unk3C;
    /* 0x40 */ f32 unk40;
    /* 0x44 */ f32 unk44;
    /* 0x48 */ f32 unk48;
    /* 0x4C */ f32 unk4C;
    /* 0x50 */ s16 modelID;
    /* 0x52 */ s16 animID;
    /* 0x54 */ u16 animFrame;
    /* 0x56 */ u16 totalFrameCnt;
    /* 0x58 */ u16 animSpeed;
    /* 0x5A */ u16 nextAnimID; //may be incorrect 
    /* 0x5C */ s16 unk5C;
    /* 0x5E */ s16 unk5E;
    /* 0x60 */ u16 unk60;
    /* 0x62 */ u16 unk62;
    /* 0x64 */ MonsterBaseData *unk64;
    /* 0x68 */ UnknownMonsterData2 *unk68;
    /* 0x6C */ UnknownMonsterData2 unk6C;
} MonsterBattleData; // size 0x104

typedef struct {
    /* 0x0   */ u16 actionID;
    /* 0x2   */ s16 actionTimer;
    /* 0x4   */ u16 unk4;
    /* 0x6   */ u16 unk6;
    /* 0x8   */ u16 unk8;
    /* 0xA   */ u16 currHP;
    /* 0xC   */ u16 maxHP;
    /* 0XE   */ u16 unkE;
    /* 0x10  */ f32 movementBoundSize;
    /* 0x14  */ u8   pad[0x8];
    /* 0x1C  */ AIScript* AIScript;
    /* 0x20  */ MonsterBaseData* monBaseData;
    /* 0x24  */ MonsterBattleData battleData;
} EnemyAction; // size 0x128

#endif
