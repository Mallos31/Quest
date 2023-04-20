#define SR_CE 0x00020000
#define SR_CH 0x00040000
#define gDPSetTextureConvert(pkt,type) gSPSetOtherMode(pkt, G_SETOTHERMODE_H, G_MDSFT_TEXTCONV, 3, type)
#define alSeqpGetChannelPriority alSeqpGetChlPriority
#define PI_DMA_BUFFER_SIZE 128
#define ERR_ALSNDPSETPRIORITY 111
#define MI_INTR_MASK_CLR_SI 0x0004
#define gDPLoadMultiBlock_4bS(pkt,timg,tmem,rtile,fmt,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, G_IM_SIZ_16b, 1, timg); gDPSetTile(pkt, fmt, G_IM_SIZ_16b, 0, tmem, G_TX_LOADTILE, 0, cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height)+3)>>2)-1, 0 ); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, G_IM_SIZ_4b, ((((width)>>1)+7)>>3), tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, rtile, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define PFS_ERR_INCONSISTENT 3
#define G_AC_THRESHOLD (1 << G_MDSFT_ALPHACOMPARE)
#define gsSPSetGeometryMode(word) { _SHIFTL(G_SETGEOMETRYMODE, 24, 8), (unsigned int)(word) }
#define SR_DE 0x00010000
#define G_RM_AA_ZB_OPA_DECAL RM_AA_ZB_OPA_DECAL(1)
#define gsSPTextureRectangle(xl,yl,xh,yh,tile,s,t,dsdx,dtdy) (_SHIFTL(G_TEXRECT, 24, 8) | _SHIFTL(xh, 12, 12) | _SHIFTL(yh, 0, 12)), (_SHIFTL(tile, 24, 3) | _SHIFTL(xl, 12, 12) | _SHIFTL(yl, 0, 12)), gsImmp1(G_RDPHALF_1, (_SHIFTL(s, 16, 16) | _SHIFTL(t, 0, 16))), gsImmp1(G_RDPHALF_2, (_SHIFTL(dsdx, 16, 16) | _SHIFTL(dtdy, 0, 16)))
#define AL_PHASE_DECAY 1
#define IM_RD 0x40
#define gsSPBranchLessZ(dl,vtx,zval,near,far,flag) gsSPBranchLessZrg(dl, vtx, zval, near, far, flag, 0, G_MAXZ)
#define VI_H_VIDEO_REG VI_H_START_REG
#define G_BRANCH_Z (G_IMMFIRST-15)
#define ERR_OSPISTARTDMA_PIMGR 28
#define IS_KSEGDM(x) ((u32)(x) >= K0BASE && (u32)(x) < K2BASE)
#define SP_SET_YIELD SP_SET_SIG0
#define gsDPSetScissor(mode,ulx,uly,lrx,lry) { _SHIFTL(G_SETSCISSOR, 24, 8) | _SHIFTL((int)((float)(ulx)*4.0F), 12, 12) | _SHIFTL((int)((float)(uly)*4.0F), 0, 12), _SHIFTL(mode, 24, 2) | _SHIFTL((int)((float)(lrx)*4.0F), 12, 12) | _SHIFTL((int)((float)(lry)*4.0F), 0, 12) }
#define gSPLight(pkt,l,n) gDma1p(pkt, G_MOVEMEM, l, sizeof(Light),((n)-1)*2+G_MV_L0)
#define OS_VI_GAMMA_DITHER_ON 0x0004
#define G_RM_AA_ZB_OPA_TERR2 RM_AA_ZB_OPA_TERR(2)
#define RM_AA_ZB_TEX_EDGE(clk) AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | CVG_X_ALPHA | ALPHA_CVG_SEL | ZMODE_OPA | TEX_EDGE | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define K0BASE 0x80000000
#define SR_FR 0x04000000
#define G_MTX_MUL 0x00
#define ERR_OSPIRAWSTARTDMA_RANGE 25
#define G_MWO_CLIP_RPX 0x14
#define G_MWO_CLIP_RPY 0x1c
#define OS_PFS_VERSION_HI (OS_PFS_VERSION >> 8)
#define gSPTextureRectangle(pkt,xl,yl,xh,yh,tile,s,t,dsdx,dtdy) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_TEXRECT, 24, 8) | _SHIFTL(xh, 12, 12) | _SHIFTL(yh, 0, 12)); _g->words.w1 = (_SHIFTL(tile, 24, 3) | _SHIFTL(xl, 12, 12) | _SHIFTL(yl, 0, 12)); gImmp1(pkt, G_RDPHALF_1, (_SHIFTL(s, 16, 16) | _SHIFTL(t, 0, 16))); gImmp1(pkt, G_RDPHALF_2, (_SHIFTL(dsdx, 16, 16) | _SHIFTL(dtdy, 0, 16)));}
#define A_BUTTON CONT_A
#define alCSPGetPan alCSPGetChlPan
#define G_POPMTX (G_IMMFIRST-2)
#define ERR_OSPROFILEINIT_SIZ 65
#define OS_MESG_PRI_HIGH 1
#define G_CC_BLENDIA2 ENVIRONMENT, SHADE, COMBINED, SHADE, COMBINED, 0, SHADE, 0
#define G_RM_AA_TEX_TERR2 RM_AA_TEX_TERR(2)
#define G_RM_AA_OPA_TERR2 RM_AA_OPA_TERR(2)
#define G_IM_SIZ_4b_LOAD_BLOCK G_IM_SIZ_16b
#define RM_AA_SUB_SURF(clk) AA_EN | IM_RD | CVG_DST_FULL | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define SP_STATUS_CPUSIGNAL SP_STATUS_SIG4
#define GIO_GIO_INTR_REG (GIO_BASE_REG+0x000)
#define RM_RA_ZB_OPA_DECAL(clk) AA_EN | Z_CMP | CVG_DST_WRAP | ALPHA_CVG_SEL | ZMODE_DEC | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define alSeqpGetFXMix alSeqpGetChlFXMix
#define G_RM_ADD2 RM_ADD(2)
#define G_RDPPIPESYNC 0xe7
#define OS_EVENT_COUNTER 3
#define RI_COUNT_REG RI_REFRESH_REG
#define gdSPDefLookAt(rightx,righty,rightz,upx,upy,upz) { {{ {{0,0,0},0,{0,0,0},0,{rightx,righty,rightz},0}}, { {{0,0x80,0},0,{0,0x80,0},0,{upx,upy,upz},0}}} }
#define SR_IE 0x00000001
#define KDM_TO_PHYS(x) ((u32)(x)&0x1FFFFFFF)
#define G_ROTATE_FRAC 16
#define TLBLO_PFNSHIFT 6
#define gsDPLoadTextureBlockS(timg,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, siz ##_LOAD_BLOCK, 1, timg), gsDPSetTile(fmt, siz ##_LOAD_BLOCK, 0, 0, G_TX_LOADTILE, 0 , cmt, maskt,shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadBlock(G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT)-1, 0 ), gsDPPipeSync(), gsDPSetTile(fmt, siz, ((((width) * siz ##_LINE_BYTES)+7)>>3), 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC)
#define CONT_OVERRUN_ERROR 0x4
#define RM_AA_SUB_TERR(clk) AA_EN | IM_RD | CVG_DST_FULL | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define ERR_OSPISTARTDMA_DIR 30
#define OS_VI_MPAL_HPN1 36
#define OS_VI_MPAL_HPN2 40
#define ERR_ALSNDPDEALLOCATE 107
#define TRUE 1
#define OS_PFS_VERSION_LO (OS_PFS_VERSION & 255)
#define C0_COMPARE 11
#define SP_SET_HALT 0x00002
#define SINVALID 0x00000000
#define SR_KX 0x00000080
#define OS_VI_DITHER_FILTER_OFF 0x0080
#define OS_VI_BIT_NONINTERLACE 0x0001
#define OS_IM_RDBREAD 0x00004401
#define G_CCMUX_TEXEL0_ALPHA 8
#define OS_IM_RDBWRITE 0x00002401
#define G_SETCONVERT 0xec
#define SP_STATUS_DMA_BUSY 0x004
#define gDPLoadTLUT(pkt,count,tmemaddr,dram) { gDPSetTextureImage(pkt, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, dram); gDPTileSync(pkt); gDPSetTile(pkt, 0, 0, 0, tmemaddr, G_TX_LOADTILE, 0 , 0, 0, 0, 0, 0, 0); gDPLoadSync(pkt); gDPLoadTLUTCmd(pkt, G_TX_LOADTILE, ((count)-1)); gDPPipeSync(pkt); }
#define EXC_WADE EXC_CODE(5)
#define EXC_II EXC_CODE(10)
#define GAME_APP_DATA_READY 10
#define SP_SCALE 0x00000010
#define G_TL_LOD (1 << G_MDSFT_TEXTLOD)
#define RAMROM_MSG_SIZE (RAMROM_BUF_SIZE*6)
#define C0_PRID 15
#define TLBLO_D 0x4
#define EXC_FPE EXC_CODE(15)
#define TLBLO_G 0x1
#define OS_PHYSICAL_TO_K0(x) (void *)(((u32)(x)+0x80000000))
#define OS_ERROR_FMT "/usr/lib/PR/error.fmt"
#define TLBLO_V 0x2
#define G_SETCOMBINE 0xfc
#define gsDPFullSync() gsDPNoParam(G_RDPFULLSYNC)
#define Z_CMP 0x10
#define VI_V_SYNC_REG (VI_BASE_REG+0x18)
#define CONFIG_BE_SHFT 15
#define C0_READI 0x1
#define OS_K1_TO_PHYSICAL(x) (u32)(((char *)(x)-0xa0000000))
#define gsDPSetColor(c,d) { _SHIFTL(c, 24, 8), (unsigned int)(d) }
#define GU_PARSE_STRING_TYPE 6
#define A_RIGHT 0x00
#define gDPSetBlendColor(pkt,r,g,b,a) DPRGBColor(pkt, G_SETBLENDCOLOR, r,g,b,a)
#define G_CLEARGEOMETRYMODE (G_IMMFIRST-9)
#define gsSPInsertMatrix(where,num) gsMoveWd(G_MW_MATRIX, where, num)
#define A_MIX 0x10
#define CVG_DST_CLAMP 0
#define WATCHLO_VALIDMASK 0xfffffffb
#define PI_RD_LEN_REG (PI_BASE_REG+0x08)
#define G_RM_XLU_SURF2 RM_XLU_SURF(2)
#define G_RM_ZB_XLU_DECAL RM_ZB_XLU_DECAL(1)
#define DPC_STATUS_XBUS_DMEM_DMA 0x001
#define G_CC_BLENDRGBDECALA TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, TEXEL0
#define _GBI_H_ 
#define PPARITY_MASK 0x0001
#define OS_PFS_VERSION 0x0200
#define gSPCullDisplayList(pkt,vstart,vend) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_CULLDL, 24, 8) | _SHIFTL((vstart)*2, 0, 16); _g->words.w1 = _SHIFTL((vend)*2, 0, 16); }
#define PFS_READ 0
#define CONFIG_EC_1_1 0x6
#define G_CYC_COPY (2 << G_MDSFT_CYCLETYPE)
#define M_VIDTASK 3
#define SR_RE 0x02000000
#define A_MIXER 12
#define SR_RP 0x08000000
#define OS_IM_COUNTER 0x00008401
#define DPC_BUFBUSY_REG (DPC_BASE_REG+0x14)
#define G_CCMUX_COMBINED 0
#define A_SETLOOP 15
#define G_LIGHTING 0x00020000
#define VI_ORIGIN_REG (VI_BASE_REG+0x04)
#define EXC_OV EXC_CODE(12)
#define PFS_CREATE 2
#define SR_SR 0x00100000
#define GAME_FAULT_SEND 14
#define SR_SX 0x00000040
#define gDPSetAlphaDither(pkt,mode) gSPSetOtherMode(pkt, G_SETOTHERMODE_H, G_MDSFT_ALPHADITHER, 2, mode)
#define GAME_PROF_SEND 12
#define AI_MIN_BIT_RATE 2
#define G_CC_DECALRGB2 0, 0, 0, COMBINED, 0, 0, 0, SHADE
#define ERR_OSSTARTTHREAD 3
#define G_CC_DECALRGBA 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0
#define SR_TS 0x00200000
#define gsDPSetFogColor(r,g,b,a) sDPRGBColor(G_SETFOGCOLOR, r,g,b,a)
#define Z_TRIG CONT_G
#define CVG_DST_WRAP 0x100
#define RI_LATENCY_REG (RI_BASE_REG+0x14)
#define aSegment(pkt,s,b) { Acmd *_a = (Acmd *)pkt; _a->words.w0 = _SHIFTL(A_SEGMENT, 24, 8); _a->words.w1 = _SHIFTL(s, 24, 8) | _SHIFTL(b, 0, 24); }
#define M_PI 3.14159265358979323846
#define gSPBranchList(pkt,dl) gDma1p(pkt,G_DL,dl,0,G_DL_NOPUSH)
#define OS_TV_MPAL 2
#define gsDPSetBlendColor(r,g,b,a) sDPRGBColor(G_SETBLENDCOLOR, r,g,b,a)
#define SR_UX 0x00000020
#define PFS_ONE_PAGE 8
#define TLBHI_PIDMASK 0xff
#define PADDR_SHIFT 4
#define gsDPSetAlphaDither(mode) gsSPSetOtherMode(G_SETOTHERMODE_H, G_MDSFT_ALPHADITHER, 2, mode)
#define MI_CLR_EBUS 0x0200
#define aSaveBuffer(pkt,s) { Acmd *_a = (Acmd *)pkt; _a->words.w0 = _SHIFTL(A_SAVEBUFF, 24, 8); _a->words.w1 = (unsigned int)(s); }
#define ERR_OSRECVMESG 8
#define CONT_ADDR_CRC_ER 0x04
#define CONT_CARD_ON 0x01
#define ERR_OSSETTIME 75
#define CONT_START 0x1000
#define gDPLoadTile(pkt,t,uls,ult,lrs,lrt) gDPLoadTileGeneric(pkt, G_LOADTILE, t, uls, ult, lrs, lrt)
#define RI_BASE_REG 0x04700000
#define MQ_GET_COUNT(mq) ((mq)->validCount)
#define ERR_OSJAMMESG 7
#define G_IM_SIZ_32b_TILE_BYTES 2
#define G_TEXRECT 0xe4
#define CONFIG_COHRNT_EXLWR 0x00000005
#define gsDPSetDepthSource(src) gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ZSRCSEL, 1, src)
#define OS_VI_BIT_NTSC 0x0400
#define ERR_OSMAPTLB_INDEX 10
#define gsDPSetOtherMode(mode0,mode1) { _SHIFTL(G_RDPSETOTHERMODE,24,8)|_SHIFTL(mode0,0,24), (unsigned int)(mode1) }
#define CONFIG_SB_SHFT 22
#define G_RM_ZB_PCL_SURF2 RM_ZB_PCL_SURF(2)
#define AL_BANK_VERSION 0x4231
#define ERR_ALCSEQZEROVEL 129
#define G_RM_NOOP RM_NOOP(1)
#define MAXCONTROLLERS 4
#define G_TF_POINT (0 << G_MDSFT_TEXTFILT)
#define VI_MPAL_CLOCK 48628316
#define G_MTX_NOPUSH 0x00
#define _SHIFTL(v,s,w) ((unsigned int) (((unsigned int)(v) & ((0x01 << (w)) - 1)) << (s)))
#define MI_INTR_MASK_SET_AI 0x0020
#define G_BZ_PERSP 0
#define __LIB_AUDIO__ 
#define G_TX_LOADTILE 7
#define G_TL_TILE (0 << G_MDSFT_TEXTLOD)
#define MI_CLR_RDRAM 0x1000
#define ERR_OSCREATEREGION_ALIGN 50
#define GIO_GIO_SYNC_REG (GIO_BASE_REG+0x400)
#define C0_SR 12
#define SP_FRACPOS 0x00000100
#define ERR_OSPROFILEINIT_ALN 63
#define G_RM_OPA_CI2 RM_OPA_CI(2)
#define G_RM_RA_ZB_OPA_INTER2 RM_RA_ZB_OPA_INTER(2)
#define FTOFRAC8(x) ((int) MIN(((x) * (128.0f)), 127.0f) & 0xff)
#define _VARIABLES_H_ 
#define G_IM_SIZ_32b_BYTES 4
#define DPC_STATUS_FREEZE 0x002
#define MQ_IS_FULL(mq) (MQ_GET_COUNT(mq) >= (mq)->msgCount)
#define DPS_TBIST_REG (DPS_BASE_REG+0x00)
#define G_RM_CLD_SURF2 RM_CLD_SURF(2)
#define A_SETBUFF 8
#define G_TC_FILTCONV (5 << G_MDSFT_TEXTCONV)
#define SP_SET_SSTEP 0x00040
#define MI_INTR_MASK_SET_DP 0x0800
#define SP_SET_INTR_BREAK 0x00100
#define G_RM_AA_ZB_XLU_LINE2 RM_AA_ZB_XLU_LINE(2)
#define OS_PRIORITY_PIMGR 150
#define G_RM_AA_ZB_XLU_SURF RM_AA_ZB_XLU_SURF(1)
#define gSPDisplayList(pkt,dl) gDma1p(pkt,G_DL,dl,0,G_DL_PUSH)
#define CONFIG_EC_3_2 0x7
#define SP_DMA_FULL_REG (SP_BASE_REG+0x14)
#define VI_CTRL_SERRATE_ON 0x00040
#define VI_V_VIDEO_REG VI_V_START_REG
#define RCP_IMASKSHIFT 16
#define G_IMMCMDSIZ 64
#define G_TX_MIRROR 0x1
#define ERR_ALSNDP_NO_VOICE 105
#define G_RM_AA_XLU_LINE2 RM_AA_XLU_LINE(2)
#define ERR_OSPROFILESTOP_FLAG 68
#define ERR_OSCREATEPIMANAGER 35
#define PI_DOM2_ADDR2 0x08000000
#define CVG_DST_SAVE 0x300
#define AL_PAN_LEFT 0
#define gsDPSetTextureFilter(type) gsSPSetOtherMode(G_SETOTHERMODE_H, G_MDSFT_TEXTFILT, 2, type)
#define PFS_FILE_EXT_LEN 4
#define C_HINV 0x10
#define HOST_PROF_ACK 13
#define G_MTX_PUSH 0x04
#define gDPLoadSync(pkt) gDPNoParam(pkt, G_RDPLOADSYNC)
#define GU_PARSEGBI_SHOWDMA 8
#define A_SPNOOP 0
#define G_RM_OPA_SURF RM_OPA_SURF(1)
#define ALIGNSZ (sizeof(long long))
#define C0_RAND 1
#define gsDPTileSync() gsDPNoParam(G_RDPTILESYNC)
#define FTOFIX32(x) (long)((x) * (float)0x00010000)
#define RM_AA_ZB_XLU_SURF(clk) AA_EN | Z_CMP | IM_RD | CVG_DST_WRAP | CLR_ON_CVG | FORCE_BL | ZMODE_XLU | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define ERR_ALSEQP_NO_SOUND 100
#define GU_PARSE_GBI_TYPE 1
#define gDPSetTextureFilter(pkt,type) gSPSetOtherMode(pkt, G_SETOTHERMODE_H, G_MDSFT_TEXTFILT, 2, type)
#define G_RDP_TRI_FILL_MASK 0x08
#define gsSP2Triangles(v00,v01,v02,flag0,v10,v11,v12,flag1) { (_SHIFTL(G_TRI2, 24, 8)| __gsSP1Triangle_w1f(v00, v01, v02, flag0)), __gsSP1Triangle_w1f(v10, v11, v12, flag1) }
#define G_CC_BLENDRGBA TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, SHADE
#define DPC_CLR_XBUS_DMEM_DMA 0x0001
#define G_VTX 4
#define OS_TASK_DP_WAIT 0x0002
#define DPC_CLOCK_REG (DPC_BASE_REG+0x10)
#define SVINDEXMASK 0x00000380
#define G_SETTILESIZE 0xf2
#define OS_EVENT_CART 2
#define gsSPNoOp() gsDma0p(G_SPNOOP, 0, 0)
#define G_TRI_SHADE_ZBUFF 0xcd
#define SP_SET_SIG0 0x00400
#define SP_SET_SIG1 0x01000
#define SP_SET_SIG2 0x04000
#define SP_SET_SIG3 0x10000
#define SP_SET_SIG4 0x40000
#define SP_SET_SIG5 0x100000
#define SP_SET_SIG6 0x400000
#define SP_SET_SIG7 0x1000000
#define ERR_OSDPSETNEXTBUFFER_ADDR 17
#define RM_ZB_OPA_SURF(clk) Z_CMP | Z_UPD | CVG_DST_FULL | ALPHA_CVG_SEL | ZMODE_OPA | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define RDRAM_BASE_REG 0x03F00000
#define AL_CMIDI_BLOCK_CODE 0xFE
#define NUM_SEGMENTS (16)
#define G_MAXZ 0x03ff
#define G_MWO_MATRIX_YZ_YW_F 0x2c
#define G_CCMUX_NOISE 7
#define G_MWO_MATRIX_YZ_YW_I 0x0c
#define G_MDSFT_BLENDMASK 0
#define RM_ZB_OVL_SURF(clk) Z_CMP | IM_RD | CVG_DST_SAVE | FORCE_BL | ZMODE_DEC | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define AI_MIN_DAC_RATE 132
#define gDPSetTexturePersp(pkt,type) gSPSetOtherMode(pkt, G_SETOTHERMODE_H, G_MDSFT_TEXTPERSP, 1, type)
#define ERR_OSAISETFREQUENCY 14
#define EEPROM_TYPE_4K 0x01
#define GAME_LOG_SEND 7
#define RM_AA_TEX_TERR(clk) AA_EN | IM_RD | CVG_DST_CLAMP | CVG_X_ALPHA | ALPHA_CVG_SEL | ZMODE_OPA | TEX_EDGE | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define G_MDSFT_RENDERMODE 3
#define OS_PM_1M 0x01fe000
#define PI_DOMAIN1 0
#define PI_DOMAIN2 1
#define G_RM_AA_OPA_SURF RM_AA_OPA_SURF(1)
#define SP_CLR_INTR 0x00008
#define C_CDX 0xc
#define OS_TASK_LOADABLE 0x0004
#define BOOT_ADDRESS_EMU 0x20010000
#define ERR_ALSEQPUNMAP 123
#define AI_DRAM_ADDR_REG (AI_BASE_REG+0x00)
#define gSPPopMatrix(pkt,n) gImmp1(pkt, G_POPMTX, n)
#define RDRAM_REF_INTERVAL_REG (RDRAM_BASE_REG+0x10)
#define PI_BSD_DOM1_LAT_REG (PI_BASE_REG+0x14)
#define gMoveWd(pkt,index,offset,data) gImmp21((pkt), G_MOVEWORD, offset, index, data)
#define _FINALROM 1
#define G_TRI_SHADE_TXTR_ZBUFF 0xcf
#define MI_INTR_MASK_SET_PI 0x0200
#define G_CC_REFLECTRGB ENVIRONMENT, 0, TEXEL0, SHADE, 0, 0, 0, SHADE
#define C0_TAGLO 28
#define aInterleave(pkt,l,r) { Acmd *_a = (Acmd *)pkt; _a->words.w0 = _SHIFTL(A_INTERLEAVE, 24, 8); _a->words.w1 = _SHIFTL(l, 16, 16) | _SHIFTL(r, 0, 16); }
#define gsDPSetKeyR(cR,sR,wR) { _SHIFTL(G_SETKEYR, 24, 8), _SHIFTL(wR, 16, 12) | _SHIFTL(cR, 8, 8) | _SHIFTL(sR, 0, 8) }
#define GIO_BASE_REG 0x18000000
#define XUT_VEC (K0BASE+0x80)
#define G_IM_SIZ_32b_LOAD_BLOCK G_IM_SIZ_32b
#define OS_PM_4K 0x0000000
#define PI_BSD_DOM2_PWD_REG (PI_BASE_REG+0x28)
#define OS_PM_4M 0x07fe000
#define AL_DEFAULT_PRIORITY 5
#define SP_WR_LEN_REG (SP_BASE_REG+0x0C)
#define OS_PRIORITY_IDLE 0
#define ERR_OSVISETSPECIAL_VALUE 43
#define ERR_OSREADHOST_SIZE 71
#define G_MWO_CLIP_RNX 0x04
#define TLBCTXT_VPNSHIFT 4
#define K2SIZE 0x20000000
#define OS_MESG_TYPE_BASE (10)
#define OS_PM_256K 0x007e000
#define aLoadADPCM(pkt,c,d) { Acmd *_a = (Acmd *)pkt; _a->words.w0 = _SHIFTL(A_LOADADPCM, 24, 8) | _SHIFTL(c, 0, 24); _a->words.w1 = (unsigned int) d; }
#define ERR_ALSEQPINVALIDPROG 121
#define VI_CURRENT_REG (VI_BASE_REG+0x10)
#define PFS_ERR_INVALID 5
#define ERR_ALSEQTIME 117
#define gDPFullSync(pkt) gDPNoParam(pkt, G_RDPFULLSYNC)
#define AL_SEQBANK_VERSION 'S1'
#define DPC_STATUS_START_VALID 0x400
#define PFS_INITIALIZED 0x1
#define GBL_c1(m1a,m1b,m2a,m2b) (m1a) << 30 | (m1b) << 26 | (m2a) << 22 | (m2b) << 18
#define MI_INTR_MASK_SET_SI 0x0008
#define MI_INTR_MASK_SET_SP 0x0002
#define gDPSetColorDither(pkt,mode) gSPSetOtherMode(pkt, G_SETOTHERMODE_H, G_MDSFT_RGBDITHER, 2, mode)
#define G_CC_TRILERP TEXEL1, TEXEL0, LOD_FRACTION, TEXEL0, TEXEL1, TEXEL0, LOD_FRACTION, TEXEL0
#define ALIGN(s,align) (((u32)(s) + ((align)-1)) & ~((align)-1))
#define A_NOAUX 0x00
#define __gsSPLine3D_w1f(v0,v1,wd,flag) (((flag) == 0) ? __gsSPLine3D_w1(v0, v1, wd): __gsSPLine3D_w1(v1, v0, wd))
#define gSPBranchLessZraw(pkt,dl,vtx,zval) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_RDPHALF_1,24,8); _g->words.w1 = (unsigned int)(dl); _g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_BRANCH_Z,24,8)| _SHIFTL((vtx)*5,12,12)|_SHIFTL((vtx)*2,0,12)); _g->words.w1 = (unsigned int)(zval); }
#define GU_PARSERDP_VERBOSE 1
#define CHNL_ERR_NORESP 0x80
#define G_RM_AA_ZB_OPA_TERR RM_AA_ZB_OPA_TERR(1)
#define G_TRI_SHADE 0xcc
#define SP_Z 0x00000008
#define G_MWO_bLIGHT_2 0x24
#define G_CK_KEY (1 << G_MDSFT_COMBKEY)
#define TLBPGMASK_64K 0x1e000
#define gDPSetTile(pkt,fmt,siz,line,tmem,tile,palette,cmt,maskt,shiftt,cms,masks,shifts) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_SETTILE, 24, 8) | _SHIFTL(fmt, 21, 3) | _SHIFTL(siz, 19, 2) | _SHIFTL(line, 9, 9) | _SHIFTL(tmem, 0, 9); _g->words.w1 = _SHIFTL(tile, 24, 3) | _SHIFTL(palette, 20, 4) | _SHIFTL(cmt, 18, 2) | _SHIFTL(maskt, 14, 4) | _SHIFTL(shiftt, 10, 4) |_SHIFTL(cms, 8, 2) | _SHIFTL(masks, 4, 4) | _SHIFTL(shifts, 0, 4); }
#define AL_PHASE_ATTACK 0
#define TLBRAND_RANDSHIFT 0
#define G_IM_SIZ_4b_SHIFT 2
#define AL_FX_BIGROOM 2
#define G_MWO_bLIGHT_5 0x84
#define OS_CYCLES_TO_NSEC(c) (((u64)(c)*(1000000000LL/15625000LL))/(OS_CPU_COUNTER/15625000LL))
#define G_RM_AA_TEX_EDGE RM_AA_TEX_EDGE(1)
#define G_MWO_bLIGHT_7 0xc4
#define G_RM_ZB_XLU_SURF RM_ZB_XLU_SURF(1)
#define VI_CTRL_ANTIALIAS_MASK 0x00300
#define MI_INTR_MASK_SET_VI 0x0080
#define C0_WRITEI 0x2
#define RAMROM_RELEASE_OFFSET 0xc
#define C0_WRITER 0x6
#define EXC_WATCH EXC_CODE(23)
#define aPan(pkt,f,d,s) { Acmd *_a = (Acmd *)pkt; _a->words.w0 = (_SHIFTL(A_PAN, 24, 8) | _SHIFTL(f, 16, 8) | _SHIFTL(d, 0, 16)); _a->words.w1 = (unsigned int)(s); }
#define G_DL_NOPUSH 0x01
#define _UINTPTR_T 
#define alCSPSetPan alCSPSetChlPan
#define GRDPCMD(x) (0xff-(x))
#define gSP2Triangles(pkt,v00,v01,v02,flag0,v10,v11,v12,flag1) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_TRI2, 24, 8)| __gsSP1Triangle_w1f(v00, v01, v02, flag0)); _g->words.w1 = __gsSP1Triangle_w1f(v10, v11, v12, flag1); }
#define G_CK_NONE (0 << G_MDSFT_COMBKEY)
#define G_RM_AA_ZB_PCL_SURF2 RM_AA_ZB_PCL_SURF(2)
#define gDPSetBlendMask(pkt,mask) gDPNoOp(pkt)
#define RCP_STAT_PRINT rmonPrintf("current=%x start=%x end=%x dpstat=%x spstat=%x\n", IO_READ(DPC_CURRENT_REG), IO_READ(DPC_START_REG), IO_READ(DPC_END_REG), IO_READ(DPC_STATUS_REG), IO_READ(SP_STATUS_REG))
#define ERR_OSPROFILESTART_TIME 66
#define G_CC_YUV2RGB TEXEL1, K4, K5, TEXEL1, 0, 0, 0, 0
#define gsSPLoadUcodeEx(uc_start,uc_dstart,uc_dsize) { _SHIFTL(G_RDPHALF_1,24,8), (unsigned int)(uc_dstart), }, { _SHIFTL(G_LOAD_UCODE,24,8)| _SHIFTL((int)(uc_dsize)-1,0,16), (unsigned int)(uc_start), }
#define SP_STATUS_RSPSIGNAL SP_STATUS_SIG3
#define gDPSetScissor(pkt,mode,ulx,uly,lrx,lry) { Gfx *_g = (Gfx *)pkt; _g->words.w0 = _SHIFTL(G_SETSCISSOR, 24, 8) | _SHIFTL((int)((float)(ulx)*4.0F), 12, 12) | _SHIFTL((int)((float)(uly)*4.0F), 0, 12); _g->words.w1 = _SHIFTL(mode, 24, 2) | _SHIFTL((int)((float)(lrx)*4.0F), 12, 12) | _SHIFTL((int)((float)(lry)*4.0F), 0, 12); }
#define SP_TEXSHUF 0x00000200
#define ERR_OSVISETYSCALE_VALUE 41
#define gsDPLoadMultiBlock_4b(timg,tmem,rtile,fmt,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, G_IM_SIZ_16b, 1, timg), gsDPSetTile(fmt, G_IM_SIZ_16b, 0, tmem, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadBlock(G_TX_LOADTILE, 0, 0, (((width)*(height)+3)>>2)-1, CALC_DXT_4b(width)), gsDPPipeSync(), gsDPSetTile(fmt, G_IM_SIZ_4b, ((((width)>>1)+7)>>3), tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(rtile, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC)
#define VI_H_START_REG (VI_BASE_REG+0x24)
#define G_MWO_NUMLIGHT 0x00
#define _STRUCTS_H_ 
#define AI_CONTROL_DMA_ON 0x01
#define G_IM_FMT_CI 2
#define OS_TASK_SP_ONLY 0x0008
#define gsSPMatrix(m,p) gsDma1p(G_MTX, m, sizeof(Mtx), p)
#define ERR_OSPIRAWSTARTDMA_DEVADDR 22
#define SP_CLR_HALT 0x00001
#define C0_WATCHHI 19
#define G_SPRITE2D_DRAW (G_IMMFIRST-2)
#define G_SETBLENDCOLOR 0xf9
#define ERR_OSPROFILEINIT_STR 61
#define G_RM_PASS GBL_c1(G_BL_CLR_IN, G_BL_0, G_BL_CLR_IN, G_BL_1)
#define RI_RERROR_REG (RI_BASE_REG+0x18)
#define A_SAVEBUFF 6
#define CACHERR_PIDX_MASK 0x00000007
#define VI_INTR_REG (VI_BASE_REG+0x0C)
#define VI_PAL_CLOCK 49656530
#define AI_DACRATE_REG (AI_BASE_REG+0x10)
#define OS_APP_NMI_BUFSIZE 64
#define PIF_RAM_END 0x1FC007FF
#define ERR_OSGETTIME 74
#define RI_CURRENT_LOAD_REG (RI_BASE_REG+0x08)
#define G_CCMUX_ENV_ALPHA 12
#define NO_SOUND_ERR_MASK 0x01
#define AL_MAX_PRIORITY 127
#define gsSPLookAt(la) gsSPLookAtX(la), gsSPLookAtY((char *)(la)+16)
#define OS_IM_CART 0x00000c01
#define CONT_B 0x4000
#define MI_INTR_MASK_REG (MI_BASE_REG+0x0C)
#define SI_STATUS_DMA_ERROR 0x0008
#define TLBCTXT_BASESHIFT 23
#define E_VEC (K0BASE+0x180)
#define HOST_DATA_ACK 17
#define SR_CU0 0x10000000
#define SR_CU1 0x20000000
#define SR_CU2 0x40000000
#define SR_CU3 0x80000000
#define G_RM_RA_OPA_SURF RM_RA_OPA_SURF(1)
#define C0_WATCHLO 18
#define gSPPerspNormalize(pkt,s) gMoveWd(pkt, G_MW_PERSPNORM, 0, (s))
#define VI_CTRL_DIVOT_ON 0x00010
#define HOST_PRINTF_ACK 6
#define ERR_OSMALLOC 52
#define G_IM_FMT_IA 3
#define RM_AA_OPA_TERR(clk) AA_EN | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define G_CC_MODULATERGBDECALA_PRIM G_CC_MODULATEIDECALA_PRIM
#define GAME_EXIT 16
#define RM_AA_ZB_SUB_SURF(clk) AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_FULL | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define gsDPSetEnvColor(r,g,b,a) sDPRGBColor(G_SETENVCOLOR, r,g,b,a)
#define gsDPSetConvert(k0,k1,k2,k3,k4,k5) { (_SHIFTL(G_SETCONVERT, 24, 8) | _SHIFTL(k0, 13, 9) | _SHIFTL(k1, 4, 9) | _SHIFTL(k2, 5, 4)), (_SHIFTL(k2, 27, 5) | _SHIFTL(k3, 18, 9) | _SHIFTL(k4, 9, 9) | _SHIFTL(k5, 0, 9)) }
#define TLBLO_UNCACHED 0x10
#define G_TD_DETAIL (2 << G_MDSFT_TEXTDETAIL)
#define A_LEFT 0x02
#define OS_PRIORITY_MAX 255
#define GU_PARSE_ABI_TYPE 5
#define G_CC_MODULATEIA2 COMBINED, 0, SHADE, 0, COMBINED, 0, SHADE, 0
#define EEP16K_MAXBLOCKS 256
#define OS_VI_DIVOT_ON 0x0010
#define G_TC_FILT (6 << G_MDSFT_TEXTCONV)
#define EXC_CPU EXC_CODE(11)
#define gDPSetCombineMode(pkt,a,b) gDPSetCombineLERP(pkt, a, b)
#define VI_NTSC_CLOCK 48681812
#define G_MOVEWORD (G_IMMFIRST-3)
#define G_CC_MODULATEIDECALA TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0
#define gsDPLoadTLUT_pal16(pal,dram) gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, dram), gsDPTileSync(), gsDPSetTile(0, 0, 0, (256+(((pal)&0xf)*16)), G_TX_LOADTILE, 0 , 0, 0, 0, 0, 0, 0), gsDPLoadSync(), gsDPLoadTLUTCmd(G_TX_LOADTILE, 15), gsDPPipeSync()
#define G_IM_SIZ_4b_INCR 3
#define gsDPSetCombine(muxs0,muxs1) { _SHIFTL(G_SETCOMBINE, 24, 8) | _SHIFTL(muxs0, 0, 24), (unsigned int)(muxs1) }
#define G_CC_HILITERGBDECALA2 ENVIRONMENT, COMBINED, TEXEL0, COMBINED, 0, 0, 0, TEXEL0
#define SP_FASTCOPY 0x00000020
#define PI_BSD_DOM1_RLS_REG (PI_BASE_REG+0x20)
#define G_BL_CLR_BL 2
#define _GU_H_ 
#define ERR_ALSYN_NO_UPDATE 106
#define EXC_SYSCALL EXC_CODE(8)
#define G_CC_BLENDI ENVIRONMENT, SHADE, TEXEL0, SHADE, 0, 0, 0, SHADE
#define G_TRI1 (G_IMMFIRST-0)
#define G_TRI2 (G_IMMFIRST-14)
#define RCP_IMASK 0x003f0000
#define G_RM_AA_ZB_XLU_DECAL RM_AA_ZB_XLU_DECAL(1)
#define K1SIZE 0x20000000
#define gDPTextureRectangle(pkt,xl,yl,xh,yh,tile,s,t,dsdx,dtdy) { Gfx *_g = (Gfx *)(pkt); if (pkt); _g->words.w0 = (_SHIFTL(G_TEXRECT, 24, 8) | _SHIFTL(xh, 12, 12) | _SHIFTL(yh, 0, 12)); _g->words.w1 = (_SHIFTL(tile, 24, 3) | _SHIFTL(xl, 12, 12) | _SHIFTL(yl, 0, 12)); _g ++; _g->words.w0 = (_SHIFTL(s, 16, 16) | _SHIFTL(t, 0, 16)); _g->words.w1 = (_SHIFTL(dsdx, 16, 16) | _SHIFTL(dtdy, 0, 16)); }
#define gsDPSetKeyGB(cG,sG,wG,cB,sB,wB) { (_SHIFTL(G_SETKEYGB, 24, 8) | _SHIFTL(wG, 12, 12) | _SHIFTL(wB, 0, 12)), (_SHIFTL(cG, 24, 8) | _SHIFTL(sG, 16, 8) | _SHIFTL(cB, 8, 8) | _SHIFTL(sB, 0, 8)) }
#define G_RM_AA_ZB_TEX_TERR2 RM_AA_ZB_TEX_TERR(2)
#define FPCSR_RM_RM 0x00000003
#define FPCSR_RM_RN 0x00000000
#define FPCSR_RM_RP 0x00000002
#define __gsSP1Triangle_w1(v0,v1,v2) (_SHIFTL((v0)*2,16,8)|_SHIFTL((v1)*2,8,8)|_SHIFTL((v2)*2,0,8))
#define FPCSR_RM_RZ 0x00000001
#define VI_CTRL_GAMMA_ON 0x00008
#define GU_PARSEGBI_NONEST 2
#define EXC_VCED EXC_CODE(31)
#define EXC_VCEI EXC_CODE(14)
#define DPC_STATUS_CMD_BUSY 0x040
#define NUML(n) (((n)+1)*32 + 0x80000000)
#define G_TX_LDBLK_MAX_TXL 2047
#define G_RM_RA_ZB_OPA_INTER RM_RA_ZB_OPA_INTER(1)
#define C0_COUNT 9
#define SADDR_SHIFT 4
#define OS_CLOCK_RATE 62500000LL
#define SP_IMEM_START 0x04001000
#define G_TEXTURE (G_IMMFIRST-4)
#define RM_AA_OPA_SURF(clk) AA_EN | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define ERR_OSCREATEMESGQUEUE 5
#define gSPSegment(pkt,segment,base) gMoveWd(pkt, G_MW_SEGMENT, (segment)*4, base)
#define PIF_RAM_START 0x1FC007C0
#define CHNL_ERR_FRAME 0x80
#define AI_LEN_REG (AI_BASE_REG+0x04)
#define OS_VI_GAMMA_ON 0x0001
#define ZMODE_XLU 0x800
#define gDma0p(pkt,c,s,l) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL((c), 24, 8) | _SHIFTL((l), 0, 24); _g->words.w1 = (unsigned int)(s); }
#define _COMMON_H_ 
#define RDRAM_DEVICE_MANUF_REG (RDRAM_BASE_REG+0x24)
#define gDPLoadTextureBlockYuvS(pkt,timg,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, siz ##_LOAD_BLOCK, 1, timg); gDPSetTile(pkt, fmt, siz ##_LOAD_BLOCK, 0, 0, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT)-1,0); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, siz, (((width) * 1)+7)>>3, 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define ACMD_SIZE 32
#define FPCSR_CE 0x00020000
#define ERR_OSCREATEVIMANAGER 49
#define FPCSR_CI 0x00001000
#define G_BL_0 3
#define G_BL_1 2
#define FPCSR_CU 0x00002000
#define FPCSR_CV 0x00010000
#define alHeapAlloc(hp,elem,size) alHeapDBAlloc(0, 0,(hp),(elem),(size))
#define FPCSR_CZ 0x00008000
#define RM_AA_ZB_OPA_DECAL(clk) AA_EN | Z_CMP | IM_RD | CVG_DST_WRAP | ALPHA_CVG_SEL | ZMODE_DEC | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define gDma1p(pkt,c,s,l,p) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL((c), 24, 8) | _SHIFTL((p), 16, 8) | _SHIFTL((l), 0, 16)); _g->words.w1 = (unsigned int)(s); }
#define gsDPParam(cmd,param) { _SHIFTL(cmd, 24, 8), (param) }
#define TLBCTXT_VPNMASK 0x7ffff0
#define OS_ERROR_MAGIC 0x6b617479
#define gDma2p(pkt,c,adrs,len,idx,ofs) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL((c),24,8)|_SHIFTL((ofs)/8,16,8)| _SHIFTL(((len)-1)/8,8,8)|_SHIFTL((idx),0,8)); _g->words.w1 = (unsigned int)(adrs); }
#define BOOT_ADDRESS_ULTRA 0x80000400
#define G_LOADTLUT 0xf0
#define RM_AA_DEC_LINE(clk) AA_EN | IM_RD | CVG_DST_FULL | CVG_X_ALPHA | ALPHA_CVG_SEL | FORCE_BL | ZMODE_OPA | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define EXC_RADE EXC_CODE(4)
#define G_MDSFT_TEXTFILT 12
#define BUF_CTRL_SIZE ALIGNSZ
#define FPCSR_EI 0x00000080
#define AA_EN 0x8
#define FPCSR_EO 0x00000200
#define gsDPTextureRectangleFlip(xl,yl,xh,yh,tile,s,t,dsdx,dtdy) { (_SHIFTL(G_TEXRECTFLIP, 24, 8) | _SHIFTL(xh, 12, 12) | _SHIFTL(yh, 0, 12)), (_SHIFTL(tile, 24, 3) | _SHIFTL(xl, 12, 12) | _SHIFTL(yl, 0, 12)), }, { _SHIFTL(s, 16, 16) | _SHIFTL(t, 0, 16), _SHIFTL(dsdx, 16, 16) | _SHIFTL(dtdy, 0, 16) }
#define FPCSR_EU 0x00000100
#define FPCSR_EV 0x00000800
#define FPCSR_EZ 0x00000400
#define OS_EVENT_CPU_BREAK 10
#define IS_KUSEG(x) ((u32)(x) < K0BASE)
#define K0_TO_K1(x) ((u32)(x)|0xA0000000)
#define R_VEC (K1BASE+0x1fc00000)
#define OS_EVENT_SP_BREAK 11
#define TXL2WORDS(txls,b_txl) MAX(1, ((txls)*(b_txl)/8))
#define RDRAM_1_END 0x003FFFFF
#define FPCSR_FI 0x00000004
#define C0_CAUSE 13
#define PI_DOMAIN2_REG PI_BSD_DOM2_LAT_REG
#define FPCSR_FO 0x00000010
#define FPCSR_FS 0x01000000
#define FPCSR_FV 0x00000040
#define FPCSR_FZ 0x00000020
#define MI_SET_RDRAM 0x2000
#define gsImmp21(c,p0,p1,dat) { _SHIFTL((c), 24, 8) | _SHIFTL((p0), 8, 16) | _SHIFTL((p1), 0, 8), (unsigned int) (dat) }
#define _ULTRA64_H_ 
#define G_RM_RA_OPA_SURF2 RM_RA_OPA_SURF(2)
#define RM_ZB_OPA_DECAL(clk) Z_CMP | CVG_DST_FULL | ALPHA_CVG_SEL | ZMODE_DEC | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define gsDPSetPrimColor(m,l,r,g,b,a) { (_SHIFTL(G_SETPRIMCOLOR, 24, 8) | _SHIFTL(m, 8, 8) | _SHIFTL(l, 0, 8)), (_SHIFTL(r, 24, 8) | _SHIFTL(g, 16, 8) | _SHIFTL(b, 8, 8) | _SHIFTL(a, 0, 8)) }
#define gsDPSetPrimDepth(z,dz) gsDPSetColor(G_SETPRIMDEPTH, _SHIFTL(z, 16, 16) | _SHIFTL(dz, 0, 16))
#define ERR_ALSEQSYSEX 119
#define CONT_JOYPORT 0x0004
#define AI_PAL_MIN_FREQ 3050
#define G_SETTIMG 0xfd
#define G_RM_AA_PCL_SURF2 RM_AA_PCL_SURF(2)
#define SP_HIDDEN 0x00000004
#define gSPLine3D(pkt,v0,v1,flag) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_LINE3D, 24, 8); _g->words.w1 = __gsSPLine3D_w1f(v0, v1, 0, flag); }
#define SP_STATUS_HALT 0x001
#define ERR_OSSPTASKLOAD_OUTSIZE 59
#define VI_CTRL_GAMMA_DITHER_ON 0x00004
#define OS_MESG_TYPE_LOOPBACK (OS_MESG_TYPE_BASE+0)
#define LEO_BLOCK_MODE 1
#define gSPModifyVertex(pkt,vtx,where,val) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_MODIFYVTX,24,8)| _SHIFTL((where),16,8)|_SHIFTL((vtx)*2,0,16)); _g->words.w1 = (unsigned int)(val); }
#define RDRAM_MIN_INTERVAL_REG (RDRAM_BASE_REG+0x1c)
#define OS_EVENT_SW1 0
#define RAMROM_PRINTF_ADDR (RAMROM_MSG_ADDR + (4*RAMROM_BUF_SIZE))
#define DPC_STATUS_PIPE_BUSY 0x020
#define ALFailIf(condition,error) if (condition) { return; }
#define SP_CLR_CPUSIGNAL SP_CLR_SIG4
#define G_TX_DXT_FRAC 11
#define SP_STATUS_YIELDED SP_STATUS_SIG1
#define OS_VI_NTSC_LAF1 3
#define OS_VI_NTSC_LAF2 7
#define gSPVertex(pkt,v,n,v0) gDma1p(pkt, G_VTX, v, ((n)<<10)|(sizeof(Vtx)*(n)-1), (v0)*2)
#define SP_STATUS_BROKE 0x002
#define gSPSprite2DBase(pkt,s) gDma1p(pkt, G_SPRITE2D_BASE, s, sizeof(uSprite), 0)
#define gsSPBranchLessZraw(dl,vtx,zval) { _SHIFTL(G_RDPHALF_1,24,8), (unsigned int)(dl), }, { _SHIFTL(G_BRANCH_Z,24,8)|_SHIFTL((vtx)*5,12,12)|_SHIFTL((vtx)*2,0,12), (unsigned int)(zval), }
#define __log__ 
#define OS_VI_BIT_32PIXEL 0x0080
#define AL_FX_NONE 0
#define ERR_OSSENDMESG 6
#define gSP1Quadrangle(pkt,v0,v1,v2,v3,flag) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_TRI2, 24, 8)| __gsSP1Quadrangle_w1f(v0, v1, v2, v3, flag)); _g->words.w1 = __gsSP1Quadrangle_w2f(v0, v1, v2, v3, flag); }
#define gDPLoadMultiTile(pkt,timg,tmem,rtile,fmt,siz,width,height,uls,ult,lrs,lrt,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, siz, width, timg); gDPSetTile(pkt, fmt, siz, (((((lrs)-(uls)+1) * siz ##_TILE_BYTES)+7)>>3), tmem, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadTile( pkt, G_TX_LOADTILE, (uls)<<G_TEXTURE_IMAGE_FRAC, (ult)<<G_TEXTURE_IMAGE_FRAC, (lrs)<<G_TEXTURE_IMAGE_FRAC, (lrt)<<G_TEXTURE_IMAGE_FRAC); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, siz, (((((lrs)-(uls)+1) * siz ##_LINE_BYTES)+7)>>3), tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, rtile, (uls)<<G_TEXTURE_IMAGE_FRAC, (ult)<<G_TEXTURE_IMAGE_FRAC, (lrs)<<G_TEXTURE_IMAGE_FRAC, (lrt)<<G_TEXTURE_IMAGE_FRAC) }
#define ERR_OSPISTARTDMA_RANGE 34
#define SP_PC_REG 0x04080000
#define CAUSE_CESHIFT 28
#define gDPSetCombine(pkt,muxs0,muxs1) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_SETCOMBINE, 24, 8) | _SHIFTL(muxs0, 0, 24); _g->words.w1 = (unsigned int)(muxs1); }
#define OS_MIN_STACKSIZE 72
#define SP_SET_RSPSIGNAL SP_SET_SIG3
#define G_RM_AA_XLU_SURF RM_AA_XLU_SURF(1)
#define OS_TASK_YIELDED 0x0001
#define CONFIG_IC_SHFT 9
#define SP_TEXSHIFT 0x00000080
#define CAUSE_IPSHIFT 8
#define gDPSetCombineLERP(pkt,a0,b0,c0,d0,Aa0,Ab0,Ac0,Ad0,a1,b1,c1,d1,Aa1,Ab1,Ac1,Ad1) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_SETCOMBINE, 24, 8) | _SHIFTL(GCCc0w0(G_CCMUX_ ##a0, G_CCMUX_ ##c0, G_ACMUX_ ##Aa0, G_ACMUX_ ##Ac0) | GCCc1w0(G_CCMUX_ ##a1, G_CCMUX_ ##c1), 0, 24); _g->words.w1 = (unsigned int)(GCCc0w1(G_CCMUX_ ##b0, G_CCMUX_ ##d0, G_ACMUX_ ##Ab0, G_ACMUX_ ##Ad0) | GCCc1w1(G_CCMUX_ ##b1, G_ACMUX_ ##Aa1, G_ACMUX_ ##Ac1, G_CCMUX_ ##d1, G_ACMUX_ ##Ab1, G_ACMUX_ ##Ad1)); }
#define VI_V_START_REG (VI_BASE_REG+0x28)
#define gsSP1Triangle(v0,v1,v2,flag) { _SHIFTL(G_TRI1, 24, 8), __gsSP1Triangle_w1f(v0, v1, v2, flag) }
#define gDPLoadTextureBlockYuv(pkt,timg,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, siz ##_LOAD_BLOCK, 1, timg); gDPSetTile(pkt, fmt, siz ##_LOAD_BLOCK, 0, 0, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT) -1, CALC_DXT(width, siz ##_BYTES)); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, siz, (((width) * 1)+7)>>3, 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define G_RM_AA_ZB_PCL_SURF RM_AA_ZB_PCL_SURF(1)
#define G_ZS_PIXEL (0 << G_MDSFT_ZSRCSEL)
#define G_CC_PRIMITIVE 0, 0, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE
#define G_MWO_POINT_XYSCREEN 0x18
#define G_MWO_MATRIX_XZ_XW_F 0x24
#define G_MWO_MATRIX_XZ_XW_I 0x04
#define OS_YIELD_AUDIO_SIZE 0x400
#define PI_DOM_PGS_OFS 0x08
#define gSPFogPosition(pkt,min,max) gMoveWd(pkt, G_MW_FOG, G_MWO_FOG, (_SHIFTL((128000/((max)-(min))),16,16) | _SHIFTL(((500-(min))*256/((max)-(min))),0,16)))
#define G_NOOP 0xc0
#define PI_DOM1_ADDR2 0x10000000
#define PI_DOM1_ADDR3 0x1FD00000
#define _gsDPLoadTextureBlock(timg,tmem,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, siz ##_LOAD_BLOCK, 1, timg), gsDPSetTile(fmt, siz ##_LOAD_BLOCK, 0, tmem, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadBlock(G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT)-1, CALC_DXT(width, siz ##_BYTES)), gsDPPipeSync(), gsDPSetTile(fmt, siz, ((((width) * siz ##_LINE_BYTES)+7)>>3), tmem, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC)
#define SP_CLR_SIG0 0x00200
#define SP_CLR_SIG1 0x00800
#define SP_CLR_SIG2 0x02000
#define SP_CLR_SIG3 0x08000
#define SP_CLR_SIG4 0x20000
#define SP_CLR_SIG5 0x80000
#define SP_CLR_SIG6 0x200000
#define SP_CLR_SIG7 0x800000
#define G_IM_SIZ_16b_INCR 0
#define ERR_OSCREATETHREAD_PRI 2
#define SCLEANEXCL 0x00001000
#define RMON_DBG_BUF_SIZE 2048
#define PI_DOM1_ADDR1 0x06000000
#define NUMLIGHTS_0 1
#define NUMLIGHTS_1 1
#define NUMLIGHTS_2 2
#define NUMLIGHTS_3 3
#define NUMLIGHTS_4 4
#define NUMLIGHTS_5 5
#define NUMLIGHTS_6 6
#define NUMLIGHTS_7 7
#define G_MW_PERSPNORM 0x0e
#define R_TRIG CONT_R
#define gsDPLoadTextureBlock(timg,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, siz ##_LOAD_BLOCK, 1, timg), gsDPSetTile(fmt, siz ##_LOAD_BLOCK, 0, 0, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadBlock(G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT)-1, CALC_DXT(width, siz ##_BYTES)), gsDPPipeSync(), gsDPSetTile(fmt, siz, ((((width) * siz ##_LINE_BYTES)+7)>>3), 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC)
#define G_RDP_TRI_TXTR_MASK 0x02
#define G_RM_AA_ZB_XLU_LINE RM_AA_ZB_XLU_LINE(1)
#define ERR_OSVISWAPBUFFER_VIMGR 48
#define gDPSetMaskImage(pkt,i) gDPSetDepthImage(pkt, i)
#define _G_CC_TWOCOLORTEX PRIMITIVE, SHADE, TEXEL0, SHADE, 0, 0, 0, SHADE
#define G_RM_VISCVG2 RM_VISCVG(2)
#define G_RM_AA_SUB_TERR2 RM_AA_SUB_TERR(2)
#define G_RM_AA_ZB_SUB_SURF2 RM_AA_ZB_SUB_SURF(2)
#define AI_MPAL_MIN_FREQ 3000
#define gDPSetAlphaCompare(pkt,type) gSPSetOtherMode(pkt, G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 2, type)
#define PFS_MAX_BANKS 62
#define K0SIZE 0x20000000
#define G_CC_HILITERGB PRIMITIVE, SHADE, TEXEL0, SHADE, 0, 0, 0, SHADE
#define RM_AA_ZB_PCL_SURF(clk) AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | G_AC_DITHER | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define KUBASE 0
#define OS_VI_NTSC_LAN1 2
#define C0_LLADDR 17
#define G_CCMUX_CENTER 6
#define G_RDP_ADDR_FIXUP 3
#define G_RM_AA_SUB_SURF2 RM_AA_SUB_SURF(2)
#define DPC_STATUS_REG (DPC_BASE_REG+0x0C)
#define G_TX_NOMIRROR 0
#define G_BZ_ORTHO 1
#define G_MWO_CLIP_RNY 0x0c
#define TXL2WORDS_4b(txls) MAX(1, ((txls)/16))
#define G_OFF (0)
#define ERR_OSVISETEVENT 46
#define G_BL_A_FOG 1
#define G_MDSFT_RGBDITHER 6
#define G_RDPLOADSYNC 0xe6
#define MI_INTR_MASK_CLR_AI 0x0010
#define PSTATEMASK 0x00C0
#define RDRAM_1_CONFIG 0x00400
#define OS_VI_MPAL_LAF1 31
#define OS_VI_MPAL_LAF2 35
#define G_CV_K0 175
#define AI_PAL_MAX_FREQ 376000
#define G_CV_K2 -89
#define G_CV_K3 222
#define G_CV_K4 114
#define G_CV_K5 42
#define G_AD_NOTPATTERN (1 << G_MDSFT_ALPHADITHER)
#define RM_AA_ZB_XLU_LINE(clk) AA_EN | Z_CMP | IM_RD | CVG_DST_CLAMP | CVG_X_ALPHA | ALPHA_CVG_SEL | FORCE_BL | ZMODE_XLU | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define G_MDSFT_CYCLETYPE 20
#define gsDPSetHilite2Tile(tile,hilite,width,height) gsDPSetTileSize(tile, (hilite)->h.x2 & 0xfff, (hilite)->h.y2 & 0xfff, ((((width)-1)*4)+(hilite)->h.x2) & 0xfff, ((((height)-1)*4)+(hilite)->h.y2) & 0xfff)
#define ERR_OSWRITEHOST_ADDR 72
#define __ULTRAERROR_H__ 
#define G_CC_MODULATEIA_PRIM TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0
#define SP_IBIST_REG 0x04080004
#define A_RATE 0x00
#define ERR_OSSPTASKLOAD_DRAM 57
#define G_CC_CHROMA_KEY2 TEXEL0, CENTER, SCALE, 0, 0, 0, 0, 0
#define _G_CC_BLENDPEDECALA ENVIRONMENT, PRIMITIVE, TEXEL0, PRIMITIVE, 0, 0, 0, TEXEL0
#define G_MOVEMEM 3
#define G_TEXTURE_IMAGE_FRAC 2
#define MI_INTR_MASK_CLR_DP 0x0400
#define gsSPClearGeometryMode(word) { _SHIFTL(G_CLEARGEOMETRYMODE, 24, 8), (unsigned int)(word) }
#define gDPWord(pkt,wordhi,wordlo) { Gfx *_g = (Gfx *)(pkt); gImmp1(pkt, G_RDPHALF_1, (unsigned int)(wordhi)); gImmp1(pkt, G_RDPHALF_2, (unsigned int)(wordlo)); }
#define SI_STATUS_DMA_BUSY 0x0001
#define SEGMENT_ADDR(num,off) (((num) << 24) + (off))
#define G_CC_DECALRGB 0, 0, 0, TEXEL0, 0, 0, 0, SHADE
#define DPC_CLR_PIPE_CTR 0x0080
#define VI_DRAM_ADDR_REG VI_ORIGIN_REG
#define G_CC_MODULATEI2 COMBINED, 0, SHADE, 0, 0, 0, 0, SHADE
#define ZMODE_INTER 0x400
#define CONT_UP 0x0800
#define C0_IMPSHIFT 8
#define RDRAM_END RDRAM_1_END
#define BOOT_ADDRESS_COSIM 0x80002000
#define RDRAM_0_END 0x001FFFFF
#define TLBLO_CACHSHIFT 3
#define PI_DOMAIN1_REG PI_BSD_DOM1_LAT_REG
#define gsSPLoadUcode(uc_start,uc_dstart) gsSPLoadUcodeEx((uc_start), (uc_dstart), SP_UCODE_DATA_SIZE)
#define G_IM_SIZ_32b 3
#define G_CCMUX_COMBINED_ALPHA 7
#define gsSPTextureL(s,t,level,xparam,tile,on) { (_SHIFTL(G_TEXTURE, 24, 8) | _SHIFTL(xparam, 16, 8) | _SHIFTL(level, 11, 3) | _SHIFTL(tile, 8, 3) | _SHIFTL(on, 0, 8)), (_SHIFTL(s, 16, 16) | _SHIFTL(t, 0, 16)) }
#define G_CC_MODULATERGBA2 G_CC_MODULATEIA2
#define gDPLoadMultiBlock_4b(pkt,timg,tmem,rtile,fmt,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, G_IM_SIZ_16b, 1, timg); gDPSetTile(pkt, fmt, G_IM_SIZ_16b, 0, tmem, G_TX_LOADTILE, 0, cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height)+3)>>2)-1, CALC_DXT_4b(width)); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, G_IM_SIZ_4b, ((((width)>>1)+7)>>3), tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, rtile, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define RM_AA_XLU_SURF(clk) AA_EN | IM_RD | CVG_DST_WRAP | CLR_ON_CVG | FORCE_BL | ZMODE_OPA | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define OS_YIELD_DATA_SIZE 0xc00
#define G_MWO_MATRIX_ZX_ZY_F 0x30
#define gsDPSetScissorFrac(mode,ulx,uly,lrx,lry) { _SHIFTL(G_SETSCISSOR, 24, 8) | _SHIFTL((int)((ulx)), 12, 12) | _SHIFTL((int)((uly)), 0, 12), _SHIFTL(mode, 24, 2) | _SHIFTL((int)(lrx), 12, 12) | _SHIFTL((int)(lry), 0, 12) }
#define G_MWO_MATRIX_ZX_ZY_I 0x10
#define gsDPSetTextureConvert(type) gsSPSetOtherMode(G_SETOTHERMODE_H, G_MDSFT_TEXTCONV, 3, type)
#define G_RM_TEX_EDGE RM_TEX_EDGE(1)
#define G_TX_NOMASK 0
#define G_RM_PCL_SURF2 RM_PCL_SURF(2)
#define OS_CYCLES_TO_USEC(c) (((u64)(c)*(1000000LL/15625LL))/(OS_CPU_COUNTER/15625LL))
#define OS_VI_BIT_POINTSAMPLE 0x0020
#define TLBLO_CACHMASK 0x38
#define G_RM_AA_ZB_TEX_INTER2 RM_AA_ZB_TEX_INTER(2)
#define RDRAM_REF_ROW_REG (RDRAM_BASE_REG+0x14)
#define RDRAM_1_DEVICE_ID 1
#define G_RM_RA_ZB_OPA_SURF2 RM_RA_ZB_OPA_SURF(2)
#define GU_BLINKRDP_EXTRACT 2
#define ERR_OSWRITEHOST_SIZE 73
#define OS_K0_TO_PHYSICAL(x) (u32)(((char *)(x)-0x80000000))
#define G_LOAD_UCODE (G_IMMFIRST-16)
#define OS_VI_MPAL_LAN1 30
#define OS_VI_MPAL_LAN2 34
#define ECC_VEC (K0BASE+0x100)
#define RDRAM_LENGTH (2*512*2048)
#define ERR_OSVIGETCURRENTMODE 36
#define G_CCMUX_PRIM_LOD_FRAC 14
#define gDPLoadTextureTile_4b(pkt,timg,fmt,width,height,uls,ult,lrs,lrt,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, G_IM_SIZ_8b, ((width)>>1), timg); gDPSetTile(pkt, fmt, G_IM_SIZ_8b, (((((lrs)-(uls)+1)>>1)+7)>>3), 0, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadTile( pkt, G_TX_LOADTILE, (uls)<<(G_TEXTURE_IMAGE_FRAC-1), (ult)<<(G_TEXTURE_IMAGE_FRAC), (lrs)<<(G_TEXTURE_IMAGE_FRAC-1), (lrt)<<(G_TEXTURE_IMAGE_FRAC)); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, G_IM_SIZ_4b, (((((lrs)-(uls)+1)>>1)+7)>>3), 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, G_TX_RENDERTILE, (uls)<<G_TEXTURE_IMAGE_FRAC, (ult)<<G_TEXTURE_IMAGE_FRAC, (lrs)<<G_TEXTURE_IMAGE_FRAC, (lrt)<<G_TEXTURE_IMAGE_FRAC) }
#define DEVICE_TYPE_64DD 2
#define ERR_OSPISTARTDMA_PRI 29
#define SR_IMASK 0x0000ff00
#define gsDPLoadTextureBlock_4bS(timg,fmt,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, G_IM_SIZ_16b, 1, timg), gsDPSetTile(fmt, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadBlock(G_TX_LOADTILE, 0, 0, (((width)*(height)+3)>>2)-1,0), gsDPPipeSync(), gsDPSetTile(fmt, G_IM_SIZ_4b, ((((width)>>1)+7)>>3), 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC)
#define AI_MPAL_MAX_FREQ 368000
#define VI_X_SCALE_REG (VI_BASE_REG+0x30)
#define gDPSetTextureLUT(pkt,type) gSPSetOtherMode(pkt, G_SETOTHERMODE_H, G_MDSFT_TEXTLUT, 2, type)
#define G_SETPRIMDEPTH 0xee
#define ERR_OSSETEVENTMESG 9
#define gDPPipelineMode(pkt,mode) gSPSetOtherMode(pkt, G_SETOTHERMODE_H, G_MDSFT_PIPELINE, 1, mode)
#define G_SETGEOMETRYMODE (G_IMMFIRST-8)
#define G_MW_MATRIX 0x00
#define G_BL_CLR_MEM 1
#define DCACHE_LINEMASK (DCACHE_LINESIZE-1)
#define G_RM_ZB_PCL_SURF RM_ZB_PCL_SURF(1)
#define RAMROM_SIZE (0x1000000)
#define OS_MESG_TYPE_VRETRACE (OS_MESG_TYPE_BASE+3)
#define WATCHLO_WTRAP 0x00000001
#define G_IM_SIZ_16b 2
#define C0_CACHE_ERR 27
#define TLBHI_VPN2SHIFT 13
#define _RAMROM_H 
#define RDRAM_ADDR_SELECT_REG (RDRAM_BASE_REG+0x20)
#define RAMROM_FONTDATA_SIZE 1152
#define gDPSetCycleType(pkt,type) gSPSetOtherMode(pkt, G_SETOTHERMODE_H, G_MDSFT_CYCLETYPE, 2, type)
#define AL_HEAP_INIT 0
#define SP_STATUS_SIG0 0x080
#define SP_STATUS_SIG1 0x100
#define SP_STATUS_SIG2 0x200
#define SP_STATUS_SIG3 0x400
#define SP_STATUS_SIG4 0x800
#define SP_STATUS_SIG5 0x1000
#define SP_STATUS_SIG7 0x4000
#define CONT_EEP16K 0x4000
#define gsSPBranchLessZrg(dl,vtx,zval,near,far,flag,zmin,zmax) { _SHIFTL(G_RDPHALF_1,24,8), (unsigned int)(dl), }, { _SHIFTL(G_BRANCH_Z,24,8)|_SHIFTL((vtx)*5,12,12)|_SHIFTL((vtx)*2,0,12), G_DEPTOZSrg(zval, near, far, flag, zmin, zmax), }
#define gsSPSegment(segment,base) gsMoveWd( G_MW_SEGMENT, (segment)*4, base)
#define gsDPSetTextureImage(f,s,w,i) gsSetImage(G_SETTIMG, f, s, w, i)
#define AI_STATUS_DMA_BUSY 0x40000000
#define PFS_ERR_NOPACK 1
#define gSPEndDisplayList(pkt) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_ENDDL, 24, 8); _g->words.w1 = 0; }
#define SP_UCODE_SIZE 4096
#define OS_IM_SW1 0x00000501
#define WATCHLO_ADDRMASK 0xfffffff8
#define SEGMENT_NUMBER(a) (((unsigned int)(a) << 4) >> 28)
#define GU_PARSEGBI_FLTMTX 4
#define AL_FRAME_INIT -1
#define RAMROM_BOOTADDR_OFFSET 0x8
#define osSpTaskStart(tp) { osSpTaskLoad((tp)); osSpTaskStartGo((tp)); }
#define G_TEXRECTFLIP 0xe5
#define gsSPLight(l,n) gsDma1p( G_MOVEMEM, l, sizeof(Light),((n)-1)*2+G_MV_L0)
#define NOTE_OFF_ERR_MASK 0x02
#define MI_INTR_MASK_CLR_PI 0x0100
#define RAMROM_MSG_HDR_SIZE (3*sizeof(long))
#define G_MV_MATRIX_1 0x9e
#define G_MV_MATRIX_3 0x9a
#define G_MV_MATRIX_4 0x9c
#define aSetVolume(pkt,f,v,t,r) { Acmd *_a = (Acmd *)pkt; _a->words.w0 = (_SHIFTL(A_SETVOL, 24, 8) | _SHIFTL(f, 16, 16) | _SHIFTL(v, 0, 16)); _a->words.w1 = _SHIFTL(t, 16, 16) | _SHIFTL(r, 0, 16); }
#define ERR_OSPISTARTDMA_SIZE 33
#define ERR_OSCREATEREGION_SIZE 51
#define G_TT_NONE (0 << G_MDSFT_TEXTLUT)
#define G_DEPTOZS(zval,near,far,flag) G_DEPTOZSrg(zval, near, far, flag, 0, G_MAXZ)
#define AL_DEFAULT_VOICE 0
#define AL_STOPPED 0
#define _UCODE_H_ 
#define RAND(x) (guRandom()%x)
#define ADPCMVSIZE 8
#define OS_VI_NTSC_LPF1 1
#define RDRAM_CONFIG_REG (RDRAM_BASE_REG+0x00)
#define MI_MODE_INIT 0x0080
#define G_CD_NOISE (2 << G_MDSFT_RGBDITHER)
#define IS_RDRAM(x) ((unsigned)(x) >= RDRAM_START && (unsigned)(x) < RDRAM_END)
#define ERR_ALHEAPCORRUPT 126
#define gSPTexture(pkt,s,t,level,tile,on) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_TEXTURE, 24, 8) | _SHIFTL(BOWTIE_VAL, 16, 8) | _SHIFTL(level, 11, 3) | _SHIFTL(tile, 8, 3) | _SHIFTL(on, 0, 8)); _g->words.w1 = (_SHIFTL(s, 16, 16) | _SHIFTL(t, 0, 16)); }
#define OS_VI_GAMMA_OFF 0x0002
#define CAUSE_SW1 0x00000100
#define CAUSE_SW2 0x00000200
#define MI_INTR_MASK_CLR_SP 0x0001
#define aMix(pkt,f,g,i,o) { Acmd *_a = (Acmd *)pkt; _a->words.w0 = (_SHIFTL(A_MIXER, 24, 8) | _SHIFTL(f, 16, 8) | _SHIFTL(g, 0, 16)); _a->words.w1 = _SHIFTL(i,16, 16) | _SHIFTL(o, 0, 16); }
#define NO_VOICE_ERR_MASK 0x04
#define PI_STATUS_CLR_INTR 0x02
#define VI_Y_SCALE_REG (VI_BASE_REG+0x34)
#define C_FILL 0x14
#define gDPSetPrimDepth(pkt,z,dz) gDPSetColor(pkt, G_SETPRIMDEPTH, _SHIFTL(z, 16, 16) | _SHIFTL(dz, 0, 16))
#define gsDPSetHilite1Tile(tile,hilite,width,height) gsDPSetTileSize(tile, (hilite)->h.x1 & 0xfff, (hilite)->h.y1 & 0xfff, ((((width)-1)*4)+(hilite)->h.x1) & 0xfff, ((((height)-1)*4)+(hilite)->h.y1) & 0xfff)
#define OS_IM_ALL 0x003fff01
#define OS_RG_ALIGN_16B 16
#define AL_CMIDI_CNTRL_LOOPEND 103
#define ERR_OSSETTIMER 76
#define AL_USEC_PER_FRAME 16000
#define CONT_ABSOLUTE 0x0001
#define G_MWO_bLIGHT_1 0x04
#define G_MWO_bLIGHT_3 0x44
#define G_MWO_bLIGHT_4 0x64
#define G_MWO_bLIGHT_6 0xa4
#define G_MWO_bLIGHT_8 0xe4
#define ERR_OSFREE_REGION 53
#define gsDPSetRenderMode(c0,c1) gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_RENDERMODE, 29, (c0) | (c1))
#define G_LINE3D (G_IMMFIRST-10)
#define gdSPDefLights6(ar,ag,ab,r1,g1,b1,x1,y1,z1,r2,g2,b2,x2,y2,z2,r3,g3,b3,x3,y3,z3,r4,g4,b4,x4,y4,z4,r5,g5,b5,x5,y5,z5,r6,g6,b6,x6,y6,z6) { {{ {ar,ag,ab},0,{ar,ag,ab},0}}, {{{ {r1,g1,b1},0,{r1,g1,b1},0,{x1,y1,z1},0}}, {{ {r2,g2,b2},0,{r2,g2,b2},0,{x2,y2,z2},0}}, {{ {r3,g3,b3},0,{r3,g3,b3},0,{x3,y3,z3},0}}, {{ {r4,g4,b4},0,{r4,g4,b4},0,{x4,y4,z4},0}}, {{ {r5,g5,b5},0,{r5,g5,b5},0,{x5,y5,z5},0}}, {{ {r6,g6,b6},0,{r6,g6,b6},0,{x6,y6,z6},0}}} }
#define gDPSetTileSize(pkt,t,uls,ult,lrs,lrt) gDPLoadTileGeneric(pkt, G_SETTILESIZE, t, uls, ult, lrs, lrt)
#define G_MWO_FOG 0x00
#define gsSP1Quadrangle(v0,v1,v2,v3,flag) { (_SHIFTL(G_TRI2, 24, 8)| __gsSP1Quadrangle_w1f(v0, v1, v2, v3, flag)), __gsSP1Quadrangle_w2f(v0, v1, v2, v3, flag) }
#define MI_INTR_MASK_CLR_VI 0x0040
#define UT_VEC K0BASE
#define gDPTextureRectangleFlip(pkt,xl,yl,xh,yh,tile,s,t,dsdx,dtdy) { Gfx *_g = (Gfx *)(pkt); if (pkt); _g->words.w0 = (_SHIFTL(G_TEXRECTFLIP, 24, 8) | _SHIFTL(xh, 12, 12) | _SHIFTL(yh, 0, 12)); _g->words.w1 = (_SHIFTL(tile, 24, 3) | _SHIFTL(xl, 12, 12) | _SHIFTL(yl, 0, 12)); _g ++; _g->words.w0 = (_SHIFTL(s, 16, 16) | _SHIFTL(t, 0, 16)); _g->words.w1 = (_SHIFTL(dsdx, 16, 16) | _SHIFTL(dtdy, 0, 16)); }
#define gsSPBranchList(dl) gsDma1p( G_DL,dl,0,G_DL_NOPUSH)
#define G_MW_SEGMENT 0x06
#define G_MDSFT_ZSRCSEL 2
#define PDIRTYEXCL 0x00C0
#define RM_CLD_SURF(clk) IM_RD | CVG_DST_SAVE | FORCE_BL | ZMODE_OPA | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define SI_STATUS_INTERRUPT 0x1000
#define OS_TASK_USR0 0x0010
#define LIGHT_1 1
#define LIGHT_2 2
#define LIGHT_3 3
#define LIGHT_4 4
#define LIGHT_6 6
#define LIGHT_7 7
#define G_MDSFT_TEXTDETAIL 17
#define MAX_BUFCOUNT 0x8000
#define __gsSP1Quadrangle_w2f(v0,v1,v2,v3,flag) (((flag) == 0) ? __gsSP1Triangle_w1(v0, v2, v3): ((flag) == 1) ? __gsSP1Triangle_w1(v1, v3, v0): ((flag) == 2) ? __gsSP1Triangle_w1(v2, v0, v1): __gsSP1Triangle_w1(v3, v1, v2))
#define gsDPSetTile(fmt,siz,line,tmem,tile,palette,cmt,maskt,shiftt,cms,masks,shifts) { (_SHIFTL(G_SETTILE, 24, 8) | _SHIFTL(fmt, 21, 3) | _SHIFTL(siz, 19, 2) | _SHIFTL(line, 9, 9) | _SHIFTL(tmem, 0, 9)), (_SHIFTL(tile, 24, 3) | _SHIFTL(palette, 20, 4) | _SHIFTL(cmt, 18, 2) | _SHIFTL(maskt, 14, 4) | _SHIFTL(shiftt, 10, 4) | _SHIFTL(cms, 8, 2) | _SHIFTL(masks, 4, 4) | _SHIFTL(shifts, 0, 4)) }
#define AL_CMIDI_CNTRL_LOOPSTART 102
#define PI_BSD_DOM1_PWD_REG (PI_BASE_REG+0x18)
#define gsDPLoadMultiBlockS(timg,tmem,rtile,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, siz ##_LOAD_BLOCK, 1, timg), gsDPSetTile(fmt, siz ##_LOAD_BLOCK, 0, tmem, G_TX_LOADTILE, 0 , cmt, maskt,shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadBlock(G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT)-1, 0 ), gsDPPipeSync(), gsDPSetTile(fmt, siz, ((((width) * siz ##_LINE_BYTES)+7)>>3), tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(rtile, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC)
#define GIO_CART_INTR_REG (GIO_BASE_REG+0x800)
#define G_RM_AA_ZB_OPA_DECAL2 RM_AA_ZB_OPA_DECAL(2)
#define gsDPLoadTextureTile_4b(timg,fmt,width,height,uls,ult,lrs,lrt,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, G_IM_SIZ_8b, ((width)>>1), timg), gsDPSetTile(fmt, G_IM_SIZ_8b, (((((lrs)-(uls)+1)>>1)+7)>>3), 0, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadTile( G_TX_LOADTILE, (uls)<<(G_TEXTURE_IMAGE_FRAC-1), (ult)<<(G_TEXTURE_IMAGE_FRAC), (lrs)<<(G_TEXTURE_IMAGE_FRAC-1), (lrt)<<(G_TEXTURE_IMAGE_FRAC)), gsDPPipeSync(), gsDPSetTile(fmt, G_IM_SIZ_4b, (((((lrs)-(uls)+1)>>1)+7)>>3), 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(G_TX_RENDERTILE, (uls)<<G_TEXTURE_IMAGE_FRAC, (ult)<<G_TEXTURE_IMAGE_FRAC, (lrs)<<G_TEXTURE_IMAGE_FRAC, (lrt)<<G_TEXTURE_IMAGE_FRAC)
#define RAMROM_BOOTSTRAP_OFFSET 0x40
#define LIGHT_5 5
#define G_RDP_TRI_ZBUFF_MASK 0x01
#define PI_STATUS_REG (PI_BASE_REG+0x10)
#define ICACHE_SIZE 0x4000
#define OS_VI_NTSC_LPN2 4
#define ERR_ALSEQNOTMIDI0 115
#define _gDPLoadTextureBlock(pkt,timg,tmem,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, siz ##_LOAD_BLOCK, 1, timg); gDPSetTile(pkt, fmt, siz ##_LOAD_BLOCK, 0, tmem, G_TX_LOADTILE, 0, cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT)-1, CALC_DXT(width, siz ##_BYTES)); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, siz, (((width) * siz ##_LINE_BYTES)+7)>>3, tmem, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define LIGHT_8 8
#define G_TF_AVERAGE (3 << G_MDSFT_TEXTFILT)
#define G_SPNOOP 0
#define G_MDSFT_PIPELINE 23
#define DPC_END_REG (DPC_BASE_REG+0x04)
#define gDPLoadTileGeneric(pkt,c,tile,uls,ult,lrs,lrt) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(c, 24, 8) | _SHIFTL(uls, 12, 12) | _SHIFTL(ult, 0, 12); _g->words.w1 = _SHIFTL(tile, 24, 3) | _SHIFTL(lrs, 12, 12) | _SHIFTL(lrt, 0, 12); }
#define G_SC_ODD_INTERLACE 3
#define GU_PARSEGBI_DUMPONLY 32
#define gSP1Triangle(pkt,v0,v1,v2,flag) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_TRI1, 24, 8); _g->words.w1 = __gsSP1Triangle_w1f(v0, v1, v2, flag); }
#define SP_IBIST_DONE 0x04
#define RDRAM_0_START 0x00000000
#define gSPNoOp(pkt) gDma0p(pkt, G_SPNOOP, 0, 0)
#define C0_CONFIG 16
#define gImmp1(pkt,c,p0) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL((c), 24, 8); _g->words.w1 = (unsigned int)(p0); }
#define gImmp2(pkt,c,p0,p1) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL((c), 24, 8); _g->words.w1 = _SHIFTL((p0), 16, 16) | _SHIFTL((p1), 8, 8); }
#define gImmp3(pkt,c,p0,p1,p2) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL((c), 24, 8); _g->words.w1 = (_SHIFTL((p0), 16, 16) | _SHIFTL((p1), 8, 8) | _SHIFTL((p2), 0, 8)); }
#define G_AC_NONE (0 << G_MDSFT_ALPHACOMPARE)
#define OS_VI_PAL_HAF1 25
#define OS_VI_MPAL_LPF1 29
#define OS_VI_MPAL_LPF2 33
#define G_CCMUX_SHADE 4
#define gDPSetTextureImage(pkt,f,s,w,i) gSetImage(pkt, G_SETTIMG, f, s, w, i)
#define BOWTIE_VAL 0
#define _gsDPLoadTextureBlockTile(timg,tmem,rtile,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, siz ##_LOAD_BLOCK, 1, timg), gsDPSetTile(fmt, siz ##_LOAD_BLOCK, 0, tmem, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadBlock(G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT)-1, CALC_DXT(width, siz ##_BYTES)), gsDPPipeSync(), gsDPSetTile(fmt, siz, ((((width) * siz ##_LINE_BYTES)+7)>>3), tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(rtile, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC)
#define G_RM_AA_ZB_OPA_INTER2 RM_AA_ZB_OPA_INTER(2)
#define SP_RD_LEN_REG (SP_BASE_REG+0x08)
#define CACHERR_SIDX_MASK 0x003ffff8
#define SADDRMASK 0xFFFFE000
#define AI_BITRATE_REG (AI_BASE_REG+0x14)
#define G_RDP_TRI_SHADE_MASK 0x04
#define OS_READ 0
#define WATCHHI_VALIDMASK 0x0000000f
#define SP_OVERLAP 0x00000040
#define ERR_OSCREATETHREAD_SP 1
#define RI_REFRESH_REG (RI_BASE_REG+0x10)
#define gsImmp1(c,p0) { _SHIFTL((c), 24, 8), (unsigned int)(p0) }
#define U_JPAD CONT_UP
#define SP_CLR_RSPSIGNAL SP_CLR_SIG3
#define gSPSetGeometryMode(pkt,word) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_SETGEOMETRYMODE, 24, 8); _g->words.w1 = (unsigned int)(word); }
#define SP_STATUS_DMA_FULL 0x008
#define DPC_STATUS_CBUF_READY 0x080
#define RM_OPA_SURF(clk) CVG_DST_CLAMP | FORCE_BL | ZMODE_OPA | GBL_c ##clk(G_BL_CLR_IN, G_BL_0, G_BL_CLR_IN, G_BL_1)
#define G_IM_SIZ_8b_SHIFT 1
#define EXC_DBE EXC_CODE(7)
#define G_CCMUX_TEXEL0 1
#define G_CCMUX_TEXEL1 2
#define A_INTERLEAVE 13
#define G_ACMUX_ENVIRONMENT 5
#define G_MWO_MATRIX_WZ_WW_F 0x3c
#define G_MWO_MATRIX_WZ_WW_I 0x1c
#define G_BL_A_MEM 1
#define G_CCMUX_LOD_FRACTION 13
#define RM_AA_ZB_SUB_TERR(clk) AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_FULL | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define Z_UPD 0x20
#define AL_CMIDI_LOOPEND_CODE 0x2D
#define G_TRI_TXTR_ZBUFF 0xcb
#define RDRAM_GLOBAL_CONFIG 0x80000
#define SI_DRAM_ADDR_REG (SI_BASE_REG+0x00)
#define U_CBUTTONS CONT_E
#define MI_INTR_AI 0x04
#define G_RM_XLU_SURF RM_XLU_SURF(1)
#define gSPScisTextureRectangle(pkt,xl,yl,xh,yh,tile,s,t,dsdx,dtdy) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_TEXRECT, 24, 8) | _SHIFTL(MAX((s16)(xh),0), 12, 12) | _SHIFTL(MAX((s16)(yh),0), 0, 12)); _g->words.w1 = (_SHIFTL((tile), 24, 3) | _SHIFTL(MAX((s16)(xl),0), 12, 12) | _SHIFTL(MAX((s16)(yl),0), 0, 12)); gImmp1(pkt, G_RDPHALF_1, (_SHIFTL(((s) - (((s16)(xl) < 0) ? (((s16)(dsdx) < 0) ? (MAX((((s16)(xl)*(s16)(dsdx))>>7),0)) : (MIN((((s16)(xl)*(s16)(dsdx))>>7),0))) : 0)), 16, 16) | _SHIFTL(((t) - (((yl) < 0) ? (((s16)(dtdy) < 0) ? (MAX((((s16)(yl)*(s16)(dtdy))>>7),0)) : (MIN((((s16)(yl)*(s16)(dtdy))>>7),0))) : 0)), 0, 16))); gImmp1(pkt, G_RDPHALF_2, (_SHIFTL((dsdx), 16, 16) | _SHIFTL((dtdy), 0, 16))); }
#define ICACHE_LINEMASK (ICACHE_LINESIZE-1)
#define gSPForceMatrix(pkt,mptr) { gDma1p(pkt, G_MOVEMEM, mptr, 16, G_MV_MATRIX_1); gDma1p(pkt, G_MOVEMEM, (char *)(mptr)+16, 16, G_MV_MATRIX_2); gDma1p(pkt, G_MOVEMEM, (char *)(mptr)+32, 16, G_MV_MATRIX_3); gDma1p(pkt, G_MOVEMEM, (char *)(mptr)+48, 16, G_MV_MATRIX_4); }
#define ERR_OSPISTARTDMA_DEVADDR 31
#define ERR_OSFREE_ADDR 54
#define G_CYC_2CYCLE (1 << G_MDSFT_CYCLETYPE)
#define SP_DRAM_STACK_SIZE8 (1024)
#define gsDPLoadTLUT(count,tmemaddr,dram) gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, dram), gsDPTileSync(), gsDPSetTile(0, 0, 0, tmemaddr, G_TX_LOADTILE, 0 , 0, 0, 0, 0, 0, 0), gsDPLoadSync(), gsDPLoadTLUTCmd(G_TX_LOADTILE, ((count)-1)), gsDPPipeSync()
#define C0_MAJREVMASK 0xf0
#define aEnvMixer(pkt,f,s) { Acmd *_a = (Acmd *)pkt; _a->words.w0 = _SHIFTL(A_ENVMIXER, 24, 8) | _SHIFTL(f, 16, 8); _a->words.w1 = (unsigned int)(s); }
#define GU_PARSERDP_DUMPONLY 32
#define OS_EVENT_SW2 1
#define OS_VI_PAL_HAN1 24
#define OS_VI_MPAL_LPN1 28
#define OS_VI_MPAL_LPN2 32
#define CACHERR_ED 0x20000000
#define G_SC_EVEN_INTERLACE 2
#define MI_INTR_DP 0x20
#define G_MWO_aLIGHT_1 0x00
#define gSPSetOtherMode(pkt,cmd,sft,len,data) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(cmd, 24, 8) | _SHIFTL(sft, 8, 8) | _SHIFTL(len, 0, 8)); _g->words.w1 = (unsigned int)(data); }
#define G_SETFILLCOLOR 0xf7
#define G_CC_BLENDI2 ENVIRONMENT, SHADE, COMBINED, SHADE, 0, 0, 0, SHADE
#define OS_IM_PRENMI 0x00001401
#define gsDPLoadMultiTile(timg,tmem,rtile,fmt,siz,width,height,uls,ult,lrs,lrt,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, siz, width, timg), gsDPSetTile(fmt, siz, (((((lrs)-(uls)+1) * siz ##_TILE_BYTES)+7)>>3), tmem, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadTile( G_TX_LOADTILE, (uls)<<G_TEXTURE_IMAGE_FRAC, (ult)<<G_TEXTURE_IMAGE_FRAC, (lrs)<<G_TEXTURE_IMAGE_FRAC, (lrt)<<G_TEXTURE_IMAGE_FRAC), gsDPPipeSync(), gsDPSetTile(fmt, siz, (((((lrs)-(uls)+1) * siz ##_LINE_BYTES)+7)>>3), tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(rtile, (uls)<<G_TEXTURE_IMAGE_FRAC, (ult)<<G_TEXTURE_IMAGE_FRAC, (lrs)<<G_TEXTURE_IMAGE_FRAC, (lrt)<<G_TEXTURE_IMAGE_FRAC)
#define G_CC_BLENDIA ENVIRONMENT, SHADE, TEXEL0, SHADE, TEXEL0, 0, SHADE, 0
#define G_CULL_FRONT 0x00001000
#define EEPROM_BLOCK_SIZE 8
#define OS_VI_BIT_PAL 0x0800
#define CALC_DXT_4b(width) (((1 << G_TX_DXT_FRAC) + TXL2WORDS_4b(width) - 1) / TXL2WORDS_4b(width))
#define RM_AA_TEX_EDGE(clk) AA_EN | IM_RD | CVG_DST_CLAMP | CVG_X_ALPHA | ALPHA_CVG_SEL | ZMODE_OPA | TEX_EDGE | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define PI_STATUS_DMA_BUSY 0x01
#define SP_IBIST_CHECK 0x01
#define C0_TAGHI 29
#define PFS_ERR_DEVICE 11
#define RM_ZB_XLU_SURF(clk) Z_CMP | IM_RD | CVG_DST_FULL | FORCE_BL | ZMODE_XLU | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define G_RM_AA_PCL_SURF RM_AA_PCL_SURF(1)
#define gSPSetLights0(pkt,name) { gSPNumLights(pkt,NUMLIGHTS_0); gSPLight(pkt,&name.l[0],1); gSPLight(pkt,&name.a,2); }
#define G_ACMUX_0 7
#define gsDPLoadMultiBlock(timg,tmem,rtile,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, siz ##_LOAD_BLOCK, 1, timg), gsDPSetTile(fmt, siz ##_LOAD_BLOCK, 0, tmem, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadBlock(G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT)-1, CALC_DXT(width, siz ##_BYTES)), gsDPPipeSync(), gsDPSetTile(fmt, siz, ((((width) * siz ##_LINE_BYTES)+7)>>3), tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(rtile, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC)
#define gSPSetLights1(pkt,name) { gSPNumLights(pkt,NUMLIGHTS_1); gSPLight(pkt,&name.l[0],1); gSPLight(pkt,&name.a,2); }
#define gsDPPipeSync() gsDPNoParam(G_RDPPIPESYNC)
#define G_CC_ADDRGB 1, 0, TEXEL0, SHADE, 0, 0, 0, SHADE
#define FILTER_WRAP 0
#define gSPClearGeometryMode(pkt,word) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_CLEARGEOMETRYMODE, 24, 8); _g->words.w1 = (unsigned int)(word); }
#define G_MW_CLIP 0x04
#define C_IINV 0x0
#define G_CYC_FILL (3 << G_MDSFT_CYCLETYPE)
#define SP_DMA_IMEM 0x1000
#define RI_MODE_REG (RI_BASE_REG+0x00)
#define CACH_PD 0x1
#define CACH_PI 0x0
#define gDPLoadTextureBlock(pkt,timg,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, siz ##_LOAD_BLOCK, 1, timg); gDPSetTile(pkt, fmt, siz ##_LOAD_BLOCK, 0, 0, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT) -1, CALC_DXT(width, siz ##_BYTES)); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, siz, (((width) * siz ##_LINE_BYTES)+7)>>3, 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define C0_BADVADDR 8
#define MI_BASE_REG 0x04300000
#define RM_AA_ZB_XLU_DECAL(clk) AA_EN | Z_CMP | IM_RD | CVG_DST_WRAP | CLR_ON_CVG | FORCE_BL | ZMODE_DEC | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define TLBHI_PIDSHIFT 0
#define G_SETKEYR 0xeb
#define SP_CLR_BROKE 0x00004
#define G_CULL_BOTH 0x00003000
#define CONFIG_BE 0x00008000
#define G_RM_AA_XLU_LINE RM_AA_XLU_LINE(1)
#define gsSPSetLights3(name) gsSPNumLights(NUMLIGHTS_3), gsSPLight(&name.l[0],1), gsSPLight(&name.l[1],2), gsSPLight(&name.l[2],3), gsSPLight(&name.a,4)
#define SR_IMASKSHIFT 8
#define RI_SELECT_REG (RI_BASE_REG+0x0C)
#define G_BL_CLR_FOG 3
#define CONFIG_CM 0x80000000
#define RM_RA_ZB_OPA_INTER(clk) AA_EN | Z_CMP | Z_UPD | CVG_DST_CLAMP | ALPHA_CVG_SEL | ZMODE_INTER | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define G_CC_BLENDPEDECALA PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, TEXEL0
#define CONFIG_CU 0x00000008
#define G_CYC_1CYCLE (0 << G_MDSFT_CYCLETYPE)
#define ERR_ALBNKFNEW 113
#define START_BUTTON CONT_START
#define RDRAM_0_BASE_ADDRESS (RDRAM_0_DEVICE_ID*RDRAM_LENGTH)
#define CACH_SD 0x3
#define ERR_ALSNDPPLAY 109
#define CACH_SI 0x2
#define G_RM_FOG_SHADE_A GBL_c1(G_BL_CLR_FOG, G_BL_A_SHADE, G_BL_CLR_IN, G_BL_1MA)
#define CONFIG_DB 0x00000010
#define CONFIG_DC 0x000001c0
#define G_CC_PASS2 0, 0, 0, COMBINED, 0, 0, 0, COMBINED
#define SI_PIF_ADDR_RD64B_REG (SI_BASE_REG+0x04)
#define OS_FLAG_FAULT 2
#define RM_ZB_XLU_DECAL(clk) Z_CMP | IM_RD | CVG_DST_FULL | FORCE_BL | ZMODE_DEC | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define gDPSetCombineKey(pkt,type) gSPSetOtherMode(pkt, G_SETOTHERMODE_H, G_MDSFT_COMBKEY, 1, type)
#define MI_INTR_MASK_VI 0x08
#define CONFIG_EB 0x00002000
#define CONFIG_EC 0x70000000
#define SP_STATUS_TASKDONE SP_STATUS_SIG2
#define ERR_OSPISTARTDMA_ADDR 32
#define G_CC_BLENDPE PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, SHADE, 0
#define CONFIG_EM 0x00004000
#define G_MWO_MATRIX_YX_YY_I 0x08
#define CONFIG_EP 0x0f000000
#define CONFIG_EW 0x000c0000
#define C0_IMPMASK 0xff00
#define DPRGBColor(pkt,cmd,r,g,b,a) gDPSetColor(pkt, cmd, (_SHIFTL(r, 24, 8) | _SHIFTL(g, 16, 8) | _SHIFTL(b, 8, 8) | _SHIFTL(a, 0, 8)))
#define AL_PLAYING 1
#define FPCSR_CO 0x00004000
#define OS_NUM_EVENTS 15
#define A_MAIN 0x00
#define G_CC_SHADEDECALA 0, 0, 0, SHADE, 0, 0, 0, TEXEL0
#define OS_LOG_VERSION 1
#define _gDPLoadTextureBlock_4b(pkt,timg,tmem,fmt,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, G_IM_SIZ_16b, 1, timg); gDPSetTile(pkt, fmt, G_IM_SIZ_16b, 0, tmem, G_TX_LOADTILE, 0, cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height)+3)>>2)-1, CALC_DXT_4b(width)); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, G_IM_SIZ_4b, ((((width)>>1)+7)>>3), tmem, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define G_IM_SIZ_4b_BYTES 0
#define gsDPLoadTile(t,uls,ult,lrs,lrt) gsDPLoadTileGeneric(G_LOADTILE, t, uls, ult, lrs, lrt)
#define G_IM_SIZ_8b_LINE_BYTES G_IM_SIZ_8b_BYTES
#define gDPSetFillColor(pkt,d) gDPSetColor(pkt, G_SETFILLCOLOR, (d))
#define _SIZE_T_DEF 
#define gDPLoadTextureBlock_4bS(pkt,timg,fmt,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, G_IM_SIZ_16b, 1, timg); gDPSetTile(pkt, fmt, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height)+3)>>2)-1, 0 ); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, G_IM_SIZ_4b, ((((width)>>1)+7)>>3), 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define gsSPDisplayList(dl) gsDma1p( G_DL,dl,0,G_DL_PUSH)
#define RDRAM_0_CONFIG 0x00000
#define PFS_ERR_ID_FATAL 10
#define EEPROM_TYPE_16K 0x02
#define gsSPSetLights0(name) gsSPNumLights(NUMLIGHTS_0), gsSPLight(&name.l[0],1), gsSPLight(&name.a,2)
#define alCSPGetProgram alCSPGetChlProgram
#define gDPParam(pkt,cmd,param) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(cmd, 24, 8); _g->words.w1 = (param); }
#define gsSPSetLights1(name) gsSPNumLights(NUMLIGHTS_1), gsSPLight(&name.l[0],1), gsSPLight(&name.a,2)
#define ERR_OSPIREADIO 26
#define G_FILLRECT 0xf6
#define FR_NEG_FRUSTRATIO_1 0x00000001
#define FR_NEG_FRUSTRATIO_2 0x00000002
#define FR_NEG_FRUSTRATIO_3 0x00000003
#define FR_NEG_FRUSTRATIO_4 0x00000004
#define FR_NEG_FRUSTRATIO_5 0x00000005
#define FR_NEG_FRUSTRATIO_6 0x00000006
#define GU_PARSEGBI_ROWMAJOR 1
#define RM_RA_OPA_SURF(clk) AA_EN | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define G_CC_HILITERGB2 ENVIRONMENT, COMBINED, TEXEL0, COMBINED, 0, 0, 0, SHADE
#define PI_STATUS_RESET 0x01
#define gDPNoParam(pkt,cmd) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(cmd, 24, 8); _g->words.w1 = 0; }
#define G_CC_HILITERGBA PRIMITIVE, SHADE, TEXEL0, SHADE, PRIMITIVE, SHADE, TEXEL0, SHADE
#define gsSPSetLights5(name) gsSPNumLights(NUMLIGHTS_5), gsSPLight(&name.l[0],1), gsSPLight(&name.l[1],2), gsSPLight(&name.l[2],3), gsSPLight(&name.l[3],4), gsSPLight(&name.l[4],5), gsSPLight(&name.a,6)
#define RI_WERROR_REG (RI_BASE_REG+0x1C)
#define ERR_ALEVENTNOFREE 124
#define CONFIG_IB 0x00000020
#define CONFIG_IC 0x00000e00
#define G_CD_ENABLE G_CD_NOISE
#define ERR_ALSEQP_OFF_VOICE 103
#define PI_BSD_DOM2_PGS_REG (PI_BASE_REG+0x2C)
#define G_BL_A_IN 0
#define G_DMACMDSIZ 128
#define _RMON_H_ 
#define DPC_START_REG (DPC_BASE_REG+0x00)
#define MI_INTR_PI 0x10
#define G_TC_CONV (0 << G_MDSFT_TEXTCONV)
#define gsDma0p(c,s,l) { _SHIFTL((c), 24, 8) | _SHIFTL((l), 0, 24), (unsigned int)(s) }
#define CONT_EEPROM 0x8000
#define OS_VI_NTSC_LPN1 0
#define gDPFillRectangle(pkt,ulx,uly,lrx,lry) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_FILLRECT, 24, 8) | _SHIFTL((lrx), 14, 10) | _SHIFTL((lry), 2, 10)); _g->words.w1 = (_SHIFTL((ulx), 14, 10) | _SHIFTL((uly), 2, 10));}
#define CONT_A 0x8000
#define C0_CONTEXT 4
#define CONT_C 0x0002
#define CONT_D 0x0004
#define CONT_E 0x0008
#define CONT_F 0x0001
#define CONT_G 0x2000
#define G_CC_HILITERGBDECALA PRIMITIVE, SHADE, TEXEL0, SHADE, 0, 0, 0, TEXEL0
#define CONT_L 0x0020
#define CONT_R 0x0010
#define gDPSetColorImage(pkt,f,s,w,i) gSetImage(pkt, G_SETCIMG, f, s, w, i)
#define gsSPTexture(s,t,level,tile,on) { (_SHIFTL(G_TEXTURE, 24, 8) | _SHIFTL(BOWTIE_VAL, 16, 8) | _SHIFTL(level, 11, 3) | _SHIFTL(tile, 8, 3) | _SHIFTL(on, 0, 8)), (_SHIFTL(s, 16, 16) | _SHIFTL(t, 0, 16)) }
#define gsDPSetCombineKey(type) gsSPSetOtherMode(G_SETOTHERMODE_H, G_MDSFT_COMBKEY, 1, type)
#define G_RM_RA_ZB_OPA_DECAL2 RM_RA_ZB_OPA_DECAL(2)
#define gsDma1p(c,s,l,p) { (_SHIFTL((c), 24, 8) | _SHIFTL((p), 16, 8) | _SHIFTL((l), 0, 16)), (unsigned int)(s) }
#define CONFIG_K0 0x00000007
#define RDRAM_RESET_MODE 0
#define G_TRI_FILL 0xc8
#define EXC_WMISS EXC_CODE(3)
#define FR_POS_FRUSTRATIO_1 0x0000ffff
#define FR_POS_FRUSTRATIO_2 0x0000fffe
#define FR_POS_FRUSTRATIO_3 0x0000fffd
#define FR_POS_FRUSTRATIO_4 0x0000fffc
#define FR_POS_FRUSTRATIO_5 0x0000fffb
#define FR_POS_FRUSTRATIO_6 0x0000fffa
#define gsDma2p(c,adrs,len,idx,ofs) { (_SHIFTL((c),24,8)|_SHIFTL((ofs)/8,16,8)| _SHIFTL(((len)-1)/8,8,8)|_SHIFTL((idx),0,8)), (unsigned int)(adrs) }
#define gsDPLoadTLUT_pal256(dram) gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, dram), gsDPTileSync(), gsDPSetTile(0, 0, 0, 256, G_TX_LOADTILE, 0 , 0, 0, 0, 0, 0, 0), gsDPLoadSync(), gsDPLoadTLUTCmd(G_TX_LOADTILE, 255), gsDPPipeSync()
#define AL_SUSTAIN 63
#define ERR_ALSEQTRACKHDR 118
#define G_ACMUX_PRIMITIVE 3
#define gsDPLoadBlock(tile,uls,ult,lrs,dxt) { (_SHIFTL(G_LOADBLOCK, 24, 8) | _SHIFTL(uls, 12, 12) | _SHIFTL(ult, 0, 12)), (_SHIFTL(tile, 24, 3) | _SHIFTL((MIN(lrs,G_TX_LDBLK_MAX_TXL)), 12, 12) | _SHIFTL(dxt, 0, 12)) }
#define MI_INTR_SI 0x02
#define SI_STATUS_REG (SI_BASE_REG+0x18)
#define G_TD_SHARPEN (1 << G_MDSFT_TEXTDETAIL)
#define MI_INTR_SP 0x01
#define DPS_TBIST_GO 0x02
#define G_CCMUX_SHADE_ALPHA 11
#define G_CC_MODULATERGBDECALA G_CC_MODULATEIDECALA
#define RAMROM_APP_WRITE_ADDR (RAMROM_MSG_ADDR + (1*RAMROM_BUF_SIZE))
#define gsDPSetBlendMask(mask) gsDPNoOp()
#define aResample(pkt,f,p,s) { Acmd *_a = (Acmd *)pkt; _a->words.w0 = (_SHIFTL(A_RESAMPLE, 24, 8) | _SHIFTL(f, 16, 8) | _SHIFTL(p, 0, 16)); _a->words.w1 = (unsigned int)(s); }
#define gDPSetKeyR(pkt,cR,sR,wR) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_SETKEYR, 24, 8); _g->words.w1 = (_SHIFTL(wR, 16, 12) | _SHIFTL(cR, 8, 8) | _SHIFTL(sR, 0, 8)); }
#define VI_V_CURRENT_LINE_REG VI_CURRENT_REG
#define G_CCMUX_1 6
#define gsSPSetLights2(name) gsSPNumLights(NUMLIGHTS_2), gsSPLight(&name.l[0],1), gsSPLight(&name.l[1],2), gsSPLight(&name.a,3)
#define gsSPSetLights4(name) gsSPNumLights(NUMLIGHTS_4), gsSPLight(&name.l[0],1), gsSPLight(&name.l[1],2), gsSPLight(&name.l[2],3), gsSPLight(&name.l[3],4), gsSPLight(&name.a,5)
#define G_CCMUX_TEXEL1_ALPHA 9
#define gsSPSetLights6(name) gsSPNumLights(NUMLIGHTS_6), gsSPLight(&name.l[0],1), gsSPLight(&name.l[1],2), gsSPLight(&name.l[2],3), gsSPLight(&name.l[3],4), gsSPLight(&name.l[4],5), gsSPLight(&name.l[5],6), gsSPLight(&name.a,7)
#define gsSPSetLights7(name) gsSPNumLights(NUMLIGHTS_7), gsSPLight(&name.l[0],1), gsSPLight(&name.l[1],2), gsSPLight(&name.l[2],3), gsSPLight(&name.l[3],4), gsSPLight(&name.l[4],5), gsSPLight(&name.l[5],6), gsSPLight(&name.l[6],7), gsSPLight(&name.a,8)
#define G_PM_NPRIMITIVE (0 << G_MDSFT_PIPELINE)
#define gsDPSetAlphaCompare(type) gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 2, type)
#define G_RM_AA_ZB_TEX_INTER RM_AA_ZB_TEX_INTER(1)
#define RDRAM_MODE_REG (RDRAM_BASE_REG+0x0c)
#define G_RM_AA_ZB_OPA_INTER RM_AA_ZB_OPA_INTER(1)
#define SP_SET_TASKDONE SP_SET_SIG2
#define AI_NTSC_MIN_FREQ 3000
#define gSetImage(pkt,cmd,fmt,siz,width,i) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(cmd, 24, 8) | _SHIFTL(fmt, 21, 3) | _SHIFTL(siz, 19, 2) | _SHIFTL((width)-1, 0, 12); _g->words.w1 = (unsigned int)(i); }
#define G_RM_AA_ZB_XLU_DECAL2 RM_AA_ZB_XLU_DECAL(2)
#define G_CC_MODULATERGBA_PRIM2 G_CC_MODULATEIA_PRIM2
#define OS_WRITE 1
#define RDRAM_1_BASE_ADDRESS (RDRAM_1_DEVICE_ID*RDRAM_LENGTH)
#define aADPCMdec(pkt,f,s) { Acmd *_a = (Acmd *)pkt; _a->words.w0 = _SHIFTL(A_ADPCM, 24, 8) | _SHIFTL(f, 16, 8); _a->words.w1 = (unsigned int)(s); }
#define gsDPFillRectangle(ulx,uly,lrx,lry) { (_SHIFTL(G_FILLRECT, 24, 8) | _SHIFTL((lrx), 14, 10) | _SHIFTL((lry), 2, 10)), (_SHIFTL((ulx), 14, 10) | _SHIFTL((uly), 2, 10)) }
#define MI_INTR_VI 0x08
#define OS_VI_NTSC_LAN2 6
#define OS_VI_PAL_HPF1 23
#define OS_VI_PAL_HPF2 27
#define ALFlagFailIf(condition,flag,error) if (condition) { return; }
#define G_IM_SIZ_16b_LINE_BYTES G_IM_SIZ_16b_BYTES
#define DPS_TBIST_CHECK 0x01
#define DPC_TMEM_REG (DPC_BASE_REG+0x1C)
#define gDPSetDepthSource(pkt,src) gSPSetOtherMode(pkt, G_SETOTHERMODE_L, G_MDSFT_ZSRCSEL, 1, src)
#define OS_USEC_TO_CYCLES(n) (((u64)(n)*(OS_CPU_COUNTER/15625LL))/(1000000LL/15625LL))
#define G_CLIPPING 0x00800000
#define CVG_X_ALPHA 0x1000
#define G_PM_1PRIMITIVE (1 << G_MDSFT_PIPELINE)
#define SP_DRAM_STACK_SIZE64 (SP_DRAM_STACK_SIZE8 >> 3)
#define G_CCMUX_ENVIRONMENT 5
#define G_RM_CLD_SURF RM_CLD_SURF(1)
#define A_VOL 0x04
#define CAUSE_BD 0x80000000
#define OS_LOG_MAGIC 0x20736a73
#define AL_CMIDI_CNTRL_LOOPCOUNT_SM 104
#define VI_LEAP_REG (VI_BASE_REG+0x20)
#define gsSPPerspNormalize(s) gsMoveWd( G_MW_PERSPNORM, 0, (s))
#define CONFIG_SB 0x00c00000
#define CONFIG_SC 0x00020000
#define gDPSetTextureLOD(pkt,type) gSPSetOtherMode(pkt, G_SETOTHERMODE_H, G_MDSFT_TEXTLOD, 1, type)
#define CONFIG_SM 0x00010000
#define G_RM_AA_ZB_XLU_INTER2 RM_AA_ZB_XLU_INTER(2)
#define CONFIG_SS 0x00200000
#define CONFIG_SW 0x00100000
#define GCCc0w0(saRGB0,mRGB0,saA0,mA0) (_SHIFTL((saRGB0), 20, 4) | _SHIFTL((mRGB0), 15, 5) | _SHIFTL((saA0), 12, 3) | _SHIFTL((mA0), 9, 3))
#define GCCc0w1(sbRGB0,aRGB0,sbA0,aA0) (_SHIFTL((sbRGB0), 28, 4) | _SHIFTL((aRGB0), 15, 3) | _SHIFTL((sbA0), 12, 3) | _SHIFTL((aA0), 9, 3))
#define ERR_OSAISETNEXTBUFFER_ENDADDR 132
#define ADPCMFSIZE 16
#define gImmp21(pkt,c,p0,p1,dat) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL((c), 24, 8) | _SHIFTL((p0), 8, 16) | _SHIFTL((p1), 0, 8)); _g->words.w1 = (unsigned int) (dat); }
#define RM_OPA_CI(clk) CVG_DST_CLAMP | ZMODE_OPA | GBL_c ##clk(G_BL_CLR_IN, G_BL_0, G_BL_CLR_IN, G_BL_1)
#define G_IM_SIZ_16b_SHIFT 0
#define PIF_ROM_END 0x1FC007BF
#define gsSPTextureRectangleFlip(xl,yl,xh,yh,tile,s,t,dsdx,dtdy) (_SHIFTL(G_TEXRECTFLIP, 24, 8) | _SHIFTL(xh, 12, 12) | _SHIFTL(yh, 0, 12)), (_SHIFTL(tile, 24, 3) | _SHIFTL(xl, 12, 12) | _SHIFTL(yl, 0, 12)), gsImmp1(G_RDPHALF_1, (_SHIFTL(s, 16, 16) | _SHIFTL(t, 0, 16))), gsImmp1(G_RDPHALF_2, (_SHIFTL(dsdx, 16, 16) | _SHIFTL(dtdy, 0, 16)))
#define OS_MESG_BLOCK 1
#define DL_SPRITE_OVERHEAD (24)
#define G_RM_AA_ZB_SUB_TERR RM_AA_ZB_SUB_TERR(1)
#define gsSPLightColor(n,col) gsMoveWd(G_MW_LIGHTCOL, G_MWO_a ##n, col), gsMoveWd(G_MW_LIGHTCOL, G_MWO_b ##n, col)
#define ERR_OSPIWRITEIO 27
#define RAMROM_FONTDATA_OFFSET 0xb70
#define ERR_OSAISETNEXTBUFFER_SIZE 16
#define PI_DRAM_ADDR_REG (PI_BASE_REG+0x00)
#define L_JPAD CONT_LEFT
#define SP_DMA_BUSY_REG (SP_BASE_REG+0x18)
#define G_RM_AA_ZB_SUB_TERR2 RM_AA_ZB_SUB_TERR(2)
#define ERR_OSPIRAWREADIO 19
#define GDMACMD(x) (x)
#define _SP_H_ 
#define G_CC_HILITERGBPASSA2 ENVIRONMENT, COMBINED, TEXEL0, COMBINED, 0, 0, 0, COMBINED
#define gsSPClipRatio(r) gsMoveWd(G_MW_CLIP, G_MWO_CLIP_RNX, FR_NEG_ ##r), gsMoveWd(G_MW_CLIP, G_MWO_CLIP_RNY, FR_NEG_ ##r), gsMoveWd(G_MW_CLIP, G_MWO_CLIP_RPX, FR_POS_ ##r), gsMoveWd(G_MW_CLIP, G_MWO_CLIP_RPY, FR_POS_ ##r)
#define OS_VI_PAL_HPN1 22
#define OS_VI_PAL_HPN2 26
#define OS_EVENT_FAULT 12
#define ERR_ALSEQP_NO_VOICE 101
#define G_MDSFT_COMBKEY 8
#define OS_LOG_MAX_ARGS 16
#define G_TEXTURE_ENABLE 0x00000002
#define GU_PARSE_MEM_BLOCK 4
#define gsDPSetTextureLOD(type) gsSPSetOtherMode(G_SETOTHERMODE_H, G_MDSFT_TEXTLOD, 1, type)
#define G_CULL_BACK 0x00002000
#define RDRAM_DEVICE_TYPE_REG (RDRAM_BASE_REG+0x00)
#define OS_MESG_NOBLOCK 0
#define gSPSprite2DDraw(pkt,px,py) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_SPRITE2D_DRAW, 24, 8)); _g->words.w1 = (_SHIFTL((px), 16, 16) | _SHIFTL((py), 0, 16)); }
#define gDPLoadTLUTCmd(pkt,tile,count) { Gfx *_g = (Gfx *)pkt; _g->words.w0 = _SHIFTL(G_LOADTLUT, 24, 8); _g->words.w1 = _SHIFTL((tile), 24, 3) | _SHIFTL((count), 14, 10);}
#define G_RM_ZB_OPA_SURF2 RM_ZB_OPA_SURF(2)
#define SIZE_EXCVEC 0x80
#define OS_FLAG_CPU_BREAK 1
#define GIMMCMD(x) (G_IMMFIRST-(x))
#define SP_DRAM_ADDR_REG (SP_BASE_REG+0x04)
#define G_CC_BLENDIDECALA ENVIRONMENT, SHADE, TEXEL0, SHADE, 0, 0, 0, TEXEL0
#define C_HSV 0x1c
#define G_RM_AA_ZB_SUB_SURF RM_AA_ZB_SUB_SURF(1)
#define RM_VISCVG(clk) IM_RD | FORCE_BL | GBL_c ##clk(G_BL_CLR_IN, G_BL_0, G_BL_CLR_BL, G_BL_A_MEM)
#define MAX_RATIO 1.99996
#define G_MWO_aLIGHT_2 0x20
#define G_MWO_aLIGHT_3 0x40
#define G_MWO_aLIGHT_4 0x60
#define G_MWO_aLIGHT_5 0x80
#define G_MWO_aLIGHT_6 0xa0
#define G_MWO_aLIGHT_7 0xc0
#define G_MWO_aLIGHT_8 0xe0
#define gSPSetLights2(pkt,name) { gSPNumLights(pkt,NUMLIGHTS_2); gSPLight(pkt,&name.l[0],1); gSPLight(pkt,&name.l[1],2); gSPLight(pkt,&name.a,3); }
#define gSPSetLights3(pkt,name) { gSPNumLights(pkt,NUMLIGHTS_3); gSPLight(pkt,&name.l[0],1); gSPLight(pkt,&name.l[1],2); gSPLight(pkt,&name.l[2],3); gSPLight(pkt,&name.a,4); }
#define gSPSetLights4(pkt,name) { gSPNumLights(pkt,NUMLIGHTS_4); gSPLight(pkt,&name.l[0],1); gSPLight(pkt,&name.l[1],2); gSPLight(pkt,&name.l[2],3); gSPLight(pkt,&name.l[3],4); gSPLight(pkt,&name.a,5); }
#define gSPSetLights5(pkt,name) { gSPNumLights(pkt,NUMLIGHTS_5); gSPLight(pkt,&name.l[0],1); gSPLight(pkt,&name.l[1],2); gSPLight(pkt,&name.l[2],3); gSPLight(pkt,&name.l[3],4); gSPLight(pkt,&name.l[4],5); gSPLight(pkt,&name.a,6); }
#define gSPSetLights6(pkt,name) { gSPNumLights(pkt,NUMLIGHTS_6); gSPLight(pkt,&name.l[0],1); gSPLight(pkt,&name.l[1],2); gSPLight(pkt,&name.l[2],3); gSPLight(pkt,&name.l[3],4); gSPLight(pkt,&name.l[4],5); gSPLight(pkt,&name.l[5],6); gSPLight(pkt,&name.a,7); }
#define gSPSetLights7(pkt,name) { gSPNumLights(pkt,NUMLIGHTS_7); gSPLight(pkt,&name.l[0],1); gSPLight(pkt,&name.l[1],2); gSPLight(pkt,&name.l[2],3); gSPLight(pkt,&name.l[3],4); gSPLight(pkt,&name.l[4],5); gSPLight(pkt,&name.l[5],6); gSPLight(pkt,&name.l[6],7); gSPLight(pkt,&name.a,8); }
#define CONFIG_UNCACHED 0x00000002
#define AI_NTSC_MAX_FREQ 368000
#define gsSPLine3D(v0,v1,flag) { _SHIFTL(G_LINE3D, 24, 8), __gsSPLine3D_w1f(v0, v1, 0, flag) }
#define gDPLoadTextureTile(pkt,timg,fmt,siz,width,height,uls,ult,lrs,lrt,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, siz, width, timg); gDPSetTile(pkt, fmt, siz, (((((lrs)-(uls)+1) * siz ##_TILE_BYTES)+7)>>3), 0, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadTile( pkt, G_TX_LOADTILE, (uls)<<G_TEXTURE_IMAGE_FRAC, (ult)<<G_TEXTURE_IMAGE_FRAC, (lrs)<<G_TEXTURE_IMAGE_FRAC, (lrt)<<G_TEXTURE_IMAGE_FRAC); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, siz, (((((lrs)-(uls)+1) * siz ##_LINE_BYTES)+7)>>3), 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, G_TX_RENDERTILE, (uls)<<G_TEXTURE_IMAGE_FRAC, (ult)<<G_TEXTURE_IMAGE_FRAC, (lrs)<<G_TEXTURE_IMAGE_FRAC, (lrt)<<G_TEXTURE_IMAGE_FRAC) }
#define MI_SET_INIT 0x0100
#define PINVALID 0x0000
#define gsSPLoadUcodeL(ucode) gsSPLoadUcode(OS_K0_TO_PHYSICAL(& ##ucode ##TextStart), OS_K0_TO_PHYSICAL(& ##ucode ##DataStart))
#define RM_ADD(clk) IM_RD | CVG_DST_SAVE | FORCE_BL | ZMODE_OPA | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_FOG, G_BL_CLR_MEM, G_BL_1)
#define SP_SET_YIELDED SP_SET_SIG1
#define _ABI_H_ 
#define SP_CLR_YIELDED SP_CLR_SIG1
#define G_CC_MODULATEI_PRIM2 COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE
#define G_MV_L0 0x86
#define G_MV_L1 0x88
#define G_MV_L2 0x8a
#define G_MV_L3 0x8c
#define G_MV_L4 0x8e
#define SR_KSU_SUP 0x00000008
#define G_MV_L6 0x92
#define G_MV_L7 0x94
#define gsSPVertex(v,n,v0) gsDma1p(G_VTX, v, ((n)<<10)|(sizeof(Vtx)*(n)-1), (v0)*2)
#define G_CD_BAYER (1 << G_MDSFT_RGBDITHER)
#define G_CD_MAGICSQ (0 << G_MDSFT_RGBDITHER)
#define ERR_OSPIRAWSTARTDMA_ADDR 23
#define G_CC_MODULATEIA_PRIM2 COMBINED, 0, PRIMITIVE, 0, COMBINED, 0, PRIMITIVE, 0
#define HOST_DBG_DATA_ACK 4
#define C_HWB 0x18
#define PROF_MIN_INTERVAL 50
#define G_MWO_SEGMENT_1 0x01
#define G_MWO_SEGMENT_2 0x02
#define G_MWO_SEGMENT_3 0x03
#define G_MWO_SEGMENT_5 0x05
#define G_LOD 0x00100000
#define G_MWO_SEGMENT_7 0x07
#define G_MWO_SEGMENT_8 0x08
#define G_MWO_SEGMENT_9 0x09
#define G_MWO_SEGMENT_A 0x0a
#define G_MWO_SEGMENT_B 0x0b
#define G_MWO_SEGMENT_C 0x0c
#define G_MWO_SEGMENT_D 0x0d
#define G_MWO_SEGMENT_E 0x0e
#define G_MWO_SEGMENT_F 0x0f
#define CACHERR_PIDX_SHIFT 12
#define SP_STATUS_SIG6 0x2000
#define gsDPSetTextureLUT(type) gsSPSetOtherMode(G_SETOTHERMODE_H, G_MDSFT_TEXTLUT, 2, type)
#define KUSIZE 0x80000000
#define G_MWO_MATRIX_XX_XY_F 0x20
#define ERR_OSPIRAWSTARTDMA_DIR 21
#define OS_PM_16K 0x0006000
#define OS_PM_16M 0x1ffe000
#define OS_TV_NTSC 1
#define gSPSprite2DScaleFlip(pkt,sx,sy,fx,fy) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_SPRITE2D_SCALEFLIP, 24, 8) | _SHIFTL((fx), 8, 8) | _SHIFTL((fy), 0, 8)); _g->words.w1 = (_SHIFTL((sx), 16, 16) | _SHIFTL((sy), 0, 16)); }
#define SP_CLR_INTR_BREAK 0x00080
#define DPS_TBIST_DONE 0x004
#define SP_STATUS_YIELD SP_STATUS_SIG0
#define OS_MESG_TYPE_EDMAWRITE (OS_MESG_TYPE_BASE+6)
#define DPC_STATUS_END_VALID 0x200
#define G_RESERVED0 2
#define G_RESERVED1 5
#define G_RESERVED2 7
#define MI_CLR_DP_INTR 0x0800
#define ERR_ALMODDELAYOVERFLOW 133
#define RM_RA_ZB_OPA_SURF(clk) AA_EN | Z_CMP | Z_UPD | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define G_TEXTURE_GEN_LINEAR 0x00080000
#define gsSPModifyVertex(vtx,where,val) { _SHIFTL(G_MODIFYVTX,24,8)| _SHIFTL((where),16,8)|_SHIFTL((vtx)*2,0,16), (unsigned int)(val) }
#define OS_VI_DITHER_FILTER_ON 0x0040
#define gSPLightColor(pkt,n,col) { gMoveWd(pkt, G_MW_LIGHTCOL, G_MWO_a ##n, col); gMoveWd(pkt, G_MW_LIGHTCOL, G_MWO_b ##n, col); }
#define DEVICE_TYPE_CART 0
#define __gsSPLine3D_w1(v0,v1,wd) (_SHIFTL((v0)*2,16,8)|_SHIFT((v1)*2,8,8)|_SHIFT((wd),0,8))
#define ERR_OSDPSETNEXTBUFFER_SIZE 18
#define EXC_TRAP EXC_CODE(13)
#define gSPBranchLessZ(pkt,dl,vtx,zval,near,far,flag) gSPBranchLessZrg(pkt, dl, vtx, zval, near, far, flag, 0, G_MAXZ)
#define DPC_PIPEBUSY_REG (DPC_BASE_REG+0x18)
#define RAMROM_CLOCKRATE_OFFSET 0x4
#define gsDPLoadMultiBlock_4bS(timg,tmem,rtile,fmt,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, G_IM_SIZ_16b, 1, timg), gsDPSetTile(fmt, G_IM_SIZ_16b, 0, tmem, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadBlock(G_TX_LOADTILE, 0, 0, (((width)*(height)+3)>>2)-1,0), gsDPPipeSync(), gsDPSetTile(fmt, G_IM_SIZ_4b, ((((width)>>1)+7)>>3), tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(rtile, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC)
#define G_TX_CLAMP 0x2
#define gsSPSprite2DBase(s) gsDma1p(G_SPRITE2D_BASE, s, sizeof(uSprite), 0)
#define RDRAM_STANDBY_MODE 2
#define CAUSE_IP3 0x00000400
#define CAUSE_IP4 0x00000800
#define CAUSE_IP5 0x00001000
#define CAUSE_IP6 0x00002000
#define CAUSE_IP7 0x00004000
#define CAUSE_IP8 0x00008000
#define PFS_WRITE 1
#define G_CC_MODULATERGBA_PRIM G_CC_MODULATEIA_PRIM
#define SR_IBIT1 0x00000100
#define SR_IBIT2 0x00000200
#define SR_IBIT3 0x00000400
#define SR_IBIT4 0x00000800
#define SR_IBIT5 0x00001000
#define SR_IBIT6 0x00002000
#define SR_IBIT7 0x00004000
#define SR_IBIT8 0x00008000
#define G_CC_MODULATEI_PRIM TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE
#define C0_RFE 0x10
#define GU_PARSERDP_PRAREA 2
#define ERR_ALSEQNOTMIDI 114
#define G_CC_ADDRGBDECALA 1, 0, TEXEL0, SHADE, 0, 0, 0, TEXEL0
#define G_RM_RA_ZB_OPA_SURF RM_RA_ZB_OPA_SURF(1)
#define AL_STOPPING 2
#define DPS_TBIST_FAILED 0x7F8
#define G_SETOTHERMODE_L (G_IMMFIRST-6)
#define RDRAM_0_DEVICE_ID 0
#define G_MDSFT_TEXTPERSP 19
#define TLBCTXT_BASEMASK 0xff800000
#define C0_ECC 26
#define gsSPCullDisplayList(vstart,vend) { _SHIFTL(G_CULLDL, 24, 8) | _SHIFTL((vstart)*2, 0, 16), _SHIFTL((vend)*2, 0, 16) }
#define K1_TO_PHYS(x) ((u32)(x)&0x1FFFFFFF)
#define gsDPLoadTextureBlock_4b(timg,fmt,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, G_IM_SIZ_16b, 1, timg), gsDPSetTile(fmt, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadBlock(G_TX_LOADTILE, 0, 0, (((width)*(height)+3)>>2)-1, CALC_DXT_4b(width)), gsDPPipeSync(), gsDPSetTile(fmt, G_IM_SIZ_4b, ((((width)>>1)+7)>>3), 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC)
#define A_INIT 0x01
#define RAMROM_USER_DATA_SIZE (RAMROM_MSG_SIZE-RAMROM_MSG_HDR_SIZE)
#define OS_STATE_WAITING 8
#define VI_STATUS_REG (VI_BASE_REG+0x00)
#define __gsSP1Quadrangle_w1f(v0,v1,v2,v3,flag) (((flag) == 0) ? __gsSP1Triangle_w1(v0, v1, v2): ((flag) == 1) ? __gsSP1Triangle_w1(v1, v2, v3): ((flag) == 2) ? __gsSP1Triangle_w1(v2, v3, v0): __gsSP1Triangle_w1(v3, v0, v1))
#define PFS_ERR_NEW_PACK 2
#define G_IM_FMT_I 4
#define gsDPNoParam(cmd) { _SHIFTL(cmd, 24, 8), 0 }
#define OS_LOG_FLOAT(x) (*(int *) &(x))
#define G_MV_L5 0x90
#define A_SEGMENT 7
#define G_RM_PCL_SURF RM_PCL_SURF(1)
#define G_ACMUX_LOD_FRACTION 0
#define gdSPDefLights0(ar,ag,ab) { {{ {ar,ag,ab},0,{ar,ag,ab},0}}, {{{ { 0, 0, 0},0,{ 0, 0, 0},0,{ 0, 0, 0},0}}} }
#define gdSPDefLights1(ar,ag,ab,r1,g1,b1,x1,y1,z1) { {{ {ar,ag,ab},0,{ar,ag,ab},0}}, {{{ {r1,g1,b1},0,{r1,g1,b1},0,{x1,y1,z1},0}}} }
#define gdSPDefLights2(ar,ag,ab,r1,g1,b1,x1,y1,z1,r2,g2,b2,x2,y2,z2) { {{ {ar,ag,ab},0,{ar,ag,ab},0}}, {{{ {r1,g1,b1},0,{r1,g1,b1},0,{x1,y1,z1},0}}, {{ {r2,g2,b2},0,{r2,g2,b2},0,{x2,y2,z2},0}}} }
#define gdSPDefLights3(ar,ag,ab,r1,g1,b1,x1,y1,z1,r2,g2,b2,x2,y2,z2,r3,g3,b3,x3,y3,z3) { {{ {ar,ag,ab},0,{ar,ag,ab},0}}, {{{ {r1,g1,b1},0,{r1,g1,b1},0,{x1,y1,z1},0}}, {{ {r2,g2,b2},0,{r2,g2,b2},0,{x2,y2,z2},0}}, {{ {r3,g3,b3},0,{r3,g3,b3},0,{x3,y3,z3},0}}} }
#define gdSPDefLights4(ar,ag,ab,r1,g1,b1,x1,y1,z1,r2,g2,b2,x2,y2,z2,r3,g3,b3,x3,y3,z3,r4,g4,b4,x4,y4,z4) { {{ {ar,ag,ab},0,{ar,ag,ab},0}}, {{{ {r1,g1,b1},0,{r1,g1,b1},0,{x1,y1,z1},0}}, {{ {r2,g2,b2},0,{r2,g2,b2},0,{x2,y2,z2},0}}, {{ {r3,g3,b3},0,{r3,g3,b3},0,{x3,y3,z3},0}}, {{ {r4,g4,b4},0,{r4,g4,b4},0,{x4,y4,z4},0}}} }
#define gdSPDefLights5(ar,ag,ab,r1,g1,b1,x1,y1,z1,r2,g2,b2,x2,y2,z2,r3,g3,b3,x3,y3,z3,r4,g4,b4,x4,y4,z4,r5,g5,b5,x5,y5,z5) { {{ {ar,ag,ab},0,{ar,ag,ab},0}}, {{{ {r1,g1,b1},0,{r1,g1,b1},0,{x1,y1,z1},0}}, {{ {r2,g2,b2},0,{r2,g2,b2},0,{x2,y2,z2},0}}, {{ {r3,g3,b3},0,{r3,g3,b3},0,{x3,y3,z3},0}}, {{ {r4,g4,b4},0,{r4,g4,b4},0,{x4,y4,z4},0}}, {{ {r5,g5,b5},0,{r5,g5,b5},0,{x5,y5,z5},0}}} }
#define G_AD_PATTERN (0 << G_MDSFT_ALPHADITHER)
#define gdSPDefLights7(ar,ag,ab,r1,g1,b1,x1,y1,z1,r2,g2,b2,x2,y2,z2,r3,g3,b3,x3,y3,z3,r4,g4,b4,x4,y4,z4,r5,g5,b5,x5,y5,z5,r6,g6,b6,x6,y6,z6,r7,g7,b7,x7,y7,z7) { {{ {ar,ag,ab},0,{ar,ag,ab},0}}, {{{ {r1,g1,b1},0,{r1,g1,b1},0,{x1,y1,z1},0}}, {{ {r2,g2,b2},0,{r2,g2,b2},0,{x2,y2,z2},0}}, {{ {r3,g3,b3},0,{r3,g3,b3},0,{x3,y3,z3},0}}, {{ {r4,g4,b4},0,{r4,g4,b4},0,{x4,y4,z4},0}}, {{ {r5,g5,b5},0,{r5,g5,b5},0,{x5,y5,z5},0}}, {{ {r6,g6,b6},0,{r6,g6,b6},0,{x6,y6,z6},0}}, {{ {r7,g7,b7},0,{r7,g7,b7},0,{x7,y7,z7},0}}} }
#define OS_TASK_USR1 0x0020
#define OS_TASK_USR2 0x0040
#define OS_TASK_USR3 0x0080
#define gDPSetColor(pkt,c,d) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(c, 24, 8); _g->words.w1 = (unsigned int)(d); }
#define G_IM_SIZ_8b_INCR 1
#define G_TT_IA16 (3 << G_MDSFT_TEXTLUT)
#define PI_BASE_REG 0x04600000
#define gSPLoadUcodeL(pkt,ucode) gSPLoadUcode((pkt), OS_K0_TO_PHYSICAL(& ##ucode ##TextStart), OS_K0_TO_PHYSICAL(& ##ucode ##DataStart))
#define C_HWBINV 0x14
#define R_JPAD CONT_RIGHT
#define G_BL_A_SHADE 2
#define G_SETFOGCOLOR 0xf8
#define GAME_DBG_DATA_SEND 3
#define gSPLookAtX(pkt,l) gDma1p(pkt, G_MOVEMEM, l, sizeof(Light),G_MV_LOOKATX)
#define gSPLookAtY(pkt,l) gDma1p(pkt, G_MOVEMEM, l, sizeof(Light),G_MV_LOOKATY)
#define alSeqpGetProgram alSeqpGetChlProgram
#define DPS_TEST_MODE_REG (DPS_BASE_REG+0x04)
#define gsDPWord(wordhi,wordlo) gsImmp1(G_RDPHALF_1, (unsigned int)(wordhi)), gsImmp1(G_RDPHALF_2, (unsigned int)(wordlo))
#define gDPScisFillRectangle(pkt,ulx,uly,lrx,lry) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_FILLRECT, 24, 8) | _SHIFTL(MAX((lrx),0), 14, 10) | _SHIFTL(MAX((lry),0), 2, 10)); _g->words.w1 = (_SHIFTL(MAX((ulx),0), 14, 10) | _SHIFTL(MAX((uly),0), 2, 10)); }
#define ERR_OSPIRAWSTARTDMA_SIZE 24
#define G_TF_BILERP (2 << G_MDSFT_TEXTFILT)
#define G_MWO_MATRIX_XX_XY_I 0x00
#define G_MW_POINTS 0x0c
#define gsDPSetMaskImage(i) gsDPSetDepthImage(i)
#define G_DL_PUSH 0x00
#define gsDPLoadSync() gsDPNoParam(G_RDPLOADSYNC)
#define gsDPSetColorImage(f,s,w,i) gsSetImage(G_SETCIMG, f, s, w, i)
#define TLBLO_EXLWR 0x28
#define PI_CART_ADDR_REG (PI_BASE_REG+0x04)
#define VI_H_SYNC_LEAP_REG VI_LEAP_REG
#define SI_PIF_ADDR_WR64B_REG (SI_BASE_REG+0x10)
#define RM_ZB_PCL_SURF(clk) Z_CMP | Z_UPD | CVG_DST_FULL | ZMODE_OPA | G_AC_DITHER | GBL_c ##clk(G_BL_CLR_IN, G_BL_0, G_BL_CLR_IN, G_BL_1)
#define G_RM_AA_OPA_SURF2 RM_AA_OPA_SURF(2)
#define AL_FX_FLANGE 4
#define A_OUT 0x02
#define _SHIFTR(v,s,w) ((unsigned int)(((unsigned int)(v) >> (s)) & ((0x01 << (w)) - 1)))
#define ERR_OSPROFILEINIT_CNT 62
#define C0_ENTRYHI 10
#define TLBLO_NONCOHRNT 0x18
#define OS_PRIORITY_APPMAX 127
#define PFS_FILE_NAME_LEN 16
#define gDPLoadBlock(pkt,tile,uls,ult,lrs,dxt) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_LOADBLOCK, 24, 8) | _SHIFTL(uls, 12, 12) | _SHIFTL(ult, 0, 12)); _g->words.w1 = (_SHIFTL(tile, 24, 3) | _SHIFTL((MIN(lrs,G_TX_LDBLK_MAX_TXL)), 12, 12) | _SHIFTL(dxt, 0, 12)); }
#define G_TRI_TXTR 0xca
#define SP_STATUS_IO_FULL 0x010
#define G_SPRITE2D_SCALEFLIP (G_IMMFIRST-1)
#define G_BL_CLR_IN 0
#define RM_ZB_CLD_SURF(clk) Z_CMP | IM_RD | CVG_DST_SAVE | FORCE_BL | ZMODE_XLU | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define ERR_ALSNDPSETPAR 112
#define _RCP_H_ 
#define G_MTX 1
#define gSPFogFactor(pkt,fm,fo) gMoveWd(pkt, G_MW_FOG, G_MWO_FOG, (_SHIFTL(fm,16,16) | _SHIFTL(fo,0,16)))
#define RM_TEX_EDGE(clk) CVG_DST_CLAMP | CVG_X_ALPHA | ALPHA_CVG_SEL | FORCE_BL | ZMODE_OPA | TEX_EDGE | AA_EN | GBL_c ##clk(G_BL_CLR_IN, G_BL_0, G_BL_CLR_IN, G_BL_1)
#define gDPLoadTextureBlock_4b(pkt,timg,fmt,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, G_IM_SIZ_16b, 1, timg); gDPSetTile(pkt, fmt, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height)+3)>>2)-1, CALC_DXT_4b(width)); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, G_IM_SIZ_4b, ((((width)>>1)+7)>>3), 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define HOST_APP_CMD_READY 9
#define OS_PRIORITY_VIMGR 254
#define G_SETCIMG 0xff
#define OS_PRIORITY_RMONSPIN 200
#define G_RDPHALF_1 (G_IMMFIRST-11)
#define G_RDPHALF_2 (G_IMMFIRST-12)
#define G_CC_REFLECTRGBDECALA ENVIRONMENT, 0, TEXEL0, SHADE, 0, 0, 0, TEXEL0
#define C0_PROBE 0x8
#define BUF_FREE_WO_NEXT 0x8000
#define EXC_BREAK EXC_CODE(9)
#define OS_PIM_STACKSIZE 4096
#define TLBRAND_RANDMASK 0x3f
#define alSeqpSetProgram alSeqpSetChlProgram
#define OS_VI_BIT_DEFLICKINTERLACE 0x0008
#define IO_WRITE(addr,data) (*(vu32 *)PHYS_TO_K1(addr)=(u32)(data))
#define CAUSE_IPMASK 0x0000FF00
#define G_RM_AA_ZB_TEX_TERR RM_AA_ZB_TEX_TERR(1)
#define _SHIFT _SHIFTL
#define M_DTOR (3.14159265358979323846/180.0)
#define SP_CLR_TASKDONE SP_CLR_SIG2
#define G_CCMUX_SCALE 6
#define NULL 0
#define OS_VI_BIT_LORES 0x0100
#define ERR_OSSETTLBASID 13
#define AL_PHASE_SUSTAIN 2
#define gImmp0(pkt,c) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL((c), 24, 8); }
#define OS_IM_SW2 0x00000601
#define ERR_OSAISETNEXTBUFFER_ADDR 15
#define GU_PARSE_READY 3
#define OS_NSEC_TO_CYCLES(n) (((u64)(n)*(OS_CPU_COUNTER/15625000LL))/(1000000000LL/15625000LL))
#define AL_MAX_CHANNELS 16
#define DPS_BASE_REG 0x04200000
#define PI_DOM_LAT_OFS 0x00
#define gsDPNoOp() gsDPNoParam(G_NOOP)
#define C0_MINREVMASK 0xf
#define GU_PARSEGBI_ALLMTX 16
#define GPACK_ZDZ(z,dz) ((z) << 2 | (dz))
#define aDMEMMove(pkt,i,o,c) { Acmd *_a = (Acmd *)pkt; _a->words.w0 = _SHIFTL(A_DMEMMOVE, 24, 8) | _SHIFTL(i, 0, 24); _a->words.w1 = _SHIFTL(o, 16, 16) | _SHIFTL(c, 0, 16); }
#define BOOT_ADDRESS_INDY 0x88100000
#define C0_EPC 14
#define gDPSetFogColor(pkt,r,g,b,a) DPRGBColor(pkt, G_SETFOGCOLOR, r,g,b,a)
#define G_RM_NOOP2 RM_NOOP(2)
#define gDPSetDepthImage(pkt,i) gSetImage(pkt, G_SETZIMG, 0, 0, 1, i)
#define CONT_RELATIVE 0x0002
#define PIF_ROM_START 0x1FC00000
#define ERR_OSVISWAPBUFFER_ADDR 47
#define gDPLoadTLUT_pal16(pkt,pal,dram) { gDPSetTextureImage(pkt, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, dram); gDPTileSync(pkt); gDPSetTile(pkt, 0, 0, 0, (256+(((pal)&0xf)*16)), G_TX_LOADTILE, 0 , 0, 0, 0, 0, 0, 0); gDPLoadSync(pkt); gDPLoadTLUTCmd(pkt, G_TX_LOADTILE, 15); gDPPipeSync(pkt) }
#define AI_CONTROL_DMA_OFF 0x00
#define SR_KSU_USR 0x00000010
#define SP_SET_CPUSIGNAL SP_SET_SIG4
#define RP(x) rp->r_ ##x
#define UNITY_PITCH 0x8000
#define G_RM_AA_ZB_DEC_LINE2 RM_AA_ZB_DEC_LINE(2)
#define NUM_DL(nb) ((nb)*DL_BM_OVERHEAD +DL_SPRITE_OVERHEAD)
#define OS_VI_BIT_16PIXEL 0x0040
#define gsSPFogPosition(min,max) gsMoveWd(G_MW_FOG, G_MWO_FOG, (_SHIFTL((128000/((max)-(min))),16,16) | _SHIFTL(((500-(min))*256/((max)-(min))),0,16)))
#define G_RM_AA_ZB_TEX_EDGE2 RM_AA_ZB_TEX_EDGE(2)
#define MakeTexRect(xh,yh,flip,tile,xl,yl,s,t,dsdx,dtdy) G_TEXRECT, xh, yh, 0, flip, 0, tile, xl, yl, s, t, dsdx, dtdy
#define ERR_ALSEQP_POLY_VOICE 104
#define C0_REVMASK 0xff
#define SP_DMA_DMEM 0x0000
#define G_IM_SIZ_4b_LINE_BYTES G_IM_SIZ_4b_BYTES
#define gsDPLoadMultiTile_4b(timg,tmem,rtile,fmt,width,height,uls,ult,lrs,lrt,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, G_IM_SIZ_8b, ((width)>>1), timg), gsDPSetTile(fmt, G_IM_SIZ_8b, (((((lrs)-(uls)+1)>>1)+7)>>3), tmem, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadTile( G_TX_LOADTILE, (uls)<<(G_TEXTURE_IMAGE_FRAC-1), (ult)<<(G_TEXTURE_IMAGE_FRAC), (lrs)<<(G_TEXTURE_IMAGE_FRAC-1), (lrt)<<(G_TEXTURE_IMAGE_FRAC)), gsDPPipeSync(), gsDPSetTile(fmt, G_IM_SIZ_4b, (((((lrs)-(uls)+1)>>1)+7)>>3), tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(rtile, (uls)<<G_TEXTURE_IMAGE_FRAC, (ult)<<G_TEXTURE_IMAGE_FRAC, (lrs)<<G_TEXTURE_IMAGE_FRAC, (lrt)<<G_TEXTURE_IMAGE_FRAC)
#define PFS_CORRUPTED 0x2
#define G_RM_AA_DEC_LINE2 RM_AA_DEC_LINE(2)
#define gsImmp0(c) { _SHIFTL((c), 24, 8) }
#define RM_NOOP(clk) GBL_c ##clk(0, 0, 0, 0)
#define gsImmp2(c,p0,p1) { _SHIFTL((c), 24, 8), _SHIFTL((p0), 16, 16) | _SHIFTL((p1), 8, 8)}
#define gsImmp3(c,p0,p1,p2) { _SHIFTL((c), 24, 8), (_SHIFTL((p0), 16, 16) | _SHIFTL((p1), 8, 8) | _SHIFTL((p2), 0, 8))}
#define AI_CONTROL_REG (AI_BASE_REG+0x08)
#define RM_AA_ZB_TEX_TERR(clk) AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | CVG_X_ALPHA | ALPHA_CVG_SEL | ZMODE_OPA | TEX_EDGE | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define gDPLoadTextureBlockS(pkt,timg,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, siz ##_LOAD_BLOCK, 1, timg); gDPSetTile(pkt, fmt, siz ##_LOAD_BLOCK, 0, 0, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT)-1,0); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, siz, (((width) * siz ##_LINE_BYTES)+7)>>3, 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define SP_IBIST_GO 0x02
#define G_RM_AA_TEX_EDGE2 RM_AA_TEX_EDGE(2)
#define BLOCKSIZE 32
#define ALIGNOFFST (ALIGNSZ-1)
#define G_RM_ZB_CLD_SURF RM_ZB_CLD_SURF(1)
#define G_CD_DISABLE (3 << G_MDSFT_RGBDITHER)
#define OS_OTHERS 2
#define gDPSetScissorFrac(pkt,mode,ulx,uly,lrx,lry) { Gfx *_g = (Gfx *)pkt; _g->words.w0 = _SHIFTL(G_SETSCISSOR, 24, 8) | _SHIFTL((int)((ulx)), 12, 12) | _SHIFTL((int)((uly)), 0, 12); _g->words.w1 = _SHIFTL(mode, 24, 2) | _SHIFTL((int)((lrx)), 12, 12) | _SHIFTL((int)((lry)), 0, 12); }
#define SP_STATUS_SSTEP 0x020
#define OS_RG_ALIGN_2B 2
#define OS_MESG_PRI_NORMAL 0
#define A_POLEF 14
#define gDPLoadMultiTile_4b(pkt,timg,tmem,rtile,fmt,width,height,uls,ult,lrs,lrt,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, G_IM_SIZ_8b, ((width)>>1), timg); gDPSetTile(pkt, fmt, G_IM_SIZ_8b, (((((lrs)-(uls)+1)>>1)+7)>>3), tmem, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadTile( pkt, G_TX_LOADTILE, (uls)<<(G_TEXTURE_IMAGE_FRAC-1), (ult)<<(G_TEXTURE_IMAGE_FRAC), (lrs)<<(G_TEXTURE_IMAGE_FRAC-1), (lrt)<<(G_TEXTURE_IMAGE_FRAC)); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, G_IM_SIZ_4b, (((((lrs)-(uls)+1)>>1)+7)>>3), tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, rtile, (uls)<<G_TEXTURE_IMAGE_FRAC, (ult)<<G_TEXTURE_IMAGE_FRAC, (lrs)<<G_TEXTURE_IMAGE_FRAC, (lrt)<<G_TEXTURE_IMAGE_FRAC) }
#define SP_CUTOUT 0x00000002
#define VI_CONTROL_REG VI_STATUS_REG
#define gsDPPipelineMode(mode) gsSPSetOtherMode(G_SETOTHERMODE_H, G_MDSFT_PIPELINE, 1, mode)
#define gSPTextureRectangleFlip(pkt,xl,yl,xh,yh,tile,s,t,dsdx,dtdy) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_TEXRECTFLIP, 24, 8) | _SHIFTL(xh, 12, 12) | _SHIFTL(yh, 0, 12)); _g->words.w1 = (_SHIFTL(tile, 24, 3) | _SHIFTL(xl, 12, 12) | _SHIFTL(yl, 0, 12)); gImmp1(pkt, G_RDPHALF_1, (_SHIFTL(s, 16, 16) | _SHIFTL(t, 0, 16))); gImmp1(pkt, G_RDPHALF_2, (_SHIFTL(dsdx, 16, 16) | _SHIFTL(dtdy, 0, 16))); }
#define gSPClipRatio(pkt,r) { gMoveWd(pkt, G_MW_CLIP, G_MWO_CLIP_RNX, FR_NEG_ ##r); gMoveWd(pkt, G_MW_CLIP, G_MWO_CLIP_RNY, FR_NEG_ ##r); gMoveWd(pkt, G_MW_CLIP, G_MWO_CLIP_RPX, FR_POS_ ##r); gMoveWd(pkt, G_MW_CLIP, G_MWO_CLIP_RPY, FR_POS_ ##r); }
#define gsDPSetDepthImage(i) gsSetImage(G_SETZIMG, 0, 0, 1, i)
#define IS_KPTESEG(x) ((u32)(x) >= KPTE_SHDUBASE)
#define OS_RG_ALIGN_4B 4
#define gDPTileSync(pkt) gDPNoParam(pkt, G_RDPTILESYNC)
#define gsDPSetTexturePersp(type) gsSPSetOtherMode(G_SETOTHERMODE_H, G_MDSFT_TEXTPERSP, 1, type)
#define OS_STATE_STOPPED 1
#define ERR_OSPROFILESTOP_TIMER 69
#define MI_INTR_REG (MI_BASE_REG+0x08)
#define gsDPSetCycleType(type) gsSPSetOtherMode(G_SETOTHERMODE_H, G_MDSFT_CYCLETYPE, 2, type)
#define G_LOADTILE 0xf4
#define DPC_CLR_FREEZE 0x0004
#define gsDPSetColorDither(mode) gsSPSetOtherMode(G_SETOTHERMODE_H, G_MDSFT_RGBDITHER, 2, mode)
#define CONT_NO_RESPONSE_ERROR 0x8
#define ERR_ALSEQMETA 120
#define PCLEANEXCL 0x0080
#define TLBPGMASK_4K 0x0
#define G_CC_MODULATERGB G_CC_MODULATEI
#define DEVICE_TYPE_BULK 1
#define PI_STATUS_IO_BUSY 0x02
#define gDPNoOpTag(pkt,tag) gDPParam(pkt, G_NOOP, tag)
#define L_CBUTTONS CONT_C
#define IS_KSEG0(x) ((u32)(x) >= K0BASE && (u32)(x) < K1BASE)
#define IS_KSEG1(x) ((u32)(x) >= K1BASE && (u32)(x) < K2BASE)
#define IS_KSEG2(x) ((u32)(x) >= K2BASE && (u32)(x) < KPTE_SHDUBASE)
#define G_CC_MODULATERGB_PRIM G_CC_MODULATEI_PRIM
#define L_TRIG CONT_L
#define MI_MODE_EBUS 0x0100
#define aSetBuffer(pkt,f,i,o,c) { Acmd *_a = (Acmd *)pkt; _a->words.w0 = (_SHIFTL(A_SETBUFF, 24, 8) | _SHIFTL(f, 16, 8) | _SHIFTL(i, 0, 16)); _a->words.w1 = _SHIFTL(o, 16, 16) | _SHIFTL(c, 0, 16); }
#define G_RM_ZB_OPA_DECAL2 RM_ZB_OPA_DECAL(2)
#define G_RM_RA_ZB_OPA_DECAL RM_RA_ZB_OPA_DECAL(1)
#define VI_H_WIDTH_REG VI_WIDTH_REG
#define RDRAM_DEVICE_ID_REG (RDRAM_BASE_REG+0x04)
#define alSeqpGetPan alSeqpGetChlPan
#define G_TRI_SHADE_TXTR 0xce
#define FPCSR_FU 0x00000008
#define RDRAM_DELAY_REG (RDRAM_BASE_REG+0x08)
#define OS_IM_AI 0x00040401
#define OS_RG_ALIGN_8B 8
#define G_FOG 0x00010000
#define CONT_TYPE_MASK 0x1f07
#define DCACHE_LINESIZE 16
#define SEGMENT_OFFSET(a) ((unsigned int)(a) & 0x00ffffff)
#define __gsSP1Triangle_w1f(v0,v1,v2,flag) (((flag) == 0) ? __gsSP1Triangle_w1(v0, v1, v2): ((flag) == 1) ? __gsSP1Triangle_w1(v1, v2, v0): __gsSP1Triangle_w1(v2, v0, v1))
#define G_CV_K1 -43
#define AL_PHASE_SUSTREL 4
#define WATCHLO_RTRAP 0x00000002
#define G_AC_DITHER (3 << G_MDSFT_ALPHACOMPARE)
#define gsSPViewport(v) gsDma1p( G_MOVEMEM,(v),sizeof(Vp),G_MV_VIEWPORT)
#define VI_CTRL_DITHER_FILTER_ON 0x10000
#define gsSPLineW3D(v0,v1,wd,flag) { _SHIFTL(G_LINE3D, 24, 8), __gsSPLine3D_w1f(v0, v1, wd, flag) }
#define G_RM_ADD RM_ADD(1)
#define TLBHI_NPID 255
#define G_SETTILE 0xf5
#define ERR_OSSPTASKLOAD_OUT 58
#define OS_IM_DP 0x00200401
#define G_LOADBLOCK 0xf3
#define EXC_CODE(x) ((x)<<2)
#define CHNL_ERR_OVERRUN 0x40
#define ZMODE_DEC 0xc00
#define FORCE_BL 0x4000
#define F3DEX_GBI 1
#define C_IWBINV 0x0
#define FILTER_CLAMP 1
#define G_ZS_PRIM (1 << G_MDSFT_ZSRCSEL)
#define SP_STATUS_INTR_BREAK 0x040
#define G_RM_AA_SUB_TERR RM_AA_SUB_TERR(1)
#define gDPSetOtherMode(pkt,mode0,mode1) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_RDPSETOTHERMODE,24,8)|_SHIFTL(mode0,0,24); _g->words.w1 = (unsigned int)(mode1); }
#define FALSE 0
#define ERR_OSVISETYSCALE_VIMGR 42
#define G_MDSFT_BLENDER 16
#define G_MWO_SEGMENT_0 0x00
#define IO_READ(addr) (*(vu32 *)PHYS_TO_K1(addr))
#define ERR_OSSETTHREADPRI 4
#define PFS_ERR_CONTRFAIL CONT_OVERRUN_ERROR
#define MI_CLR_INIT 0x0080
#define HOST_DBG_CMD_READY 2
#define gDPSetKeyGB(pkt,cG,sG,wG,cB,sB,wB) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_SETKEYGB, 24, 8) | _SHIFTL(wG, 12, 12) | _SHIFTL(wB, 0, 12)); _g->words.w1 = (_SHIFTL(cG, 24, 8) | _SHIFTL(sG, 16, 8) | _SHIFTL(cB, 8, 8) | _SHIFTL(sB, 0, 8)); }
#define RAMROM_GAME_OFFSET 0x1000
#define G_TRI_FILL_ZBUFF 0xc9
#define ERR_OSUNMAPTLB 12
#define G_ACMUX_PRIM_LOD_FRAC 6
#define K1_TO_K0(x) ((u32)(x)&0x9FFFFFFF)
#define SR_ERL 0x00000004
#define DPC_CLR_CMD_CTR 0x0100
#define G_TX_WRAP 0
#define _MBI_H_ 
#define G_MWO_SEGMENT_6 0x06
#define G_AD_NOISE (2 << G_MDSFT_ALPHADITHER)
#define MQ_IS_EMPTY(mq) (MQ_GET_COUNT(mq) == 0)
#define G_RM_AA_ZB_OPA_SURF2 RM_AA_ZB_OPA_SURF(2)
#define gSPLineW3D(pkt,v0,v1,wd,flag) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_LINE3D, 24, 8); _g->words.w1 = __gsSPLine3D_w1f(v0, v1, wd, flag); }
#define AL_FX_ECHO 5
#define A_CONTINUE 0x00
#define VI_CTRL_TYPE_16 0x00002
#define G_RM_AA_ZB_XLU_INTER RM_AA_ZB_XLU_INTER(1)
#define G_IM_SIZ_8b_TILE_BYTES G_IM_SIZ_8b_BYTES
#define PI_DOM_RLS_OFS 0x0C
#define G_RDPSETOTHERMODE 0xef
#define G_RM_OPA_CI RM_OPA_CI(1)
#define RM_AA_PCL_SURF(clk) AA_EN | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | G_AC_DITHER | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define G_CCMUX_0 31
#define G_CC_TEMPLERP TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0
#define DPS_BUFTEST_DATA_REG (DPS_BASE_REG+0x0C)
#define VI_CTRL_TYPE_32 0x00003
#define DPC_STATUS_DMA_BUSY 0x100
#define PI_BSD_DOM1_PGS_REG (PI_BASE_REG+0x1C)
#define G_IM_SIZ_8b_BYTES 1
#define RM_AA_ZB_OPA_TERR(clk) AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define RDRAM_START RDRAM_0_START
#define G_RM_TEX_EDGE2 RM_TEX_EDGE(2)
#define G_RM_AA_SUB_SURF RM_AA_SUB_SURF(1)
#define gDPSetRenderMode(pkt,c0,c1) gSPSetOtherMode(pkt, G_SETOTHERMODE_L, G_MDSFT_RENDERMODE, 29, (c0) | (c1))
#define SR_IMASK0 0x0000ff00
#define SR_IMASK1 0x0000fe00
#define SR_IMASK2 0x0000fc00
#define SR_IMASK3 0x0000f800
#define SR_IMASK4 0x0000f000
#define SR_IMASK5 0x0000e000
#define SR_IMASK6 0x0000c000
#define SR_IMASK7 0x00008000
#define SR_IMASK8 0x00000000
#define C0_INX 0
#define RM_AA_XLU_LINE(clk) AA_EN | IM_RD | CVG_DST_CLAMP | CVG_X_ALPHA | ALPHA_CVG_SEL | FORCE_BL | ZMODE_OPA | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define GU_PARSE_RDP_TYPE 2
#define DPC_CLR_FLUSH 0x0010
#define WIN32 1
#define RM_AA_ZB_TEX_INTER(clk) AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | CVG_X_ALPHA | ALPHA_CVG_SEL | ZMODE_INTER | TEX_EDGE | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define gsDPSetCombineMode(a,b) gsDPSetCombineLERP(a, b)
#define RM_XLU_SURF(clk) IM_RD | CVG_DST_FULL | FORCE_BL | ZMODE_OPA | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define A_LOADBUFF 4
#define RM_AA_ZB_OPA_INTER(clk) AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ALPHA_CVG_SEL | ZMODE_INTER | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define G_RM_AA_ZB_OPA_SURF RM_AA_ZB_OPA_SURF(1)
#define SR_EXL 0x00000002
#define C0_WIRED 6
#define OS_SIM_STACKSIZE 4096
#define gDPSetHilite2Tile(pkt,tile,hilite,width,height) gDPSetTileSize(pkt, tile, (hilite)->h.x2 & 0xfff, (hilite)->h.y2 & 0xfff, ((((width)-1)*4)+(hilite)->h.x2) & 0xfff, ((((height)-1)*4)+(hilite)->h.y2) & 0xfff)
#define G_CC_SHADE 0, 0, 0, SHADE, 0, 0, 0, SHADE
#define G_IM_SIZ_32b_SHIFT 0
#define AI_BASE_REG 0x04500000
#define G_ACMUX_1 6
#define G_CC_MODULATERGB2 G_CC_MODULATEI2
#define G_RM_VISCVG RM_VISCVG(1)
#define SI_STATUS_RD_BUSY 0x0002
#define G_CC_MODULATERGBA G_CC_MODULATEIA
#define HOST_PROF_REQ 11
#define TEX_EDGE 0x0000
#define OS_IM_PI 0x00100401
#define PI_DOM2_ADDR1 0x05000000
#define PI_WR_LEN_REG (PI_BASE_REG+0x0C)
#define G_RM_AA_ZB_DEC_LINE RM_AA_ZB_DEC_LINE(1)
#define G_SETENVCOLOR 0xfb
#define alCSPSetFXMix alCSPSetChlFXMix
#define ERR_ALSEQOVERRUN 131
#define SP_STATUS_REG (SP_BASE_REG+0x10)
#define D_JPAD CONT_DOWN
#define GBL_c2(m1a,m1b,m2a,m2b) (m1a) << 28 | (m1b) << 24 | (m2a) << 20 | (m2b) << 16
#define gsDPLoadTextureTile(timg,fmt,siz,width,height,uls,ult,lrs,lrt,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, siz, width, timg), gsDPSetTile(fmt, siz, (((((lrs)-(uls)+1) * siz ##_TILE_BYTES)+7)>>3), 0, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadTile( G_TX_LOADTILE, (uls)<<G_TEXTURE_IMAGE_FRAC, (ult)<<G_TEXTURE_IMAGE_FRAC, (lrs)<<G_TEXTURE_IMAGE_FRAC, (lrt)<<G_TEXTURE_IMAGE_FRAC), gsDPPipeSync(), gsDPSetTile(fmt, siz, (((((lrs)-(uls)+1) * siz ##_LINE_BYTES)+7)>>3), 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(G_TX_RENDERTILE, (uls)<<G_TEXTURE_IMAGE_FRAC, (ult)<<G_TEXTURE_IMAGE_FRAC, (lrs)<<G_TEXTURE_IMAGE_FRAC, (lrt)<<G_TEXTURE_IMAGE_FRAC)
#define RM_AA_ZB_OPA_SURF(clk) AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define ERR_ALSEQPUNKNOWNMIDI 122
#define gSPLoadUcodeEx(pkt,uc_start,uc_dstart,uc_dsize) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_RDPHALF_1,24,8); _g->words.w1 = (unsigned int)(uc_dstart); _g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_LOAD_UCODE,24,8)| _SHIFTL((int)(uc_dsize)-1,0,16)); _g->words.w1 = (unsigned int)(uc_start); }
#define OS_STATE_RUNNING 4
#define RAMROM_PIF2BOOTSTRAP_OFFSET 0x1000
#define AI_STATUS_FIFO_FULL 0x80000000
#define gsDPSetTileSize(t,uls,ult,lrs,lrt) gsDPLoadTileGeneric(G_SETTILESIZE, t, uls, ult, lrs, lrt)
#define G_TD_CLAMP (0 << G_MDSFT_TEXTDETAIL)
#define AL_FX_BUFFER_SIZE 8192
#define G_ACMUX_TEXEL0 1
#define G_ACMUX_TEXEL1 2
#define ZMODE_OPA 0
#define G_IM_SIZ_16b_TILE_BYTES G_IM_SIZ_16b_BYTES
#define OS_IM_SI 0x00020401
#define RI_CONFIG_REG (RI_BASE_REG+0x04)
#define OS_IM_SP 0x00010401
#define G_TX_NOLOD 0
#define AL_KEY_MAX 127
#define gsSPNumLights(n) gsMoveWd( G_MW_NUMLIGHT, G_MWO_NUMLIGHT, NUML(n))
#define G_MWO_MATRIX_WX_WY_F 0x38
#define G_MWO_MATRIX_WX_WY_I 0x18
#define AL_GAIN_CHANGE_TIME 1000
#define TLBINX_INXMASK 0x3f
#define G_MTX_PROJECTION 0x01
#define SP_UCODE_DATA_SIZE 2048
#define G_RM_ZB_XLU_SURF2 RM_ZB_XLU_SURF(2)
#define CACHERR_EB 0x02000000
#define CACHERR_EC 0x40000000
#define CACHERR_EE 0x04000000
#define SI_BASE_REG 0x04800000
#define NTLBENTRIES 31
#define CACHERR_EI 0x01000000
#define LEO_TRACK_MODE 2
#define FIX32TOF(x) ((float)(x) * (1.0f / (float)0x00010000))
#define CACHERR_ER 0x80000000
#define CACHERR_ES 0x08000000
#define CACHERR_ET 0x10000000
#define G_MTX_MODELVIEW 0x00
#define RM_AA_ZB_DEC_LINE(clk) AA_EN | Z_CMP | IM_RD | CVG_DST_SAVE | CVG_X_ALPHA | ALPHA_CVG_SEL | FORCE_BL | ZMODE_DEC | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define gsSPSetOtherMode(cmd,sft,len,data) { _SHIFTL(cmd, 24, 8) | _SHIFTL(sft, 8, 8) | _SHIFTL(len, 0, 8), (unsigned int)(data) }
#define C0_ERROR_EPC 30
#define AL_FX_CHORUS 3
#define AL_FX_CUSTOM 6
#define OS_IM_VI 0x00080401
#define G_MAXFBZ 0x3fff
#define PFS_ERR_BAD_DATA 6
#define TLBPGMASK_16K 0x6000
#define G_MV_MATRIX_2 0x98
#define AL_CMIDI_LOOPSTART_CODE 0x2E
#define DPC_STATUS_START_GCLK 0x008
#define DCACHE_SIZE 0x2000
#define EXC_IBE EXC_CODE(6)
#define CLR_ON_CVG 0x80
#define G_MV_VIEWPORT 0x80
#define RAMROM_RMON_WRITE_ADDR (RAMROM_MSG_ADDR + (3*RAMROM_BUF_SIZE))
#define ICACHE_LINESIZE 32
#define SP_IBIST_FAILED 0x78
#define A_AUX 0x08
#define G_SC_NON_INTERLACE 0
#define aLoadBuffer(pkt,s) { Acmd *_a = (Acmd *)pkt; _a->words.w0 = _SHIFTL(A_LOADBUFF, 24, 8); _a->words.w1 = (unsigned int)(s); }
#define GU_PARSERDP_PRHISTO 4
#define DL_BM_OVERHEAD (12)
#define RAMROM_MSG_ADDR (RAMROM_SIZE - RAMROM_MSG_SIZE)
#define D_CBUTTONS CONT_D
#define gsSPLookAtX(l) gsDma1p( G_MOVEMEM, l, sizeof(Light),G_MV_LOOKATX)
#define G_IM_SIZ_32b_LINE_BYTES 2
#define OS_VI_GAMMA_DITHER_OFF 0x0008
#define GCCc1w0(saRGB1,mRGB1) (_SHIFTL((saRGB1), 5, 4) | _SHIFTL((mRGB1), 0, 5))
#define GCCc1w1(sbRGB1,saA1,mA1,aRGB1,sbA1,aA1) (_SHIFTL((sbRGB1), 24, 4) | _SHIFTL((saA1), 21, 3) | _SHIFTL((mA1), 18, 3) | _SHIFTL((aRGB1), 6, 3) | _SHIFTL((sbA1), 3, 3) | _SHIFTL((aA1), 0, 3))
#define FPCSR_C 0x00800000
#define OS_VI_BIT_NORMALINTERLACE 0x0004
#define C_ILT 0x4
#define OS_VI_BIT_HIRES 0x0200
#define ERR_OSGETREGIONBUFSIZE 56
#define G_IM_SIZ_4b 0
#define G_CCMUX_PRIMITIVE_ALPHA 10
#define ERR_OSVISETSPECIAL_VIMGR 44
#define alSeqpSetFXMix alSeqpSetChlFXMix
#define G_MV_LOOKATX 0x84
#define G_MV_LOOKATY 0x82
#define PFS_DIR_FULL 8
#define AL_KEY_MIN 0
#define FPCSR_RM_MASK 0x00000003
#define MI_INTR_MASK_AI 0x04
#define G_IM_SIZ_8b_LOAD_BLOCK G_IM_SIZ_16b
#define G_MDSFT_ALPHADITHER 4
#define G_SETSCISSOR 0xed
#define G_RDPFULLSYNC 0xe9
#define G_RM_OPA_SURF2 RM_OPA_SURF(2)
#define G_RM_ZB_OPA_DECAL RM_ZB_OPA_DECAL(1)
#define gsDPSetCombineLERP(a0,b0,c0,d0,Aa0,Ab0,Ac0,Ad0,a1,b1,c1,d1,Aa1,Ab1,Ac1,Ad1) { _SHIFTL(G_SETCOMBINE, 24, 8) | _SHIFTL(GCCc0w0(G_CCMUX_ ##a0, G_CCMUX_ ##c0, G_ACMUX_ ##Aa0, G_ACMUX_ ##Ac0) | GCCc1w0(G_CCMUX_ ##a1, G_CCMUX_ ##c1), 0, 24), (unsigned int)(GCCc0w1(G_CCMUX_ ##b0, G_CCMUX_ ##d0, G_ACMUX_ ##Ab0, G_ACMUX_ ##Ad0) | GCCc1w1(G_CCMUX_ ##b1, G_ACMUX_ ##Aa1, G_ACMUX_ ##Ac1, G_CCMUX_ ##d1, G_ACMUX_ ##Ab1, G_ACMUX_ ##Ad1)) }
#define CONFIG_EC_2_1 0x0
#define AL_PHASE_RELEASE 3
#define ERR_ALSEQP_MAP_VOICE 102
#define SP_BASE_REG 0x04040000
#define B_BUTTON CONT_B
#define DPC_CURRENT_REG (DPC_BASE_REG+0x08)
#define OS_PHYSICAL_TO_K1(x) (void *)(((u32)(x)+0xa0000000))
#define AL_EVTQ_END 0x7fffffff
#define CONFIG_DC_SHFT 6
#define G_RM_ZB_XLU_DECAL2 RM_ZB_XLU_DECAL(2)
#define TLBHI_VPN2MASK 0xffffe000
#define G_MDSFT_TEXTCONV 9
#define alCSPSetProgram alCSPSetChlProgram
#define CAUSE_EXCSHIFT 2
#define gsDPNoOpTag(tag) gsDPParam(G_NOOP, tag)
#define A_CLEARBUFF 2
#define gsDPSetFillColor(d) gsDPSetColor(G_SETFILLCOLOR, (d))
#define MI_INIT_MODE_REG (MI_BASE_REG+0x00)
#define MI_INTR_MASK_DP 0x20
#define G_IM_SIZ_8b 1
#define SP_CLR_YIELD SP_CLR_SIG0
#define G_CC_HILITERGBA2 ENVIRONMENT, COMBINED, TEXEL0, COMBINED, ENVIRONMENT, COMBINED, TEXEL0, COMBINED
#define G_RM_ZB_OPA_SURF RM_ZB_OPA_SURF(1)
#define gsSPForceMatrix(mptr) gsDma1p( G_MOVEMEM, mptr, 16, G_MV_MATRIX_1), gsDma1p( G_MOVEMEM, (char *)(mptr)+16, 16, G_MV_MATRIX_2), gsDma1p( G_MOVEMEM, (char *)(mptr)+32, 16, G_MV_MATRIX_3), gsDma1p( G_MOVEMEM, (char *)(mptr)+48, 16, G_MV_MATRIX_4)
#define G_DEPTOZSrg(zval,near,far,flag,zmin,zmax) (((unsigned int)FTOFIX32(((flag) == G_BZ_PERSP ? (1.0f-(float)(near)/(float)(zval)) / (1.0f-(float)(near)/(float)(far )) : ((float)(zval) - (float)(near)) / ((float)(far ) - (float)(near))))) * (((int)((zmax) - (zmin)))&~1) + (int)FTOFIX32(zmin))
#define gsSPFogFactor(fm,fo) gsMoveWd(G_MW_FOG, G_MWO_FOG, (_SHIFTL(fm,16,16) | _SHIFTL(fo,0,16)))
#define OS_VI_NTSC_HAF1 11
#define ERR_ALSEQNUMTRACKS 116
#define gDPLoadMultiBlockS(pkt,timg,tmem,rtile,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, siz ##_LOAD_BLOCK, 1, timg); gDPSetTile(pkt, fmt, siz ##_LOAD_BLOCK, 0, tmem, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT)-1,0); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, siz, (((width) * siz ##_LINE_BYTES)+7)>>3, tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, rtile, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define gsSetImage(cmd,fmt,siz,width,i) { _SHIFTL(cmd, 24, 8) | _SHIFTL(fmt, 21, 3) | _SHIFTL(siz, 19, 2) | _SHIFTL((width)-1, 0, 12), (unsigned int)(i) }
#define G_CCMUX_K4 7
#define G_CCMUX_K5 15
#define G_RM_ZB_CLD_SURF2 RM_ZB_CLD_SURF(2)
#define RMON_STACKSIZE 0x1000
#define HOST_FAULT_ACK 15
#define gDPSetHilite1Tile(pkt,tile,hilite,width,height) gDPSetTileSize(pkt, tile, (hilite)->h.x1 & 0xfff, (hilite)->h.y1 & 0xfff, ((((width)-1)*4)+(hilite)->h.x1) & 0xfff, ((((height)-1)*4)+(hilite)->h.y1) & 0xfff)
#define G_RM_ZB_OVL_SURF RM_ZB_OVL_SURF(1)
#define RAMROM_LOG_ADDR (RAMROM_MSG_ADDR + (5*RAMROM_BUF_SIZE))
#define OS_PRIORITY_RMON 250
#define CALC_DXT(width,b_txl) (((1 << G_TX_DXT_FRAC) + TXL2WORDS(width, b_txl) - 1) / TXL2WORDS(width, b_txl))
#define G_RM_AA_TEX_TERR RM_AA_TEX_TERR(1)
#define _G_CC_BLENDPE ENVIRONMENT, PRIMITIVE, TEXEL0, PRIMITIVE, TEXEL0, 0, SHADE, 0
#define G_SETOTHERMODE_H (G_IMMFIRST-5)
#define alCSPSetChannelPriority alCSPSetChlPriority
#define OS_VI_BIT_ANTIALIAS 0x0010
#define C_IST 0x8
#define ALPHA_CVG_SEL 0x2000
#define SR_ITS 0x01000000
#define OS_MESG_TYPE_COUNTER (OS_MESG_TYPE_BASE+4)
#define OS_VI_PAL_LAF1 17
#define OS_VI_PAL_LAF2 21
#define CONFIG_NONCOHRNT 0x00000003
#define aSetLoop(pkt,a) { Acmd *_a = (Acmd *)pkt; _a->words.w0 = _SHIFTL(A_SETLOOP, 24, 8); _a->words.w1 = (unsigned int)(a); }
#define ERR_OSPIRAWWRITEIO 20
#define GU_BLINKRDP_HILITE 1
#define CONT_DOWN 0x0400
#define gsMoveWd(index,offset,data) gsImmp21( G_MOVEWORD, offset, index, data)
#define ERR_OSSTOPTIMER 77
#define OS_MESG_TYPE_DMAWRITE (OS_MESG_TYPE_BASE+2)
#define sDPRGBColor(cmd,r,g,b,a) gsDPSetColor(cmd, (_SHIFTL(r, 24, 8) | _SHIFTL(g, 16, 8) | _SHIFTL(b, 8, 8) | _SHIFTL(a, 0, 8)))
#define _SIZE_T 
#define A_ENVMIXER 3
#define EXC_INT EXC_CODE(0)
#define G_IMMFIRST -65
#define GAME_PRINTF_SEND 5
#define RAMROM_BUF_SIZE (4096)
#define G_MW_NUMLIGHT 0x02
#define ERR_OSVISETXSCALE_VALUE 39
#define PI_STATUS_ERROR 0x04
#define G_SETKEYGB 0xea
#define G_MDSFT_TEXTLOD 16
#define CONT_CARD_PULL 0x02
#define G_MWO_MATRIX_YX_YY_F 0x28
#define OS_TV_PAL 0
#define SP_SEMAPHORE_REG (SP_BASE_REG+0x1C)
#define G_RM_ZB_OVL_SURF2 RM_ZB_OVL_SURF(2)
#define OS_MESG_TYPE_EDMAREAD (OS_MESG_TYPE_BASE+5)
#define MI_MODE_REG MI_INIT_MODE_REG
#define K2BASE 0xC0000000
#define gDPPipeSync(pkt) gDPNoParam(pkt, G_RDPPIPESYNC)
#define G_CC_INTERFERENCE TEXEL0, 0, TEXEL1, 0, TEXEL0, 0, TEXEL1, 0
#define gSPInsertMatrix(pkt,where,num) gMoveWd(pkt, G_MW_MATRIX, where, num)
#define G_IM_SIZ_16b_LOAD_BLOCK G_IM_SIZ_16b
#define OS_DCACHE_ROUNDUP_SIZE(x) (u32)(((((u32)(x)+0xf)/0x10)*0x10))
#define ERR_ALHEAPNOFREE 125
#define gsDPSetTextureDetail(type) gsSPSetOtherMode(G_SETOTHERMODE_H, G_MDSFT_TEXTDETAIL, 2, type)
#define RAMROM_RMON_READ_ADDR (RAMROM_MSG_ADDR + (2*RAMROM_BUF_SIZE))
#define G_CC_MODULATEI TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE
#define _gDPLoadTextureBlockTile(pkt,timg,tmem,rtile,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, siz ##_LOAD_BLOCK, 1, timg); gDPSetTile(pkt, fmt, siz ##_LOAD_BLOCK, 0, tmem, G_TX_LOADTILE, 0, cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT)-1, CALC_DXT(width, siz ##_BYTES)); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, siz, (((width) * siz ##_LINE_BYTES)+7)>>3, tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, rtile, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define gsSPPopMatrix(n) gsImmp1( G_POPMTX, n)
#define OS_EVENT_AI 6
#define G_IM_SIZ_16b_BYTES 2
#define gDPSetEnvColor(pkt,r,g,b,a) DPRGBColor(pkt, G_SETENVCOLOR, r,g,b,a)
#define _SPTASK_H_ 
#define gSPLoadUcode(pkt,uc_start,uc_dstart) gSPLoadUcodeEx((pkt), (uc_start), (uc_dstart), SP_UCODE_DATA_SIZE)
#define SR_BEV 0x00400000
#define VI_V_BURST_REG (VI_BASE_REG+0x2C)
#define CONT_TYPE_NORMAL 0x0005
#define OS_VI_NTSC_HAN1 10
#define SP_DMEM_END 0x04000FFF
#define gSPMatrix(pkt,m,p) gDma1p(pkt, G_MTX, m, sizeof(Mtx), p)
#define G_SETZIMG 0xfe
#define alSeqpSetChannelPriority alSeqpSetChlPriority
#define _G_CC_SPARSEST PRIMITIVE, TEXEL0, LOD_FRACTION, TEXEL0, PRIMITIVE, TEXEL0, LOD_FRACTION, TEXEL0
#define RAMROM_APP_READ_ADDR (RAMROM_MSG_ADDR + (0*RAMROM_BUF_SIZE))
#define OS_VIM_STACKSIZE 4096
#define gsSPLookAtY(l) gsDma1p( G_MOVEMEM, l, sizeof(Light),G_MV_LOOKATY)
#define EXC_RMISS EXC_CODE(2)
#define alSeqpSetPan alSeqpSetChlPan
#define PI_SET_RESET PI_STATUS_RESET
#define G_DL 6
#define AI_STATUS_REG (AI_BASE_REG+0x0C)
#define ERR_OSMAPTLB_ASID 11
#define K0_TO_PHYS(x) ((u32)(x)&0x1FFFFFFF)
#define G_MODIFYVTX (G_IMMFIRST-13)
#define R_CBUTTONS CONT_F
#define OS_PRIORITY_SIMGR 140
#define G_SETPRIMCOLOR 0xfa
#define OS_EVENT_DP 9
#define SP_IBIST_CLEAR 0x04
#define SR_KSU_KER 0x00000000
#define AL_DEFAULT_FXMIX 0
#define G_CC_MODULATERGB_PRIM2 G_CC_MODULATEI_PRIM2
#define OS_VI_PAL_LAN1 16
#define OS_VI_PAL_LAN2 20
#define OS_VI_MPAL_HAF1 39
#define G_ENDDL (G_IMMFIRST-7)
#define gSPLookAt(pkt,la) { gSPLookAtX(pkt,la) gSPLookAtY(pkt,(char *)(la)+16) }
#define gDPSetTextureDetail(pkt,type) gSPSetOtherMode(pkt, G_SETOTHERMODE_H, G_MDSFT_TEXTDETAIL, 2, type)
#define MI_INTR_MASK_PI 0x10
#define G_MDSFT_TEXTLUT 14
#define A_SETVOL 9
#define DPC_BASE_REG 0x04100000
#define TLBCTXT_BASEBITS 9
#define ERR_ALHEAPFIRSTBLOCK 127
#define GPACK_RGBA5551(r,g,b,a) ((((r)<<8) & 0xf800) | (((g)<<3) & 0x7c0) | (((b)>>2) & 0x3e) | ((a) & 0x1))
#define CAUSE_CEMASK 0x30000000
#define C0_MAJREVSHIFT 4
#define PI_BSD_DOM2_LAT_REG (PI_BASE_REG+0x24)
#define OS_STATE_RUNNABLE 2
#define OS_SC_SWAPBUFFER 0x40
#define G_SPRITE2D_BASE 9
#define A_LOADADPCM 11
#define CONT_EEPROM_BUSY 0x80
#define CHNL_ERR_COLLISION 0x40
#define AL_PAN_CENTER 64
#define PHYS_TO_K0(x) ((u32)(x)|0x80000000)
#define PHYS_TO_K1(x) ((u32)(x)|0xA0000000)
#define G_MWO_POINT_ST 0x14
#define G_SHADE 0x00000004
#define G_MWO_SEGMENT_4 0x04
#define ERR_ALSNDPDELETE 108
#define AL_PAN_RIGHT 127
#define SSTATEMASK 0x00001c00
#define gSPViewport(pkt,v) gDma1p(pkt,G_MOVEMEM,(v),sizeof(Vp),G_MV_VIEWPORT)
#define G_TP_PERSP (1 << G_MDSFT_TEXTPERSP)
#define RDRAM_RAS_INTERVAL_REG (RDRAM_BASE_REG+0x18)
#define _ULTRATYPES_H_ 
#define MI_INTR_MASK_SI 0x02
#define OS_VI_DIVOT_OFF 0x0020
#define MI_INTR_MASK_SP 0x01
#define G_MWO_POINT_RGBA 0x10
#define DPC_STATUS_TMEM_BUSY 0x010
#define CONT_LEFT 0x0200
#define G_RDPTILESYNC 0xe8
#define DPC_CLR_TMEM_CTR 0x0040
#define MI_MODE_RDRAM 0x0200
#define G_IM_FMT_YUV 1
#define G_BL_1MA 0
#define PFS_DATA_FULL 7
#define TLBINX_PROBE 0x80000000
#define gsDPTextureRectangle(xl,yl,xh,yh,tile,s,t,dsdx,dtdy) { (_SHIFTL(G_TEXRECT, 24, 8) | _SHIFTL(xh, 12, 12) | _SHIFTL(yh, 0, 12)), (_SHIFTL(tile, 24, 3) | _SHIFTL(xl, 12, 12) | _SHIFTL(yl, 0, 12)), }, { _SHIFTL(s, 16, 16) | _SHIFTL(t, 0, 16), _SHIFTL(dsdx, 16, 16) | _SHIFTL(dtdy, 0, 16) }
#define VI_WIDTH_REG (VI_BASE_REG+0x08)
#define _gsDPLoadTextureBlock_4b(timg,tmem,fmt,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, G_IM_SIZ_16b, 1, timg), gsDPSetTile(fmt, G_IM_SIZ_16b, 0, tmem, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadBlock(G_TX_LOADTILE, 0, 0, (((width)*(height)+3)>>2)-1, CALC_DXT_4b(width)), gsDPPipeSync(), gsDPSetTile(fmt, G_IM_SIZ_4b, ((((width)>>1)+7)>>3), tmem, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC)
#define CVG_DST_FULL 0x200
#define ERR_OSVIGETNEXTFRAMEBUFFER 38
#define G_RESERVED3 8
#define G_CC_MODULATEIDECALA_PRIM TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, TEXEL0
#define RDRAM_1_START 0x00200000
#define gsSPEndDisplayList() { _SHIFTL(G_ENDDL, 24, 8), 0 }
#define AI_MAX_BIT_RATE 16
#define _PLAYER_H_ 
#define OS_CPU_COUNTER (OS_CLOCK_RATE*3/4)
#define OS_MESG_TYPE_DMAREAD (OS_MESG_TYPE_BASE+1)
#define MI_SET_EBUS 0x0400
#define DEVICE_TYPE_SRAM 3
#define HOST_PIACCESS_REQ 1
#define CAUSE_EXCMASK 0x0000007C
#define gsSPSprite2DDraw(px,py) { (_SHIFTL(G_SPRITE2D_DRAW, 24, 8)), (_SHIFTL((px), 16, 16) | _SHIFTL((py), 0, 16)) }
#define DPC_SET_FREEZE 0x0008
#define G_RM_FOG_PRIM_A GBL_c1(G_BL_CLR_FOG, G_BL_A_FOG, G_BL_CLR_IN, G_BL_1MA)
#define _LANGUAGE_C 1
#define gSPTextureL(pkt,s,t,level,xparam,tile,on) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_TEXTURE, 24, 8) | _SHIFTL(xparam, 16, 8) | _SHIFTL(level, 11, 3) | _SHIFTL(tile, 8, 3) | _SHIFTL(on, 0, 8)); _g->words.w1 = (_SHIFTL(s, 16, 16) | _SHIFTL(t, 0, 16)); }
#define SECC_MASK 0x0000007f
#define SP_EXTERN 0x00000400
#define OS_VI_MPAL_HAN1 38
#define gDPSetPrimColor(pkt,m,l,r,g,b,a) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_SETPRIMCOLOR, 24, 8) | _SHIFTL(m, 8, 8) | _SHIFTL(l, 0, 8)); _g->words.w1 = (_SHIFTL(r, 24, 8) | _SHIFTL(g, 16, 8) | _SHIFTL(b, 8, 8) | _SHIFTL(a, 0, 8)); }
#define gDPSetConvert(pkt,k0,k1,k2,k3,k4,k5) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_SETCONVERT, 24, 8) | _SHIFTL(k0, 13, 9) | _SHIFTL(k1, 4, 9) | _SHIFTR(k2, 5, 4)); _g->words.w1 = (_SHIFTL(k2, 27, 5) | _SHIFTL(k3, 18, 9) | _SHIFTL(k4, 9, 9) | _SHIFTL(k5, 0, 9)); }
#define VI_TIMING_REG VI_BURST_REG
#define G_RDPCMDSIZ 64
#define G_CULLDL (G_IMMFIRST-1)
#define OS_EVENT_THREADSTATUS 13
#define TLBINX_INXSHIFT 0
#define OS_VI_NTSC_LPF2 5
#define gDPLoadMultiBlock(pkt,timg,tmem,rtile,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, siz ##_LOAD_BLOCK, 1, timg); gDPSetTile(pkt, fmt, siz ##_LOAD_BLOCK, 0, tmem, G_TX_LOADTILE, 0, cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT)-1, CALC_DXT(width, siz ##_BYTES)); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, siz, (((width) * siz ##_LINE_BYTES)+7)>>3, tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, rtile, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define G_MV_TXTATT 0x96
#define G_MW_LIGHTCOL 0x0a
#define OS_EVENT_PRENMI 14
#define CONFIG_EC_3_1 0x1
#define A_RESAMPLE 5
#define G_RM_AA_OPA_TERR RM_AA_OPA_TERR(1)
#define G_MDSFT_COLORDITHER 22
#define G_ON (1)
#define _OS_H_ 
#define G_MW_FOG 0x08
#define G_IM_FMT_RGBA 0
#define gSPNumLights(pkt,n) gMoveWd(pkt, G_MW_NUMLIGHT, G_MWO_NUMLIGHT, NUML(n))
#define CONT_RIGHT 0x0100
#define LEO_SECTOR_MODE 3
#define SP_DMEM_START 0x04000000
#define OS_EVENT_PI 8
#define TLBWIRED_WIREDMASK 0x3f
#define SP_CLR_SSTEP 0x00020
#define EEPROM_MAXBLOCKS 64
#define G_MDSFT_ALPHACOMPARE 0
#define A_DMEMMOVE 10
#define DPC_SET_FLUSH 0x0020
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define M_AUDTASK 2
#define G_TEXTURE_GEN 0x00040000
#define ERR_OSVISETXSCALE_VIMGR 40
#define PI_DOM_PWD_OFS 0x04
#define gsSPSprite2DScaleFlip(sx,sy,fx,fy) { (_SHIFTL(G_SPRITE2D_SCALEFLIP, 24, 8) | _SHIFTL((fx), 8, 8) | _SHIFTL((fy), 0, 8)), (_SHIFTL((sx), 16, 16) | _SHIFTL((sy), 0, 16)) }
#define K1BASE 0xA0000000
#define ERR_ALCSEQZEROSTATUS 128
#define AL_PHASE_NOTEON 0
#define C0_ENTRYLO0 2
#define C0_ENTRYLO1 3
#define ERR_ALSNDPSETSOUND 110
#define RAMROM_CLOCKRATE_MASK 0xfffffff0
#define ERR_OSVIGETCURRENTFRAMEBUFFER 37
#define MI_NOOP_REG MI_VERSION_REG
#define ERR_OSGETREGIONBUFCOUNT 55
#define OS_RG_ALIGN_DEFAULT OS_RG_ALIGN_8B
#define AL_HEAP_DEBUG 1
#define AL_VOL_FULL 127
#define OS_EVENT_SI 5
#define G_IM_SIZ_4b_TILE_BYTES G_IM_SIZ_4b_BYTES
#define OS_EVENT_SP 4
#define G_ZBUFFER 0x00000001
#define AL_CMIDI_CNTRL_LOOPCOUNT_BIG 105
#define G_TEXTURE_SCALE_FRAC 16
#define CHNL_ERR_MASK 0xC0
#define G_CC_1CYUV2RGB TEXEL0, K4, K5, TEXEL0, 0, 0, 0, SHADE
#define HOST_LOG_ACK 8
#define AL_HEAP_MAGIC 0x20736a73
#define OS_IM_NONE 0x00000001
#define gDPLoadTLUT_pal256(pkt,dram) { gDPSetTextureImage(pkt, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, dram); gDPTileSync(pkt); gDPSetTile(pkt, 0, 0, 0, 256, G_TX_LOADTILE, 0 , 0, 0, 0, 0, 0, 0); gDPLoadSync(pkt); gDPLoadTLUTCmd(pkt, G_TX_LOADTILE, 255); gDPPipeSync(pkt) }
#define PI_CLR_INTR PI_STATUS_CLR_INTR
#define ERR_OSREADHOST_ADDR 70
#define G_MWO_POINT_ZSCREEN 0x1c
#define __R4300_H__ 
#define RDRAM_ACTIVE_MODE 1
#define RM_PCL_SURF(clk) CVG_DST_FULL | FORCE_BL | ZMODE_OPA | G_AC_DITHER | GBL_c ##clk(G_BL_CLR_IN, G_BL_0, G_BL_CLR_IN, G_BL_1)
#define OS_VI_NTSC_HPF1 9
#define OS_VI_NTSC_HPF2 13
#define DPC_STATUS_FLUSH 0x004
#define A_ADPCM 1
#define ERR_OSPROFILEINIT_ORD 64
#define PADDRMASK 0xFFFFFF00
#define ERR_OSPROFILESTART_FLAG 67
#define DPS_TBIST_CLEAR 0x04
#define G_CCMUX_PRIMITIVE 3
#define OS_EVENT_VI 7
#define EXC_MOD EXC_CODE(1)
#define OS_IM_CPU 0x0000ff01
#define PFS_ERR_EXIST 9
#define MI_VERSION_REG (MI_BASE_REG+0x04)
#define ERR_OSSPTASKLOAD_YIELD 60
#define M_GFXTASK 1
#define OS_PM_64K 0x001e000
#define CONT_TYPE_MOUSE 0x0002
#define SP_IMEM_END 0x04001FFF
#define SP_MEM_ADDR_REG (SP_BASE_REG+0x00)
#define SP_TRANSPARENT 0x00000001
#define OS_VI_PAL_LPF1 15
#define OS_VI_PAL_LPF2 19
#define G_RM_AA_DEC_LINE RM_AA_DEC_LINE(1)
#define TLBLO_PFNMASK 0x3fffffc0
#define VI_BASE_REG 0x04400000
#define G_TX_RENDERTILE 0
#define ERR_OSVISETMODE 45
#define G_MTX_LOAD 0x02
#define VI_BURST_REG (VI_BASE_REG+0x14)
#define gsDPLoadTLUTCmd(tile,count) { _SHIFTL(G_LOADTLUT, 24, 8), _SHIFTL((tile), 24, 3) | _SHIFTL((count), 14, 10) }
#define G_ACMUX_COMBINED 0
#define MIN(a,b) ((a) < (b) ? (a) : (b))
#define G_AD_DISABLE (3 << G_MDSFT_ALPHADITHER)
#define G_IM_SIZ_32b_INCR 0
#define gDPNoOp(pkt) gDPNoParam(pkt, G_NOOP)
#define PI_BSD_DOM2_RLS_REG (PI_BASE_REG+0x30)
#define C0_PAGEMASK 5
#define VI_V_INTR_REG VI_INTR_REG
#define G_TT_RGBA16 (2 << G_MDSFT_TEXTLUT)
#define alCSPGetChannelPriority alCSPGetChlPriority
#define G_RM_AA_ZB_XLU_SURF2 RM_AA_ZB_XLU_SURF(2)
#define AL_FX_SMALLROOM 1
#define OS_DCACHE_ROUNDUP_ADDR(x) (void *)(((((u32)(x)+0xf)/0x10)*0x10))
#define aClearBuffer(pkt,d,c) { Acmd *_a = (Acmd *)pkt; _a->words.w0 = _SHIFTL(A_CLEARBUFF, 24, 8) | _SHIFTL(d, 0, 24); _a->words.w1 = (unsigned int)(c); }
#define alCSPGetFXMix alCSPGetChlFXMix
#define G_SHADING_SMOOTH 0x00000200
#define G_RM_AA_XLU_SURF2 RM_AA_XLU_SURF(2)
#define DPS_BUFTEST_ADDR_REG (DPS_BASE_REG+0x08)
#define DPC_SET_XBUS_DMEM_DMA 0x0002
#define AI_MAX_DAC_RATE 16384
#define G_MWO_MATRIX_ZZ_ZW_F 0x34
#define G_ACMUX_SHADE 4
#define G_MWO_MATRIX_ZZ_ZW_I 0x14
#define G_SCALE_FRAC 8
#define _REGION_H_ 
#define aPoleFilter(pkt,f,g,s) { Acmd *_a = (Acmd *)pkt; _a->words.w0 = (_SHIFTL(A_POLEF, 24, 8) | _SHIFTL(f, 16, 8) | _SHIFTL(g, 0, 16)); _a->words.w1 = (unsigned int)(s); }
#define SP_SET_INTR 0x00010
#define G_CC_MODULATEIA TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0
#define VI_H_SYNC_REG (VI_BASE_REG+0x1C)
#define OS_VI_NTSC_HPN1 8
#define OS_VI_NTSC_HPN2 12
#define SR_CUMASK 0xf0000000
#define SR_KSU_MASK 0x00000018
#define gsDPLoadTileGeneric(c,tile,uls,ult,lrs,lrt) { _SHIFTL(c, 24, 8) | _SHIFTL(uls, 12, 12) | _SHIFTL(ult, 0, 12), _SHIFTL(tile, 24, 3) | _SHIFTL(lrs, 12, 12) | _SHIFTL(lrt, 0, 12)}
#define OS_VI_BIT_INTERLACE 0x0002
#define G_TP_NONE (0 << G_MDSFT_TEXTPERSP)
#define SDIRTYEXCL 0x00001400
#define ERR_ALCSPVNOTFREE 130
#define DPC_CLR_CLOCK_CTR 0x0200
#define G_RM_AA_ZB_TEX_EDGE RM_AA_ZB_TEX_EDGE(1)
#define gSPBranchLessZrg(pkt,dl,vtx,zval,near,far,flag,zmin,zmax) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_RDPHALF_1,24,8); _g->words.w1 = (unsigned int)(dl); _g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_BRANCH_Z,24,8)| _SHIFTL((vtx)*5,12,12)|_SHIFTL((vtx)*2,0,12)); _g->words.w1 = G_DEPTOZSrg(zval, near, far, flag, zmin, zmax); }
#define OS_VI_PAL_LPN1 14
#define OS_VI_PAL_LPN2 18
#define A_LOOP 0x02
#define RM_AA_ZB_XLU_INTER(clk) AA_EN | Z_CMP | IM_RD | CVG_DST_WRAP | CLR_ON_CVG | FORCE_BL | ZMODE_INTER | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define OS_VI_MPAL_HPF1 37
#define OS_VI_MPAL_HPF2 41
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef long long s64;
typedef volatile unsigned char vu8;
typedef volatile unsigned short vu16;
typedef volatile unsigned long vu32;
typedef volatile unsigned long long vu64;
typedef volatile signed char vs8;
typedef volatile short vs16;
typedef volatile long vs32;
typedef volatile long long vs64;
typedef float f32;
typedef double f64;
typedef s32 OSPri;
typedef s32 OSId;
typedef union { struct { f32 f_odd; f32 f_even; } f; f64 d; } __OSfp;
typedef struct {
 u64 at, v0, v1, a0, a1, a2, a3;
 u64 t0, t1, t2, t3, t4, t5, t6, t7;
 u64 s0, s1, s2, s3, s4, s5, s6, s7;
 u64 t8, t9, gp, sp, s8, ra;
 u64 lo, hi;
 u32 sr, pc, cause, badvaddr, rcp;
 u32 fpcsr;
 __OSfp fp0, fp2, fp4, fp6, fp8, fp10, fp12, fp14;
 __OSfp fp16, fp18, fp20, fp22, fp24, fp26, fp28, fp30;
} __OSThreadContext;
typedef struct OSThread_s {
 struct OSThread_s *next;
 OSPri priority;
 struct OSThread_s **queue;
 struct OSThread_s *tlnext;
 u16 state;
 u16 flags;
 OSId id;
 int fp;
 __OSThreadContext context;
} OSThread;
typedef u32 OSEvent;
typedef u32 OSIntMask;
typedef u32 OSPageMask;
typedef u32 OSHWIntr;
typedef void * OSMesg;
typedef struct OSMesgQueue_s {
 OSThread *mtqueue;
 OSThread *fullqueue;
 s32 validCount;
 s32 first;
 s32 msgCount;
 OSMesg *msg;
} OSMesgQueue;
typedef struct {
 u32 errStatus;
        void *dramAddr;
 void *C2Addr;
 u32 sectorSize;
 u32 C1ErrNum;
 u32 C1ErrSector[4];
} __OSBlockInfo;
typedef struct {
 u32 cmdType;
 u16 transferMode;
 u16 blockNum;
 s32 sectorNum;
 u32 devAddr;
 u32 bmCtlShadow;
 u32 seqCtlShadow;
 __OSBlockInfo block[2];
} __OSTranxInfo;
typedef struct OSPiHandle_s {
        struct OSPiHandle_s *next;
        u8 type;
        u8 latency;
        u8 pageSize;
        u8 relDuration;
        u8 pulse;
 u8 domain;
        u32 baseAddress;
        u32 speed;
        __OSTranxInfo transferInfo;
} OSPiHandle;
typedef struct {
        u8 type;
        u32 address;
} OSPiInfo;
typedef struct {
        u16 type;
        u8 pri;
        u8 status;
 OSMesgQueue *retQueue;
} OSIoMesgHdr;
typedef struct {
 OSIoMesgHdr hdr;
 void * dramAddr;
 u32 devAddr;
 u32 size;
 OSPiHandle *piHandle;
} OSIoMesg;
typedef struct {
        s32 active;
 OSThread *thread;
        OSMesgQueue *cmdQueue;
        OSMesgQueue *evtQueue;
        OSMesgQueue *acsQueue;
        s32 (*dma)(s32, u32, void *, u32);
        s32 (*edma)(OSPiHandle *, s32, u32, void *, u32);
} OSDevMgr;
typedef struct {
    u32 ctrl;
    u32 width;
    u32 burst;
    u32 vSync;
    u32 hSync;
    u32 leap;
    u32 hStart;
    u32 xScale;
    u32 vCurrent;
} OSViCommonRegs;
typedef struct {
    u32 origin;
    u32 yScale;
    u32 vStart;
    u32 vBurst;
    u32 vIntr;
} OSViFieldRegs;
typedef struct {
    u8 type;
    OSViCommonRegs comRegs;
    OSViFieldRegs fldRegs[2];
} OSViMode;
typedef u64 OSTime;
typedef struct OSTimer_s {
 struct OSTimer_s *next;
 struct OSTimer_s *prev;
 OSTime interval;
 OSTime value;
 OSMesgQueue *mq;
 OSMesg msg;
} OSTimer;
typedef struct {
 u16 type;
 u8 status;
 u8 errno;
}OSContStatus;
typedef struct {
 u16 button;
 s8 stick_x;
 s8 stick_y;
 u8 errno;
} OSContPad;
typedef struct {
 void *address;
 u8 databuffer[32];
        u8 addressCrc;
 u8 dataCrc;
 u8 errno;
} OSContRamIo;
typedef struct {
 int status;
 OSMesgQueue *queue;
 int channel;
 u8 id[32];
 u8 label[32];
 int version;
 int dir_size;
 int inode_table;
 int minode_table;
 int dir_table;
 int inode_start_page;
 u8 banks;
 u8 activebank;
} OSPfs;
typedef struct {
 u32 file_size;
   u32 game_code;
   u16 company_code;
   char ext_name[4];
   char game_name[16];
} OSPfsState;
typedef struct {
 u16 *histo_base;
 u32 histo_size;
 u32 *text_start;
 u32 *text_end;
} OSProf;
extern u64 osClockRate;
extern OSViMode osViModeTable[];
extern OSViMode osViModeNtscLpn1;
extern OSViMode osViModeNtscLpf1;
extern OSViMode osViModeNtscLan1;
extern OSViMode osViModeNtscLaf1;
extern OSViMode osViModeNtscLpn2;
extern OSViMode osViModeNtscLpf2;
extern OSViMode osViModeNtscLan2;
extern OSViMode osViModeNtscLaf2;
extern OSViMode osViModeNtscHpn1;
extern OSViMode osViModeNtscHpf1;
extern OSViMode osViModeNtscHan1;
extern OSViMode osViModeNtscHaf1;
extern OSViMode osViModeNtscHpn2;
extern OSViMode osViModeNtscHpf2;
extern OSViMode osViModePalLpn1;
extern OSViMode osViModePalLpf1;
extern OSViMode osViModePalLan1;
extern OSViMode osViModePalLaf1;
extern OSViMode osViModePalLpn2;
extern OSViMode osViModePalLpf2;
extern OSViMode osViModePalLan2;
extern OSViMode osViModePalLaf2;
extern OSViMode osViModePalHpn1;
extern OSViMode osViModePalHpf1;
extern OSViMode osViModePalHan1;
extern OSViMode osViModePalHaf1;
extern OSViMode osViModePalHpn2;
extern OSViMode osViModePalHpf2;
extern OSViMode osViModeMpalLpn1;
extern OSViMode osViModeMpalLpf1;
extern OSViMode osViModeMpalLan1;
extern OSViMode osViModeMpalLaf1;
extern OSViMode osViModeMpalLpn2;
extern OSViMode osViModeMpalLpf2;
extern OSViMode osViModeMpalLan2;
extern OSViMode osViModeMpalLaf2;
extern OSViMode osViModeMpalHpn1;
extern OSViMode osViModeMpalHpf1;
extern OSViMode osViModeMpalHan1;
extern OSViMode osViModeMpalHaf1;
extern OSViMode osViModeMpalHpn2;
extern OSViMode osViModeMpalHpf2;
extern s32 osRomType;
extern void *osRomBase;
extern s32 osTvType;
extern s32 osResetType;
extern s32 osCicId;
extern s32 osVersion;
extern u32 osMemSize;
extern s32 osAppNMIBuffer[];
extern OSIntMask __OSGlobalIntMask;
extern OSPiHandle *__osPiTable;
extern OSPiHandle *__osDiskHandle;
extern void osCreateThread(OSThread *, OSId, void (*)(void *),
           void *, void *, OSPri);
