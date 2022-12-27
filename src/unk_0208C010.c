#include <nitro.h>
#include <string.h>

#include "struct_defs/struct_0208C06C.h"
#include "struct_defs/struct_020F3DCC.h"

#include "unk_0208BA78.h"
#include "unk_0208C010.h"

static const UnkStruct_020F3DCC Unk_020F3DCC[5];
static const UnkStruct_020F3DCC Unk_020F3D18[5];
static const UnkStruct_020F3DCC Unk_020F3C64[5];
static const UnkStruct_020F3DCC Unk_020F3BB0[5];
static const UnkStruct_020F3DCC Unk_020F3AFC[5];
static const UnkStruct_020F3DCC Unk_020F3A48[5];
static const UnkStruct_020F3DCC Unk_020F3994[5];
static const UnkStruct_020F3DCC Unk_020F38E0[5];
static const UnkStruct_020F3DCC Unk_020F382C[5];
static const UnkStruct_020F3DCC Unk_020F3778[5];
static const UnkStruct_020F3DCC Unk_020F3E80[5];
static const UnkStruct_020F3DCC Unk_020F3610[5];
static const UnkStruct_020F3DCC Unk_020F355C[5];
static const UnkStruct_020F3DCC Unk_020F34A8[5];
static const UnkStruct_020F3DCC Unk_020F3340[5];
static const UnkStruct_020F3DCC Unk_020F36C4[5];
static const UnkStruct_020F3DCC Unk_020F31D8[5];
static const UnkStruct_020F3DCC Unk_020F3124[5];
static const UnkStruct_020F3DCC Unk_020F328C[5];
static const UnkStruct_020F3DCC Unk_020F3070[5];

static const UnkStruct_020F3DCC Unk_020F3F34[7] = {
    {0x1, 0x1, 0xFF, 0xFFFF, 0x0, 0x9, 0xFBFBFBFB, 0xFBFBFBFB, Unk_020F3DCC},
    {0x1, 0x1, 0xFF, 0xFFFF, 0x0, 0x9, 0xFBFBFBFB, 0xFBFBFBFB, Unk_020F3994},
    {0x1, 0x1, 0xFF, 0xFFFF, 0x0, 0x9, 0xFBFBFBFB, 0xFBFBFBFB, Unk_020F3340},
    {0x1, 0x1, 0xFF, 0xFFFF, 0x0, 0x9, 0xFBFBFBFB, 0xFBFBFBFB, Unk_020F34A8},
    {0x1, 0x1, 0xFF, 0xFFFF, 0x0, 0x9, 0xFBFBFBFB, 0xFBFBFBFB, Unk_020F3610},
    {0x1, 0x1, 0xFF, 0xFFFF, 0x0, 0x9, 0xFBFBFBFB, 0xFBFBFBFB, Unk_020F3778},
    {0x1, 0x1, 0xFF, 0xFFFF, 0x0, 0x9, 0xFBFBFBFB, 0xFBFBFBFB, Unk_020F3E80}
};

static const UnkStruct_020F3DCC Unk_020F3DCC[5] = {
    {0x1, 0x1, 0x0, 0x0, 0x1, 0x3, 0xFBFBFBFB, 0xFBFBFBFB, Unk_020F3C64},
    {0x1, 0x1, 0x1, 0x3, 0x5, 0x3, 0xFBFBFBFB, 0xFBFBFBFB, NULL},
    {0x1, 0x1, 0x2, 0x4, 0x2, 0x2, 0xFBFBFBFB, 0xFBFBFBFB, NULL},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL}
};

static const UnkStruct_020F3DCC Unk_020F3D18[5] = {
    {0x1, 0x1, 0x0, 0x0, 0x1, 0x3, 0xFBFBFBFB, 0xFBFBFBFB, Unk_020F3C64},
    {0x1, 0x1, 0x2, 0x4, 0x2, 0x2, 0xFBFBFBFB, 0xFBFBFBFB, NULL},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL}
};

static const UnkStruct_020F3DCC Unk_020F3C64[5] = {
    {0x1, 0x1, 0x4, 0x6, 0x4, 0x3, 0x0, 0xFBFBFBFB, NULL},
    {0x1, 0x1, 0x5, 0x7, 0x1, 0x3, 0xFBFBFBFB, 0xFBFBFBFB, Unk_020F3BB0},
    {0x1, 0x1, 0x6, 0x1, 0x1, 0x3, 0xFBFBFBFB, 0xFBFBFBFB, Unk_020F3AFC},
    {0x1, 0x1, 0x3, 0x5, 0x3, 0x4, 0xFBFBFBFB, 0xFBFBFBFB, NULL},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL}
};

static const UnkStruct_020F3DCC Unk_020F3BB0[5] = {
    {0x1, 0x1, 0x8, 0x7, 0x4, 0x3, 0x1, 0xFBFBFBFB, NULL},
    {0x1, 0x1, 0x8, 0x7, 0x4, 0x3, 0x2, 0xFBFBFBFB, NULL},
    {0x1, 0x1, 0x8, 0x7, 0x4, 0x3, 0x3, 0xFBFBFBFB, NULL},
    {0x1, 0x1, 0x3, 0x5, 0x3, 0x4, 0xFBFBFBFB, 0xFBFBFBFB, NULL},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL}
};

