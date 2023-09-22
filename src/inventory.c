#include "common.h"
#include "player.h"
#include <screen_dim.h>
#include <inventory.h>

typedef short int16_t;

typedef int16_t		qs510_t;

#define qs510(n)		((qs510_t)((n) * 0x0400))

#define ARRAY_COUNT(a) (sizeof(a) / sizeof(a[0]))

/*Battle state defines that need to be moved*/
#define IN_BATTLE 1
#define BOSS_BATTLE (1 << 8)
#define IN_BOSS_BATTLE (gBattleState & BOSS_BATTLE)

#define NO_BATTLE_USE 1 << 0
#define BATTLE_USE 1 << 1
#define NO_BOSS_BATTLE_USE 1 << 3
#define ITEM_USABLE 1
#define ITEM_NOT_USABLE 0

typedef struct unk_22260_s{
    char unk0[0x64];
    s32 unk64;
}unk22260s;




typedef struct unk_2260c_s{
    s16 unk0;
    s16 unk2;
    s16 unk4;
}unk2260cs;

typedef struct {
    char unk0[4];
    u16 unk4;
    u16 unk6;    
}unk2234c4;

typedef struct {
    f32 width;
    f32 height;
    f32 unk8;
}ItemLightRingData;

typedef struct {
    s16 unk0;
    u16 unk2;
    u16 healItemLightColor;
    char unk6[2];
    f32 healItemLightWidth;
    f32 healItemLightHeight;
    s16 unk10;
    u16 unk12;
    u16 wingLightColor;
    char unk16[2];
    f32 wingLightWidth;
    f32 wingLightHeight;
}BaseItemLightRingData;

typedef struct {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u16 unk6;
    char unk8[2];
}unk2234c3;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s16 unkC;
    char unkE[2];
    s32 unk10;
    f32 unk14;
}unk80085368s;

typedef struct {
    u16 mapID;
    u16 submapID;
    f32 xpos;
    f32 zpos;
    f32 yrot;
}unk803a9190s;

extern unk80085368s D_80085368;
extern unk803a9190s gWingData[];


extern unk2234c3 D_803A9A54[];
extern ItemLightRingData gItemLightRing; //width, height, and possibly rotation of the ring that appears around brian when he uses an item.
extern BaseItemLightRingData gBaseItemLightRingData;

typedef s32 (*funcTypedef)(BrianData2 *, void *, u8, ItemData *);
extern s32 D_8007B2EC;
extern s16 D_8007B2F0;
extern f32 D_8007BA40;
extern f32 D_8007BA44;
extern f32 D_8007BA48;
extern s32 D_8007BA4C;
extern s16 D_8007BABE;

extern u8 gLastInvSlot;
extern u8 D_8008CF77;
extern Gfx D_803A8FF8[];
extern ItemData gItemData[];
extern void (*gUseItemFuncs[])(s32, ItemData*, u8, s32);
extern u16 D_80084EE0;
extern s32 gInventoryScrollAmt; 
extern s32 gInvHighlightedItemIndex;
extern s32 D_8008C768; //Possibly amount the control stick is being pressed left or right to determine inventory scroll speed.
extern s8 gVisibleInvItemIDs[8]; //IDs of items visible in inventory. One per item no matter how many of it you have.  
extern u8 gInventory[150];
extern u8 gInventoryPalette;
extern u8 D_D3BE40; //phys inventory palette
extern funcTypedef gCheckItemUsableFuncs[];

/*move to other headers*/
void func_800177F8(u16 arg0, u16 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, void* arg6, void* arg7, void* arg8);
void func_80018DF4(s32 arg0, s32 arg1, s32 arg2);
void func_800268D4(u8 arg0, s8 arg1, u8 arg2);