extern void osDestroyThread(OSThread *);
extern void osYieldThread(void);
extern void osStartThread(OSThread *);
extern void osStopThread(OSThread *);
extern OSId osGetThreadId(OSThread *);
extern void osSetThreadPri(OSThread *, OSPri);
extern OSPri osGetThreadPri(OSThread *);
extern void osCreateMesgQueue(OSMesgQueue *, OSMesg *, s32);
extern s32 osSendMesg(OSMesgQueue *, OSMesg, s32);
extern s32 osJamMesg(OSMesgQueue *, OSMesg, s32);
extern s32 osRecvMesg(OSMesgQueue *, OSMesg *, s32);
extern void osSetEventMesg(OSEvent, OSMesgQueue *, OSMesg);
extern OSIntMask osGetIntMask(void);
extern OSIntMask osSetIntMask(OSIntMask);
extern void osInitRdb(u8 *sendBuf, u32 sendSize);
extern void osInvalDCache(void *, s32);
extern void osInvalICache(void *, s32);
extern void osWritebackDCache(void *, s32);
extern void osWritebackDCacheAll(void);
extern void osMapTLB(s32, OSPageMask, void *, u32, u32, s32);
extern void osMapTLBRdb(void);
extern void osUnmapTLB(s32);
extern void osUnmapTLBAll(void);
extern void osSetTLBASID(s32);
extern u32 osVirtualToPhysical(void *);
extern void * osPhysicalToVirtual(u32);
extern u32 osAiGetStatus(void);
extern u32 osAiGetLength(void);
extern s32 osAiSetFrequency(u32);
extern s32 osAiSetNextBuffer(void *, u32);
extern u32 osDpGetStatus(void);
extern void osDpSetStatus(u32);
extern void osDpGetCounters(u32 *);
extern s32 osDpSetNextBuffer(void *, u64);
extern u32 osPiGetStatus(void);
extern s32 osPiGetDeviceType(void);
extern s32 osPiRawWriteIo(u32, u32);
extern s32 osPiRawReadIo(u32, u32 *);
extern s32 osPiRawStartDma(s32, u32, void *, u32);
extern s32 osPiWriteIo(u32, u32);
extern s32 osPiReadIo(u32, u32 *);
extern s32 osPiStartDma(OSIoMesg *, s32, s32, u32, void *, u32,
         OSMesgQueue *);
