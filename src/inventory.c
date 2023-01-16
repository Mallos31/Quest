#include "common.h"

#define ARRAY_COUNT(a) (sizeof(a) / sizeof(a[0]))

extern u8 D_8008CF77;
extern Gfx D_803A8FF8[];



//#pragma GLOBAL_ASM("asm/nonmatchings/inventory/Inventory_Init.s")
void Inventory_Init(void) {
    s32 i;
    u8* slot;


    func_80024260(&D_D3BE40, &D_803AAC20, 0x400); //load inventory palette into RAM
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
/*s32 func_80021240(u8 arg0)
{
  s32 i;
  u64 new_var;
  u8 *temp;
  u8 temp2;
  u8 *tempInv;
    
  temp2 = arg0;
  new_var = 0x95;
  tempInv = gInventory;
  i = 0;
  temp = tempInv + new_var;
  new_var = &D_8008CF77;  
  loop_1:
  if (temp2 == (*temp))
  {
    i++;
  }

  temp--;
  if ((temp != ((u8 *) (new_var))) && (i == 0))
  {
    goto loop_1;
  }
  return i;
}*/


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
/*s32 func_80021434(u16 arg0)   //CONTINUE WORKING ON THIS ONE...
{
  s32 temp_a0;
  s32 temp_a2_2;
  s32 slotsLeft;
  s32 var_v1;
  u32 slotItemID;
  u8 *tempInvSlot;
  u8 *tempInvSlot_2;
  unk213d8s *temp_a2;
  
  var_v1 = 0;
  tempInvSlot = gInventory;
  slotsLeft = 0x96;
  if ((*gInventory) != 0xFF)
  {
    slotItemID = *gInventory;
    loop_2:
    tempInvSlot += 1;

    temp_a2 = &D_803A91F0[slotItemID];
    if (temp_a2->unk2 == 0xF)
    {
      var_v1 = temp_a2->unk4 == (arg0);
    }
    slotsLeft--;
    if (var_v1 == 0)
    {
      slotItemID = tempInvSlot[0];
      if (slotItemID != 0xFF)
      {
        goto loop_2;
      }
    }
  }
  if (var_v1 != 0)
  {
    tempInvSlot_2 = tempInvSlot - 1;
    if (slotsLeft != 0)
    {
      temp_a2_2 = -(slotsLeft & 3);
      ;
      if (temp_a2_2 != 0)
      {
        do
        {
          slotsLeft--;
          tempInvSlot_2 += 1;
          tempInvSlot_2[0] = tempInvSlot_2[1];
        }
        while ((temp_a2_2 + slotsLeft) != slotsLeft);
        if (slotsLeft != 0)
        {
          goto loop_11;
        }
      }
      else
      {
        do
        {
          loop_11:
          slotsLeft -= 4;

          tempInvSlot_2 += 4;
          tempInvSlot_2[0] = tempInvSlot_2[1];
          tempInvSlot_2[1] = tempInvSlot_2[2];
          tempInvSlot_2[2] = tempInvSlot_2[3];
          tempInvSlot_2[3] = tempInvSlot_2[4];
        }
        while (slotsLeft != 0);
      }
    }
    *tempInvSlot_2 = 0xFF;
  }
  return var_v1;
}
*/
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
