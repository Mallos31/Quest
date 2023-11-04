#ifndef _INVENTORY_H
#define _INVENTORY_H

typedef struct unk_22260_s3{
    u16 canBeUsed;
    u16 type;
    s16 itemArg1;
    s16 itemArg2;
    u16 unk8;
    u16 unkA;
}ItemData;

extern u8 gInventory[150];


void Inventory_Init(void);
s32 CheckIfInventoryFull(void);

void AddItemToInventory(u8 itemID);
s32 CheckIfItemUsable(u8 itemID);
void UseItem(u8 itemID, BrianData2* arg1);
s32 ChackIfHealingNeeded(BrianData2* pos, ItemData* itemData);
s32 CheckIfTeleportPossible(s32 arg0, s32 arg1);
u8 CheckIfSpellItemUsable(s32 arg0, u16* itemData);
void func_8002233C(s32 arg0, s32 arg1);
void UseHealingItem(BrianData2* BrianData, ItemData* item);
void UseWings(BrianData2 *arg0, ItemData *arg1);
void UseSpellItem(BrianData2* arg0, ItemData* arg1);
void DrawItemBox(s32 ulx, s32 uly, s32 width, s32 height);


#endif