extern void osCreatePiManager(OSPri, OSMesgQueue *, OSMesg *, s32);
extern u32 osViGetStatus(void);
extern u32 osViGetCurrentMode(void);
extern u32 osViGetCurrentLine(void);
extern u32 osViGetCurrentField(void);
extern void *osViGetCurrentFramebuffer(void);
extern void *osViGetNextFramebuffer(void);
extern void osViSetXScale(f32);
extern void osViSetYScale(f32);
extern void osViSetSpecialFeatures(u32);
extern void osViSetMode(OSViMode *);
extern void osViSetEvent(OSMesgQueue *, OSMesg, u32);
extern void osViSwapBuffer(void *);
extern void osViBlack(u8);
extern void osViFade(u8, u16);
extern void osViBlack(u8);
extern void osCreateViManager(OSPri);
extern OSTime osGetTime(void);
extern void osSetTime(OSTime);
extern int osSetTimer(OSTimer *, OSTime, OSTime,
       OSMesgQueue *, OSMesg);
extern int osStopTimer(OSTimer *);
extern s32 osContInit(OSMesgQueue *, u8 *, OSContStatus *);
extern s32 osContReset(OSMesgQueue *, OSContStatus *);
extern s32 osContStartQuery(OSMesgQueue *);
extern s32 osContStartReadData(OSMesgQueue *);
extern s32 osContSetCh(u8);
extern void osContGetQuery(OSContStatus *);
extern void osContGetReadData(OSContPad *);
extern s32 osPfsInitPak(OSMesgQueue *, OSPfs *, int);
extern s32 osPfsRepairId(OSPfs *);
extern s32 osPfsInit(OSMesgQueue *, OSPfs *, int);
extern s32 osPfsReFormat(OSPfs *, OSMesgQueue *, int);
extern s32 osPfsChecker(OSPfs *);
extern s32 osPfsAllocateFile(OSPfs *, u16, u32, u8 *, u8 *, int, s32 *);
extern s32 osPfsFindFile(OSPfs *, u16, u32, u8 *, u8 *, s32 *);
extern s32 osPfsDeleteFile(OSPfs *, u16, u32, u8 *, u8 *);
extern s32 osPfsReadWriteFile(OSPfs *, s32, u8, int, int, u8 *);
extern s32 osPfsFileState(OSPfs *, s32, OSPfsState *);
extern s32 osPfsGetLabel(OSPfs *, u8 *, int *);
extern s32 osPfsSetLabel(OSPfs *, u8 *);
extern s32 osPfsIsPlug(OSMesgQueue *, u8 *);
extern s32 osPfsFreeBlocks(OSPfs *, s32 *);
extern s32 osPfsNumFiles(OSPfs *, s32 *, s32 *);
extern s32 osEepromProbe(OSMesgQueue *);
extern s32 osEepromRead(OSMesgQueue *, u8, u8 *);
extern s32 osEepromWrite(OSMesgQueue *, u8, u8 *);
extern s32 osEepromLongRead(OSMesgQueue *, u8, u8 *, int);
extern s32 osEepromLongWrite(OSMesgQueue *, u8, u8 *, int);
extern s32 osMotorInit(OSMesgQueue *, OSPfs *, int);
extern s32 osMotorStop(OSPfs *);
extern s32 osMotorStart(OSPfs *);
extern OSPiHandle *osCartRomInit(void);
extern OSPiHandle *osLeoDiskInit(void);
extern OSPiHandle *osDriveRomInit(void);
extern s32 osEPiDeviceType(OSPiHandle *, OSPiInfo *);
extern s32 osEPiRawWriteIo(OSPiHandle *, u32 , u32);
extern s32 osEPiRawReadIo(OSPiHandle *, u32 , u32 *);
extern s32 osEPiRawStartDma(OSPiHandle *, s32 , u32 , void *, u32 );
extern s32 osEPiWriteIo(OSPiHandle *, u32 , u32 );
extern s32 osEPiReadIo(OSPiHandle *, u32 , u32 *);
extern s32 osEPiStartDma(OSPiHandle *, OSIoMesg *, s32);
extern s32 osEPiLinkHandle(OSPiHandle *);
extern void osProfileInit(OSProf *, u32 profcnt);
extern void osProfileStart(u32);
extern void osProfileFlush(void);
extern void osProfileStop(void);
extern s32 osTestHost(void);
extern void osReadHost(void *, u32);
extern void osWriteHost(void *, u32);
extern void osAckRamromRead(void);
extern void osAckRamromWrite(void);
extern void bcopy(const void *, void *, int);
extern int bcmp(const void *, const void *, int);
extern void bzero(void *, int);
extern void osInitialize(void);
extern u32 osGetCount(void);
extern void osExit(void);
extern u32 osGetMemSize(void);
extern int sprintf(char *s, const char *fmt, ...);
extern void osSyncPrintf(const char *fmt, ...);
extern void osAsyncPrintf(const char *fmt, ...);
extern int osSyncGetChars(char *buf);
extern int osAsyncGetChars(char *buf);
typedef struct _Region_s {
 u8 *r_startBufferAddress;
 u8 *r_endAddress;
 s32 r_bufferSize;
 s32 r_bufferCount;
 u16 r_freeList;
 u16 r_alignSize;
} OSRegion;
extern void *osCreateRegion(void *, u32, u32, u32);
extern void *osMalloc(void *);
extern void osFree(void *, void *);
extern s32 osGetRegionBufCount(void *);
extern s32 osGetRegionBufSize(void *);
extern void rmonMain( void * );
extern void rmonPrintf( const char *, ... );
typedef struct {
 u32 type;
 u32 flags;
 u64 *ucode_boot;
 u32 ucode_boot_size;
 u64 *ucode;
 u32 ucode_size;
 u64 *ucode_data;
 u32 ucode_data_size;
 u64 *dram_stack;
 u32 dram_stack_size;
 u64 *output_buff;
 u64 *output_buff_size;
 u64 *data_ptr;
 u32 data_size;
 u64 *yield_data_ptr;
 u32 yield_data_size;
} OSTask_t;
typedef union {
    OSTask_t t;
    long long int force_structure_alignment;
} OSTask;
typedef u32 OSYieldResult;
extern void osSpTaskLoad(OSTask *tp);
extern void osSpTaskStartGo(OSTask *tp);
extern void osSpTaskYield(void);
extern OSYieldResult osSpTaskYielded(OSTask *tp);
typedef struct {
 short ob[3];
 unsigned short flag;
 short tc[2];
 unsigned char cn[4];
} Vtx_t;
typedef struct {
 short ob[3];
 unsigned short flag;
 short tc[2];
 signed char n[3];
 unsigned char a;
} Vtx_tn;
typedef union {
    Vtx_t v;
    Vtx_tn n;
    long long int force_structure_alignment;
} Vtx;
typedef struct {
  void *SourceImagePointer;
  void *TlutPointer;
  short Stride;
  short SubImageWidth;
  short SubImageHeight;
  char SourceImageType;
  char SourceImageBitSize;
  short SourceImageOffsetS;
  short SourceImageOffsetT;
  char dummy[4];
} uSprite_t;
typedef union {
  uSprite_t s;
  long long int force_structure_allignment[3];
} uSprite;
typedef struct {
 unsigned char flag;
 unsigned char v[3];
} Tri;
typedef long Mtx_t[4][4];
typedef union {
    Mtx_t m;
    long long int force_structure_alignment;
} Mtx;
typedef struct {
 short vscale[4];
 short vtrans[4];
} Vp_t;
typedef union {
    Vp_t vp;
    long long int force_structure_alignment;
} Vp;
typedef struct {
  unsigned char col[3];
  char pad1;
  unsigned char colc[3];
  char pad2;
  signed char dir[3];
  char pad3;
} Light_t;
typedef struct {
  unsigned char col[3];
  char pad1;
  unsigned char colc[3];
  char pad2;
} Ambient_t;
typedef struct {
  int x1,y1,x2,y2;
} Hilite_t;
typedef union {
    Light_t l;
    long long int force_structure_alignment[2];
} Light;
typedef union {
    Ambient_t l;
    long long int force_structure_alignment[1];
} Ambient;
typedef struct {
    Ambient a;
    Light l[7];
} Lightsn;
typedef struct {
    Ambient a;
    Light l[1];
} Lights0;
typedef struct {
    Ambient a;
    Light l[1];
} Lights1;
typedef struct {
    Ambient a;
    Light l[2];
} Lights2;
typedef struct {
    Ambient a;
    Light l[3];
} Lights3;
typedef struct {
    Ambient a;
    Light l[4];
} Lights4;
typedef struct {
    Ambient a;
    Light l[5];
} Lights5;
typedef struct {
    Ambient a;
    Light l[6];
} Lights6;
typedef struct {
    Ambient a;
    Light l[7];
} Lights7;
typedef struct {
    Light l[2];
} LookAt;
typedef union {
    Hilite_t h;
    long int force_structure_alignment[4];
} Hilite;
typedef struct {
 int cmd:8;
 unsigned int par:8;
 unsigned int len:16;
 unsigned int addr;
} Gdma;
typedef struct {
  int cmd:8;
  int pad:24;
  Tri tri;
} Gtri;
typedef struct {
  int cmd:8;
  int pad1:24;
  int pad2:24;
  unsigned char param:8;
} Gpopmtx;
typedef struct {
  int cmd:8;
  int pad0:8;
  int mw_index:8;
  int number:8;
  int pad1:8;
  int base:24;
} Gsegment;
typedef struct {
  int cmd:8;
  int pad0:8;
  int sft:8;
  int len:8;
  unsigned int data:32;
} GsetothermodeL;
typedef struct {
  int cmd:8;
  int pad0:8;
  int sft:8;
  int len:8;
  unsigned int data:32;
} GsetothermodeH;
typedef struct {
  unsigned char cmd;
  unsigned char lodscale;
  unsigned char tile;
  unsigned char on;
  unsigned short s;
  unsigned short t;
} Gtexture;
typedef struct {
  int cmd:8;
  int pad:24;
  Tri line;
} Gline3D;
typedef struct {
  int cmd:8;
  int pad1:24;
  short int pad2;
  short int scale;
} Gperspnorm;
typedef struct {
                int cmd:8;
                unsigned int fmt:3;
                unsigned int siz:2;
                unsigned int pad:7;
                unsigned int wd:12;
                unsigned int dram;
} Gsetimg;
typedef struct {
  int cmd:8;
  unsigned int muxs0:24;
  unsigned int muxs1:32;
} Gsetcombine;
typedef struct {
  int cmd:8;
  unsigned char pad;
  unsigned char prim_min_level;
  unsigned char prim_level;
  unsigned long color;
} Gsetcolor;
typedef struct {
  int cmd:8;
  int x0:10;
  int x0frac:2;
  int y0:10;
  int y0frac:2;
  unsigned int pad:8;
  int x1:10;
  int x1frac:2;
  int y1:10;
  int y1frac:2;
} Gfillrect;
typedef struct {
  int cmd:8;
  unsigned int fmt:3;
  unsigned int siz:2;
  unsigned int pad0:1;
  unsigned int line:9;
  unsigned int tmem:9;
  unsigned int pad1:5;
  unsigned int tile:3;
  unsigned int palette:4;
  unsigned int ct:1;
  unsigned int mt:1;
  unsigned int maskt:4;
  unsigned int shiftt:4;
  unsigned int cs:1;
  unsigned int ms:1;
  unsigned int masks:4;
  unsigned int shifts:4;
} Gsettile;
typedef struct {
  int cmd:8;
  unsigned int sl:12;
  unsigned int tl:12;
  int pad:5;
  unsigned int tile:3;
  unsigned int sh:12;
  unsigned int th:12;
} Gloadtile;
typedef Gloadtile Gloadblock;
typedef Gloadtile Gsettilesize;
typedef Gloadtile Gloadtlut;
typedef struct {
  unsigned int cmd:8;
  unsigned int xl:12;
  unsigned int yl:12;
  unsigned int pad1:5;
  unsigned int tile:3;
  unsigned int xh:12;
  unsigned int yh:12;
  unsigned int s:16;
  unsigned int t:16;
  unsigned int dsdx:16;
  unsigned int dtdy:16;
} Gtexrect;
typedef struct {
    unsigned long w0;
    unsigned long w1;
    unsigned long w2;
    unsigned long w3;
} TexRect;
typedef struct {
 unsigned int w0;
 unsigned int w1;
} Gwords;
typedef union {
 Gwords words;
 Gdma dma;
 Gtri tri;
 Gline3D line;
 Gpopmtx popmtx;
 Gsegment segment;
 GsetothermodeH setothermodeH;
 GsetothermodeL setothermodeL;
 Gtexture texture;
 Gperspnorm perspnorm;
 Gsetimg setimg;
 Gsetcombine setcombine;
 Gsetcolor setcolor;
 Gfillrect fillrect;
 Gsettile settile;
 Gloadtile loadtile;
 Gsettilesize settilesize;
 Gloadtlut loadtlut;
        long long int force_structure_alignment;
} Gfx;
typedef struct {
   unsigned int cmd:8;
 unsigned int flags:8;
 unsigned int gain:16;
 unsigned int addr;
} Aadpcm;
typedef struct {
   unsigned int cmd:8;
 unsigned int flags:8;
 unsigned int gain:16;
 unsigned int addr;
} Apolef;
typedef struct {
   unsigned int cmd:8;
 unsigned int flags:8;
 unsigned int pad1:16;
 unsigned int addr;
} Aenvelope;
typedef struct {
   unsigned int cmd:8;
 unsigned int pad1:8;
 unsigned int dmem:16;
 unsigned int pad2:16;
 unsigned int count:16;
} Aclearbuff;
typedef struct {
   unsigned int cmd:8;
 unsigned int pad1:8;
 unsigned int pad2:16;
 unsigned int inL:16;
        unsigned int inR:16;
} Ainterleave;
typedef struct {
   unsigned int cmd:8;
 unsigned int pad1:24;
 unsigned int addr;
} Aloadbuff;
typedef struct {
   unsigned int cmd:8;
 unsigned int flags:8;
 unsigned int pad1:16;
 unsigned int addr;
} Aenvmixer;
typedef struct {
   unsigned int cmd:8;
 unsigned int flags:8;
 unsigned int gain:16;
 unsigned int dmemi:16;
 unsigned int dmemo:16;
} Amixer;
typedef struct {
   unsigned int cmd:8;
 unsigned int flags:8;
 unsigned int dmem2:16;
 unsigned int addr;
} Apan;
typedef struct {
   unsigned int cmd:8;
 unsigned int flags:8;
 unsigned int pitch:16;
 unsigned int addr;
} Aresample;
typedef struct {
   unsigned int cmd:8;
 unsigned int flags:8;
 unsigned int pad1:16;
 unsigned int addr;
} Areverb;
typedef struct {
   unsigned int cmd:8;
 unsigned int pad1:24;
 unsigned int addr;
} Asavebuff;
typedef struct {
   unsigned int cmd:8;
 unsigned int pad1:24;
 unsigned int pad2:2;
 unsigned int number:4;
 unsigned int base:24;
} Asegment;
typedef struct {
   unsigned int cmd:8;
 unsigned int flags:8;
 unsigned int dmemin:16;
 unsigned int dmemout:16;
 unsigned int count:16;
} Asetbuff;
typedef struct {
   unsigned int cmd:8;
 unsigned int flags:8;
 unsigned int vol:16;
 unsigned int voltgt:16;
 unsigned int volrate:16;
} Asetvol;
typedef struct {
    unsigned int cmd:8;
    unsigned int pad1:8;
    unsigned int dmemin:16;
    unsigned int dmemout:16;
    unsigned int count:16;
} Admemmove;
typedef struct {
    unsigned int cmd:8;
    unsigned int pad1:8;
    unsigned int count:16;
    unsigned int addr;
} Aloadadpcm;
typedef struct {
    unsigned int cmd:8;
    unsigned int pad1:8;
    unsigned int pad2:16;
    unsigned int addr;
} Asetloop;
typedef struct {
 unsigned int w0;
 unsigned int w1;
} Awords;
typedef union {
 Awords words;
 Aadpcm adpcm;
        Apolef polef;
 Aclearbuff clearbuff;
 Aenvelope envelope;
        Ainterleave interleave;
 Aloadbuff loadbuff;
        Aenvmixer envmixer;
 Aresample resample;
 Areverb reverb;
 Asavebuff savebuff;
 Asegment segment;
 Asetbuff setbuff;
 Asetvol setvol;
        Admemmove dmemmove;
        Aloadadpcm loadadpcm;
        Amixer mixer;
        Asetloop setloop;
        long long int force_union_align;
} Acmd;
typedef short ADPCM_STATE[16];
typedef short POLEF_STATE[4];
typedef short RESAMPLE_STATE[16];
typedef short ENVMIX_STATE[40];
typedef s32 ALMicroTime;
typedef u8 ALPan;
typedef struct ALLink_s {
    struct ALLink_s *next;
    struct ALLink_s *prev;
} ALLink;
void alUnlink(ALLink *element);
void alLink(ALLink *element, ALLink *after);
typedef s32 (*ALDMAproc)(s32 addr, s32 len, void *state);
typedef ALDMAproc (*ALDMANew)(void *state);
void alCopy(void *src, void *dest, s32 len);
typedef struct {
    u8 *base;
    u8 *cur;
    s32 len;
    s32 count;
} ALHeap;
void alHeapInit(ALHeap *hp, u8 *base, s32 len);
void *alHeapDBAlloc(u8 *file, s32 line, ALHeap *hp, s32 num, s32 size);
s32 alHeapCheck(ALHeap *hp);
typedef u8 ALFxId;
typedef void *ALFxRef;
enum {AL_ADPCM_WAVE = 0,
         AL_RAW16_WAVE};
