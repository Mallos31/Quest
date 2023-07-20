#ifndef _NPC_H_
#define _NPC_H_

typedef struct {
    char unk0[0x2];
    s16 unk2;
    char unk4[0xA];
    s16 unkE;
    
}NPCData3;

typedef struct {
    char unk0[0x4];
    u8 unk4;
    char unk5[0xB];
    NPCData3* unk10;
    char unk14[4];
    u16 unk18;
}NPCData2;

typedef struct {
/*0x00*/u16 action;
/*0x02*/u16 actionTimer;
/*0x04*/f32 xWanderOrigin; //xpos of a point a wandering NPC can't stray too far from.  
/*0x08*/f32 zWanderOrigin; //zpos of a point a wandering NPC can't stray too far from. 
/*0x0C*/f32 yRotReturn; //yRotation to return to when done speaking. 
/*0x10*/f32 unk10; //changes based on where Brian speaks to the NPC from. Current purpose unknown. 
/*0x14*/PosRot PosRot;
/*0x2C*/f32 unk2C; 
/*0x30*/f32 unk30;
/*0x34*/f32 unk34;
/*0x38*/f32 scale;
/*0x3C*/f32 collisionSize;
/*0x40*/Vec3f shadowRot;
/*0x4C*/char unk4C[0x14];
/*0x60*/u16 unk60;
/*0x62*/char unk62[4];
/*0x66*/s16 animID;
/*0x68*/u16 animFrames;
/*0x6A*/u16 totalFrames;
/*0x6C*/u16 animSpeed;
/*0x6E*/s16 unkAnimID; //may be nextAnimID, but doesn't seem to be. Research needed. 
/*0x70*/s16 unk70;
/*0x72*/char unk72[0x2];
/*0x74*/u16 unk74;
/*0x76*/char unk76[0xA];
/*0x80*/NPCData2* unk80;    
}NPCData;

#endif
