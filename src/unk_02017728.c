#include <nitro.h>
#include <string.h>

#include "core_sys.h"

#include "functypes/funcptr_02017798.h"
#include "struct_defs/struct_02017E74.h"

#include "unk_02017728.h"
#include "heap.h"
#include "unk_0201CCF0.h"
#include "unk_0201D15C.h"
#include "unk_02024358.h"

typedef struct {
    void * unk_00;
    u32 unk_04;
} UnkStruct_021BF6F0;

static void sub_02017808(BOOL param0);
void sub_0201777C(void);
static void sub_02017CA0(void);

CoreSys gCoreSys;

void sub_02017728 (void)
{
    OS_SetIrqCheckFlag(OS_IE_V_BLANK);

    MI_WaitDma(GX_DEFAULT_DMAID);
    sub_0201CDD4(gCoreSys.unk_1C);

    gCoreSys.unk_30++;
}

static void sub_0201775C (void)
{
    OS_SetIrqCheckFlag(OS_IE_V_BLANK);
    MI_WaitDma(GX_DEFAULT_DMAID);
}

void sub_0201777C (void)
{
    (void)OS_DisableIrqMask(OS_IE_V_BLANK);
    OS_SetIrqFunction(OS_IE_V_BLANK, sub_0201775C);
    (void)OS_EnableIrqMask(OS_IE_V_BLANK);
}

void sub_02017798 (UnkFuncPtr_02017798 param0, void * param1)
{
    gCoreSys.unk_00 = param0;
    gCoreSys.unk_04 = param1;
}

void sub_020177A4 (void)
{
    sub_02017808(0);
    gCoreSys.unk_08 = NULL;
    gCoreSys.unk_0C = NULL;
}

BOOL sub_020177BC (UnkFuncPtr_02017798 param0, void * param1)
{
    if (param0 == NULL) {
        sub_02017808(0);
        gCoreSys.unk_08 = NULL;
        gCoreSys.unk_0C = NULL;
        return 1;
    } else {
        if (gCoreSys.unk_08 == NULL) {
            gCoreSys.unk_0C = param1;
            gCoreSys.unk_08 = param0;
            sub_02017808(1);
            return 1;
        } else {
            return 0;
        }
    }
}

static void sub_020177F4 (void)
{
    if (gCoreSys.unk_08) {
        gCoreSys.unk_08(gCoreSys.unk_0C);
    }
}

static void sub_02017808 (BOOL param0)
{
    OSIrqMask v0;

    OS_DisableIrq( );

    if (param0 == 0) {
        v0 = OS_GetIrqMask();
        OS_DisableIrqMask(OS_IE_H_BLANK);
        (void)GX_HBlankIntr(0);
    } else {
        v0 = OS_GetIrqMask();

        OS_SetIrqFunction(OS_IE_H_BLANK, sub_020177F4);
        OS_EnableIrqMask(OS_IE_H_BLANK);
        (void)GX_HBlankIntr(1);
    }

    OS_EnableIrq( );
}

static const HeapParam Unk_020E5674[] = {
    {0xD200, OS_ARENA_MAIN},
    {0x20E00, OS_ARENA_MAIN},
    {0x10, OS_ARENA_MAIN},
    {0x10D800, OS_ARENA_MAIN}
};

static void sub_02017850 (void)
{
    u32 v0[8];
    u8 v1[MATH_MD5_DIGEST_SIZE];
    u32 v2, v3;

    OS_GetLowEntropyData(v0);
    MATH_CalcMD5(v1, v0, sizeof(v0));

    v2 = 0;

    for (v3 = 0; v3 < MATH_MD5_DIGEST_SIZE; v3++) {
        v2 += v1[v3];
    }

    v2 %= 256;

    while (v2 % 4) {
        v2++;
    }

    Heap_InitSystem(Unk_020E5674, NELEMS(Unk_020E5674), 123, v2);
}

void sub_0201789C (void)
{
    OS_Init();
    FX_Init();

    GX_SetPower(GX_POWER_ALL);
    GX_Init();

    OS_InitTick();
    sub_02017850();

    gCoreSys.unk_18 = sub_0201CD88(160, OS_AllocFromMainArenaLo(sub_0201CD80(160), 4));
    gCoreSys.unk_1C = sub_0201CD88(32, OS_AllocFromMainArenaLo(sub_0201CD80(32), 4));
    gCoreSys.unk_20 = sub_0201CD88(32, OS_AllocFromMainArenaLo(sub_0201CD80(32), 4));
    gCoreSys.unk_24 = sub_0201CD88(4, OS_AllocFromMainArenaLo(sub_0201CD80(4), 4));

    GX_DispOff();
    GXS_DispOff();

    GX_SetDispSelect(GX_DISP_SELECT_MAIN_SUB);
    OS_SetIrqFunction(OS_IE_V_BLANK, sub_02017728);

    (void)OS_EnableIrqMask(OS_IE_V_BLANK);
    (void)OS_EnableIrqMask(OS_IE_FIFO_RECV);
    (void)OS_EnableIrq();
    (void)GX_VBlankIntr(1);

    FS_Init(1);
    sub_02024358();

    {
        u32 v0 = FS_GetTableSize();
        void * v1 = OS_AllocFromMainArenaLo(v0, 4);

        GF_ASSERT(v1 != NULL);
        FS_LoadTable(v1, v0);
    }

    gCoreSys.unk_00 = NULL;
    gCoreSys.unk_08 = NULL;
    gCoreSys.unk_10 = NULL;
    gCoreSys.unk_14 = NULL;
    gCoreSys.unk_70 = NULL;
    gCoreSys.unk_2C = 0;
    gCoreSys.unk_65 = 0;

    CARD_SetCacheFlushThreshold(0x500, 0x2400);

    sub_0201D640(0);
}

