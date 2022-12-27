#include <nitro.h>
#include <string.h>

#include "unk_020573FC.h"

typedef struct {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02[9];
    u8 unk_0B[3];
    int unk_10;
    int unk_14;
    u8 unk_18;
    u8 unk_19;
} UnkStruct_020EC598;

static const UnkStruct_020EC598 Unk_020EC598[] = {
	{
		0x0,
		0x0,
		{ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x2,
		0x1,
		{ 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x2,
		0x1,
		{ 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x2,
		0x1,
		{ 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x2,
		0x1,
		{ 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x2,
		0x1,
		{ 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x2,
		0x2,
		{ 0x1, 0x1, 0x0, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x1,
		0x1,
		{ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x3, 0x8, 0xA },
		{ 0x1F4 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x1,
		0x1,
		{ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x3, 0x8, 0xA },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x1,
		0x1,
		{ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x3, 0x8, 0xA },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x3,
		0x3,
		{ 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1 },
		{ 0x4, 0xC, 0xF },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x2,
		0x2,
		{ 0x1, 0x1, 0x0, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0 },
		{ 0x4, 0x8, 0xA },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x4, 0x8, 0xA },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x1,
		0x3,
		{ 0x1, 0x0, 0x0, 0x1, 0x0, 0x0, 0x1, 0x0, 0x0 },
		{ 0x4, 0xC, 0xF },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x3,
		0x1,
		{ 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x4, 0xC, 0xF },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x2,
		0x2,
		{ 0x1, 0x1, 0x0, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0 },
		{ 0x4, 0x14, 0x19 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x2,
		0x1,
		{ 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x5, 0x14, 0x19 },
		{ 0x0 },
		{ 0x25 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x5, 0x8, 0xA },
		{ 0x0 },
		{ 0x25 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x2,
		0x1,
		{ 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x5, 0xC, 0xF },
		{ 0x0 },
		{ 0x24 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x2,
		0x1,
		{ 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x5, 0x23, 0x31 },
		{ 0x0 },
		{ 0x26 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x2,
		0x1,
		{ 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x5, 0x23, 0x31 },
		{ 0x0 },
		{ 0x22 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x2,
		0x2,
		{ 0x1, 0x1, 0x0, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0 },
		{ 0x5, 0xC, 0xF },
		{ 0x0 },
		{ 0x29 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x2,
		0x1,
		{ 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x5, 0x14, 0x19 },
		{ 0x3E8 },
		{ 0x28 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x2,
		0x1,
		{ 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x5, 0x14, 0x19 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x2,
		0x1,
		{ 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x5, 0x32, 0x3C },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x2,
		0x1,
		{ 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x1, 0x9, 0xA },
		{ 0x1194 },
		{ 0x20 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x5, 0xC, 0xF },
		{ 0x3E8 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x2,
		0x1,
		{ 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x1, 0x9, 0xA },
		{ 0xBB8 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x3,
		0x3,
		{ 0x0, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x0 },
		{ 0x4, 0x21, 0x28 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x3, 0x8, 0xA },
		{ 0x0 },
		{ 0x27 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x3, 0x14, 0x19 },
		{ 0x0 },
		{ 0x2C },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x2,
		0x2,
		{ 0x1, 0x1, 0x0, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0 },
		{ 0x3, 0x21, 0x28 },
		{ 0x0 },
		{ 0x2C },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x2,
		0x2,
		{ 0x1, 0x1, 0x0, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0 },
		{ 0x2, 0xA, 0x28 },
		{ 0x0 },
		{ 0x2C },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x2, 0xA, 0x28 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x2,
		0x2,
		{ 0x1, 0x1, 0x0, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0 },
		{ 0x2, 0xA, 0x28 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x2,
		0x2,
		{ 0x1, 0x1, 0x0, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0 },
		{ 0x1, 0x9, 0xA },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x3, 0x14, 0x19 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x2, 0xA, 0x28 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x2,
		0x3,
		{ 0x1, 0x1, 0x0, 0x1, 0x1, 0x0, 0x1, 0x1, 0x0 },
		{ 0x1, 0x5A, 0x63 },
		{ 0x0 },
		{ 0x2D },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x2,
		0x2,
		{ 0x1, 0x1, 0x0, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0 },
		{ 0x1, 0x1C, 0x1E },
		{ 0x0 },
		{ 0x2B },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x1, 0x1C, 0x1E },
		{ 0x0 },
		{ 0x2A },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x1, 0x30, 0x32 },
		{ 0x0 },
		{ 0x20 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x2,
		0x1,
		{ 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x5, 0x8, 0xA },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x2,
		0x1,
		{ 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x3, 0x21, 0x28 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x2,
		0x1,
		{ 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x5, 0x21, 0x28 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x2, 0xA, 0x28 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x3,
		0x3,
		{ 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1 },
		{ 0x0, 0x0, 0x0 },
		{ 0x0 },
		{ 0x21 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x1,
		0x2,
		{ 0x1, 0x0, 0x0, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x0 },
		{ 0x23 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x3,
		0x3,
		{ 0x1, 0x0, 0x1, 0x0, 0x0, 0x0, 0x1, 0x0, 0x1 },
		{ 0x2, 0x14, 0x46 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x3,
		0x3,
		{ 0x1, 0x0, 0x1, 0x0, 0x0, 0x0, 0x1, 0x0, 0x1 },
		{ 0x2, 0x14, 0x46 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x3,
		0x3,
		{ 0x1, 0x0, 0x1, 0x0, 0x0, 0x0, 0x1, 0x0, 0x1 },
		{ 0x2, 0x28, 0x63 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x3,
		0x3,
		{ 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x1, 0x0, 0x1 },
		{ 0x1, 0x30, 0x32 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x3,
		0x3,
		{ 0x1, 0x0, 0x1, 0x0, 0x0, 0x1, 0x1, 0x0, 0x1 },
		{ 0x1, 0x30, 0x32 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x3,
		0x3,
		{ 0x1, 0x0, 0x1, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1 },
		{ 0x1, 0x30, 0x32 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x3,
		0x3,
		{ 0x1, 0x0, 0x1, 0x1, 0x0, 0x0, 0x1, 0x0, 0x1 },
		{ 0x1, 0x30, 0x32 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x3,
		0x3,
		{ 0x1, 0x0, 0x1, 0x0, 0x0, 0x0, 0x1, 0x0, 0x1 },
		{ 0x1, 0x30, 0x32 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x1,
		0x1,
		{ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x4, 0xA, 0xC },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 },
		{ 0x0 }
	},
	{
		0x1,
		0x1,
		{ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x4, 0x19, 0x1E },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 },
		{ 0x0 }
	},
	{
		0x1,
		0x1,
		{ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x3, 0xC, 0xE },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 },
		{ 0x0 }
	},
	{
		0x1,
		0x1,
		{ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x3, 0x1C, 0x20 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 },
		{ 0x0 }
	},
	{
		0x1,
		0x1,
		{ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x3, 0xA, 0xC },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 },
		{ 0x0 }
	},
	{
		0x1,
		0x1,
		{ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x3, 0x19, 0x1E },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 },
		{ 0x0 }
	},
	{
		0x1,
		0x1,
		{ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x4, 0xC, 0xE },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 },
		{ 0x0 }
	},
	{
		0x1,
		0x1,
		{ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x4, 0x1C, 0x20 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 },
		{ 0x0 }
	},
	{
		0x1,
		0x1,
		{ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x2, 0x14, 0x32 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 },
		{ 0x0 }
	},
	{
		0x1,
		0x1,
		{ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x2, 0x14, 0x32 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 },
		{ 0x0 }
	},
	{
		0x1,
		0x1,
		{ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x2, 0x14, 0x32 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 },
		{ 0x0 }
	},
	{
		0x1,
		0x1,
		{ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x2, 0x14, 0x32 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 },
		{ 0x0 }
	},
	{
		0x1,
		0x1,
		{ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x5, 0x1E, 0x26 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 },
		{ 0x0 }
	},
	{
		0x1,
		0x1,
		{ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x5, 0x41, 0x50 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 },
		{ 0x0 }
	},
	{
		0x1,
		0x1,
		{ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x3, 0xF, 0x12 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 },
		{ 0x0 }
	},
	{
		0x1,
		0x1,
		{ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x3, 0x21, 0x28 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 },
		{ 0x0 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x2,
		0x2,
		{ 0x1, 0x1, 0x0, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x2,
		0x2,
		{ 0x1, 0x1, 0x0, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x2,
		0x2,
		{ 0x1, 0x1, 0x0, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x2,
		0x2,
		{ 0x1, 0x1, 0x0, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x2,
		0x2,
		{ 0x1, 0x1, 0x0, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x2,
		0x2,
		{ 0x1, 0x1, 0x0, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x2,
		0x2,
		{ 0x1, 0x1, 0x0, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x2,
		0x2,
		{ 0x1, 0x1, 0x0, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x2,
		0x2,
		{ 0x1, 0x1, 0x0, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x2,
		0x2,
		{ 0x1, 0x1, 0x0, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x2,
		0x2,
		{ 0x1, 0x1, 0x0, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x3, 0x19, 0x1E },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x5, 0x19, 0x1E },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x4, 0x19, 0x1E },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x3, 0x19, 0x1E },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x5, 0x19, 0x1E },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x4, 0x19, 0x1E },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x3, 0x19, 0x1E },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x5, 0x19, 0x1E },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x4, 0x19, 0x1E },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x3, 0x19, 0x28 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x5, 0x23, 0x28 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x4, 0x23, 0x28 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x2, 0x46, 0x63 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x3, 0x3C, 0x46 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x4, 0x3C, 0x46 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x2, 0x28, 0x46 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x2, 0x28, 0x46 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x5, 0x50, 0x63 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x3, 0xF, 0x14 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x5, 0xF, 0x14 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x4, 0xF, 0x14 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x2, 0xF, 0x1E },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x1, 0x1C, 0x1E },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x7D0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x7D0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x7D0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0xBB8 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0xBB8 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0xBB8 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x2,
		0x1,
		{ 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x3, 0x50, 0x63 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x2,
		0x1,
		{ 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x4, 0x50, 0x63 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 },
		{ 0x1 }
	},
	{
		0x2,
		0x1,
		{ 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x4, 0x21, 0x28 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x2, 0x28, 0x46 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x2, 0x46, 0x63 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x1 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x0, 0x0, 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x2,
		0x1,
		{ 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x4, 0x14, 0x19 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x1,
		0x1,
		{ 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x5, 0x8, 0xA },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x1,
		0x2,
		{ 0x1, 0x0, 0x0, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x5, 0x8, 0xA },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x1,
		0x2,
		{ 0x1, 0x0, 0x0, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x5, 0x8, 0xA },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x1,
		0x2,
		{ 0x1, 0x0, 0x0, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x5, 0x8, 0xA },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	},
	{
		0x3,
		0x1,
		{ 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 },
		{ 0x5, 0x8, 0xA },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 },
		{ 0x0 }
	}
};

const u8 sub_020573FC (const int param0)
{
    return Unk_020EC598[param0].unk_00;
}

const u8 sub_0205740C (const int param0)
{
    return Unk_020EC598[param0].unk_01;
}

const u8 * sub_0205741C (const int param0)
{
    return Unk_020EC598[param0].unk_02;
}

const u8 sub_0205742C (const int param0)
{
    return Unk_020EC598[param0].unk_0B[0];
}

const u8 sub_0205743C (const int param0)
{
    return Unk_020EC598[param0].unk_0B[1];
}

const u8 sub_0205744C (const int param0)
{
    return Unk_020EC598[param0].unk_0B[2];
}

const int sub_0205745C (const int param0)
{
    return Unk_020EC598[param0].unk_10;
}

const int sub_0205746C (const int param0)
{
    return Unk_020EC598[param0].unk_14;
}

const int sub_0205747C (const int param0)
{
    return Unk_020EC598[param0].unk_18;
}

const int sub_0205748C (const int param0)
{
    return Unk_020EC598[param0].unk_19;
}
