#ifndef _STRUCTS_H_
#define _STRUCTS_H_

typedef struct map_data_s{
    char unk0[0x30];
    s32 unk30;
    s32 unk34;
}sMapData; //Map Data Struct

typedef struct unk_7d4_s{
    s32 unk0;
    s32 unk4;
}unk7d4s;

typedef struct unk_7d4_s2{
    char unk0[0x668];
    s32 unk668;
}unk7d4s2;

typedef struct unk_8b0_s{
    s32 unk0;
    s32 unk4;
}unk8b0s;

typedef struct unk_Shadow_s{
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
}unkShadows;


//Some audio libray struct for func_8002513C
typedef struct unk_2513c_s{
    s32 unk0;
    s32 unk4;
    u8 unk8;
    u8 unk9;
    u16 unkA;
    ALHeap* unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    char unk1C[0x174];
    s32 unk190;
    char unk194[8];
    s32 unk19C;
    s32 unk1A0;
    u8 unk1A4;
    u8 unk1A5;
    s16 unk1A6;
    s32 unk1A8;
    s32 unk1AC;
    s32 unk1B0;
    s32 unk1B4;
    char unk1B8[0x174];
    s32 unk32C;
}unk2513cs;

//second struct for func_8002513C
typedef struct unk_2513c_s2{
    s32 unk0;
    s32 unk4;
}unk2513cs2;


typedef struct unk_222b4_s{
    char unk0[0x14];
    u16 unk14;
}unk222b4s;

typedef struct unk_22260_s{
    char unk0[0x64];
    s32 unk64;
}unk22260s;

typedef struct unk_22260_s2{
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
}unk22260s2;

typedef struct unk_22260_s3{
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u16 unk6;
    u16 unk8;
    u16 unkA;
}unk22260s3;

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

typedef struct unk_16ffc_s{
    char unk0[0x24];
    s32 unk24;
    s32 unk28;
}unk16ffcs;

typedef struct unk_164e4_s{
    char unk0[0xA];
    u16 unkA;
}unk164e4s;

typedef struct unk_173e0_s{
    char unk0[0x68];
    s32 unk68;
}unk173e0s;

typedef struct unk_1b0d0_s{
    s16 unk0;
    char unk2[0x3E];
}unk1b0d0;

typedef struct
{
    u8 red;
    u8 green;
    u8 blue;
    u8 alpha;
}Color_RGBA8;

typedef struct unk_110d0_s{
    s32 unk0;
    char unk4[0x2C];
}unk110d0s;

typedef struct unk_11170_s {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C; 
}unk11170s;

//inventory
typedef struct unk_2260c_s{
    s16 unk0;
    s16 unk2;
    s16 unk4;
}unk2260cs;


typedef struct temp {
    s8 unk_00;
    s8 unk_01;
} temp;

typedef struct unk_213d8_s{
    s16 unk0;
    u16 unk2;
    s16 unk4;
    s16 unk6;
    s16 unk8;
    s16 unkA;
} unk213d8s;

typedef struct unk_232f4_s{
    f32 unk0;
    f32 unk4;
}unk232f4s;

typedef struct unk_1d924_s
{
    s32 unk0;
    s16 unk4;
    s16 unk6;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
}unk1d924s;

typedef struct unk_23df4_s
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
}unk23df4s;

typedef struct unk_23a08_s
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
}unk23a08s;


typedef float MtxF_t[4][4];
typedef union {
    MtxF_t mf;
    struct {
        float xx, yx, zx, wx,
              xy, yy, zy, wy,
              xz, yz, zz, wz,
              xw, yw, zw, ww;
    };
} MtxF;

typedef struct unk_23974_s
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
}unk23974s;

typedef struct unk_db38_s //door animation struct
{
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
}unkdb38s;

typedef struct unk_e3c4_s
{
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    char unk20[0x18];
    s32 unk38;
    char unk3C[0x18];
    s32 unk54;
    char unk58[0x18];
}unke3c4s;

//Used in multiple C files
typedef struct {
    char unk0[0x52];
    s16 unk52;
    u16 unk54;
    u16 unk56;
    s16 unk58;
    s16 unk5A;
    u16 unk5C;
    s16 unk5E;
    u16 unk60;
}unk1e0acs;

typedef struct {
    s16 unk0;
    s16 unk2;
}unk1e0acs2;


//update
typedef struct unk_1d8b0_s
{
    char unk0[0x52];
    s16 unk52;
    s16 unk54;
    s16 unk56;
    s16 unk58;
    s16 unk5A;
    s16 unk5C;
    s16 unk5E;
    u16 unk60;
}unk1d8b0s;

//typedef struct Message
//{
///*0x00*/    s32 unk0; //textbox state? 
///*0x04*/    s16 xpos; //textbox xpos
///*0x06*/    s16 ypos; //textbox ypos
///*0x08*/    s16 width; //width
///*0x0A*/    s16 height; //height
///*0x0C*/    s16 quillTimer; //quill position timer
///*0x0E*/    u8 unkE;
///*0x0F*/    s8 unkF;
///*0x10*/    s8 unk10;
///*0x11*/    s8 unk11;
///*0x12*/    s16 unk12;
///*0x14*/    s8 unk14;
///*0x15*/    s8 unk15;
///*0x16*/    s8 unk16;
///*0x17*/    char unk17[0x21];
///*0x38*/    s16 unk38;
///*0x3A*/    s16 unk3A;
///*0x3C*/    char unk3C[0x860];
//} Message; // size = 0x89C

