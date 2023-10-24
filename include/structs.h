#ifndef _STRUCTS_H_
#define _STRUCTS_H_

typedef struct Vec3f {
  union {
    struct {
      f32 x;
      f32 y;
      f32 z;
    };
    f32 f[3];
  };
} Vec3f;

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

typedef struct {
Vec3f pos;
Vec3f rot;
} PosRot;

typedef struct map_data_s{
    char unk0[0x30];
    s32 unk30;
    s32 unk34;
}sMapData; //Map Data Struct

typedef struct
{
    u8 red;
    u8 green;
    u8 blue;
    u8 alpha;
}Color_RGBA8;


//Leave this one for last. Seems to be used by several files, but probably isn't ACTUALLY
typedef struct unk_232f4_s{
    f32 x;
    f32 y;
}Coordinates2D;

//used by a function whose prototype is in functions.h and needs to be moved when it is. 
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

//Move later. Used by a variable that is used in multiple C files. 
typedef struct unk_D_80086DC0_s
{
    s32 unk0;
    s32 unk4;
    u16 unk8;
    s16 unkA;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    char unk18[0x3C];
    f32 unk54;
}unkD80086DC0s;


/*Used for the type of a global variable that is used in 97B0.c, 8650.c, and inventory.c
  Find out what this is and put it in its own header. */
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

typedef struct test {
    /* 0x000 */ char unk00[0x7B8];
} test; // size = 0x7B8

#endif

