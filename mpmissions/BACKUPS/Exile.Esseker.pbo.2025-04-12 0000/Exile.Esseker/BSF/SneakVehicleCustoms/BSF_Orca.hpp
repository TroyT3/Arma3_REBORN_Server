
////////////////////////////////
//ORCA
////////////////////////////////

	class BSF_Skin_Orca_Base{
		skins[] = {
			{"BSF_Skin_Orca_Black", 1},
			{"BSF_Skin_Orca_SnowTiger", 1},
			{"BSF_Skin_Orca_MossyOak", 1},
			{"BSF_Skin_Orca_Water", 1}
		};
	};
	class Exile_Chopper_Orca_Abstract: BSF_Skin_Orca_Base{};
	class Heli_Light_02_base_F: BSF_Skin_Orca_Base{};
	class Heli_Light_02_dynamicLoadout_base_F: BSF_Skin_Orca_Base{};
	class O_Heli_Light_02_F: BSF_Skin_Orca_Base{};
	class O_Heli_Light_02_v2_F: BSF_Skin_Orca_Base{};
	class Exile_Chopper_Orca_Black: BSF_Skin_Orca_Base{};
	class Exile_Chopper_Orca_BlackCustom: BSF_Skin_Orca_Base{};
	class Exile_Chopper_Orca_CSAT: BSF_Skin_Orca_Base{};
	class O_Heli_Light_02_unarmed_F: BSF_Skin_Orca_Base{};
	
//Textures
	class BSF_Skin_Orca_Black: SneakCustoms{
		skinName = "Dirty Black";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Orca\BSF_Orca_Dark.paa"
		};
		availableFor = "Vip";
	};

	class BSF_Skin_Orca_SnowTiger: SneakCustoms{
		skinName = "BSF Snow Tiger";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Orca\BSF_Orca_SnowTiger.paa"
		};
		availableFor = "Vip";
	};

	class BSF_Skin_Orca_MossyOak: SneakCustoms{
		skinName = "BSF Moss";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Orca\BSF_Orca_MossyOak.paa"
		};
		availableFor = "Vip";
	};

	class BSF_Skin_Orca_Water: SneakCustoms{
		skinName = "BSF Hydro";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Orca\BSF_Orca_Water.paa"
		};
		availableFor = "Vip";
	};
