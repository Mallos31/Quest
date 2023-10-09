#ifndef _VARIABLES_H_
#define _VARIABLES_H_

#include "structs.h"
#include "player.h"

//Used by more than one C file. Need to be moved into their own headers eventually. 

extern s32 gGameState;



extern Mtx D_2000000[]; //Gfx matrix 
extern Mtx D_2000040[];
extern s32 D_8007B2F8; //Gfx matrix index? 
extern s16 D_8007B2E8;
extern s32 gNextMap;
extern s16 gGameMode;
extern u16 gBattleState;
extern s8 D_80092870;
extern test D_803232A0[];
extern s32 gNextSubmap;
extern u16 gAllowBattles; 
extern sMapData* gMapData;
extern f32 D_80086E88[4];
extern f32 D_80086ECC;
extern f32 D_80086ED4;
extern s8 D_80092871;
extern s8 D_80092872;
extern Gfx* gMasterGfxPos;
extern unkD80086DC0s D_80086DC0;
extern u16 D_80092876;
extern u8 D_8004D740[];
extern u8 D_80086AE8[];
extern u8 D_800869D8[];
extern unk84f1cs* D_80084F1C;

//unconfirmed if used by other C files, but I assume so
extern s32 gCurrentTime;
extern s32 gDayLength;
extern u16 gCurrentDay;

#endif