typedef struct {
    s32 order;
    s32 npredictors;
    s16 book[1];
} ALADPCMBook;
typedef struct {
    u32 start;
    u32 end;
    u32 count;
    ADPCM_STATE state;
} ALADPCMloop;
typedef struct {
    u32 start;
    u32 end;
    u32 count;
} ALRawLoop;
typedef struct {
    ALMicroTime attackTime;
    ALMicroTime decayTime;
    ALMicroTime releaseTime;
    u8 attackVolume;
    u8 decayVolume;
} ALEnvelope;
typedef struct {
    u8 velocityMin;
    u8 velocityMax;
    u8 keyMin;
    u8 keyMax;
    u8 keyBase;
    s8 detune;
} ALKeyMap;
typedef struct {
    ALADPCMloop *loop;
    ALADPCMBook *book;
} ALADPCMWaveInfo;
typedef struct {
    ALRawLoop *loop;
} ALRAWWaveInfo;
typedef struct ALWaveTable_s {
    u8 *base;
    s32 len;
    u8 type;
    u8 flags;
    union {
        ALADPCMWaveInfo adpcmWave;
        ALRAWWaveInfo rawWave;
    } waveInfo;
} ALWaveTable;
typedef struct ALSound_s {
    ALEnvelope *envelope;
    ALKeyMap *keyMap;
    ALWaveTable *wavetable;
    ALPan samplePan;
    u8 sampleVolume;
    u8 flags;
} ALSound;
typedef struct {
    u8 volume;
    ALPan pan;
    u8 priority;
    u8 flags;
    u8 tremType;
    u8 tremRate;
    u8 tremDepth;
    u8 tremDelay;
    u8 vibType;
    u8 vibRate;
    u8 vibDepth;
    u8 vibDelay;
    s16 bendRange;
    s16 soundCount;
    ALSound *soundArray[1];
} ALInstrument;
typedef struct ALBank_s {
    s16 instCount;
    u8 flags;
    u8 pad;
    s32 sampleRate;
    ALInstrument *percussion;
    ALInstrument *instArray[1];
} ALBank;
typedef struct {
    s16 revision;
    s16 bankCount;
    ALBank *bankArray[1];
} ALBankFile;
void alBnkfNew(ALBankFile *f, u8 *table);
typedef struct {
    u8 *offset;
    s32 len;
} ALSeqData;
typedef struct {
    s16 revision;
    s16 seqCount;
    ALSeqData seqArray[1];
} ALSeqFile;
void alSeqFileNew(ALSeqFile *f, u8 *base);
typedef ALMicroTime (*ALVoiceHandler)(void *);
typedef struct {
    s32 maxVVoices;
    s32 maxPVoices;
    s32 maxUpdates;
    s32 maxFXbusses;
    void *dmaproc;
    ALHeap *heap;
    s32 outputRate;
    ALFxId fxType;
    s32 *params;
} ALSynConfig;
typedef struct ALPlayer_s {
    struct ALPlayer_s *next;
    void *clientData;
    ALVoiceHandler handler;
    ALMicroTime callTime;
    s32 samplesLeft;
} ALPlayer;
typedef struct ALVoice_s {
    ALLink node;
    struct PVoice_s *pvoice;
    ALWaveTable *table;
    void *clientPrivate;
    s16 state;
    s16 priority;
    s16 fxBus;
    s16 unityPitch;
} ALVoice;
typedef struct ALVoiceConfig_s {
    s16 priority;
    s16 fxBus;
    u8 unityPitch;
} ALVoiceConfig;
typedef struct {
    ALPlayer *head;
    ALLink pFreeList;
    ALLink pAllocList;
    ALLink pLameList;
    s32 paramSamples;
    s32 curSamples;
    ALDMANew dma;
    ALHeap *heap;
    struct ALParam_s *paramList;
    struct ALMainBus_s *mainBus;
    struct ALAuxBus_s *auxBus;
    struct ALFilter_s *outputFilter;
    s32 numPVoices;
    s32 maxAuxBusses;
    s32 outputRate;
    s32 maxOutSamples;
} ALSynth;
void alSynNew(ALSynth *s, ALSynConfig *config);
void alSynDelete(ALSynth *s);
void alSynAddPlayer(ALSynth *s, ALPlayer *client);
void alSynRemovePlayer(ALSynth *s, ALPlayer *client);
s32 alSynAllocVoice(ALSynth *s, ALVoice *v, ALVoiceConfig *vc);
void alSynFreeVoice(ALSynth *s, ALVoice *voice);
void alSynStartVoice(ALSynth *s, ALVoice *voice, ALWaveTable *w);
void alSynStartVoiceParams(ALSynth *s, ALVoice *voice, ALWaveTable *w,
                              f32 pitch, s16 vol, ALPan pan, u8 fxmix,
                              ALMicroTime t);