//#pragma GLOBAL_ASM("asm/nonmatchings/inventory/Inventory_Init.s")
void Inventory_Init(void) {
    s32 i;
    u8* slot;


    dma_write(&D_D3BE40, &gInventoryPalette, 0x400); //load inventory palette into RAM
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

//#pragma GLOBAL_ASM("asm/nonmatchings/inventory/CheckIfInventoryFull.s")
s32 CheckIfInventoryFull(void) {
    s32 var_v1;

    if (gLastInvSlot != 0xFF) {
        var_v1 = 0;
    } else {
        var_v1 = 1;
    }
    return var_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/inventory/func_80021240.s")


//#pragma GLOBAL_ASM("asm/nonmatchings/inventory/AddItemToInventory.s")
void AddItemToInventory(u8 itemID) {
    s32 i = 0;

    do {
        if(gInventory[i] == 0xFF)
            break;
        i++;
    } while(i < ARRAY_COUNT(gInventory));

    gInventory[i] = itemID;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/inventory/CheckIfItemUsable.s")
s32 CheckIfItemUsable(u8 itemID)
{
  s32 ret;
  ItemData *item;
  s32 inBattle;
  s32 itemUsable;
    
  ret = 0;
  inBattle = gBattleState & 1; //Bit 1 set is in battle. 
  if ((inBattle != FALSE) && (gItemData[itemID].canBeUsed & BATTLE_USE))
  {
    ret = ITEM_USABLE;
  }
  else if ((inBattle == FALSE) && (gItemData[itemID].canBeUsed & NO_BATTLE_USE)) {
    ret = ITEM_USABLE;
  }

  item = &gItemData[itemID];
  itemUsable = ret;
  if (itemUsable != FALSE)
  {
    ret = gCheckItemUsableFuncs[item->type](&gPlayerPos, item, itemID, gItemData);
  }
  if (ret != ITEM_NOT_USABLE)
  {
    func_8000669C(itemID & 0xFF);
  }
  return ret;
}


//#pragma GLOBAL_ASM("asm/nonmatchings/inventory/UseItem.s")
void UseItem(u8 itemID, BrianData2* arg1) {
    gUseItemFuncs[gItemData[itemID].type](arg1, &gItemData[itemID], itemID, arg1);
}//Rain

#pragma GLOBAL_ASM("asm/nonmatchings/inventory/func_80021434.s")

#pragma GLOBAL_ASM("asm/nonmatchings/inventory/func_80021524.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/inventory/NoEffectItem.s")
s32 NoEffectItem(BrianData2* pos, ItemData* item) {
    return 0;
}


//#pragma GLOBAL_ASM("asm/nonmatchings/inventory/ChackIfHealingNeeded.s")
s32 ChackIfHealingNeeded(BrianData2* pos, ItemData* itemData) {
    /*@BUG Due to the game only checking if current and max HP or MP are EQUAL, 
      you are able to heal if you have MORE than max of either.*/

    BrianData1* brianData;
    s32 ret;

    ret = 0;
    brianData = pos->brianData1;
    if ((itemData->itemArg1 != 0) && (brianData->maxHP != brianData->currHP)) {
        ret = ITEM_USABLE;
    }
    if ((itemData->itemArg2 != 0) && (brianData->maxMP != brianData->currMP)) {
        ret = ITEM_USABLE;
    }
    return ret;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/inventory/CheckIfTeleportPossible.s")
s32 CheckIfTeleportPossible(s32 arg0, s32 arg1) {
    s32 ret;

    if (((D_80084EE0 & 0xA) != 0) || ( ((D_80084F1C->unk14 & 4) != 0))) {
        ret = ITEM_NOT_USABLE;
    }else {
        ret = ITEM_USABLE;
    
    }
    return ret;
}


//#pragma GLOBAL_ASM("asm/nonmatchings/inventory/CheckIfSpellItemUsable.s")
u8 CheckIfSpellItemUsable(s32 arg0, u16* itemData) {
    u8 ret;

    ret = ITEM_USABLE;
    if (IN_BOSS_BATTLE && ((*itemData & NO_BOSS_BATTLE_USE) != FALSE)) {
        ret = ITEM_NOT_USABLE;
    }
    return ret;
}

//#pragma GLOBAL_ASM("asm/nonmatchings/inventory/func_8002233C.s")
void func_8002233C(s32 arg0, s32 arg1) {

}


//#pragma GLOBAL_ASM("asm/nonmatchings/inventory/UseHealingItem.s")
void UseHealingItem(BrianData2* BrianData, ItemData* item)
{
    u16 delta;
    BrianData1 *status = BrianData->brianData1;
    unk2234c3* temp;
    
    if (item->itemArg1 != 0) {
        delta = (status->maxHP - status->currHP);
        if (item->itemArg1 < delta) {
            delta = item->itemArg1;
        }
        
        status->currHP += delta;
        func_80018DF4(BrianData, 1, delta);
    }
    if (item->itemArg2 != 0) {
        delta = (status->maxMP - status->currMP);
        if (item->itemArg2 < delta) {
            delta = item->itemArg2;
        }
        status->currMP += delta;
        func_80018DF4(BrianData, 2, delta);
    }
    gItemLightRing.width = gBaseItemLightRingData.healItemLightWidth;
    gItemLightRing.height = gBaseItemLightRingData.healItemLightHeight;
    gItemLightRing.unk8 = 1.0f;
    temp = &D_803A9A54[gBaseItemLightRingData.unk0];
    func_800177F8(gBaseItemLightRingData.unk2, gBaseItemLightRingData.healItemLightColor, BrianData->x, BrianData->y, BrianData->z, 0.0, temp, &gItemLightRing, BrianData);
    func_800268D4(0, 0xB, 0xFF);
}


//#pragma GLOBAL_ASM("asm/nonmatchings/inventory/UseWings.s")
void UseWings(BrianData2 *brian, ItemData *item)
{
  unk2234c3 *new_var;
  D_8007B2E4 |= 0x80;
  D_8007B2EC = 0x16;
  D_80085368.unk0 = (s32) gWingData[item->itemArg1].mapID;
  D_80085368.unk4 = (s32) gWingData[item->itemArg1].submapID;
  D_80085368.unk8 = -1;
  D_8007BA40 = gWingData[item->itemArg1].xpos; //xpos after teleporting
  D_8007BA44 = gWingData[item->itemArg1].zpos; //zpos after teleporting
  D_8007BA48 = gWingData[item->itemArg1].yrot; //rotation after teleporting; all three of these also apply to going through doors.
  D_8007BA4C = 0x108;
  D_8007BABE = 0;
  D_8007B2F0 = 1;
  gItemLightRing.width = gBaseItemLightRingData.wingLightWidth;
  new_var = &D_803A9A54[gBaseItemLightRingData.unk10];
  gItemLightRing.height = gBaseItemLightRingData.wingLightHeight;
  gItemLightRing.unk8 = 1.0f;
  func_800177F8(gBaseItemLightRingData.unk12, gBaseItemLightRingData.wingLightColor, brian->x, brian->y, brian->z, 0.0f, new_var, &gItemLightRing, brian);
  func_800268D4(0, 0x3B, 0xFF);
}

//#pragma GLOBAL_ASM("asm/nonmatchings/inventory/UseSpellItem.s")
void UseSpellItem(BrianData2* brian, ItemData* item) {
    func_80014A98(brian, item->itemArg1, 0, 4);
}

//#pragma GLOBAL_ASM("asm/nonmatchings/inventory/DrawItemBox.s")
void DrawItemBox(s32 ulx, s32 uly, s32 width, s32 height) {

    gDPPipeSync(gMasterGfxPos++);
    
    gDPSetCycleType(gMasterGfxPos++, G_CYC_FILL);
    
    gDPSetRenderMode(gMasterGfxPos++, G_RM_NOOP, G_RM_NOOP2);
    
    gDPSetFillColor(gMasterGfxPos++, 0x00010001);
    
    gDPFillRectangle(gMasterGfxPos++,  ulx, uly, (ulx + width), uly);

    gDPFillRectangle(gMasterGfxPos++, ulx, (uly + height), (ulx + width) , (uly + height));

    gDPFillRectangle(gMasterGfxPos++, ulx , uly, ulx, (uly + height) );

    gDPFillRectangle(gMasterGfxPos++, ulx + width, uly, (ulx + width), uly + height );

    gDPFillRectangle(gMasterGfxPos++ , ((ulx + 3)), ((uly + height) + 1), ((ulx + width) + 2) , ((uly + height) + 2));

    gDPFillRectangle(gMasterGfxPos++, ((ulx + width) + 1), (uly + 3) , ((ulx + width) + 2), ((uly + height) + 1));

    gSPDisplayList(gMasterGfxPos++, D_803A8FF8);

    // Needs to be shifted by 2. Multiplying by 4 technically has the same effect, but doesn't match
    gSPTextureRectangle(gMasterGfxPos++, ((ulx + 1) <<2) ,((uly+1)<<2), ((ulx + width) * 4), ((uly + height) * 4) , G_TX_RENDERTILE, 0, 0, qs510(1), qs510(1));

}