typedef struct player_Action_s
{
   /*0x00*/ s16 unk0;
   /*0x02*/ s16 unk2; //pad? 
   /*0x04*/ s16 dustTimer;
   /*0x06*/ s16 doorSide;
   /*0x08*/ u16 unk8;
   /*0x0A*/ s16 unkA; //unconfirmed type
   /*0x0C*/ s32 unkC; //unconfirmed type
   /*0x10*/ void* unk10; //pointer to beginning of player struct 
   /*0x14*/ f32 xpos;
   /*0x18*/ f32 ypos;
   /*0x1C*/ f32 zpos;
    
}sPlayerAction;

typedef struct unk_30e10_s
{
    u8 unk0;
    u8 unk1;
}unk30e10s;

typedef struct unk_1205c_s
{
    char unk0[0x60];
    u16 unk60;
    u16 unk62;
}unk1205cs;

typedef struct unkD_80086EE0_s
{
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s16 unkC;
    s16 unkE;
    f32 unk10;
    f32 unk14;
    f32 unk18;
}unkD80086EE0s;

typedef struct unk_D_80086DC0_s
{
    s32 unk0;
    s32 unk4;
    u16 unk8;
    char unkA[0x48];
    f32 unk54;
}unkD80086DC0s;


typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    u16 unk14;
    char unk16[0xE];    
}unkfde0s;

typedef struct {
    s32 unk0;
    unkfde0s* unk4;
    s32 unk8;
    char unkC[0x6];
    u16 unk12;
    u16 unk14;
}unk84f1cs;


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
    u8  pad[0x94];
    f32 unk94;
} UnknownData2; // size 0x98

typedef struct {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 z;
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
    /* 0x68 */ UnknownData2 *unk68;
    /* 0x6C */ UnknownData2 unk6C;
} MonsterBattleData; // size 0x104

typedef struct {
    /* 0x0   */ u16 actionID;
    /* 0x2   */ u16 actionTimer;
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
    /* 0x24  */ MonsterBattleData pos; //monster 1 position 
} EnemyAction; // size 0x128


typedef struct {
    /*0x00*/ u16 unk0;
    /*0x02*/ s16 unk2;
    /*0x04*/ u16 currHP;
    /*0x06*/ u16 maxHP;
    /*0x08*/ u16 currMP;
    /*0x0A*/ u16 maxMP;
    /*0x0C*/ u16 agi;
    /*0x0E*/ u16 def;
    /*0x10*/ s32 exp;
    /*0x14*/ s32 unk14;
    /*0x18*/ f32 colissionSize;
    /*0x1C*/ f32 unk1C;
    /*0x20*/ f32 unk20; //also affects colission size. May be zColissionSize and the above are X and Y.
    /*0x24*/ u8 fireSpirits;
    /*0x25*/ u8 earthSpirits;
    /*0x26*/ u8 waterSpirits;
    /*0x27*/ u8 windSpirits;
    /*0x28*/ u16 HPXP;
    /*0x2A*/ u16 MPXP;
    /*0x2C*/ u16 agiXP;
    /*0x2E*/ u16 defXP;
    /*0x30*/ u8 HPLevel;
    /*0x31*/ u8 MPLevel;
    /*0x32*/ u8 agiLevel;
    /*0x33*/ u8 defLevel;
    /*0x34*/ u8 spiritLevel;
    /*0x35*/ u8 unk35;
    /*0x36*/ u8 unk36;
    /*0x37*/ u8 unk37;
    /*0x38*/ u16 unk38;
    /*0x3A*/ s16 unk3A;
    /*0x3C*/ s16 unk3C; //animation related
    /*0x3E*/ s16 unk3E; //side of door entered? 
    /*0x40*/ u16 unk40;
    /*0x42*/ s16 unk42;
    /*0x44*/ char unk44[0x4];
    /*0x48*/ void* brianData;    //points to the beginning of BrianData1 struct again. 
}BrianData1;

typedef struct {
    /*0x00*/ f32 x;
    /*0x04*/ f32 y;
    /*0x08*/ f32 z;
    /*0x0C*/ f32 xrot;
    /*0x10*/ f32 yrot;
    /*0x14*/ f32 zrot;
    /*0x18*/ f32 xspeed;
    /*0x1C*/ f32 yspeed;
    /*0x20*/ f32 zspeed;
    /*0x24*/ f32 scale;
    /*0x28*/ f32 shadowScale;
    /*0x2C*/ f32 shadowXRot;
    /*0x30*/ f32 shadowYRot;
    /*0x34*/ f32 shadowZRot;

    /*these are only written to when going through a door
    freezing the values zips you to strange parts of the map.
    may be the coordinates to load you into when going through a door.*/
    /*0x38*/ f32 unkDoor38;
    /*0x3C*/ f32 unkDoor3C;
    /*0x40*/ f32 unkDoor40;

    //only written to when using a door. Unknown what they actually do. 
    //NOTE: Freezing them makes brian unsuccessfully exit the door on the other side.
    /*0x44*/ f32 unkDoor44;
    /*0x48*/ f32 unkDoor48;
    /*0x4C*/ f32 unkDoor4C;
    /*0x50*/ s16 unk50;
    /*0x52*/ s16 animID;
    /*0x54*/ s16 animFrame;
    /*0x56*/ u16 totalAnimFrames;
    /*0x58*/ u16 animeFramerate;
    /*0x5A*/ s16 unk5A;
    /*0x5C*/ s16 unk5C;
    /*0x5E*/ s16 unk5E; //possibly padding
    /*0x60*/ u16 unk60;
    /*0x62*/ u16 unk62;
    /*0x64*/ BrianData1* brianData1;
    
}BrianData2;

#endif

