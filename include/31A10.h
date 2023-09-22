#ifndef _31A10_H
#define _31A10_H

typedef short int16_t;
typedef int16_t   qs510_t;
#define qs510(n)                      ((qs510_t)((n)*0x0400))

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
}temps;

extern u8 D_8005FAA0[];
extern temps D_8005FA90[];
extern s32 D_80092860;
extern s32 D_80092864;

typedef struct test2 {
    /* 0x00 */ char unk00[0x20];
} test2; // size = 0x20
extern test2 gTextPalettes[];
extern u8 D_D3E240[];
extern u8 gTexAlphabetPhys[];

void string_copy(u8 *arg0, u8 *arg1);
void loadTextTextureAndPal(void);

#endif
