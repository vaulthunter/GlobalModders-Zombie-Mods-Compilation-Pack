/* #####################################################

	START_TYPE_NEW = 0,
	START_ZOMBIE_APPEAR,
	START_ZOMBIE_RELEASE
}


enum
	ZE_TEAM_HUMAN = 2,
	ZE_TEAM_ALL = 5,
	ZE_TEAM_START = 6




	ZOMBIE_TYPE_ORIGIN


forward ze_roundend(winteam);
native ze_set_user_human(id);
native ze_register_extraitem(const Name[], Cost, const Desc[], Team);