#include "common.h"


#define VIDEO_MSG       666
#define RSP_DONE_MSG    667
#define RDP_DONE_MSG    668
#define PRE_NMI_MSG     669

//unk0 may be u16 and unk678 may be s32 if there are future problems with it. 
typedef struct { 
    s16 unk0;
    s16 unk2;
    OSMesgQueue unk4;
    OSMesg unk1C;
    char unk20[0x1C];
    OSMesgQueue unk3C;
    OSMesg unk54;
    char unk58[0x1C];
    OSMesgQueue unk74;
    OSMesg unk8C;
    char unk90[0x1C];
    OSMesgQueue unkAC;
    OSMesg unkC4;
    char unkC8[0x1C];
    OSMesgQueue unkE4;
    OSMesg unkFC;
    char unk100[0x1C];
    OSMesgQueue unk11C;
    OSMesg unk134;
    char unk138[0x530];
    s32 clientList; //type is OSScClient once I figure out how to include it properly.
    s32 unk66C;
    s32 unk670;
    s32 unk674;
    u32 unk678;
}OSSched;

extern u16 D_8007B2D0;

void func_800008B0(OSSched* arg0, OSMesg arg1);

//#pragma GLOBAL_ASM("asm/nonmatchings/1130/func_80000530.s")
void func_80000530(OSSched* arg0, u8 numFields) {

    arg0->unk66C = 0;
    arg0->unk670 = 0;
    arg0->unk674 = 0;
    arg0->clientList = 0;
    arg0->unk678 = 1;
    arg0->unk0 = 1;
    arg0->unk2 = 3;
    
    osCreateMesgQueue(&arg0->unk74, &arg0->unk8C, 8);
    osCreateMesgQueue(&arg0->unkAC, &arg0->unkC4, 8);
    osCreateMesgQueue(&arg0->unkE4, &arg0->unkFC, 8);
    osCreateMesgQueue(&arg0->unk3C, &arg0->unk54, 8);
    osCreateMesgQueue(&arg0->unk4, &arg0->unk1C, 8);
    osCreateMesgQueue(&arg0->unk11C, &arg0->unk134, 8);
    
    osViSetEvent(&arg0->unk74, (OSMesg )VIDEO_MSG, (u32) numFields);
    osSetEventMesg(OS_EVENT_SP, &arg0->unkAC, (OSMesg )RSP_DONE_MSG);
    osSetEventMesg(OS_EVENT_DP, &arg0->unkE4, (OSMesg )RDP_DONE_MSG);
    osSetEventMesg(OS_EVENT_PRENMI, &arg0->unk74, (OSMesg )PRE_NMI_MSG);
}

#pragma GLOBAL_ASM("asm/nonmatchings/1130/func_8000062C.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/1130/func_800006F8.s")
s32 func_800006F8(s32 arg0) {
    return arg0 + 4;
}


//#pragma GLOBAL_ASM("asm/nonmatchings/1130/func_80000704.s")

s32 func_80000704(s32 arg0) {
    return arg0 + 0x3C;
}


//#pragma GLOBAL_ASM("asm/nonmatchings/1130/func_80000710.s")
void func_80000710(s32 arg0) {
    u32 sp3C;

    sp3C = 0;
    while(1){
    osRecvMesg(arg0 + 0x74, &sp3C, 1);
    D_8007B2D0 += 1;
    switch (sp3C) {
            case 0x29A:
                
                func_800008B0(arg0, arg0);
                break;
            case 0x29D:
                func_800008B0(arg0, arg0 + 2);
                break;
        }
    }
}

//#pragma GLOBAL_ASM("asm/nonmatchings/1130/func_800007D4.s")
void osScAddClient(OSSched* sc, unk7d4s* c, OSMesgQueue* msgQ) {
    s32 mask;

    mask = osSetIntMask(1);
    c->unk4 = msgQ;
    c->unk0 = sc->clientList;
    sc->clientList = c;
	
    osSetIntMask(mask);
}

#pragma GLOBAL_ASM("asm/nonmatchings/1130/func_80000824.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/1130/func_800008B0.s")
void func_800008B0(OSSched* arg0, OSMesg arg1) {
    unk8b0s* var_s0;

    var_s0 = arg0->clientList;
    if (var_s0 != NULL) {
        do {
            osSendMesg(var_s0->unk4, arg1, 0);
            var_s0 = var_s0->unk0;
        } while (var_s0 != NULL);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/1130/func_80000900.s")

#pragma GLOBAL_ASM("asm/nonmatchings/1130/func_80000A80.s")
#ifdef NON_MATCHING

void func_80000A80(struct UnkStruct80000A80* arg0) {
    LeoReadDiskID(&arg0->cmd, arg0->unk20, &D_80083C04);
    func_800009C8();
}
#endif

#pragma GLOBAL_ASM("asm/nonmatchings/1130/func_80000BB4.s")
