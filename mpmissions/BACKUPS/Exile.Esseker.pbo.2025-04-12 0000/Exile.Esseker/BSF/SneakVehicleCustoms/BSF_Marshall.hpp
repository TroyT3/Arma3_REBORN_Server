
////////////////////////////////
// Marshall
////////////////////////////////

	class BSF_Skin_Marshall_Base{
		skins[] = {
			{"BSF_Skin_Marshall_Olive", 500},
			{"BSF_Skin_Marshall_Sand", 500},
			{"BSF_Skin_Marshall_Black", 1},
			{"BSF_Skin_Marshall_Gray", 1},
			{"BSF_Skin_Marshall_MossyOak", 1},
			{"BSF_Skin_Marshall_Multi1", 1},
			{"BSF_Skin_Marshall_Desert1", 1},
			{"BSF_Skin_Marshall_Desert2", 1},
			{"BSF_Skin_Marshall_DesertDigi", 1},
			{"BSF_Skin_Marshall_WD", 1},
			{"BSF_Skin_Marshall_Tiger", 1},
			{"BSF_Skin_Marshall_Arctic", 1},
			{"BSF_Skin_Marshall_SnowLeopard", 1},
			{"BSF_Skin_Marshall_Stone", 1},
			{"BSF_Skin_Marshall_White", 1},
			{"BSF_Skin_Marshall_CDC", 1},
			{"BSF_Skin_Marshall_UN", 1}
		};
	};

	class B_APC_Wheeled_01_base_F: BSF_Skin_Marshall_Base{};
	class B_APC_Wheeled_01_cannon_F: BSF_Skin_Marshall_Base{};
	class B_T_APC_Wheeled_01_cannon_F: BSF_Skin_Marshall_Base{};

//Textures
	class BSF_Skin_Marshall_Olive: SneakCustoms{
		skinName = "Olive";
        hiddenSelectionsTextures[] = {
			"a3\armor_f_exp\apc_wheeled_01\data\apc_wheeled_01_base_olive_co.paa",
			"a3\armor_f_exp\apc_wheeled_01\data\apc_wheeled_01_adds_olive_co.paa",
			"a3\armor_f_exp\apc_wheeled_01\data\apc_wheeled_01_tows_olive_co.paa",
			"a3\armor_f\data\camonet_nato_green_co.paa",
			"a3\armor_f\data\cage_olive_co.paa"
		};
        availableFor = "All";
	};

	class BSF_Skin_Marshall_Sand: SneakCustoms{
		skinName = "Sand";
        hiddenSelectionsTextures[] = {
			"a3\armor_f_beta\apc_wheeled_01\data\apc_wheeled_01_base_co.paa",
			"a3\armor_f_beta\apc_wheeled_01\data\apc_wheeled_01_adds_co.paa",
			"a3\armor_f_beta\apc_wheeled_01\data\apc_wheeled_01_tows_co.paa",
			"a3\armor_f\data\camonet_nato_desert_co.paa",
			"a3\armor_f\data\cage_sand_co.paa"
		};
        availableFor = "All";
	};

	class BSF_Skin_Marshall_Black: SneakCustoms{
		skinName = "BSF Black";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_Black_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_Black_2_Adds.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_Black_3_Tows.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Black.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_Cage_Black.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Marshall_Gray: SneakCustoms{
		skinName = "BSF Gray";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_Gray_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_Gray_2_Adds.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_Gray_3_Tows.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Gray.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_Cage_Gray.paa"
			};
        availableFor = "Vip";
	};

	class BSF_Skin_Marshall_MossyOak: SneakCustoms{
		skinName = "BSF Mossy Oak";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_MossyOak_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_MossyOak_2_Adds.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_MossyOak_3_Tows.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_MossyOak.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_Cage_MossyOak.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Marshall_Desert1: SneakCustoms{
		skinName = "BSF Desert 1";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_Desert1_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_Desert1_2_Adds.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_Desert1_3_Tows.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Desert1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_Cage_Desert1.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Marshall_Desert2: SneakCustoms{
		skinName = "BSF Desert 2";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_Desert2_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_Desert2_2_Adds.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_Desert2_3_Tows.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Desert2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_Cage_Desert2.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Marshall_DesertDigi: SneakCustoms{
		skinName = "BSF Desert Digi";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_DesertDigi_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_DesertDigi_2_Adds.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_DesertDigi_3_Tows.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_DesertDigi.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_Cage_DesertDigi.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Marshall_WD: SneakCustoms{
		skinName = "BSF Woodland";
        hiddenSelectionsTextures[] = {

			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_WD_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_WD_2_Adds.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_WD_3_Tows.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_WD.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_Cage_WD.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Marshall_Tiger: SneakCustoms{
		skinName = "BSF Crouching Tiger";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_Tiger_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_Tiger_2_Adds.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_Tiger_3_Tows.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Tiger.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_Cage_Tiger.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Marshall_Arctic: SneakCustoms{
		skinName = "BSF Arctic Blue";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_Arctic_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_Arctic_2_Adds.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_Arctic_3_Tows.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Arctic.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_Cage_Arctic.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Marshall_SnowLeopard: SneakCustoms{
		skinName = "BSF Snow Leopard";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_SnowLeopard_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_SnowLeopard_2_Adds.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_SnowLeopard_3_Tows.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_SnowLeopard.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_Cage_Winter.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Marshall_Stone: SneakCustoms{
		skinName = "BSF Stone";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_Stone_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_Stone_2_Adds.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_Stone_3_Tows.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Stone.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_Cage_Stone.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Marshall_White: SneakCustoms{
		skinName = "BSF White";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_White_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_White_2_Adds.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_White_3_Tows.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Winter.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_Cage_Winter.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Marshall_CDC: SneakCustoms{
		skinName = "BSF CDC";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_CDC_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_White_2_Adds.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_White_3_Tows.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Winter.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_Cage_Winter.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Marshall_UN: SneakCustoms{
		skinName = "BSF UN";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_UN_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_White_2_Adds.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_White_3_Tows.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Winter.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_Cage_Winter.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Marshall_Multi1: SneakCustoms{
		skinName = "BSF Multi";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_Multi1_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_Multi1_2_Adds.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Marshall_Multi1_3_Tows.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Multi1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_Cage_Multi1.paa"
		};
        availableFor = "Vip";
	};	