static const UnkStruct_020F3DCC Unk_020F3AFC[5] = {
    {0x1, 0x1, 0x27, 0x6, 0x7, 0x3, 0x0, 0xFBFBFBFB, NULL},
    {0x1, 0x1, 0x28, 0x7, 0x0, 0x3, 0xFBFBFBFB, 0xFBFBFBFB, Unk_020F3A48},
    {0x1, 0x1, 0x3, 0x5, 0x3, 0x4, 0xFBFBFBFB, 0xFBFBFBFB, NULL},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL}
};

static const UnkStruct_020F3DCC Unk_020F3A48[5] = {
    {0x1, 0x1, 0x29, 0x7, 0x7, 0x3, 0x1, 0xFBFBFBFB, NULL},
    {0x1, 0x1, 0x29, 0x7, 0x7, 0x3, 0x2, 0xFBFBFBFB, NULL},
    {0x1, 0x1, 0x29, 0x7, 0x7, 0x3, 0x3, 0xFBFBFBFB, NULL},
    {0x1, 0x1, 0x3, 0x5, 0x3, 0x4, 0xFBFBFBFB, 0xFBFBFBFB, NULL},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL}
};

static const UnkStruct_020F3DCC Unk_020F3994[5] = {
    {0x1, 0x1, 0x2B, 0x2, 0x1, 0x3, 0xFBFBFBFB, 0xFBFBFBFB, Unk_020F38E0},
    {0x1, 0x1, 0x2C, 0x9, 0x14, 0x6, 0xFBFBFBFB, 0xFBFBFBFB, NULL},
    {0x1, 0x1, 0x2, 0xE, 0x2, 0x2, 0xFBFBFBFB, 0xFBFBFBFB, NULL},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL}
};

static const UnkStruct_020F3DCC Unk_020F38E0[5] = {
    {0x1, 0x1, 0x2D, 0xA, 0x14, 0x6, 0xFBFBFBFB, 0xFBFBFBFB, NULL},
    {0x1, 0x1, 0x2E, 0x0, 0x1, 0x3, 0xFBFBFBFB, 0xFBFBFBFB, Unk_020F382C},
    {0x1, 0x1, 0x2F, 0xB, 0x14, 0x6, 0xFBFBFBFB, 0xFBFBFBFB, NULL},
    {0x1, 0x1, 0x3, 0x5, 0x3, 0x4, 0xFBFBFBFB, 0xFBFBFBFB, NULL},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL}
};

static const UnkStruct_020F3DCC Unk_020F382C[5] = {
    {0x1, 0x1, 0x30, 0x1, 0x14, 0x6, 0xFBFBFBFB, 0xFBFBFBFB, NULL},
    {0x1, 0x1, 0x31, 0x0, 0x14, 0x6, 0xFBFBFBFB, 0xFBFBFBFB, NULL},
    {0x1, 0x1, 0x32, 0x0, 0x14, 0x6, 0xFBFBFBFB, 0xFBFBFBFB, NULL},
    {0x1, 0x1, 0x3, 0x5, 0x3, 0x4, 0xFBFBFBFB, 0xFBFBFBFB, NULL},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL}
};

static const UnkStruct_020F3DCC Unk_020F3778[5] = {
    {0x1, 0x1, 0x34, 0x0, 0x9, 0x3, 0xFBFBFBFB, 0xFBFBFBFB, NULL},
    {0x1, 0x1, 0x33, 0x0, 0x8, 0x3, 0x0, 0xFBFBFBFB, NULL},
    {0x1, 0x1, 0x2, 0x2, 0x2, 0x3, 0x3E7, 0xFBFBFBFB, Unk_020F3070},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL}
};

static const UnkStruct_020F3DCC Unk_020F3E80[5] = {
    {0x1, 0x1, 0x3B, 0x1, 0xB, 0x3, 0xFBFBFBFB, 0xFBFBFBFB, NULL},
    {0x1, 0x1, 0x3A, 0x1, 0xA, 0x3, 0x64, 0xFBFBFBFB, NULL},
    {0x1, 0x1, 0x2, 0x2, 0x2, 0x3, 0x3E7, 0xFBFBFBFB, Unk_020F3070},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL}
};

static const UnkStruct_020F3DCC Unk_020F3610[5] = {
    {0x1, 0x1, 0x4E, 0x0, 0xC, 0x3, 0x0, 0xFBFBFBFB, NULL},
    {0x1, 0x1, 0x4F, 0x1, 0xD, 0x3, 0x1, 0xFBFBFBFB, NULL},
    {0x1, 0x1, 0x2, 0x2, 0x2, 0x3, 0x3E7, 0xFBFBFBFB, Unk_020F328C},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL}
};

