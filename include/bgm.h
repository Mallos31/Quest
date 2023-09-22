#ifndef _BGM_H
#define _BGM_H

typedef struct {
    s16 map;
    s16 submap;
    s8 bgm;
    s8 pad;
}bgmData;

typedef struct unk26658_s{
    u8 unk0;
    s8 unk1;
    u8 unk2;
}unk26658s;

extern unk26658s D_8008FCC8[];
extern u8 D_80053CA4[];
extern u8 D_80053CAC[];
extern u8 D_8008FCC6;
extern bgmData D_80053B00[];
extern s8 gBGMVolume;
extern s8 gCurrentBGM;
extern u16 gPlayBGM;
extern u16 gBGMDelay;
extern s8 D_8008FCC0;


void InitializeSoundData(void);
void func_80026658(void);
void UpdateBGM(s8 newBGM);
void UpdateBGMDelay(s8 newBGM, u16 delay);
void FindMapBGM(s32 nextMap, s32 nextSubmap, u16 delay);
void func_800268D4(u8 arg0, s8 arg1, u8 arg2);
void func_8002699C(s8 arg0, u8 arg1);
void SetBGMVolume(void);



#endif