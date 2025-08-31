
////////////////////////////////
// Gorgon
////////////////////////////////

	class BSF_Skin_Gorgon_Base{
		skins[] = {
			{"BSF_Skin_Gorgon_Default", 500},
			{"BSF_Skin_Gorgon_SavannahStripe", 1},
			{"BSF_Skin_Gorgon_DesertStripe", 1},
			{"BSF_Skin_Gorgon_JungleStripe", 1},
			{"BSF_Skin_Gorgon_Black", 1},
			{"BSF_Skin_Gorgon_Gray", 1},
			{"BSF_Skin_Gorgon_MossyOak", 1},
			{"BSF_Skin_Gorgon_Multi1", 1},
			{"BSF_Skin_Gorgon_Desert1", 1},
			{"BSF_Skin_Gorgon_Desert2", 1},
			{"BSF_Skin_Gorgon_DesertDigi", 1},
			{"BSF_Skin_Gorgon_WD", 1},
			{"BSF_Skin_Gorgon_Tiger", 1},
			{"BSF_Skin_Gorgon_Arctic", 1},
			{"BSF_Skin_Gorgon_SnowLeopard", 1},
			{"BSF_Skin_Gorgon_Stone", 1},
			{"BSF_Skin_Gorgon_White", 1},
			{"BSF_Skin_Gorgon_CDC", 1},
			{"BSF_Skin_Gorgon_UN", 1},
			{"BSF_Skin_Gorgon_Stellar", 1}
		};
	};

	class I_APC_Wheeled_03_base_F: BSF_Skin_Gorgon_Base{};
	class I_APC_Wheeled_03_cannon_F: BSF_Skin_Gorgon_Base{};
	class B_APC_Wheeled_03_cannon_F: BSF_Skin_Gorgon_Base{};

