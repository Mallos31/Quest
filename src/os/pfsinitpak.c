#include "common.h"
#include <os_internal.h>
#include <controller.h>
#include <siint.h>

//#pragma GLOBAL_ASM("asm/nonmatchings/pfsinitpak/func_80039D90.s") 
s32 osPfsInitPak(OSMesgQueue *queue, OSPfs *pfs, int channel)
{
    int k;
    s32 ret;
    u16 sum;
    u16 isum;
    u8 temp[32];
    __OSPackId *id;
    __OSPackId newid;
    ret = 0;
    PFS_GET_STATUS;
    pfs->queue = queue;
    pfs->channel = channel;
    pfs->status = 0;
    pfs->activebank = 0;
    ERRCK(__osPfsSelectBank(pfs));
    //ERRCK(__osContRamRead(pfs->queue, pfs->channel, 1, (u8*)temp));  //Unpatched version of this file
    __osIdCheckSum((u16*)temp, &sum, &isum);
    id = (__OSPackId *)temp;
    if (id->checksum != sum || id->inverted_checksum != isum)
    {
        ERRCK(__osCheckPackId(pfs, id));
        if (ret != 0)
            return ret;
    }
    if ((id->deviceid & 1) == 0)
    {
        ERRCK(__osRepairPackId(pfs, id, &newid));
        id = &newid;
        if ((id->deviceid & 1) == 0)
            return PFS_ERR_DEVICE;
    }
    for (k = 0; k < ARRLEN(pfs->id); k++)
    {
        pfs->id[k] = ((u8 *)id)[k];
    }
    pfs->version = id->version;
    pfs->banks = id->banks;
    pfs->inode_start_page = pfs->banks * 2 + 3;
    pfs->dir_size = 0x10;
    pfs->inode_table = 8;
    pfs->minode_table = pfs->banks * PFS_ONE_PAGE + 8;
    pfs->dir_table = pfs->minode_table + pfs->banks * PFS_ONE_PAGE;
    ERRCK(__osContRamRead(pfs->queue, pfs->channel, 7, pfs->label));
    ret = osPfsChecker(pfs);
    pfs->status |= PFS_INITIALIZED;
    return ret;
}