void alSynStopVoice(ALSynth *s, ALVoice *voice);
void alSynSetVol(ALSynth *s, ALVoice *v, s16 vol, ALMicroTime delta);
void alSynSetPitch(ALSynth *s, ALVoice *voice, f32 ratio);
void alSynSetPan(ALSynth *s, ALVoice *voice, ALPan pan);
void alSynSetFXMix(ALSynth *s, ALVoice *voice, u8 fxmix);
void alSynSetPriority(ALSynth *s, ALVoice *voice, s16 priority);
s16 alSynGetPriority(ALSynth *s, ALVoice *voice);
ALFxRef *alSynAllocFX(ALSynth *s, s16 bus, ALSynConfig *c, ALHeap *hp);
ALFxRef alSynGetFXRef(ALSynth *s, s16 bus, s16 index);
void alSynFreeFX(ALSynth *s, ALFxRef *fx);
void alSynSetFXParam(ALSynth *s, ALFxRef fx, s16 paramID, void *param);
typedef struct {
    ALSynth drvr;
} ALGlobals;
extern ALGlobals *alGlobals;
void alInit(ALGlobals *glob, ALSynConfig *c);
void alClose(ALGlobals *glob);
Acmd *alAudioFrame(Acmd *cmdList, s32 *cmdLen, s16 *outBuf, s32 outLen);
enum ALMsg {
    AL_SEQ_REF_EVT,
    AL_SEQ_MIDI_EVT,
    AL_SEQP_MIDI_EVT,
    AL_TEMPO_EVT,
    AL_SEQ_END_EVT,
    AL_NOTE_END_EVT,
    AL_SEQP_ENV_EVT,
    AL_SEQP_META_EVT,
    AL_SEQP_PROG_EVT,
    AL_SEQP_API_EVT,
    AL_SEQP_VOL_EVT,
    AL_SEQP_LOOP_EVT,
    AL_SEQP_PRIORITY_EVT,
    AL_SEQP_SEQ_EVT,
    AL_SEQP_BANK_EVT,
    AL_SEQP_PLAY_EVT,
    AL_SEQP_STOP_EVT,
    AL_SEQP_STOPPING_EVT,
    AL_TRACK_END,
    AL_CSP_LOOPSTART,
    AL_CSP_LOOPEND,
    AL_CSP_NOTEOFF_EVT,
    AL_TREM_OSC_EVT,
    AL_VIB_OSC_EVT
};
enum AL_MIDIstatus {
    AL_MIDI_ChannelMask = 0x0F,
    AL_MIDI_StatusMask = 0xF0,
    AL_MIDI_ChannelVoice = 0x80,
    AL_MIDI_NoteOff = 0x80,
    AL_MIDI_NoteOn = 0x90,
    AL_MIDI_PolyKeyPressure = 0xA0,
    AL_MIDI_ControlChange = 0xB0,
    AL_MIDI_ChannelModeSelect = 0xB0,
    AL_MIDI_ProgramChange = 0xC0,
    AL_MIDI_ChannelPressure = 0xD0,
    AL_MIDI_PitchBendChange = 0xE0,
    AL_MIDI_SysEx = 0xF0,
    AL_MIDI_SystemCommon = 0xF1,
    AL_MIDI_TimeCodeQuarterFrame = 0xF1,
    AL_MIDI_SongPositionPointer = 0xF2,
    AL_MIDI_SongSelect = 0xF3,
    AL_MIDI_Undefined1 = 0xF4,
    AL_MIDI_Undefined2 = 0xF5,
    AL_MIDI_TuneRequest = 0xF6,
    AL_MIDI_EOX = 0xF7,
    AL_MIDI_SystemRealTime = 0xF8,
    AL_MIDI_TimingClock = 0xF8,
    AL_MIDI_Undefined3 = 0xF9,
    AL_MIDI_Start = 0xFA,
    AL_MIDI_Continue = 0xFB,
    AL_MIDI_Stop = 0xFC,
    AL_MIDI_Undefined4 = 0xFD,
    AL_MIDI_ActiveSensing = 0xFE,
    AL_MIDI_SystemReset = 0xFF,
    AL_MIDI_Meta = 0xFF
};
enum AL_MIDIctrl {
    AL_MIDI_VOLUME_CTRL = 0x07,
    AL_MIDI_PAN_CTRL = 0x0A,
    AL_MIDI_PRIORITY_CTRL = 0x10,
    AL_MIDI_FX_CTRL_0 = 0x14,
    AL_MIDI_FX_CTRL_1 = 0x15,
    AL_MIDI_FX_CTRL_2 = 0x16,
    AL_MIDI_FX_CTRL_3 = 0x17,
    AL_MIDI_FX_CTRL_4 = 0x18,
    AL_MIDI_FX_CTRL_5 = 0x19,
    AL_MIDI_FX_CTRL_6 = 0x1A,
    AL_MIDI_FX_CTRL_7 = 0x1B,
    AL_MIDI_FX_CTRL_8 = 0x1C,
    AL_MIDI_FX_CTRL_9 = 0x1D,
    AL_MIDI_SUSTAIN_CTRL = 0x40,
    AL_MIDI_FX1_CTRL = 0x5B,
    AL_MIDI_FX3_CTRL = 0x5D
};
enum AL_MIDImeta {
    AL_MIDI_META_TEMPO = 0x51,
    AL_MIDI_META_EOT = 0x2f
};
typedef struct {
    u8 *curPtr;
    s32 lastTicks;
    s32 curTicks;
    s16 lastStatus;
} ALSeqMarker;
typedef struct {
    s32 ticks;
    u8 status;
    u8 byte1;
    u8 byte2;
    u32 duration;
} ALMIDIEvent;
typedef struct {
    s32 ticks;
    u8 status;
    u8 type;
    u8 len;
    u8 byte1;
    u8 byte2;
    u8 byte3;
} ALTempoEvent;
typedef struct {
    s32 ticks;
    u8 status;
    u8 type;
    u8 len;
} ALEndEvent;
typedef struct {
    struct ALVoice_s *voice;
} ALNoteEvent;
typedef struct {
    struct ALVoice_s *voice;
    ALMicroTime delta;
    u8 vol;
} ALVolumeEvent;
typedef struct {
    s16 vol;
} ALSeqpVolEvent;
typedef struct {
    ALSeqMarker *start;
    ALSeqMarker *end;
    s32 count;
} ALSeqpLoopEvent;
typedef struct {
    u8 chan;
    u8 priority;
} ALSeqpPriorityEvent;
typedef struct {
    void *seq;
} ALSeqpSeqEvent;
typedef struct {
    ALBank *bank;
} ALSeqpBankEvent;
typedef struct {
    struct ALVoiceState_s *vs;
    void *oscState;
    u8 chan;
} ALOscEvent;
typedef struct {
    s16 type;
    union {
        ALMIDIEvent midi;
        ALTempoEvent tempo;
        ALEndEvent end;
        ALNoteEvent note;
        ALVolumeEvent vol;
        ALSeqpLoopEvent loop;
        ALSeqpVolEvent spvol;
 ALSeqpPriorityEvent sppriority;
 ALSeqpSeqEvent spseq;
 ALSeqpBankEvent spbank;
        ALOscEvent osc;
    } msg;
} ALEvent;
typedef struct {
    ALLink node;
    ALMicroTime delta;
    ALEvent evt;
} ALEventListItem;
typedef struct {
    ALLink freeList;
    ALLink allocList;
    s32 eventCount;
} ALEventQueue;
void alEvtqNew(ALEventQueue *evtq, ALEventListItem *items,
                          s32 itemCount);
