#include "common.h"
#include "player.h"

#define ARRAY_COUNT(a) (sizeof(a) / sizeof(a[0]))

typedef struct unk_22260_s{
    char unk0[0x64];
    s32 unk64;
}unk22260s;

typedef struct unk_22260_s2{
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
}unk22260s2;

typedef struct unk_22260_s3{
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u16 unk6;
    u16 unk8;
    u16 unkA;
}unk22260s3;

typedef struct unk_2260c_s{
    s16 unk0;
    s16 unk2;
    s16 unk4;
}unk2260cs;

extern u8 gLastInvSlot;
extern u8 D_8008CF77;
extern Gfx D_803A8FF8[];
extern unk22260s3 D_803A91F0[];
extern void (*D_8004D490[])(s32, unk22260s3*, u8, s32);
extern u16 D_80084EE0;
extern s32 gInventoryScrollAmt; 
extern s32 gInvHighlightedItemIndex;
extern s32 D_8008C768; //Possibly amount the control stick is being pressed left or right to determine inventory scroll speed.
extern s8 gVisibleInvItemIDs[8]; //IDs of items visible in inventory. One per item no matter how many of it you have.  
extern u8 gInventory[150];
extern u8 gInventoryPalette;
extern u8 D_D3BE40; //phys inventory palette


//#pragma GLOBAL_ASM("asm/nonmatchings/inventory/Inventory_Init.s")
void Inventory_Init(void) {
    s32 i;
    u8* slot;


    func_80024260(&D_D3BE40, &gInventoryPalette, 0x400); //load inventory palette into RAM
    i = 8;
    slot = (u8*)&gVisibleInvItemIDs;
    do {
        i--;
        *slot++ = 0xFF;
    } while (i != 0);
    
    slot = (u8*)&gInventory;    
    
    i = 151;
     while (i != 0){
        i--;
        *slot++ = 0xFF;
    }
    
    gInventoryScrollAmt = 0;
    gInvHighlightedItemIndex = 0;
    D_8008C768 = 0;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/inventory/func_80021214.s")
s32 func_80021214(void) {
    s32 var_v1;

    if (gLastInvSlot != 0xFF) {
        var_v1 = 0;
    } else {
        var_v1 = 1;
    }
    return var_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/inventory/func_80021240.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/inventory/func_800212A0.s")
void func_800212A0(u8 arg0) {
    s32 i = 0;

    do {
        if(gInventory[i] == 0xFF)
            break;
        i++;
    } while(i < ARRAY_COUNT(gInventory));

    gInventory[i] = arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/inventory/func_800212E4.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/inventory/func_800213D8.s")
void func_800213D8(u8 arg0, s32 arg1) {
    D_8004D490[D_803A91F0[arg0].unk2](arg1, &D_803A91F0[arg0], arg0, arg1);
}//Rain

#pragma GLOBAL_ASM("asm/nonmatchings/inventory/func_80021434.s")

#pragma GLOBAL_ASM("asm/nonmatchings/inventory/func_80021524.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/inventory/func_8002224C.s")
s32 func_8002224C(s32 arg0, s32 arg1) {
    return 0;
}


//#pragma GLOBAL_ASM("asm/nonmatchings/inventory/func_80022260.s")
s32 func_80022260(BrianData2* arg0, unk22260s2* arg1) {
    BrianData1* temp_v0;
    s32 ret;

    ret = 0;
    temp_v0 = arg0->brianData1;
    if ((arg1->unk4 != 0) && (temp_v0->maxHP != temp_v0->currHP)) {
        ret = 1;
    }
    if ((arg1->unk6 != 0) && (temp_v0->maxMP != temp_v0->currMP)) {
        ret = 1;
    }
    return ret;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/inventory/func_800222B4.s")
s32 func_800222B4(s32 arg0, s32 arg1) {
    s32 var_v1;

    if (((D_80084EE0 & 0xA) != 0) || ( ((D_80084F1C->unk14 & 4) != 0))) {
        var_v1 = 0;
    }else {
        var_v1 = 1;
    
    }
    return var_v1;
}


//#pragma GLOBAL_ASM("asm/nonmatchings/inventory/func_80022300.s")
u8 func_80022300(s32 arg0, u16* arg1) {
    u8 var_v1;

    var_v1 = 1;
    if (((D_8008C592 & 0x100) != 0) && ((*arg1 & 8) != 0)) {
        var_v1 = 0;
    }
    return var_v1;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/inventory/func_8002233C.s")
void func_8002233C(s32 arg0, s32 arg1) {

}


#pragma GLOBAL_ASM("asm/nonmatchings/inventory/func_8002234C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/inventory/func_80022490.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/inventory/func_8002260C.s")
void func_8002260C(s32 arg0, unk2260cs* arg1) {
    func_80014A98(arg0, arg1->unk4, 0, 4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/inventory/func_8002263C.s")