void sub_020179E4 (void)
{
    GX_SetBankForLCDC(GX_VRAM_LCDC_ALL);

    MI_CpuClearFast((void *)HW_LCDC_VRAM, HW_LCDC_VRAM_SIZE);
    (void)GX_DisableBankForLCDC();

    MI_CpuFillFast((void *)HW_OAM, 192, HW_OAM_SIZE);
    MI_CpuFillFast((void *)HW_DB_OAM, 192, HW_DB_OAM_SIZE);

    MI_CpuClearFast((void *)HW_PLTT, HW_PLTT_SIZE);
    MI_CpuClearFast((void *)HW_DB_PLTT, HW_DB_PLTT_SIZE);
}

void * sub_02017A40 (int param0, const char * param1)
{
    FSFile v0;
    void * v1;

    FS_InitFile(&v0);

    if (FS_OpenFile(&v0, param1)) {
        u32 v2 = FS_GetLength(&v0);

        v1 = Heap_AllocFromHeap(param0, v2);

        if (v1 == NULL) {
            (void)0;
        } else {
            if (FS_ReadFile(&v0, v1, v2) != v2) {
                Heap_FreeToHeapExplicit(param0, v1);
                v1 = NULL;
            }
        }

        (void)FS_CloseFile(&v0);
    } else {
        v1 = NULL;
    }

    return v1;
}

void sub_02017A94 (const char * param0, void ** param1)
{
    FSFile v0;

    FS_InitFile(&v0);

    if (FS_OpenFile(&v0, param0)) {
        u32 v1 = FS_GetLength(&v0);

        if (*param1 == NULL) {
            (void)0;
        } else {
            if (FS_ReadFile(&v0, *param1, v1) != v1) {
                (void)0;
            }
        }

        (void)FS_CloseFile(&v0);
    } else {
        (void)0;
    }
}

UnkStruct_021BF6F0 Unk_021BF6F0[128];

void sub_02017ACC (void)
{
    int v0;

    for (v0 = 128 - 1; v0 > -1; v0--) {
        if (Unk_021BF6F0[v0].unk_00 != NULL) {
            Heap_FreeToHeap(Unk_021BF6F0[v0].unk_00);

            Unk_021BF6F0[v0].unk_00 = NULL;
            Unk_021BF6F0[v0].unk_04 = 0;
        }
    }
}

void sub_02017AF4 (void)
{
    TPCalibrateParam v0;

    gCoreSys.unk_34 = 0;
    gCoreSys.unk_38 = 0;
    gCoreSys.unk_3C = 0;
    gCoreSys.unk_40 = 0;
    gCoreSys.unk_44 = 0;
    gCoreSys.padInput = 0;
    gCoreSys.unk_4C = 0;
    gCoreSys.unk_50 = 0;
    gCoreSys.unk_54 = 4;
    gCoreSys.unk_58 = 8;
    gCoreSys.unk_5C = 0;
    gCoreSys.unk_5E = 0;
    gCoreSys.touchInput = 0;
    gCoreSys.unk_62 = 0;
    gCoreSys.unk_64 = 0;

    TP_Init();

    if (TP_GetUserInfo(&v0) == 1) {
        TP_SetCalibrateParam(&v0);
    } else {
        v0.x0 = 0x2ae;
        v0.y0 = 0x58c;
        v0.xDotSize = 0xe25;
        v0.yDotSize = 0x1208;

        TP_SetCalibrateParam(&v0);
    }
}

void sub_02017B70 (int param0)
{
    gCoreSys.unk_66 = param0;
}

void sub_02017B7C (u8 param0)
{
    gCoreSys.unk_67 |= param0;
}

void sub_02017B8C (u8 param0)
{
    gCoreSys.unk_67 &= ~(param0);
}