ALMicroTime alEvtqNextEvent(ALEventQueue *evtq, ALEvent *evt);
void alEvtqPostEvent(ALEventQueue *evtq, ALEvent *evt,
                                ALMicroTime delta);
void alEvtqFlush(ALEventQueue *evtq);
void alEvtqFlushType(ALEventQueue *evtq, s16 type);
typedef struct ALVoiceState_s {
    struct ALVoiceState_s *next;
    ALVoice voice;
    ALSound *sound;
    ALMicroTime envEndTime;
    f32 pitch;
    f32 vibrato;
    u8 envGain;
    u8 channel;
    u8 key;
    u8 velocity;
    u8 envPhase;
    u8 phase;
    u8 tremelo;
    u8 flags;
} ALVoiceState;
typedef struct {
    ALInstrument *instrument;
    s16 bendRange;
    ALFxId fxId;
    ALPan pan;
    u8 priority;
    u8 vol;
    u8 fxmix;
    u8 sustain;
    f32 pitchBend;
} ALChanState;
typedef struct ALSeq_s {
    u8 *base;
    u8 *trackStart;
    u8 *curPtr;
    s32 lastTicks;
    s32 len;
    f32 qnpt;
    s16 division;
    s16 lastStatus;
} ALSeq;
typedef struct {
    u32 trackOffset[16];
    u32 division;
} ALCMidiHdr;
typedef struct ALCSeq_s {
    ALCMidiHdr *base;
    u32 validTracks;
    f32 qnpt;
    u32 lastTicks;
    u32 lastDeltaTicks;
    u32 deltaFlag;
    u8 *curLoc[16];
    u8 *curBUPtr[16];
    u8 curBULen[16];
    u8 lastStatus[16];
    u32 evtDeltaTicks[16];
} ALCSeq;
typedef struct {
    u32 validTracks;
    s32 lastTicks;
    u32 lastDeltaTicks;
    u8 *curLoc[16];
    u8 *curBUPtr[16];
    u8 curBULen[16];
    u8 lastStatus[16];
    u32 evtDeltaTicks[16];
} ALCSeqMarker;
typedef struct {
    s32 maxVoices;
    s32 maxEvents;
    u8 maxChannels;
    u8 debugFlags;
    ALHeap *heap;
    void *initOsc;
    void *updateOsc;
    void *stopOsc;
} ALSeqpConfig;
typedef ALMicroTime (*ALOscInit)(void **oscState,f32 *initVal, u8 oscType,
                                   u8 oscRate, u8 oscDepth, u8 oscDelay);
