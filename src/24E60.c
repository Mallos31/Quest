#include "common.h"


extern OSMesgQueue D_8007B320;
extern OSIoMesg D_8008D070;


void dma_write(u8* devAddr, void* vaddr, u32 nbytes) {
    u32 var_s0;

    osInvalICache(vaddr, (s32) nbytes);
    osInvalDCache(vaddr, (s32) nbytes);
    if (nbytes != 0) {
        do {
            if ((s32) nbytes >= 0x4001) {
                var_s0 = 0x4000;
            } else {
                var_s0 = nbytes;
            }
            osPiStartDma(&D_8008D070, 0, 0, (u32) devAddr, vaddr, var_s0, &D_8007B320);
            osRecvMesg(&D_8007B320, NULL, 1);
            nbytes -= var_s0;
            devAddr = &devAddr[var_s0];
            vaddr = (void*)((u8*)vaddr + var_s0);
        } while (nbytes != 0);
    }
}


s32 int_to_str_with_flags(s32 value, u8 *str_ptr, u16 flags) //matched by a mysterious stranger. 
{
  u32 char_count;
  s32 continue_loop;
  s32 power;
  u8 *i_ptr;
  u32 i;
  if (flags & 2)
  {
    power = 10000;
    char_count = 4;
  }
  else
    if (flags & 4)
  {
    power = 10;
    char_count = 1;
  }
  else
  {
    char_count = 0;
    for (power = 10; power <= value; power *= 10)
    {
      char_count++;
    }

    power /= 10;
  }
  i_ptr = str_ptr;
 for (i = char_count; i > 0; i--) { *i_ptr = value / power;
    value %= power; //remainder
    power /= 10; //power
    i_ptr += 1;
  }

  i_ptr[0] = (u8) value;
  i_ptr[1] = 0xFF;
  if (flags & 1) //pad string width 
  {
    continue_loop = 0;
    continue_loop = 1;
    i_ptr = str_ptr;
    for (i = char_count; (i != 0) && continue_loop; i--)
    {
      if (!(*i_ptr))
      {
        *i_ptr = ' ';
      }
      else
      {
        continue_loop = 0;
      }
      i_ptr += 1;
    }

  }
  return char_count + 1; //return len + 1 for null terminator
}
