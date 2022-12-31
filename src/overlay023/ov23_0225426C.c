#include <nitro.h>
#include <string.h>

#include "overlay023/ov23_0225426C.h"

typedef struct {
    u8 unk_00[3];
} UnkStruct_ov23_02256A00;

static const UnkStruct_ov23_02256A00 Unk_ov23_02256A00[] = {
	{ 0x0, 0x0, 0x0 },
	{ 0x0, 0x0, 0x0 },
	{ 0x0, 0x0, 0x0 },
	{ 0x0, 0x0, 0x0 },
	{ 0x0, 0x0, 0x0 },
	{ 0x0, 0x0, 0x0 },
	{ 0x0, 0x0, 0x0 },
	{ 0x0, 0x0, 0x0 },
	{ 0x0, 0x0, 0x0 },
	{ 0x0, 0x0, 0x0 },
	{ 0x0, 0x0, 0x0 },
	{ 0x2, 0xF, 0x14 },
	{ 0x1, 0x32, 0x3C },
	{ 0x3, 0x19, 0x23 },
	{ 0x2, 0x23, 0x2D },
	{ 0x2, 0x19, 0x23 },
	{ 0x3, 0x19, 0x23 },
	{ 0x1, 0x19, 0x23 },
	{ 0x2, 0x19, 0x23 },
	{ 0x3, 0x19, 0x23 },
	{ 0x4, 0x19, 0x23 },
	{ 0x5, 0x19, 0x23 },
	{ 0x4, 0x0, 0x0 },
	{ 0x4, 0x1E, 0x32 },
	{ 0x5, 0x1E, 0x32 },
	{ 0x4, 0x1E, 0x32 },
	{ 0x5, 0x1E, 0x32 },
	{ 0x1, 0x1E, 0x32 },
	{ 0x2, 0x19, 0x23 },
	{ 0x2, 0x5, 0xA },
	{ 0x2, 0x28, 0x32 },
	{ 0x3, 0x14, 0x19 },
	{ 0x4, 0x14, 0x19 },
	{ 0x1, 0x14, 0x19 },
	{ 0x5, 0x14, 0x19 },
	{ 0x3, 0x5, 0xA },
	{ 0x4, 0x1E, 0x32 },
	{ 0x5, 0x1E, 0x32 },
	{ 0x2, 0x28, 0x32 },
	{ 0x1, 0x28, 0x32 },
	{ 0x2, 0x23, 0x28 },
	{ 0x1, 0x23, 0x28 },
	{ 0x3, 0x28, 0x32 },
	{ 0x4, 0x28, 0x32 },
	{ 0x3, 0x46, 0x50 },
	{ 0x4, 0x46, 0x50 },
	{ 0x1, 0x46, 0x50 },
	{ 0x5, 0x46, 0x50 },
	{ 0x4, 0x46, 0x50 },
	{ 0x1, 0x46, 0x50 },
	{ 0x2, 0x46, 0x50 },
	{ 0x5, 0x46, 0x50 },
	{ 0x4, 0x46, 0x50 },
	{ 0x2, 0x46, 0x50 },
	{ 0x5, 0x46, 0x50 },
	{ 0x1, 0x46, 0x50 },
	{ 0x2, 0x46, 0x50 },
	{ 0x3, 0x46, 0x50 },
	{ 0x3, 0x46, 0x50 },
	{ 0x1, 0x46, 0x50 }
};


const u8 ov23_0225426C (const int param0)
{
    return Unk_ov23_02256A00[param0].unk_00[0];
}

const u8 ov23_0225427C (const int param0)
{
    return Unk_ov23_02256A00[param0].unk_00[1];
}

const u8 ov23_0225428C (const int param0)
{
    return Unk_ov23_02256A00[param0].unk_00[2];
}