#ifndef _PLAYER_H_
#define _PLAYER_H_


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

typedef struct player_Action_s
{
            s16 unk0;
            s16 unk2;
            s16 dustTimer;
            s16 doorSide;
            u16 unk8;
            s16 unkA;
            s32 unkC;
            void* unk10;
            f32 xpos;
            f32 ypos;
            f32 zpos;
            char unk20[0x18];
            f32 unk38; //
            char unk3C[0x3C];
            BrianData1* unk78;            
}sPlayerAction;


extern BrianData2 D_8007BACC;


#endif
