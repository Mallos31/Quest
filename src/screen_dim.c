#include "common.h"
#include <gbi.h>

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

void ScreenDimInit(void) 
{
    gScreenDimFlags = 0;
    gScreenDimTimer = 0;
}

void DimScreen(Mtx* arg0)
{    
  if (gScreenDimFlags & SCREEN_DIMMABLE)
  {
    gDPPipeSync(gMasterGfxPos++);
    gSPMatrix(gMasterGfxPos++, D_2000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_PROJECTION);
    guMtxIdent(&arg0[3] + D_8007B2F8);
    gSPMatrix(gMasterGfxPos++, &D_2000000[D_8007B2F8 + 3], G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
    D_8007B2F8++;
    gDPSetEnvColor(gMasterGfxPos++, gScreenDimRGBA->red, gScreenDimRGBA->green, gScreenDimRGBA->blue, gScreenDimRGBA->alpha);

    //Makes the screen opaque if alpha value is 0xFF. Else make it partially or completely transparent. 
    if (gScreenDimRGBA->alpha == 0xFF) {
      gDPSetRenderMode(gMasterGfxPos++, G_RM_OPA_SURF, G_RM_OPA_SURF2);
    } else {
      gDPSetRenderMode(gMasterGfxPos++, G_RM_CLD_SURF, G_RM_CLD_SURF2);
    }
    gSPDisplayList(gMasterGfxPos++, dlScreenDimRectangle);

/*If the screen dim timer is non-zero, it checks the dim/brighten flag. If it's set, the screen brightens,
if it's not, the screen dims. The timer is also the index number for the RGBA table.*/
 if (gScreenDimTimer != 0)
    {
      if (gScreenDimFlags & SCREEN_BRIGHTENING)
      {
        gScreenDimRGBA--;
      }
      else
      {
        gScreenDimRGBA++;
      }
      gScreenDimTimer--;

      /*Resets the screen dim flag if the timer is 0, or flag 2 isn't set.*/
      if (!gScreenDimTimer & !(gScreenDimFlags & USE_TIMER))
      {
        gScreenDimFlags &= ~SCREEN_DIMMABLE;
      }
    }
  }
}   

void SetupScreenDim(s32 timer, u16 flags, s32 RGBA)
{
    gScreenDimTimer = timer;
    gScreenDimFlags = (flags) | 1;
    gScreenDimRGBA = (Color_RGBA8*)RGBA;
}
