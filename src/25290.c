#include "common.h"
#include "monsters.h"

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

extern unk2513cs D_8008F978;

extern s16* D_8008F68C;
extern ALSndPlayer D_8008F620;
extern s32 D_800539A4;
extern s32 D_800539B8;

extern s32 D_8005390C[];
extern s32 D_8005392C[];
extern s32 D_8005394C[];
extern u32 D_80053970;
extern s32 D_8008FCB4;
extern void* func_80024BEC;
extern s32 D_800539E4;
extern u32 D_8005398C;
extern s32 D_80053990;
extern s32 D_8008F92C;
extern s32 D_8008D090;
extern OSMesgQueue D_8008F288;
extern ALBankFile* D_800538E8;
extern ALSeqFile* D_800538F0;
extern ALHeap D_8008F240;
extern ALCSPlayer D_8008F994;
extern ALSeqpConfig D_8008FB14;
extern ALCSPlayer D_8008FB30;
extern s32 D_8008FCB0;




//#pragma GLOBAL_ASM("asm/nonmatchings/25290/func_80024690.s")
void func_80024690(u32 arg0, void* arg1, s32 arg2) {
    OSIoMesg sp28;

    osInvalDCache(arg1, arg2);
    osPiStartDma(&sp28, 0, 0, arg0, arg1, (u32) arg2, &D_8008F288);
    osRecvMesg(&D_8008F288, NULL, 1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/25290/func_80024704.s")

#pragma GLOBAL_ASM("asm/nonmatchings/25290/func_800248C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/25290/func_80024A48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/25290/func_80024B1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/25290/func_80024BEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/25290/func_80025040.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/25290/func_800250E8.s")
void func_800250E8(void* arg0) {
    osCreateThread((OSThread *)&D_8008D090, 5, (void *)&func_80024BEC, arg0, &D_8008F240, 0x32);
    osStartThread((OSThread *)&D_8008D090);
}

//#pragma GLOBAL_ASM("asm/nonmatchings/25290/func_8002513C.s")
void func_8002513C(s32 arg0, s32 arg1, u8* arg2, s32 arg3, u8* arg4) {
    ALBank* temp_s0_2;

    D_8008F978.unk190 = (s32) alHeapDBAlloc(0, 0,(ALHeap *)&D_8008F240, 1, 0x8000);
    D_8008F978.unk32C = (s32) alHeapDBAlloc(0, 0, &D_8008F240, 1, 0x8000);
    D_8008F978.unk0 = 0x40;
    D_8008F978.unk4 = 0x40;
    D_8008F978.unk8 = 0x10;
    D_8008F978.unkC = &D_8008F240;
    D_8008F978.unk10 = 0;
    D_8008F978.unk14 = 0;
    D_8008F978.unk18 = 0;
    D_8008F978.unk9 = 0;
    alCSPNew(&D_8008F994,(ALSeqpConfig *) &D_8008F978);
    D_8008F978.unk19C = 0x40;
    D_8008F978.unk1A0 = 0x40;
    D_8008F978.unk1A4 = 0x10;
    D_8008F978.unk1A8 = (s32) &D_8008F240;
    D_8008F978.unk1AC = 0;
    D_8008F978.unk1B0 = 0;
    D_8008F978.unk1B4 = 0;
    D_8008F978.unk1A5 = 0;
    alCSPNew((ALCSPlayer *)&D_8008FB30, &D_8008FB14);
    func_80025040(arg2);
    alSeqFileNew(D_800538F0, arg2);
    D_800538E8 = alHeapDBAlloc(0, 0, &D_8008F240, 1, arg1 - arg0);
    func_80024690(arg0, (void*)D_800538E8, arg1 - arg0);
    alBnkfNew((ALBankFile *)D_800538E8, arg4);
    temp_s0_2 = D_800538E8->bankArray[0];
    alSeqpSetBank((ALSeqPlayer *)&D_8008F994, temp_s0_2);
    alSeqpSetBank((ALSeqPlayer *)&D_8008FB30, temp_s0_2);
}

#pragma GLOBAL_ASM("asm/nonmatchings/25290/func_800252D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/25290/func_80025364.s")

#pragma GLOBAL_ASM("asm/nonmatchings/25290/func_800253F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/25290/func_8002543C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/25290/func_80025488.s")

#pragma GLOBAL_ASM("asm/nonmatchings/25290/func_80025634.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/25290/func_8002568C.s")
void func_8002568C(s32 arg0) {
    alSndpSetSound(&D_8008F620, D_8008F68C[arg0]);
    alSndpStop(&D_8008F620);
}

//#pragma GLOBAL_ASM("asm/nonmatchings/25290/func_800256D4.s")
void func_800256D4(s32 arg0) {
    alSndpSetSound(&D_8008F620, D_8008F68C[arg0]);
    alSndpGetState(&D_8008F620);
}
#pragma GLOBAL_ASM("asm/nonmatchings/25290/func_8002571C.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/25290/func_800258F8.s")
void func_800258F8(s32 arg0) {
    if ((arg0 >= 0) && (arg0 < 0x47)) {
        D_8008F92C = (&D_800539E4)[arg0];
        return;
    }
    D_8008F92C = D_800539E4;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/25290/func_80025938.s")
s32 func_80025938(void) {
    if ((D_8005398C != 0) || (D_80053990 != 0)) {
        return 1;
    }
    func_80025984();
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/25290/func_80025984.s")

#pragma GLOBAL_ASM("asm/nonmatchings/25290/func_80025B3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/25290/func_80025B8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/25290/func_80025BD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/25290/func_80025E0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/25290/func_80026214.s")

#pragma GLOBAL_ASM("asm/nonmatchings/25290/func_800262F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/25290/func_800263A8.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/25290/func_80026434.s")
s32 func_80026434(u32 arg0) {
    if ((D_8005398C != 0) || (D_80053990 != 0)) {
        return 1;
    }
    D_8005398C = 0x8000U / arg0;
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/25290/func_80026488.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/25290/func_8002650C.s")
void func_8002650C(void) {
    if (D_800539A4 != 0xFF) {
        func_8002568C(D_800539A4);
    }
    D_800539B8 = 0;
    D_800539A4 = 0xFF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/25290/func_80026554.s")
