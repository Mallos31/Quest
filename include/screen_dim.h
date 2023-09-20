#ifndef _SCREEN_DIM_H_
#define _SCREEN_DIM_H_

#define SCREEN_DIMMABLE 1
#define USE_TIMER 2
#define SCREEN_BRIGHTENING 4

extern u16 gScreenDimFlags;
extern s32 gScreenDimTimer;         
extern Color_RGBA8* gScreenDimRGBA; //pointer to RGBA color data table
extern u8 dlScreenDimRectangle[];

void ScreenDimInit(void); 
void DimScreen(Mtx* arg0);
void SetupScreenDim(s32 arg0, u16 arg1, s32 arg2);

#endif
