
////////////////////////////////
// Bobcat
////////////////////////////////

	class BSF_Skin_Bobcat_Base{
		skins[] = {
			{"BSF_Skin_Bobcat_Sand", 500},
			{"BSF_Skin_Bobcat_Olive", 500},
			{"BSF_Skin_Bobcat_Black", 1},
			{"BSF_Skin_Bobcat_MossyOak", 1},
			{"BSF_Skin_Bobcat_Multi1", 1},
			{"BSF_Skin_Bobcat_Desert1", 1},
			{"BSF_Skin_Bobcat_Desert2", 1},
			{"BSF_Skin_Bobcat_DesertDigi", 1},
			{"BSF_Skin_Bobcat_WD", 1},
			{"BSF_Skin_Bobcat_Tiger", 1},
			{"BSF_Skin_Bobcat_Arctic", 1},
			{"BSF_Skin_Bobcat_SnowLeopard", 1},
			{"BSF_Skin_Bobcat_Stone", 1},
			{"BSF_Skin_Bobcat_White", 1},
			{"BSF_Skin_Bobcat_CDC", 1},
			{"BSF_Skin_Bobcat_UN", 1}
		};
	};

	class B_APC_Tracked_01_CRV_F: BSF_Skin_Bobcat_Base{};
	class B_T_APC_Tracked_01_CRV_F: BSF_Skin_Bobcat_Base{};

//Textures
	class BSF_Skin_Bobcat_Sand: SneakCustoms{
		skinName = "Default Sand";
        hiddenSelectionsTextures[] = {
			"a3\armor_f_beta\apc_tracked_01\data\apc_tracked_01_body_crv_co.paa",
			"a3\armor_f_beta\apc_tracked_01\data\mbt_01_body_co.paa",
			"a3\data_f\vehicles\turret_co.paa",
			"a3\armor_f_beta\apc_tracked_01\data\apc_tracked_01_crv_co.paa",
			"a3\armor_f\data\camonet_nato_desert_co.paa"
		};
        availableFor = "All";
	};	

	class BSF_Skin_Bobcat_Olive: SneakCustoms{
		skinName = "Default Olive";
        hiddenSelectionsTextures[] = {
			"a3\armor_f_exp\apc_tracked_01\data\apc_tracked_01_body_crv_olive_co.paa",
			"a3\armor_f_exp\apc_tracked_01\data\mbt_01_body_olive_co.paa",
			"a3\data_f_exp\vehicles\turret_olive_co.paa",
			"a3\armor_f_exp\apc_tracked_01\data\apc_tracked_01_crv_olive_co.paa",
			"a3\armor_f\data\camonet_nato_green_co.paa"
		};
        availableFor = "All";
	};	

	class BSF_Skin_Bobcat_Arctic: SneakCustoms{
		skinName = "BSF Arctic Blue";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_Arctic_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_Arctic_2_Body2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Arctic.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Bobcat_Arctic_4_Equipment.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Arctic.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Bobcat_Black: SneakCustoms{
		skinName = "BSF Black Ops";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_Black_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_Black_2_Body2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Dark.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Bobcat_Black_4_Equipment.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Black.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Bobcat_Desert1: SneakCustoms{
		skinName = "BSF Desert Fox";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_Desert1_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_Desert1_2_Body2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Desert1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Bobcat_Desert1_4_Equipment.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Desert1.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Bobcat_Desert2: SneakCustoms{
		skinName = "BSF Desert Storm";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_Desert2_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_Desert2_2_Body2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Desert2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Bobcat_Desert2_4_Equipment.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Desert2.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Bobcat_DesertDigi: SneakCustoms{
		skinName = "BSF Desert Digi";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_DesertDigi_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_DesertDigi_2_Body2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_DesertDigi.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Bobcat_DesertDigi_4_Equipment.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_DesertDigi.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Bobcat_MossyOak: SneakCustoms{
		skinName = "BSF Mossy Oak";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_MossyOak_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_MossyOak_2_Body2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_MossyOak.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Bobcat_MossyOak_4_Equipment.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_MossyOak.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Bobcat_Multi1: SneakCustoms{
		skinName = "BSF Multi";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_Multi1_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_Multi1_2_Body2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Multi1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Bobcat_Multi1_4_Equipment.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_MossyOak.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Bobcat_SnowLeopard: SneakCustoms{
		skinName = "BSF Snow Leopard";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_SnowLeopard_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_SnowLeopard_2_Body2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_SnowLeopard.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Bobcat_SnowLeopard_4_Equipment.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_SnowLeopard.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Bobcat_Stone: SneakCustoms{
		skinName = "BSF Rolling Stone";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_Stone_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_Stone_2_Body2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Stone.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Bobcat_Stone_4_Equipment.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Stone.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Bobcat_Tiger: SneakCustoms{
		skinName = "BSF Crouching Tiger";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_Tiger_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_Tiger_2_Body2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Tiger.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Bobcat_Tiger_4_Equipment.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Tiger.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Bobcat_WD: SneakCustoms{
		skinName = "BSF Woodland";
        hiddenSelectionsTextures[] = {

			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_WD_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_WD_2_Body2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_WD.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Bobcat_WD_4_Equipment.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_WD.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Bobcat_White: SneakCustoms{
		skinName = "BSF White Noise";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_White_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_White_2_Body2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_White.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Bobcat_White_4_Equipment.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Winter.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Bobcat_CDC: SneakCustoms{
		skinName = "BSF CDC";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_CDC_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_White_2_Body2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_White.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Bobcat_White_4_Equipment.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Winter.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Bobcat_UN: SneakCustoms{
		skinName = "BSF UN";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_UN_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_White_2_Body2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_White.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Bobcat_White_4_Equipment.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Winter.paa"
		};
        availableFor = "Vip";
	};
