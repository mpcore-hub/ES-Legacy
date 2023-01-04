#include "PlatformId.h"

#include <string.h>

namespace PlatformIds
{
	const char* PlatformNames[PLATFORM_COUNT + 1] = {
		"unknown", // nothing set

		THREEDO, // name can't start with a constant
		AMIGA,
		AMSTRAD_CPC,
		APPLE_II,
		ARCADE,
		ATARI_800,
		ATARI_2600,
		ATARI_5200,
		ATARI_7800,
		ATARI_LYNX,
		ATARI_ST, // Atari ST/STE/Falcon
		ATARI_JAGUAR,
		ATARI_JAGUAR_CD,
		ATARI_XE,
		BBC_MICRO,
		COLECOVISION,
		COMMODORE_64,
		DAPHNE,
		INTELLIVISION,
		MAC_OS,
		XBOX,
		XBOX_360,
		MSX,
		NEOGEO,
		NEOGEO_CD,
		NEOGEO_POCKET,
		NEOGEO_POCKET_COLOR,
		NINTENDO_3DS,
		NINTENDO_64,
		NINTENDO_DS,
		FAMICOM_DISK_SYSTEM,
		NINTENDO_ENTERTAINMENT_SYSTEM,
		NINTENDO_POKEMON_MINI,
		FAIRCHILD_CHANNELF,
		GAME_BOY,
		GAME_BOY_ADVANCE,
		GAME_BOY_COLOR,
		NINTENDO_GAMECUBE,
		NINTENDO_WII,
		NINTENDO_WII_U,
		NINTENDO_VIRTUAL_BOY,
		NINTENDO_GAME_AND_WATCH,
		NINTENDO_SWITCH,
		OPENBOR,
		PC,
		SEGA_32X,
		SEGA_CD,
		SEGA_DREAMCAST,
		SEGA_GAME_GEAR,
		SEGA_GENESIS,
		SEGA_MASTER_SYSTEM,
		SEGA_MEGA_DRIVE,
		SEGA_SATURN,
		SEGA_SG1000,
		SAM_COUPE,
		PLAYSTATION,
		PLAYSTATION_2,
		PLAYSTATION_3,
		PLAYSTATION_4,
		PLAYSTATION_VITA,
		PLAYSTATION_PORTABLE,
		SUPER_NINTENDO,
		SCUMMVM,
		SHARP_X1,
		SHARP_X6800,
		SOLARUS,
		PICO_8,
		TIC_80,
		THOMSON_MOTO,
		NEC_PC_8801,
		NEC_PC_9801,
		TURBOGRAFX_16, // (aka PC Engine) HuCards only
		TURBOGRAFX_CD, // (aka PC Engine) CD-ROMs only
		NEC_PCFX,
		WONDERSWAN,
		WONDERSWAN_COLOR,
		ZX_SPECTRUM,
		ZX81_SINCLAR,
		VIDEOPAC_ODYSSEY2,
		VECTREX,
		TRS80_COLOR_COMPUTER,
		TANDY,
		TI_99,
		DRAGON32,
		ZMACHINE,

		"ignore", // do not allow scraping for this system
		"invalid"
	};

	PlatformId getPlatformId(const char* str)
	{
		if(str == NULL)
			return PLATFORM_UNKNOWN;

		for(unsigned int i = 1; i < PLATFORM_COUNT; i++)
		{
			if(strcmp(PlatformNames[i], str) == 0)
				return (PlatformId)i;
		}

		return PLATFORM_UNKNOWN;
	}

	const char* getPlatformName(PlatformId id)
	{
		return PlatformNames[id];
	}
}
