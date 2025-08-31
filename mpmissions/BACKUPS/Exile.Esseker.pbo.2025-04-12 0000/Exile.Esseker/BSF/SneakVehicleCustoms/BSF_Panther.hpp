
////////////////////////////////
// Panther
////////////////////////////////

	class BSF_Skin_Panther_Base{
		skins[] = {
			{"BSF_Skin_Panther_Sand", 500},
			{"BSF_Skin_Panther_Olive", 500},
			{"BSF_Skin_Panther_Black", 1},
			{"BSF_Skin_Panther_MossyOak", 1},
			{"BSF_Skin_Panther_Multi1", 1},
			{"BSF_Skin_Panther_Desert1", 1},
			{"BSF_Skin_Panther_Desert2", 1},
			{"BSF_Skin_Panther_DesertDigi", 1},
			{"BSF_Skin_Panther_WD", 1},
			{"BSF_Skin_Panther_Tiger", 1},
			{"BSF_Skin_Panther_Arctic", 1},
			{"BSF_Skin_Panther_SnowLeopard", 1},
			{"BSF_Skin_Panther_Stone", 1},
			{"BSF_Skin_Panther_White", 1},
			{"BSF_Skin_Panther_CDC", 1},
			{"BSF_Skin_Panther_UN", 1},
			{"BSF_Skin_Panther_Stellar", 1}
		};
	};

	class B_APC_Tracked_01_base_F: BSF_Skin_Panther_Base{};
	class B_APC_Tracked_01_rcws_F: BSF_Skin_Panther_Base{};
	class B_T_APC_Tracked_01_rcws_F: BSF_Skin_Panther_Base{};

//Textures
	class BSF_Skin_Panther_Sand: SneakCustoms{
		skinName = "Default Sand";
        hiddenSelectionsTextures[] = {
			"a3\armor_f_beta\apc_tracked_01\data\apc_tracked_01_body_co.paa",
			"a3\armor_f_beta\apc_tracked_01\data\mbt_01_body_co.paa",
			"a3\data_f\vehicles\turret_co.paa",
			"a3\armor_f\data\camonet_nato_desert_co.paa"
		};
        availableFor = "All";
	};	

	class BSF_Skin_Panther_Olive: SneakCustoms{
		skinName = "Default Olive";
        hiddenSelectionsTextures[] = {
			"a3\armor_f_exp\apc_tracked_01\data\apc_tracked_01_body_olive_co.paa",
			"a3\armor_f_exp\apc_tracked_01\data\mbt_01_body_olive_co.paa",
			"a3\data_f_exp\vehicles\turret_olive_co.paa",
			"a3\armor_f\data\camonet_nato_green_co.paa"
		};
        availableFor = "All";
	};	

	class BSF_Skin_Panther_Arctic: SneakCustoms{
		skinName = "BSF Arctic Blue";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_Arctic_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_Arctic_2_Body2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_Arctic_3_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Arctic.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Panther_Black: SneakCustoms{
		skinName = "BSF Black Ops";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_Black_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_Black_2_Body2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_Black_3_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Black.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Panther_Desert1: SneakCustoms{
		skinName = "BSF Desert Fox";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_Desert1_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_Desert1_2_Body2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_Desert1_3_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Desert1.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Panther_Desert2: SneakCustoms{
		skinName = "BSF Desert Storm";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_Desert2_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_Desert2_2_Body2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_Desert2_3_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Desert2.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Panther_DesertDigi: SneakCustoms{
		skinName = "BSF Desert Digi";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_DesertDigi_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_DesertDigi_2_Body2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_DesertDigi_3_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_DesertDigi.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Panther_MossyOak: SneakCustoms{
		skinName = "BSF Mossy Oak";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_MossyOak_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_MossyOak_2_Body2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_MossyOak_3_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_MossyOak.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Panther_Multi1: SneakCustoms{
		skinName = "BSF Multi";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_Multi1_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_Multi1_2_Body2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_Multi1_3_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_MossyOak.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Panther_SnowLeopard: SneakCustoms{
		skinName = "BSF Snow Leopard";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_SnowLeopard_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_SnowLeopard_2_Body2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_SnowLeopard_3_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_SnowLeopard.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Panther_Stone: SneakCustoms{
		skinName = "BSF Rolling Stone";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_Stone_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_Stone_2_Body2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_Stone_3_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Stone.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Panther_Tiger: SneakCustoms{
		skinName = "BSF Crouching Tiger";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_Tiger_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_Tiger_2_Body2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_Tiger_3_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Tiger.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Panther_WD: SneakCustoms{
		skinName = "BSF Woodland";
        hiddenSelectionsTextures[] = {

			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_WD_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_WD_2_Body2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_WD_3_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_WD.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Panther_White: SneakCustoms{
		skinName = "BSF White Noise";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_White_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_White_2_Body2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_White_3_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Winter.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Panther_CDC: SneakCustoms{
		skinName = "BSF CDC";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_CDC_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_White_2_Body2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_White_3_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Winter.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Panther_UN: SneakCustoms{
		skinName = "BSF UN";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_UN_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_White_2_Body2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Panther_White_3_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Winter.paa"
		};
        availableFor = "Vip";
	};
