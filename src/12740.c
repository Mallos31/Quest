#include "common.h"

typedef struct {
    f32 unk0;
    f32 unk4;
}unk13f20s;


extern s32 D_2000080;
extern s32 D_20080C0;
extern s32 D_20080D0;
extern void* D_8004CC98[];
extern f64 D_80071340;
extern f64 D_80071348;
extern s32 D_8007B2E4;
extern u16 D_8007BB2E;
extern s32 D_80086B88;
extern f32 D_80086DCC;
extern f32 D_80086DD0;
extern f32 D_80086DD4;
extern f32 D_80086DD8;
extern f32 D_80086DE0;
extern f32 D_80086E48[4];
extern f32 D_80086E88[4];
extern f32 D_80086EC8;
extern f32 D_80086ECC;
extern f32 D_80086ED0;
extern f32 D_80086ED4;
extern s32 D_80086ED8;
extern u16 D_80086F00;
extern u16 D_8008C592;
extern s32 D_8008C638;
extern u16 D_80092876;
extern unk13f20s D_8004CCB0[];
extern s32 D_80086C2C;
extern f32 D_80086C30;
extern f32 D_80086C34;

extern u8 D_8004C460[];
extern u8 D_8007C570[];
extern u8 D_8007C574[];
extern u8 D_8007C970[];
extern u8* D_803A9954[]; //array of pointers to item names
extern u8 D_800869F8;
extern u8 D_800869D8[];

void func_800121B0(u16 arg0);
void func_800120C0(s32 arg0);

//#pragma GLOBAL_ASM("asm/nonmatchings/12740/func_80011B40.s")
void func_80011B40(void) {

    s32 i;

    for(i=0; i<32; i++){
        D_800869D8[i] = 0;
    }
}  

#pragma GLOBAL_ASM("asm/nonmatchings/12740/func_80011B70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12740/func_80011D28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12740/func_80011E78.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/12740/func_8001205C.s")
void func_8001205C(unk1205cs* arg0) {
    func_800121B0((s32) arg0->unk62);
    arg0->unk60 = 0x805B;
    func_8001D8B0(arg0, 1, 1, 2, 1, (u16) 1);
    func_800268D4(0x1A, 8, 0xFF);
}

//#pragma GLOBAL_ASM("asm/nonmatchings/12740/func_800120C0.s")
void func_800120C0(s32 arg0) //Writes data for [ITEM NAME] obtained! box. 
{
  u8 var_a1_2;
  u8 *var_v0;
  u8 *var_v0_2;
  u8 *var_v1;
    
  var_v0 = D_803A9954[arg0];
  D_8007C570[0] = 0x7F;
  D_8007C570[1] = 0xE0;
  D_8007C570[2] = 0x7F;
  D_8007C570[3] = 0x7F;  

    for (var_v1 = D_8007C574; *var_v0 != 0xFF; var_v1 ++, var_v0++)
        {
            *var_v1 = *var_v0;
        }
  
    for (var_v0 = D_8004C460; *var_v0 != 0xFF; var_v1 ++, var_v0++)
        {
            *var_v1 = *var_v0;
        }
     
  *var_v1 = *var_v0;
  *D_8007C970 = 0xFF;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/12740/func_80012170.s")
u8 func_80012170(u16 arg0) {
    return D_800869D8[arg0 >> 3] & D_8004D740[arg0 & 7];
}

//#pragma GLOBAL_ASM("asm/nonmatchings/12740/func_800121B0.s")
void func_800121B0(u16 arg0) {
    u8* temp_v1;

    temp_v1 = &D_800869D8[arg0 >> 3];
    *temp_v1 |= D_8004D740[arg0 & 7];
}
//#pragma GLOBAL_ASM("asm/nonmatchings/12740/func_800121F0.s")
void func_800121F0(void) {
    s32 i;

    for (i = 0; i < 0x10; i++) {
            D_80086AE8[i] = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/12740/func_80012220.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12740/func_80012358.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12740/func_8001249C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12740/func_800125F4.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/12740/func_80012700.s")
u8 func_80012700(u16 arg0) {

    return *(&D_80086AE8[arg0 >> 3]) & *(&D_8004D740[arg0 & 7]);
}

//#pragma GLOBAL_ASM("asm/nonmatchings/12740/func_80012740.s")
void func_80012740(u16 arg0) {
    u8* temp_v1;

    temp_v1 = &D_80086AE8[arg0 >> 3];
    *temp_v1 |= D_8004D740[arg0 & 7];
}

#pragma GLOBAL_ASM("asm/nonmatchings/12740/func_80012780.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12740/func_80012BE0.s")


#pragma GLOBAL_ASM("asm/nonmatchings/12740/func_80013008.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12740/func_80013698.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/12740/func_80013A14.s")
void func_80013A14(s32 arg0) {

}


#pragma GLOBAL_ASM("asm/nonmatchings/12740/func_80013A20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12740/func_80013C80.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/12740/func_80013D30.s")
void func_80013D30(s32 arg0) {

}

#pragma GLOBAL_ASM("asm/nonmatchings/12740/func_80013D3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12740/func_80013DE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12740/func_80013F20.s")
//void func_80013F20(s32 arg0) {
//
//    D_80086C2C = 0xF;
//    D_80086C30 = D_8004CCB0[arg0].unk0;
//    D_80086C34 = D_8004CCB0[arg0].unk4;
//}

#pragma GLOBAL_ASM("asm/nonmatchings/12740/func_80013F5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12740/func_800140EC.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/12740/func_800143C0.s")
void func_800143C0(s32 arg0) {
    func_80013F5C(arg0);
    D_80086EE0.unk0 = 0;
    D_80086EE0.unk4 = 0xF;
    D_80086EE0.unk8 = (s32) D_80086DC0.unk0;
    D_80086EE0.unkC = (u16) D_80086DC0.unk8;
    D_80086EE0.unk14 = D_80071428;
    D_80086EE0.unk18 = (f32) D_8007142C;
    D_80086DC0.unk0 = 5;
    D_80086DC0.unk54 = (f32) D_80086EE0.unk10;
    
}

#pragma GLOBAL_ASM("asm/nonmatchings/12740/func_80014434.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12740/func_8001459C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12740/func_80014720.s")
