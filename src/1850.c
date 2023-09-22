#include "common.h"
#include "bgm.h"
#include "inventory.h"
#include "nnsched.h"
#include "31A10.h"

#define OS_SC_SWAPBUFFER 0x40

#ifndef _UINTPTR_T
    #define _UINTPTR_T
    typedef unsigned            uintptr_t;
#endif

typedef struct OSScTask_s {
    struct OSScTask_s   *next;          /* note: this must be first */
    u32                 state;
    u32			flags;
    void		*framebuffer;	/* used by graphics tasks */

    OSTask              list;
    OSMesgQueue         *msgQ;
    OSMesg              msg;
#ifndef _FINALROM                       /* all #ifdef items should    */
    OSTime              startTime;      /* remain at the end!!, or    */
    OSTime              totalTime;      /* possible conflict if       */
#endif                                  /* FINALROM library used with */
} OSScTask;                             /* non FINALROM code          */

typedef struct {
    OSScTask task;
    char unk58[0xD0F0];
    OSMesg unkD148;
    void *unkD14C; 
}unk111Cs;

extern u64 D_80049EF0[]; // rspboot text start
extern u64 D_80049FC0[]; // rspboot text end
extern u64 D_80049FC0_2[]; // gfx ucode text start
extern u64 D_800723D0[]; // gfx ucode data start
extern OSMesgQueue D_8007B9E8;
extern u64 D_80300000[]; // dram stack (0x400 bytes)
extern u64 D_80300400[]; // ucode yield buffer (0xC00 bytes)
extern u8 D_8031B2A0[]; // ucode output buffer start
extern s16 D_8007B2F0;
extern s8 D_8007B344;
extern s8 D_8007B345;
extern f32 D_8007BA40;
extern f32 D_8007BA44;
extern f32 D_8007BA48;
extern s32 D_8007BA4C;
extern s16 D_8007BA60;
extern u16 D_8007BA62;
extern s16 D_8007BA64;
extern s16 D_8007BABE;
extern u32 gCurrentMap;
extern s32 gCurrentSubmap;
extern s32 D_80084EF8;
extern s32 D_80084F04;
extern u16 D_80084F14;
extern s32 D_80085370;
extern s16 D_800859E2;
extern f32 D_80086E44;
extern s32 D_8007B2F4;
extern s32 D_8007B348;
extern OSMesgQueue* D_8007B9D8;
extern unk111Cs* D_80301000[];

extern OSViMode D_8006F4F0;
extern OSViMode D_8006FDB0;
extern OSMesgQueue D_8007B320;
extern void* D_8007B338;
extern NNSched D_8007B358;
extern OSMesgQueue D_8007B3CC;
extern NNScClient D_8007B9E0;
extern void* D_8007BA00;
extern OSMesgQueue D_80092880;
extern u8 D_EBABD0;
extern u8 gSoundBank0Ctl;
extern u8 gSoundBank0Tbl;
extern u8 gSoundBank1Ctl;
extern u8 gSoundBank1Tbl;

void func_80000EEC(void);
void func_80000FE8(void);
void func_80001800(void);
void func_800020B4(void);
void func_8000227C(void);
void func_80002428(void);
void func_800025E8(void);


//These belong in other headers
void func_800027D0(void);
void func_8000B520(void);
void func_800100D0(void);
void func_80011B40(void);
void func_800121F0(void);
void func_80024704(void);
void func_800250E8(NNSched*);
void func_8002513C(s32 arg0, s32 arg1, u8* arg2, s32 arg3, u8* arg4); //from 25290.c
void func_80025488(u32 arg0, s32 arg1, u8* arg2); //from 25290.c
void func_80026A40(void); //from 27640.c
s32 func_80031300(void); //from 31F00.c
u8 func_80032704(OSMesgQueue* arg0, OSMesgQueue* arg1); //completely guessed return type. Returned data is unused anyway. 


#pragma GLOBAL_ASM("asm/nonmatchings/1850/func_80000C50.s")


//#pragma GLOBAL_ASM("asm/nonmatchings/1850/func_80000EEC.s")
void func_80000EEC(void) {
    D_8007B2E4 = 0x160;  //menu that is open
    gGameMode = 4;
    gNextMap = -1;     
    D_80084EF8 = -1;
    D_80084F04 = -1;
    D_80084F14 = 0xFFFF;
    D_80086E44 = 0.0f;  //camera position during transition 
    D_800859E2 = 0;
    gCurrentMap = 0xD;
    gCurrentSubmap = 0x11;
    D_80085370 = -1;
    D_8007BA60 = 0xD;
    D_8007BA62 = 0x11;
    D_8007BA64 = 0;
    D_8007BA40 = -26.0f;
    D_8007BA44 = 0.0f;
    D_8007BA48 = M_PI/2;
    D_8007BA4C = 0x108;
    D_8007BABE = 0;
    D_8007B2E8 = 1;
    D_8007B2F0 = 0;
    D_8007B344 = 0;
    D_8007B345 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/1850/func_80000FE8.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/1850/func_8000111C.s")

void func_8000111C(unk111Cs* arg0) {
    arg0->task.list.t.type = M_GFXTASK;
    arg0->task.list.t.flags = 0;    
    arg0->task.list.t.ucode_boot = D_80049EF0; // ucode boot at 0x80049EF0
    arg0->task.list.t.ucode_boot_size = (uintptr_t)D_80049FC0 - (uintptr_t)D_80049EF0;
    arg0->task.list.t.ucode = D_80049FC0_2; // ucode .text section at 0x80049FC0
    arg0->task.list.t.ucode_data = D_800723D0; // ucode .data section at 0x800723D0
    arg0->task.list.t.ucode_data_size = SP_UCODE_DATA_SIZE;
    arg0->task.list.t.dram_stack = D_80300000; // Stack at 0x80300000
    arg0->task.list.t.dram_stack_size = SP_DRAM_STACK_SIZE8;
    arg0->task.list.t.output_buff = D_8031B2A0;      // Output FIFO buffer starts at 0x8031B2A0
    arg0->task.list.t.output_buff_size = &D_8031B2A0[0x8000]; // Output FIFO buffer ends   at 0x803232A0
    arg0->task.list.t.yield_data_ptr = D_80300400;
    arg0->task.list.t.yield_data_size = OS_YIELD_DATA_SIZE;
    arg0->task.next = NULL;
    arg0->task.flags = OS_SC_SWAPBUFFER;
    arg0->task.msgQ = &D_8007B9E8;
    arg0->task.msg = &arg0->unkD148;
    arg0->task.framebuffer = arg0->unkD14C;
}

#pragma GLOBAL_ASM("asm/nonmatchings/1850/func_800011DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/1850/func_80001800.s")

#pragma GLOBAL_ASM("asm/nonmatchings/1850/func_800020B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/1850/func_8000227C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/1850/func_80002428.s")

#pragma GLOBAL_ASM("asm/nonmatchings/1850/func_800025E8.s")