typedef ALMicroTime (*ALOscUpdate)(void *oscState, f32 *updateVal);
typedef void (*ALOscStop)(void *oscState);
typedef struct {
    ALPlayer node;
    ALSynth *drvr;
    ALSeq *target;
    ALMicroTime curTime;
    ALBank *bank;
    s32 uspt;
    s32 nextDelta;
    s32 state;
    u16 chanMask;
    s16 vol;
    u8 maxChannels;
    u8 debugFlags;
    ALEvent nextEvent;
    ALEventQueue evtq;
    ALMicroTime frameTime;
    ALChanState *chanState;
    ALVoiceState *vAllocHead;
    ALVoiceState *vAllocTail;
    ALVoiceState *vFreeList;
    ALOscInit initOsc;
    ALOscUpdate updateOsc;
    ALOscStop stopOsc;
    ALSeqMarker *loopStart;
    ALSeqMarker *loopEnd;
    s32 loopCount;
} ALSeqPlayer;
typedef struct {
    ALPlayer node;
    ALSynth *drvr;
    ALCSeq *target;
    ALMicroTime curTime;
    ALBank *bank;
    s32 uspt;
    s32 nextDelta;
    s32 state;
    u16 chanMask;
    s16 vol;
    u8 maxChannels;
    u8 debugFlags;
    ALEvent nextEvent;
    ALEventQueue evtq;
    ALMicroTime frameTime;
    ALChanState *chanState;
    ALVoiceState *vAllocHead;
    ALVoiceState *vAllocTail;
    ALVoiceState *vFreeList;
    ALOscInit initOsc;
    ALOscUpdate updateOsc;
    ALOscStop stopOsc;
} ALCSPlayer;
void alSeqNew(ALSeq *seq, u8 *ptr, s32 len);
void alSeqNextEvent(ALSeq *seq, ALEvent *event);
s32 alSeqGetTicks(ALSeq *seq);
f32 alSeqTicksToSec(ALSeq *seq, s32 ticks, u32 tempo);
u32 alSeqSecToTicks(ALSeq *seq, f32 sec, u32 tempo);
void alSeqNewMarker(ALSeq *seq, ALSeqMarker *m, u32 ticks);
void alSeqSetLoc(ALSeq *seq, ALSeqMarker *marker);
void alSeqGetLoc(ALSeq *seq, ALSeqMarker *marker);
void alCSeqNew(ALCSeq *seq, u8 *ptr);
void alCSeqNextEvent(ALCSeq *seq,ALEvent *evt);
s32 alCSeqGetTicks(ALCSeq *seq);
f32 alCSeqTicksToSec(ALCSeq *seq, s32 ticks, u32 tempo);
u32 alCSeqSecToTicks(ALCSeq *seq, f32 sec, u32 tempo);
void alCSeqNewMarker(ALCSeq *seq, ALCSeqMarker *m, u32 ticks);
void alCSeqSetLoc(ALCSeq *seq, ALCSeqMarker *marker);
void alCSeqGetLoc(ALCSeq *seq, ALCSeqMarker *marker);
f32 alCents2Ratio(s32 cents);
void alSeqpNew(ALSeqPlayer *seqp, ALSeqpConfig *config);
void alSeqpDelete(ALSeqPlayer *seqp);
void alSeqpSetSeq(ALSeqPlayer *seqp, ALSeq *seq);
ALSeq *alSeqpGetSeq(ALSeqPlayer *seqp);
void alSeqpPlay(ALSeqPlayer *seqp);
void alSeqpStop(ALSeqPlayer *seqp);
s32 alSeqpGetState(ALSeqPlayer *seqp);
void alSeqpSetBank(ALSeqPlayer *seqp, ALBank *b);
void alSeqpSetTempo(ALSeqPlayer *seqp, s32 tempo);
s32 alSeqpGetTempo(ALSeqPlayer *seqp);
s16 alSeqpGetVol(ALSeqPlayer *seqp);
void alSeqpSetVol(ALSeqPlayer *seqp, s16 vol);
void alSeqpLoop(ALSeqPlayer *seqp, ALSeqMarker *start, ALSeqMarker *end, s32 count);
void alSeqpSetChlProgram(ALSeqPlayer *seqp, u8 chan, u8 prog);
s32 alSeqpGetChlProgram(ALSeqPlayer *seqp, u8 chan);
void alSeqpSetChlFXMix(ALSeqPlayer *seqp, u8 chan, u8 fxmix);
u8 alSeqpGetChlFXMix(ALSeqPlayer *seqp, u8 chan);
void alSeqpSetChlVol(ALSeqPlayer *seqp, u8 chan, u8 vol);
u8 alSeqpGetChlVol(ALSeqPlayer *seqp, u8 chan);
void alSeqpSetChlPan(ALSeqPlayer *seqp, u8 chan, ALPan pan);
ALPan alSeqpGetChlPan(ALSeqPlayer *seqp, u8 chan);
void alSeqpSetChlPriority(ALSeqPlayer *seqp, u8 chan, u8 priority);
u8 alSeqpGetChlPriority(ALSeqPlayer *seqp, u8 chan);
void alSeqpSendMidi(ALSeqPlayer *seqp, s32 ticks, u8 status, u8 byte1, u8 byte2);
void alCSPNew(ALCSPlayer *seqp, ALSeqpConfig *config);
void alCSPDelete(ALCSPlayer *seqp);
void alCSPSetSeq(ALCSPlayer *seqp, ALCSeq *seq);
ALCSeq *alCSPGetSeq(ALCSPlayer *seqp);
void alCSPPlay(ALCSPlayer *seqp);
void alCSPStop(ALCSPlayer *seqp);
s32 alCSPGetState(ALCSPlayer *seqp);
void alCSPSetBank(ALCSPlayer *seqp, ALBank *b);
void alCSPSetTempo(ALCSPlayer *seqp, s32 tempo);
s32 alCSPGetTempo(ALCSPlayer *seqp);
s16 alCSPGetVol(ALCSPlayer *seqp);
void alCSPSetVol(ALCSPlayer *seqp, s16 vol);
void alCSPSetChlProgram(ALCSPlayer *seqp, u8 chan, u8 prog);
s32 alCSPGetChlProgram(ALCSPlayer *seqp, u8 chan);
void alCSPSetChlFXMix(ALCSPlayer *seqp, u8 chan, u8 fxmix);
u8 alCSPGetChlFXMix(ALCSPlayer *seqp, u8 chan);
void alCSPSetChlPan(ALCSPlayer *seqp, u8 chan, ALPan pan);
ALPan alCSPGetChlPan(ALCSPlayer *seqp, u8 chan);
void alCSPSetChlVol(ALCSPlayer *seqp, u8 chan, u8 vol);
u8 alCSPGetChlVol(ALCSPlayer *seqp, u8 chan);
void alCSPSetChlPriority(ALCSPlayer *seqp, u8 chan, u8 priority);
u8 alCSPGetChlPriority(ALCSPlayer *seqp, u8 chan);
void alCSPSendMidi(ALCSPlayer *seqp, s32 ticks, u8 status,
                       u8 byte1, u8 byte2);