static const UnkStruct_020F3DCC Unk_020F355C[5] = {
    {0x1, 0x1, 0x5C, 0x0, 0xE, 0x3, 0x12C, 0xFBFBFBFB, NULL},
    {0x1, 0x1, 0x2, 0x2, 0x2, 0x3, 0x3E7, 0xFBFBFBFB, Unk_020F3124},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL}
};

static const UnkStruct_020F3DCC Unk_020F34A8[5] = {
    {0x1, 0x1, 0x5C, 0x0, 0xE, 0x3, 0x12C, 0xFBFBFBFB, NULL},
    {0x1, 0x1, 0x5D, 0x1, 0xF, 0x3, 0x12D, 0xFBFBFBFB, NULL},
    {0x1, 0x1, 0x2, 0x2, 0x2, 0x3, 0x3E7, 0xFBFBFBFB, Unk_020F3124},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL}
};

static const UnkStruct_020F3DCC Unk_020F33F4[5] = {
    {0x1, 0x1, 0x82, 0x4, 0x13, 0x3, 0x64, 0xFBFBFBFB, NULL},
    {0x1, 0x1, 0x3, 0x3, 0x3, 0x4, 0xFBFBFBFB, 0xFBFBFBFB, NULL},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL}
};

static const UnkStruct_020F3DCC Unk_020F3340[5] = {
    {0x1, 0x1, 0x67, 0x2, 0x1, 0x3, 0xFBFBFBFB, 0xFBFBFBFB, Unk_020F36C4},
    {0x1, 0x1, 0x68, 0x6, 0x1, 0x3, 0x270F, 0xFBFBFBFB, Unk_020F33F4},
    {0x1, 0x1, 0x2, 0x9, 0x2, 0x3, 0x3E7, 0xFBFBFBFB, Unk_020F31D8},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL}
};

static const UnkStruct_020F3DCC Unk_020F36C4[5] = {
    {0x1, 0x1, 0x69, 0x7, 0x10, 0x3, 0xC8, 0xFBFBFBFB, NULL},
    {0x1, 0x1, 0x6A, 0x0, 0x11, 0x3, 0xD2, 0xFBFBFBFB, NULL},
    {0x1, 0x1, 0x6B, 0x8, 0x12, 0x3, 0xDC, 0xFBFBFBFB, NULL},
    {0x1, 0x1, 0x3, 0x3, 0x3, 0x4, 0xFBFBFBFB, 0xFBFBFBFB, NULL},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL}
};

static const UnkStruct_020F3DCC Unk_020F31D8[5] = {
    {0x1, 0x1, 0x82, 0x4, 0x2, 0x2, 0xFBFBFBFB, 0xFBFBFBFB, NULL},
    {0x1, 0x1, 0x83, 0x3, 0x2, 0x4, 0xFBFBFBFB, 0xFBFBFBFB, NULL},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL}
};

static const UnkStruct_020F3DCC Unk_020F3124[5] = {
    {0x1, 0x1, 0x82, 0x5, 0x2, 0x2, 0xFBFBFBFB, 0xFBFBFBFB, NULL},
    {0x1, 0x1, 0x83, 0x4, 0x2, 0x4, 0xFBFBFBFB, 0xFBFBFBFB, NULL},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL}
};

static const UnkStruct_020F3DCC Unk_020F328C[5] = {
    {0x1, 0x1, 0x82, 0x5, 0x2, 0x2, 0xFBFBFBFB, 0xFBFBFBFB, NULL},
    {0x1, 0x1, 0x83, 0x4, 0x2, 0x4, 0xFBFBFBFB, 0xFBFBFBFB, NULL},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL}
};

static const UnkStruct_020F3DCC Unk_020F3070[5] = {
    {0x1, 0x1, 0x82, 0x4, 0x2, 0x2, 0xFBFBFBFB, 0xFBFBFBFB, NULL},
    {0x1, 0x1, 0x83, 0x3, 0x2, 0x4, 0xFBFBFBFB, 0xFBFBFBFB, NULL},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL},
    {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, NULL}
};

const UnkStruct_020F3DCC * sub_0208C010 (int param0)
{
    if (param0 >= (6 + 1)) {
        GF_ASSERT(param0 < (6 + 1));

        return Unk_020F3F34[0].unk_20;
    }

    return Unk_020F3F34[param0].unk_20;
}

const UnkStruct_020F3DCC * sub_0208C034 (UnkStruct_0208C06C * param0, int param1)
{
    if (param1 == 0) {
        if (sub_0208BE68(param0) == 0) {
            return &Unk_020F3D18[0];
        }
    }

    if (param1 == 3) {
        if (sub_0208BE68(param0) == 0) {
            return &Unk_020F355C[0];
        }
    }

    return sub_0208C010(param1);
}

void sub_0208C06C (UnkStruct_0208C06C * param0)
{
    int v0;
    const UnkStruct_020F3DCC * v1;

    v1 = param0->unk_818;
    param0->unk_534.unk_1AC = 0;

    for (v0 = 0; v0 < 5; v0++) {
        if (v1[v0].unk_00 == 0) {
            continue;
        }

        param0->unk_534.unk_1AC++;
    }
}
