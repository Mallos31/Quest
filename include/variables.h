#ifndef _VARIABLES_H_
#define _VARIABLES_H_

#include "structs.h"
#include "controller.h"

//USED BY MANY C FILES
extern Mtx D_2000000[]; //Gfx matrix 
extern Mtx D_2000040[];
extern s32 D_8007B2F8; //Gfx matrix index? 

extern u16 D_80092874;
extern MonsterBattleData D_8007C9BC;
extern BrianData2 D_8007BACC;

extern DoorAnimData gDoorAnimData; //Door animation data
extern s32 D_8007D2D0;
extern unke3c4s D_80084180;
extern unke3c4s D_80084098;
extern f64 D_80071240;
extern s32 D_8007B2F4;
extern s32 D_8007D2D4;

extern void* func_80024BEC;

extern s8 D_80053CA4;
extern s8 D_8005F010;
extern s32 D_800539E4;
extern u32 D_8005398C;
extern s32 D_80053990;

extern OSPiHandle *__osPiTable;
extern u64 osClockRate;

extern f32 D_80070F04;
extern s16 D_8007B2E0;
extern s32 D_8007B2E4;
extern s16 D_8007B2E8;
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


extern u8 D_8008D00E;
extern s32 D_80084EE4;
extern u32 D_80084EEC;
extern s32 D_80084EF0;
extern s32 D_80084EF8;
extern s32 D_80084F04;
extern u16 D_80084F14;
extern s32 D_80085370;
extern s16 D_800859E2;
extern f32 D_80086E44;
//extern unk20888s D_8008C668;
extern s8 gCurrentBGM;
extern u16 gPlayBGM;
extern s16 gBGMDelay;
extern s8 D_8008FD22;
extern u8 gLastInvSlot;
extern unkShadows D_80085BD0[];
extern s32 D_800862D0;
extern s32 D_8008F92C;
extern s32 D_8008D090;
extern OSMesgQueue D_8008F288;
extern s16 gameMode;
extern u8 D_8008FD28;
extern s8 D_8008FD2B;
extern s32 D_8008C560;
extern s32 D_8008C564;
extern f32 D_8008C574;
extern s16 D_8008C578;
extern u16 D_8008C592;

extern s8 D_80092870;
extern OSPifRam __osPfsPifRam;
extern u8 __osContLastCmd;



extern s32 currentTime;
extern s32 dayLength;
extern s32 D_800859D8;
extern u16 currentDay;




//These types may be incorrect. Defined in func_8002513C
extern ALBankFile* D_800538E8;
extern ALSeqFile* D_800538F0;
extern ALHeap D_8008F240;
extern ALCSPlayer D_8008F994;
extern ALSeqpConfig D_8008FB14;
extern ALCSPlayer D_8008FB30;
extern unk2513cs D_8008F978;
//extern unk2513cs2* D_800538E8;
//end of func_8002513C defines. 

extern u16 D_80084EE0;

//Inventory
extern s32 gInventoryScrollAmt; 
extern s32 gInvHighlightedItemIndex;


extern unk213d8s D_803A91F0[];
extern void (*D_8004D490[])(s32, unk213d8s*, u8, s32);
//Possibly amount the control stick is being pressed 
//left or right to determine inventory scroll speed. 
extern s32 D_8008C768; 
//IDs of items visible in inventory. One per item no matter how many of it you have.  
extern s8 gVisibleInvItemIDs[8]; 
extern u8 gInventory[150];
extern u8 D_803AAC20; //virt inventory palette
extern u8 D_D3BE40; //phys inventory palette


//screen dim/fade variables


extern u64 D_803232A0[];
extern void* D_80331A30;
extern u8 D_D3E240[];
extern u8 D_D3E2C0[];

extern s32 D_8007D0C4;


extern unk11170s D_800859E8[];

extern s32 gNextSubmap;
extern u16 gAllowBattles; 
extern sMapData* gMapData;


extern u32 D_8004D748; //possibly RNG seed
extern f64 D_800716D0;
extern f64 D_800716D8;
extern f64 D_800716E0;
extern f64 D_800716E8;
extern f64 D_800716F0;
extern f64 D_800716F8;
extern f32 D_80086E88[4];
extern f32 D_80086ECC;
extern f32 D_80086ED4;


//joystick stuff?
extern u8 D_80092850;
extern u16 D_80092852;
extern s8 D_80092871;
extern s8 D_80092872;

extern s16 D_8008C630;
extern s32 D_8008C638;
extern s32 D_8008C63C;
extern s32 D_8008C640;

//HUD stuff
extern s32 gHUDResolutionX; //These two may need renaming.
extern s32 gHUDResolutionY;
extern s32 D_8008C650; //number of lines to cover from left to right (HUD)
extern s32 D_8008C654; //number of lines to cover from top to bottom (HUD)
extern s32 D_8008C658; //number of lines to draw from left to right (HUD)
extern s32 D_8008C65C; //number of lines to draw from top to bottom (HUD) 

extern Gfx gDL_exclamationMarkPal[]; //exclamation mark display list
extern Gfx* gMasterGfxPos;

extern f32 D_80071428;
extern f32 D_8007142C;
extern unkD80086DC0s D_80086DC0;
extern unkD80086EE0s D_80086EE0;
extern u16 D_80092876;

extern u8 D_8004D740[];
extern u8 D_80086AE8[];
extern u8 D_800869D8[];

extern OSMesgQueue D_80092880;
extern OSContPad D_80092AA8;
extern u16 D_80092878;


extern unk84f1cs* D_80084F1C;

#endif