typedef struct {
    s32 maxSounds;
    s32 maxEvents;
    ALHeap *heap;
} ALSndpConfig;
typedef struct {
    ALPlayer node;
    ALEventQueue evtq;
    ALEvent nextEvent;
    ALSynth *drvr;
    s32 target;
    void *sndState;
    s32 maxSounds;
    ALMicroTime frameTime;
    ALMicroTime nextDelta;
    ALMicroTime curTime;
} ALSndPlayer;
typedef s16 ALSndId;
void alSndpNew(ALSndPlayer *sndp, ALSndpConfig *c);
void alSndpDelete(ALSndPlayer *sndp);
ALSndId alSndpAllocate(ALSndPlayer *sndp, ALSound *sound);
void alSndpDeallocate(ALSndPlayer *sndp, ALSndId id);
void alSndpSetSound(ALSndPlayer *sndp, ALSndId id);
ALSndId alSndpGetSound(ALSndPlayer *sndp);
void alSndpPlay(ALSndPlayer *sndp);
void alSndpPlayAt(ALSndPlayer *sndp, ALMicroTime delta);
void alSndpStop(ALSndPlayer *sndp);
void alSndpSetVol(ALSndPlayer *sndp, s16 vol);
void alSndpSetPitch(ALSndPlayer *sndp, f32 pitch);
void alSndpSetPan(ALSndPlayer *sndp, ALPan pan);
void alSndpSetPriority(ALSndPlayer *sndp, ALSndId id, u8 priority);
void alSndpSetFXMix(ALSndPlayer *sndp, u8 mix);
s32 alSndpGetState(ALSndPlayer *sndp);
typedef struct {
 unsigned char *base;
 int fmt, siz;
 int xsize, ysize;
 int lsize;
 int addr;
 int w, h;
 int s, t;
} Image;
typedef struct {
 float col[3];
 float pos[3];
 float a1, a2;
} PositionalLight;
extern int guLoadTextureBlockMipMap(Gfx **glist, unsigned char *tbuf, Image *im,
  unsigned char startTile, unsigned char pal, unsigned char cms,
  unsigned char cmt, unsigned char masks, unsigned char maskt,
  unsigned char shifts, unsigned char shiftt, unsigned char cfs,
  unsigned char cft);
extern int guGetDPLoadTextureTileSz (int ult, int lrt);
extern void guDPLoadTextureTile (Gfx *glistp, void *timg,
   int texl_fmt, int texl_size,
   int img_width, int img_height,
   int uls, int ult, int lrs, int lrt,
   int palette,
   int cms, int cmt,
   int masks, int maskt,
   int shifts, int shiftt);
extern void guMtxIdent(Mtx *m);
extern void guMtxIdentF(float mf[4][4]);
extern void guOrtho(Mtx *m, float l, float r, float b, float t,
      float n, float f, float scale);
extern void guOrthoF(float mf[4][4], float l, float r, float b, float t,
       float n, float f, float scale);
extern void guFrustum(Mtx *m, float l, float r, float b, float t,
        float n, float f, float scale);
extern void guFrustumF(float mf[4][4], float l, float r, float b, float t,
         float n, float f, float scale);
extern void guPerspective(Mtx *m, u16 *perspNorm, float fovy,
     float aspect, float near, float far, float scale);
extern void guPerspectiveF(float mf[4][4], u16 *perspNorm, float fovy,
      float aspect, float near, float far, float scale);
extern void guLookAt(Mtx *m,
   float xEye, float yEye, float zEye,
   float xAt, float yAt, float zAt,
   float xUp, float yUp, float zUp);
extern void guLookAtF(float mf[4][4], float xEye, float yEye, float zEye,
        float xAt, float yAt, float zAt,
        float xUp, float yUp, float zUp);
extern void guLookAtReflect(Mtx *m, LookAt *l,
   float xEye, float yEye, float zEye,
   float xAt, float yAt, float zAt,
   float xUp, float yUp, float zUp);
extern void guLookAtReflectF(float mf[4][4], LookAt *l,
        float xEye, float yEye, float zEye,
        float xAt, float yAt, float zAt,
        float xUp, float yUp, float zUp);
extern void guLookAtHilite(Mtx *m, LookAt *l, Hilite *h,
                float xEye, float yEye, float zEye,
                float xAt, float yAt, float zAt,
                float xUp, float yUp, float zUp,
                float xl1, float yl1, float zl1,
                float xl2, float yl2, float zl2,
  int twidth, int theight);
extern void guLookAtHiliteF(float mf[4][4], LookAt *l, Hilite *h,
  float xEye, float yEye, float zEye,
  float xAt, float yAt, float zAt,
  float xUp, float yUp, float zUp,
  float xl1, float yl1, float zl1,
  float xl2, float yl2, float zl2,
  int twidth, int theight);
extern void guLookAtStereo(Mtx *m,
   float xEye, float yEye, float zEye,
   float xAt, float yAt, float zAt,
   float xUp, float yUp, float zUp,
   float eyedist);
extern void guLookAtStereoF(float mf[4][4],
         float xEye, float yEye, float zEye,
         float xAt, float yAt, float zAt,
         float xUp, float yUp, float zUp,
   float eyedist);
extern void guRotate(Mtx *m, float a, float x, float y, float z);
extern void guRotateF(float mf[4][4], float a, float x, float y, float z);
extern void guRotateRPY(Mtx *m, float r, float p, float y);
extern void guRotateRPYF(float mf[4][4], float r, float p, float h);
extern void guAlign(Mtx *m, float a, float x, float y, float z);
extern void guAlignF(float mf[4][4], float a, float x, float y, float z);
extern void guScale(Mtx *m, float x, float y, float z);
extern void guScaleF(float mf[4][4], float x, float y, float z);
extern void guTranslate(Mtx *m, float x, float y, float z);
extern void guTranslateF(float mf[4][4], float x, float y, float z);
extern void guPosition(Mtx *m, float r, float p, float h, float s,
         float x, float y, float z);
extern void guPositionF(float mf[4][4], float r, float p, float h, float s,
   float x, float y, float z);
extern void guMtxF2L(float mf[4][4], Mtx *m);
extern void guMtxL2F(float mf[4][4], Mtx *m);
extern void guMtxCatF(float m[4][4], float n[4][4], float r[4][4]);
extern void guMtxCatL(Mtx *m, Mtx *n, Mtx *res);
extern void guMtxXFMF(float mf[4][4], float x, float y, float z,
        float *ox, float *oy, float *oz);
extern void guMtxXFML(Mtx *m, float x, float y, float z,
        float *ox, float *oy, float *oz);
extern void guNormalize(float *x, float *y, float *z);
void guPosLight(PositionalLight *pl, Light *l,
                float xOb, float yOb, float zOb);
void guPosLightHilite(PositionalLight *pl1, PositionalLight *pl2,
                Light *l1, Light *l2,
                LookAt *l, Hilite *h,
                float xEye, float yEye, float zEye,
                float xOb, float yOb, float zOb,
                float xUp, float yUp, float zUp,
                int twidth, int theight);
extern int guRandom(void);
extern float sinf(float angle);
extern float cosf(float angle);
extern signed short sins (unsigned short angle);
extern signed short coss (unsigned short angle);
extern float sqrtf(float value);
extern void guParseRdpDL(u64 *rdp_dl, u64 nbytes, u8 flags);
extern void guParseString(char *StringPointer, u64 nbytes);
extern void
guBlinkRdpDL(u64 *rdp_dl_in, u64 nbytes_in,
             u64 *rdp_dl_out, u64 *nbytes_out,
             u32 x, u32 y, u32 radius,
             u8 red, u8 green, u8 blue,
             u8 flags);
extern void guParseGbiDL(u64 *gbi_dl, u32 nbytes, u8 flags);
extern void guDumpGbiDL(OSTask *tp,u8 flags);
typedef struct {
    int dataSize;
    int dlType;
    int flags;
    u32 paddr;
} guDLPrintCB;
void guSprite2DInit(uSprite *SpritePointer,
      void *SourceImagePointer,
      void *TlutPointer,
      int Stride,
      int SubImageWidth,
      int SubImageHeight,
      int SourceImageType,
      int SourceImageBitSize,
      int SourceImageOffsetS,
      int SourceImageOffsetT);
typedef struct {
    long type;
    long length;
    long magic;
    char userdata[(((4096)*6)-(3*sizeof(long)))];
} RamRomBuffer;
struct bitmap {
 s16 width;
 s16 width_img;
 s16 s;
 s16 t;
 void *buf;
 s16 actualHeight;
 s16 LUToffset;
};
typedef struct bitmap Bitmap;
struct sprite {
 s16 x,y;
 s16 width, height;
 f32 scalex, scaley;
 s16 expx, expy;
 u16 attr;
 s16 zdepth;
 u8 red;
 u8 green;
 u8 blue;
 u8 alpha;
 s16 startTLUT;
 s16 nTLUT;
 int *LUT;
 s16 istart;
 s16 istep;
 s16 nbitmaps;
 s16 ndisplist;
 s16 bmheight;
 s16 bmHreal;
 u8 bmfmt;
 u8 bmsiz;
 Bitmap *bitmap;
 Gfx *rsp_dl;
 Gfx *rsp_dl_next;
 s16 frac_s,
  frac_t;
};
typedef struct sprite Sprite;
void spSetAttribute (Sprite *sp, s32 attr);
void spClearAttribute (Sprite *sp, s32 attr);
void spMove (Sprite *sp, s32 x, s32 y);
void spScale (Sprite *sp, f32 sx, f32 sy);
void spSetZ (Sprite *sp, s32 z );
void spColor (Sprite *sp, u8 red, u8 green, u8 blue, u8 alpha);
Gfx *spDraw (Sprite *sp);
void spInit( Gfx **glistp );
void spScissor( s32 xmin, s32 xmax, s32 ymin, s32 ymax );
void spFinish( Gfx **glistp );
extern long long int rspbootTextStart[], rspbootTextEnd[];
extern long long int gspFast3DTextStart[], gspFast3DTextEnd[];
extern long long int gspFast3DDataStart[], gspFast3DDataEnd[];
extern long long int gspFast3D_dramTextStart[], gspFast3D_dramTextEnd[];
extern long long int gspFast3D_dramDataStart[], gspFast3D_dramDataEnd[];
extern long long int gspFast3D_fifoTextStart[], gspFast3D_fifoTextEnd[];
extern long long int gspFast3D_fifoDataStart[], gspFast3D_fifoDataEnd[];
extern long long int gspF3DNoNTextStart[], gspF3DNoNTextEnd[];
extern long long int gspF3DNoNDataStart[], gspF3DNoNDataEnd[];
extern long long int gspF3DNoN_dramTextStart[];
extern long long int gspF3DNoN_dramTextEnd[];
extern long long int gspF3DNoN_dramDataStart[];
extern long long int gspF3DNoN_dramDataEnd[];
extern long long int gspF3DNoN_fifoTextStart[];
extern long long int gspF3DNoN_fifoTextEnd[];
extern long long int gspF3DNoN_fifoDataStart[];
extern long long int gspF3DNoN_fifoDataEnd[];
extern long long int gspLine3DTextStart[], gspLine3DTextEnd[];
extern long long int gspLine3DDataStart[], gspLine3DDataEnd[];
extern long long int gspLine3D_dramTextStart[], gspLine3D_dramTextEnd[];
extern long long int gspLine3D_dramDataStart[], gspLine3D_dramDataEnd[];
extern long long int gspLine3D_fifoTextStart[], gspLine3D_fifoTextEnd[];
extern long long int gspLine3D_fifoDataStart[], gspLine3D_fifoDataEnd[];
extern long long int gspSprite2DTextStart[], gspSprite2DTextEnd[];
extern long long int gspSprite2DDataStart[], gspSprite2DDataEnd[];
extern long long int gspSprite2D_dramTextStart[], gspSprite2D_dramTextEnd[];
extern long long int gspSprite2D_dramDataStart[], gspSprite2D_dramDataEnd[];
extern long long int gspSprite2D_fifoTextStart[], gspSprite2D_fifoTextEnd[];
extern long long int gspSprite2D_fifoDataStart[], gspSprite2D_fifoDataEnd[];
extern long long int aspMainTextStart[], aspMainTextEnd[];
extern long long int aspMainDataStart[], aspMainDataEnd[];
extern long long int gspF3DEX_fifoTextStart[], gspF3DEX_fifoTextEnd[];
extern long long int gspF3DEX_fifoDataStart[], gspF3DEX_fifoDataEnd[];
extern long long int gspF3DEX_NoN_fifoTextStart[], gspF3DEX_NoN_fifoTextEnd[];
extern long long int gspF3DEX_NoN_fifoDataStart[], gspF3DEX_NoN_fifoDataEnd[];
extern long long int gspF3DLX_fifoTextStart[], gspF3DLX_fifoTextEnd[];
extern long long int gspF3DLX_fifoDataStart[], gspF3DLX_fifoDataEnd[];
extern long long int gspF3DLX_NoN_fifoTextStart[], gspF3DLX_NoN_fifoTextEnd[];
extern long long int gspF3DLX_NoN_fifoDataStart[], gspF3DLX_NoN_fifoDataEnd[];
extern long long int gspF3DLX_Rej_fifoTextStart[], gspF3DLX_Rej_fifoTextEnd[];
extern long long int gspF3DLX_Rej_fifoDataStart[], gspF3DLX_Rej_fifoDataEnd[];
extern long long int gspF3DLP_Rej_fifoTextStart[], gspF3DLP_Rej_fifoTextEnd[];
extern long long int gspF3DLP_Rej_fifoDataStart[], gspF3DLP_Rej_fifoDataEnd[];
extern long long int gspL3DEX_fifoTextStart[], gspL3DEX_fifoTextEnd[];
extern long long int gspL3DEX_fifoDataStart[], gspL3DEX_fifoDataEnd[];
extern long long int gspF3DEX2_fifoTextStart[], gspF3DEX2_fifoTextEnd[];
extern long long int gspF3DEX2_fifoDataStart[], gspF3DEX2_fifoDataEnd[];
extern long long int gspF3DEX2_NoN_fifoTextStart[],gspF3DEX2_NoN_fifoTextEnd[];
extern long long int gspF3DEX2_NoN_fifoDataStart[],gspF3DEX2_NoN_fifoDataEnd[];
extern long long int gspF3DLX2_fifoTextStart[], gspF3DLX2_fifoTextEnd[];
extern long long int gspF3DLX2_fifoDataStart[], gspF3DLX2_fifoDataEnd[];
extern long long int gspF3DLX2_NoN_fifoTextStart[],gspF3DLX2_NoN_fifoTextEnd[];
extern long long int gspF3DLX2_NoN_fifoDataStart[],gspF3DLX2_NoN_fifoDataEnd[];
extern long long int gspF3DLX2_Rej_fifoTextStart[],gspF3DLX2_Rej_fifoTextEnd[];
extern long long int gspF3DLX2_Rej_fifoDataStart[],gspF3DLX2_Rej_fifoDataEnd[];
extern long long int gspF3DLP2_Rej_fifoTextStart[],gspF3DLP2_Rej_fifoTextEnd[];
extern long long int gspF3DLP2_Rej_fifoDataStart[],gspF3DLP2_Rej_fifoDataEnd[];
extern long long int gspL3DEX2_fifoTextStart[], gspL3DEX2_fifoTextEnd[];
extern long long int gspL3DEX2_fifoDataStart[], gspL3DEX2_fifoDataEnd[];
typedef void (*OSErrorHandler)(s16, s16, ...);
OSErrorHandler osSetErrorHandler(OSErrorHandler);
typedef struct {
    u32 magic;
    u32 len;
    u32 *base;
    s32 startCount;
    s32 writeOffset;
} OSLog;
typedef struct {
    u32 magic;
    u32 timeStamp;
    u16 argCount;
    u16 eventID;
} OSLogItem;
typedef struct {
    u32 magic;
    u32 version;
} OSLogFileHdr;
void osCreateLog(OSLog *log, u32 *base, s32 len);
void osLogEvent(OSLog *log, s16 code, s16 numArgs, ...);
void osFlushLog(OSLog *log);
u32 osLogFloat(f32);
extern void osDelay(int count);
typedef struct Vec3f {
  union {
    struct {
      f32 x;
      f32 y;
      f32 z;
    };
    f32 f[3];
  };
} Vec3f;
typedef float MtxF_t[4][4];
typedef union {
    MtxF_t mf;
    struct {
        float xx, yx, zx, wx,
              xy, yy, zy, wy,
              xz, yz, zz, wz,
              xw, yw, zw, ww;
    };
} MtxF;
typedef struct {
Vec3f pos;
Vec3f rot;
} PosRot;
typedef struct map_data_s{
    char unk0[0x30];
    s32 unk30;
    s32 unk34;
}sMapData;
typedef struct
{
    u8 red;
    u8 green;
    u8 blue;
    u8 alpha;
}Color_RGBA8;
typedef struct unk_232f4_s{
    f32 unk0;
    f32 unk4;
}unk232f4s;
typedef struct unk_1d924_s
{
    s32 unk0;
    s16 unk4;
    s16 unk6;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
}unk1d924s;
typedef struct unk_D_80086DC0_s
{
    s32 unk0;
    s32 unk4;
    u16 unk8;
    s16 unkA;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    char unk18[0x3C];
    f32 unk54;
}unkD80086DC0s;
typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    u16 unk14;
    char unk16[0xE];
}unkfde0s;
typedef struct {
    s32 unk0;
    unkfde0s* unk4;
    s32 unk8;
    char unkC[0x6];
    u16 unk12;
    u16 unk14;
}unk84f1cs;
typedef struct {
             u16 unk0;
             s16 unk2;
             u16 currHP;
             u16 maxHP;
             u16 currMP;
             u16 maxMP;
             u16 agi;
             u16 def;
             s32 exp;
             s32 unk14;
             f32 colissionSize;
             f32 unk1C;
             f32 unk20;
             u8 fireSpirits;
             u8 earthSpirits;
             u8 waterSpirits;
             u8 windSpirits;
             u16 HPXP;
             u16 MPXP;
             u16 agiXP;
             u16 defXP;
             u8 HPLevel;
             u8 MPLevel;
             u8 agiLevel;
             u8 defLevel;
             u8 spiritLevel;
             u8 unk35;
             u8 unk36;
             u8 unk37;
             u16 unk38;
             s16 unk3A;
             s16 unk3C;
             s16 unk3E;
             u16 unk40;
             s16 unk42;
             char unk44[0x4];
             void* brianData;
}BrianData1;
typedef struct {
             f32 x;
             f32 y;
             f32 z;
             f32 xrot;
             f32 yrot;
             f32 zrot;
             f32 xspeed;
             f32 yspeed;
             f32 zspeed;
             f32 scale;
             f32 shadowScale;
             f32 shadowXRot;
             f32 shadowYRot;
             f32 shadowZRot;
             f32 unkDoor38;
             f32 unkDoor3C;
             f32 unkDoor40;
             f32 unkDoor44;
             f32 unkDoor48;
             f32 unkDoor4C;
             s16 unk50;
             s16 animID;
             s16 animFrame;
             u16 totalAnimFrames;
             u16 animeFramerate;
             s16 unk5A;
             s16 unk5C;
             s16 unk5E;
             u16 unk60;
             u16 unk62;
             BrianData1* brianData1;
}BrianData2;
typedef struct player_Action_s
{
            s16 unk0;
            s16 unk2;
            s16 dustTimer;
            s16 doorSide;
            u16 unk8;
            s16 unkA;
            s32 unkC;
            void* unk10;
            f32 xpos;
            f32 ypos;
            f32 zpos;
            char unk20[0x18];
            f32 unk38;
            char unk3C[0x3C];
            BrianData1* unk78;
}sPlayerAction;
extern BrianData2 D_8007BACC;
extern Mtx D_2000000[];
extern Mtx D_2000040[];
extern s32 D_8007B2F8;
extern s32 D_8007B2E4;
extern s16 D_8007B2E8;
extern s32 D_80084EE4;
extern s16 gGameMode;
extern u16 D_8008C592;
extern s8 D_80092870;
extern u64 D_803232A0[];
extern s32 gNextSubmap;
extern u16 gAllowBattles;
extern sMapData* gMapData;
extern f32 D_80086E88[4];
extern f32 D_80086ECC;
extern f32 D_80086ED4;
extern s8 D_80092871;
extern s8 D_80092872;
extern Gfx* gMasterGfxPos;
extern unkD80086DC0s D_80086DC0;
extern u16 D_80092876;
extern u8 D_8004D740[];
extern u8 D_80086AE8[];
extern u8 D_800869D8[];
extern unk84f1cs* D_80084F1C;
extern s32 gCurrentTime;
extern s32 gDayLength;
extern u16 gCurrentDay;
u8 func_80026554(u8);
s32 func_8003195C(s8, u8);
s32 func_80031BB0(s32);
s32 osContInit(OSMesgQueue*, u8*, OSContStatus*);
void func_80024260(u8* arg0, void* arg1, u32 arg2);
s32 func_80024330(s32 arg0, u8* arg1, u16 arg2);
float _nsqrtf(float value);
u32 func_80022FD0(u32 arg0);
s32 func_80031ACC(s32 arg0, s32 arg1);
void func_800232F4(f32 arg0, unk232f4s* arg1);
void func_80006720(BrianData2* arg0);
void func_8001D924(BrianData2* arg0, unk1d924s* arg1, f32 arg2);
void func_80023570(MtxF *arg0, f32 arg1, f32 arg2, f32 arg3);
s32 func_8000FF54(f32);
void func_80023A08(f32 arg0[4][4], f32 arg1, f32 arg2, f32 arg3);
void func_80023DF4(f32 arg0[4][4], f32 arg1, f32 arg2, f32 arg3);
f32 func_80023210(f32, f32);
    typedef unsigned uintptr_t;
typedef struct OSScTask_s {
    struct OSScTask_s *next;
    u32 state;
    u32 flags;
    void *framebuffer;
    OSTask list;
    OSMesgQueue *msgQ;
    OSMesg msg;
} OSScTask;
typedef struct {
    OSScTask task;
    char unk58[0xD0F0];
    OSMesg unkD148;
    void *unkD14C;
}unk111Cs;
extern u64 D_80049EF0[];
extern u64 D_80049FC0[];
extern u64 D_80049FC0_2[];
extern u64 D_800723D0[];
extern OSMesgQueue D_8007B9E8;
extern u64 D_80300000[];
extern u64 D_80300400[];
extern u64 D_8031B2A0[];
extern u64 D_803232A0[];
extern f32 D_80070F04;
extern s16 D_8007B2F0;
extern s8 D_8007B344;
extern s8 D_8007B345;
extern f32 D_8007BA40;
extern f32 D_8007BA44;
extern f32 D_8007BA48;
extern s32 D_8007BA4C;
extern s16 D_8007BA60;
extern u16 D_8007BA62;
extern s16 D_8007BA64;
extern s16 D_8007BABE;
extern u32 D_80084EEC;
extern s32 D_80084EF0;
extern s32 D_80084EF8;
extern s32 D_80084F04;
extern u16 D_80084F14;
extern s32 D_80085370;
extern s16 D_800859E2;
extern f32 D_80086E44;
#pragma GLOBAL_ASM("asm/nonmatchings/1850/func_80000C50.s")
void func_80000EEC(void) {
    D_8007B2E4 = 0x160;
    gGameMode = 4;
    D_80084EE4 = -1;
    D_80084EF8 = -1;
    D_80084F04 = -1;
    D_80084F14 = 0xFFFF;
    D_80086E44 = 0.0f;
    D_800859E2 = 0;
    D_80084EEC = 0xD;
    D_80084EF0 = 0x11;
    D_80085370 = -1;
    D_8007BA60 = 0xD;
    D_8007BA62 = 0x11;
    D_8007BA64 = 0;
    D_8007BA40 = -26.0f;
    D_8007BA44 = 0.0f;
    D_8007BA48 = D_80070F04;
    D_8007BA4C = 0x108;
    D_8007BABE = 0;
    D_8007B2E8 = 1;
    D_8007B2F0 = 0;
    D_8007B344 = 0;
    D_8007B345 = 0;
}
#pragma GLOBAL_ASM("asm/nonmatchings/1850/func_80000FE8.s")
void func_8000111C(unk111Cs* arg0) {
    arg0->task.list.t.type = 1;
    arg0->task.list.t.flags = 0;
    arg0->task.list.t.ucode_boot = D_80049EF0;
    arg0->task.list.t.ucode_boot_size = (uintptr_t)D_80049FC0 - (uintptr_t)D_80049EF0;
    arg0->task.list.t.ucode = D_80049FC0_2;
    arg0->task.list.t.ucode_data = D_800723D0;
    arg0->task.list.t.ucode_data_size = 2048;
    arg0->task.list.t.dram_stack = D_80300000;
    arg0->task.list.t.dram_stack_size = (1024);
    arg0->task.list.t.output_buff = D_8031B2A0;
    arg0->task.list.t.output_buff_size = D_803232A0;
    arg0->task.list.t.yield_data_ptr = D_80300400;
    arg0->task.list.t.yield_data_size = 0xc00;
    arg0->task.next = 0;
    arg0->task.flags = 0x40;
    arg0->task.msgQ = &D_8007B9E8;
    arg0->task.msg = &arg0->unkD148;
    arg0->task.framebuffer = arg0->unkD14C;
}
#pragma GLOBAL_ASM("asm/nonmatchings/1850/func_800011DC.s")
#pragma GLOBAL_ASM("asm/nonmatchings/1850/func_80001800.s")
#pragma GLOBAL_ASM("asm/nonmatchings/1850/func_800020B4.s")
#pragma GLOBAL_ASM("asm/nonmatchings/1850/func_8000227C.s")
#pragma GLOBAL_ASM("asm/nonmatchings/1850/func_80002428.s")
#pragma GLOBAL_ASM("asm/nonmatchings/1850/func_800025E8.s")