void sub_02017B9C (void)
{
    TPData v0;
    TPData v1;
    int v2;

    if (PAD_DetectFold()) {
        gCoreSys.padInput = 0;
        gCoreSys.unk_44 = 0;
        gCoreSys.unk_4C = 0;
        gCoreSys.touchInput = 0;
        gCoreSys.unk_62 = 0;
        return;
    }

    v2 = PAD_Read();

    gCoreSys.unk_3C = v2 & (v2 ^ gCoreSys.unk_38);
    gCoreSys.unk_40 = v2 & (v2 ^ gCoreSys.unk_38);

    if ((v2 != 0) && (gCoreSys.unk_38 == v2)) {
        if (--gCoreSys.unk_50 == 0) {
            gCoreSys.unk_40 = v2;
            gCoreSys.unk_50 = gCoreSys.unk_54;
        }
    } else {
        gCoreSys.unk_50 = gCoreSys.unk_58;
    }

    gCoreSys.unk_38 = v2;
    gCoreSys.padInput = gCoreSys.unk_3C;
    gCoreSys.unk_44 = gCoreSys.unk_38;
    gCoreSys.unk_4C = gCoreSys.unk_40;

    sub_02017CA0();

    if (gCoreSys.unk_64 == 0) {
        while (TP_RequestRawSampling(&v0) != 0) {
            (void)0;
        }
    } else {
        TP_GetLatestRawPointInAuto(&v0);
    }

    TP_GetCalibratedPoint(&v1, &v0);

    if (v1.validity == TP_VALIDITY_VALID) {
        gCoreSys.unk_5C = v1.x;
        gCoreSys.unk_5E = v1.y;
    } else {
        if (gCoreSys.unk_62) {
            switch (v1.validity) {
            case TP_VALIDITY_INVALID_X:
                gCoreSys.unk_5E = v1.y;
                break;
            case TP_VALIDITY_INVALID_Y:
                gCoreSys.unk_5C = v1.x;
                break;
            case TP_VALIDITY_INVALID_XY:
                break;
            default:
                break;
            }
        } else {
            v1.touch = 0;
        }
    }

    gCoreSys.touchInput = (u16)(v1.touch & (v1.touch ^ gCoreSys.unk_62));
    gCoreSys.unk_62 = v1.touch;
}

static void sub_02017CA0 (void)
{
    switch (gCoreSys.unk_34) {
    default:
    case 0:
        break;
    case 1:
        if (gCoreSys.padInput & 0x8) {
            gCoreSys.padInput |= 0x400;
        }

        if (gCoreSys.unk_44 & 0x8) {
            gCoreSys.unk_44 |= 0x400;
        }

        if (gCoreSys.unk_4C & 0x8) {
            gCoreSys.unk_4C |= 0x400;
        }
        break;
    case 2:
    {
        int v0 = 0;

        if (gCoreSys.padInput & 0x400) {
            v0 |= 0x800;
        }

        if (gCoreSys.padInput & 0x800) {
            v0 |= 0x400;
        }

        gCoreSys.padInput &= ((0x400 | 0x800) ^ 0xffff); gCoreSys.padInput |= v0;
    }
        {
            int v0 = 0;

            if (gCoreSys.unk_44 & 0x400) {
                v0 |= 0x800;
            }

            if (gCoreSys.unk_44 & 0x800) {
                v0 |= 0x400;
            }

            gCoreSys.unk_44 &= ((0x400 | 0x800) ^ 0xffff); gCoreSys.unk_44 |= v0;
        }
        {
            int v0 = 0;

            if (gCoreSys.unk_4C & 0x400) {
                v0 |= 0x800;
            }

            if (gCoreSys.unk_4C & 0x800) {
                v0 |= 0x400;
            }

            gCoreSys.unk_4C &= ((0x400 | 0x800) ^ 0xffff); gCoreSys.unk_4C |= v0;
        }
        break;
    case 3:
        if (gCoreSys.padInput & 0x200) {
            gCoreSys.padInput |= 0x1;
        }

        if (gCoreSys.unk_44 & 0x200) {
            gCoreSys.unk_44 |= 0x1;
        }

        if (gCoreSys.unk_4C & 0x200) {
            gCoreSys.unk_4C |= 0x1;
        }

        gCoreSys.padInput &= ((0x200 | 0x100) ^ 0xffff);
        gCoreSys.unk_44 &= ((0x200 | 0x100) ^ 0xffff);
        gCoreSys.unk_4C &= ((0x200 | 0x100) ^ 0xffff);
        break;
    }
}

void sub_02017DD4 (int param0, int param1)
{
    gCoreSys.unk_54 = param0;
    gCoreSys.unk_58 = param1;
}

void sub_02017DE0 (u8 param0)
{
    gCoreSys.unk_68 |= param0;
}

void sub_02017DF0 (u8 param0)
{
    gCoreSys.unk_68 &= ~(param0);
}

void sub_02017E00 (int param0)
{
    GF_ASSERT(gCoreSys.unk_70 == NULL);

    gCoreSys.unk_70 = Heap_AllocFromHeapAtEnd(param0, sizeof(u32));
    *(gCoreSys.unk_70) = 0x2f93a1bc;
}

void sub_02017E2C (void)
{
    GF_ASSERT(gCoreSys.unk_70 != NULL);

    *(gCoreSys.unk_70) = 0;
    Heap_FreeToHeap(gCoreSys.unk_70);
    gCoreSys.unk_70 = NULL;
}

BOOL sub_02017E54 (void)
{
    if ((gCoreSys.unk_70 != NULL) && (*(gCoreSys.unk_70) == 0x2f93a1bc)) {
        return 1;
    }

    return 0;
}