//Textures
	class BSF_Skin_Gorgon_Default: SneakCustoms{
		skinName = "Gorgon AAF";
        hiddenSelectionsTextures[] = {
			"a3\armor_f_gamma\apc_wheeled_03\data\apc_wheeled_03_ext_indp_co.paa",
			"a3\armor_f_gamma\apc_wheeled_03\data\apc_wheeled_03_ext2_indp_co.paa",
			"a3\armor_f_gamma\apc_wheeled_03\data\rcws30_indp_co.paa",
			"a3\armor_f_gamma\apc_wheeled_03\data\apc_wheeled_03_ext_alpha_indp_co.paa",
			"a3\armor_f\data\camonet_aaf_digi_green_co.paa",
			"a3\armor_f\data\cage_aaf_co.paa"
		};
        availableFor = "All";
	};	

	class BSF_Skin_Gorgon_SavannahStripe: SneakCustoms{
		skinName = "BSF Savannah Stripe";
        hiddenSelectionsTextures[] = {
			"a3\data_f_tacops\data\apc_wheeled_03_ext_ig_01_co.paa",
			"a3\data_f_tacops\data\apc_wheeled_03_ext2_ig_01_co.paa",
			"a3\data_f_tacops\data\rcws30_ig_01_co.paa",
			"a3\data_f_tacops\data\apc_wheeled_03_ext_alpha_ig_01_co.paa",
			"a3\armor_f\data\camonet_nato_desert_co.paa",
			"a3\armor_f\data\cage_sand_co.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_Gorgon_DesertStripe: SneakCustoms{
		skinName = "BSF Desert Stripe";
        hiddenSelectionsTextures[] = {
			"A3\Data_F_Tacops\data\APC_Wheeled_03_Ext_IG_02_CO.paa",
			"A3\Data_F_Tacops\data\APC_Wheeled_03_Ext2_IG_02_CO.paa",
			"A3\Data_F_Tacops\data\RCWS30_IG_02_CO.paa",
			"A3\Data_F_Tacops\data\APC_Wheeled_03_Ext_alpha_IG_02_CO.paa",
			"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
			"A3\armor_f\data\cage_sand_co.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_Gorgon_JungleStripe: SneakCustoms{
		skinName = "BSF Jungle Stripe";
        hiddenSelectionsTextures[] = {
			"A3\Data_F_Tacops\data\APC_Wheeled_03_Ext_IG_03_CO.paa",
			"A3\Data_F_Tacops\data\APC_Wheeled_03_Ext2_IG_03_CO.paa",
			"A3\Data_F_Tacops\data\RCWS30_IG_03_CO.paa",
			"A3\Data_F_Tacops\data\APC_Wheeled_03_Ext_alpha_IG_03_CO.paa",
			"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
			"A3\armor_f\data\cage_olive_co.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_Gorgon_Black: SneakCustoms{
		skinName = "BSF Black Ops";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_Black_1_Ext1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_Black_2_Ext2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_Black_3_CWS30.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_Black_4_Ext3.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Black.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_Cage_Black.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Gorgon_Gray: SneakCustoms{
		skinName = "BSF Earl Gray";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_Gray_1_Ext1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_Gray_2_Ext2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_Gray_3_CWS30.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_Gray_4_Ext3.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Gray.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_Cage_Gray.paa"
			};
        availableFor = "Vip";
	};

	class BSF_Skin_Gorgon_MossyOak: SneakCustoms{
		skinName = "BSF Mossy Oak";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_MossyOak_1_Ext1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_MossyOak_2_Ext2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_MossyOak_3_CWS30.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_MossyOak_4_Ext3.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_MossyOak.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_Cage_MossyOak.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Gorgon_Desert1: SneakCustoms{
		skinName = "BSF Desert Fox";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_Desert1_1_Ext1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_Desert1_2_Ext2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_Desert1_3_CWS30.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_Desert1_4_Ext3.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Desert1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_Cage_Desert1.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Gorgon_Desert2: SneakCustoms{
		skinName = "BSF Desert Storm";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_Desert2_1_Ext1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_Desert2_2_Ext2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_Desert2_3_CWS30.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_Desert2_4_Ext3.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Desert2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_Cage_Desert2.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Gorgon_DesertDigi: SneakCustoms{
		skinName = "BSF Desert Digi";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_DesertDigi_1_Ext1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_DesertDigi_2_Ext2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_DesertDigi_3_CWS30.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_DesertDigi_4_Ext3.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_DesertDigi.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_Cage_DesertDigi.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Gorgon_WD: SneakCustoms{
		skinName = "BSF Woodland";
        hiddenSelectionsTextures[] = {

			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_WD_1_Ext1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_WD_2_Ext2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_WD_3_CWS30.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_WD_4_Ext3.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_WD.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_Cage_WD.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Gorgon_Tiger: SneakCustoms{
		skinName = "BSF Crouching Tiger";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_Tiger_1_Ext1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_Tiger_2_Ext2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_Tiger_3_CWS30.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_Arctic_4_Ext3.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Tiger.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_Cage_Tiger.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Gorgon_Arctic: SneakCustoms{
		skinName = "BSF Arctic Blue";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_Arctic_1_Ext1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_Arctic_2_Ext2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_Arctic_3_CWS30.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_Arctic_4_Ext3.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Arctic.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_Cage_Arctic.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Gorgon_SnowLeopard: SneakCustoms{
		skinName = "BSF Snow Leopard";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_SnowLeopard_1_Ext1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_SnowLeopard_2_Ext2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_SnowLeopard_3_CWS30.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_SnowLeopard_4_Ext3.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_SnowLeopard.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_Cage_Winter.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Gorgon_Stone: SneakCustoms{
		skinName = "BSF Rolling Stone";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_Stone_1_Ext1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_Stone_2_Ext2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_Stone_3_CWS30.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_Stone_4_Ext3.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Stone.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_Cage_Stone.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Gorgon_White: SneakCustoms{
		skinName = "BSF White Noise";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_White_1_Ext1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_White_2_Ext2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_White_3_CWS30.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_White_4_Ext3.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Winter.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_Cage_Winter.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Gorgon_CDC: SneakCustoms{
		skinName = "BSF CDC";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_CDC_1_Ext1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_White_2_Ext2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_White_3_CWS30.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_White_4_Ext3.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Winter.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_Cage_Winter.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Gorgon_UN: SneakCustoms{
		skinName = "BSF UN";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_UN_1_Ext1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_White_2_Ext2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_White_3_CWS30.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_White_4_Ext3.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Winter.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_Cage_Winter.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Gorgon_Multi1: SneakCustoms{
		skinName = "BSF Multi";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_Multi1_1_Ext1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_Multi1_2_Ext2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_Multi1_3_CWS30.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_Multi1_4_Ext3.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Multi1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_Cage_Multi1.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Gorgon_Stellar: SneakCustoms{
		skinName = "BSF Stellar";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_Stellar_1_Ext1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_Stellar_2_Ext2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_Black_3_CWS30.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_Gorgon_Black_4_Ext3.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_CamoNet_Black.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\APC\BSF_APC_Cage_Black.paa"
		};
        availableFor = "Vip";
	};
