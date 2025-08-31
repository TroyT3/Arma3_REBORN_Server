		
////////////////////////////////	
// RG33
////////////////////////////////	

//	"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\Huron1.paa",
//	"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Colors_1_Main.paa",

	class BSF_Skin_RG33_Base{
		skins[] = {
			{"BSF_Skin_RG33_Default_Desert", 500},
			{"BSF_Skin_RG33_Default_Woodland", 500},
			{"BSF_Skin_RG33_MossyOak", 1},
			{"BSF_Skin_RG33_Black", 1},
			{"BSF_Skin_RG33_DesertDigi", 1},
			{"BSF_Skin_RG33_Gray", 1},
			{"BSF_Skin_RG33_WD1", 1},
			{"BSF_Skin_RG33_SnowLeopard", 1},
			{"BSF_Skin_RG33_Tiger", 1},
			{"BSF_Skin_RG33_Winter", 1},
			{"BSF_Skin_RG33_WinterGreen", 1},
			{"BSF_Skin_RG33_Stone", 1},
			{"BSF_Skin_RG33_Multi1", 1},
			{"BSF_Skin_RG33_Desert1", 1},
			{"BSF_Skin_RG33_Desert2", 1}
		};
	};
	class rhsusf_RG33_base: BSF_Skin_RG33_Base{};
	class rhsusf_rg33_d: BSF_Skin_RG33_Base{};
	class rhsusf_rg33_WD: BSF_Skin_RG33_Base{};
	class rhsusf_rg33_usmc_d: BSF_Skin_RG33_Base{};
	class rhsusf_rg33_usmc_WD: BSF_Skin_RG33_Base{};
	class rhsusf_rg33_m2_d: BSF_Skin_RG33_Base{};
	class rhsusf_rg33_m2_WD: BSF_Skin_RG33_Base{};
	class rhsusf_rg33_m2_usmc_d: BSF_Skin_RG33_Base{};
	class rhsusf_rg33_m2_usmc_WD: BSF_Skin_RG33_Base{};

	class rhsusf_M1238A1_socom_d: BSF_Skin_RG33_Base{};
	class rhsusf_M1238A1_socom_WD: BSF_Skin_RG33_Base{};
	class rhsusf_M1238A1_M2_socom_d: BSF_Skin_RG33_Base{};
	class rhsusf_M1238A1_M2_socom_WD: BSF_Skin_RG33_Base{};
	class rhsusf_M1238A1_Mk19_socom_d: BSF_Skin_RG33_Base{};
	class rhsusf_M1238A1_Mk19_socom_WD: BSF_Skin_RG33_Base{};

//Textures
	class BSF_Skin_RG33_Default_Desert: SneakCustoms{
		skinName = "RHS Default Desert";
        hiddenSelectionsTextures[] = {
			"rhsusf\addons\rhsusf_rg33\data\M1238A1_Main_CO.paa",
			"rhsusf\addons\rhsusf_rg33\data\M1238A1_Wheels_CO.paa",
			"rhsusf\addons\rhsusf_rg33\data\M1238A1_Markings_CA.paa",
			"rhsusf\addons\rhsusf_caiman\data\M153_CO.paa"
		};
        availableFor = "All";
	};	

	class BSF_Skin_RG33_Default_Woodland: SneakCustoms{
		skinName = "RHS Default Woodland";
        hiddenSelectionsTextures[] = {
			"rhsusf\addons\rhsusf_rg33\data\M1238A1_Main_WD_CO.paa",
			"rhsusf\addons\rhsusf_rg33\data\M1238A1_Wheels_WD_CO.paa",
			"rhsusf\addons\rhsusf_rg33\data\M1238A1_Markings_CA.paa",
			"rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa"
		};
        availableFor = "All";
	};	

	class BSF_Skin_RG33_MossyOak: SneakCustoms{
		skinName = "BSF Mossy Oak";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_MossyOak_1_Main.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_MossyOak_2_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Decals_3.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_MossyOak_4_M153.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_RG33_Black: SneakCustoms{
		skinName = "BSF Black";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Black_1_Main.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Black_2_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Decals_3.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Black_4_M153.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_RG33_DesertDigi: SneakCustoms{
		skinName = "BSF Desert Digi";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_DesertDigi_1_Main.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_DesertDigi_2_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Decals_3.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_DesertDigi_4_M153.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_RG33_Gray: SneakCustoms{
		skinName = "BSF Gray";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Gray_1_Main.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Gray_2_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Decals_3.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Gray_4_M153.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_RG33_WD1: SneakCustoms{
		skinName = "BSF Woodland";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_WD_1_Main.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_WD_2_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Decals_3.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_WD_4_M153.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_RG33_SnowLeopard: SneakCustoms{
		skinName = "BSF Snow Leopard";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_SnowLeopard_1_Main.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_SnowLeopard_2_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Decals_3.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_SnowLeopard_4_M153.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_RG33_Tiger: SneakCustoms{
		skinName = "BSF Crouching Tiger";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Tiger_1_Main.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Tiger_2_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Decals_3.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Tiger_4_M153.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_RG33_Winter: SneakCustoms{
		skinName = "BSF Winter";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Winter_1_Main.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Winter_2_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Decals_3.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Winter_4_M153.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_RG33_WinterGreen: SneakCustoms{
		skinName = "BSF WinterGreen";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_WinterGreen_1_Main.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_WinterGreen_2_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Decals_3.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_WinterGreen_4_M153.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_RG33_Stone: SneakCustoms{
		skinName = "BSF Stone";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Stone_1_Main.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Stone_2_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Decals_3.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Stone_4_M153.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_RG33_Multi1: SneakCustoms{
		skinName = "BSF Multi";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Multi1_1_Main.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Multi1_2_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Decals_3.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Multi1_4_M153.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_RG33_Desert1: SneakCustoms{
		skinName = "BSF Desert Fox";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Desert1_1_Main.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Desert1_2_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Decals_3.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Desert1_4_M153.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_RG33_Desert2: SneakCustoms{
		skinName = "BSF Desert Storm";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Desert2_1_Main.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Desert2_2_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Decals_3.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Desert2_4_M153.paa"
		};
        availableFor = "Vip";
	};	

////////////////////////////////	
// RG33L
////////////////////////////////	

	class BSF_Skin_RG33L_Base{
		skins[] = {
			{"BSF_Skin_RG33L_Default_Desert", 500},
			{"BSF_Skin_RG33L_Default_Woodland", 500},
			{"BSF_Skin_RG33L_MossyOak", 1},
			{"BSF_Skin_RG33L_Black", 1},
			{"BSF_Skin_RG33L_Winter", 1},
			{"BSF_Skin_RG33L_DesertDigi", 1},
			{"BSF_Skin_RG33L_Gray", 1},
			{"BSF_Skin_RG33L_WD", 1},
			{"BSF_Skin_RG33L_SnowLeopard", 1},
			{"BSF_Skin_RG33L_Tiger", 1},
			{"BSF_Skin_RG33L_WinterGreen", 1},
			{"BSF_Skin_RG33L_Stone", 1},
			{"BSF_Skin_RG33L_Desert1", 1},
			{"BSF_Skin_RG33L_Desert2", 1},
			{"BSF_Skin_RG33L_Multi1", 1}
		};
	};
	class rhsusf_RG33L_base: BSF_Skin_RG33L_Base{};
	class rhsusf_M1232_usarmy_d: BSF_Skin_RG33L_Base{};
	class rhsusf_RG33L_GPK_base: BSF_Skin_RG33L_Base{};
	class rhsusf_M1232_M2_usarmy_d: BSF_Skin_RG33L_Base{};
	class rhsusf_M1232_MK19_usarmy_d: BSF_Skin_RG33L_Base{};
	class rhsusf_M1237_M2_usarmy_d: BSF_Skin_RG33L_Base{};
	class rhsusf_M1237_MK19_usarmy_d: BSF_Skin_RG33L_Base{};
	class rhsusf_M1232_MC_M2_usmc_d: BSF_Skin_RG33L_Base{};
	class rhsusf_M1232_MC_MK19_usmc_d: BSF_Skin_RG33L_Base{};
	class rhsusf_M1232_MC_M2_usmc_WD: BSF_Skin_RG33L_Base{};
	class rhsusf_M1232_MC_MK19_usmc_WD: BSF_Skin_RG33L_Base{};
	class rhsusf_M1232_usarmy_WD: BSF_Skin_RG33L_Base{};
	class rhsusf_M1232_M2_usarmy_WD: BSF_Skin_RG33L_Base{};
	class rhsusf_M1232_MK19_usarmy_WD: BSF_Skin_RG33L_Base{};
	class rhsusf_M1237_M2_usarmy_WD: BSF_Skin_RG33L_Base{};
	class rhsusf_M1237_MK19_usarmy_WD: BSF_Skin_RG33L_Base{};
			
//Textures
	class BSF_Skin_RG33L_Default_Desert: SneakCustoms{
		skinName = "RHS Default Desert";
        hiddenSelectionsTextures[] = {
					"rhsusf\addons\rhsusf_RG33L\data\RG33_Body_CO.paa",
					"rhsusf\addons\rhsusf_RG33L\data\RG33_Chassis_CO.paa",
					"rhsusf\addons\rhsusf_RG33L\data\RG33_Accessory2_CO.paa",
					"rhsusf\addons\rhsusf_RG33L\data\RG33_Armor_CO.paa",
					"rhsusf\addons\rhsusf_RG33L\data\RG33_TurretD_CO.paa",
					"rhsusf\addons\rhsusf_RG33L\data\RG33_Wheels_CO.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
					"rhsusf\addons\rhsusf_RG33L\data\MCTAGS_CO.paa",
					"rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
		};
        availableFor = "All";
	};	

	class BSF_Skin_RG33L_Default_Woodland: SneakCustoms{
		skinName = "RHS Default Woodland";
        hiddenSelectionsTextures[] = {
					"rhsusf\addons\rhsusf_RG33L\data\RG33_Body_WD_CO.paa",
					"rhsusf\addons\rhsusf_RG33L\data\RG33_Chassis_WD_CO.paa",
					"rhsusf\addons\rhsusf_RG33L\data\RG33_Accessory2_WD_CO.paa",
					"rhsusf\addons\rhsusf_RG33L\data\RG33_Armor_WD_CO.paa",
					"rhsusf\addons\rhsusf_RG33L\data\RG33_TurretWD_CO.paa",
					"rhsusf\addons\rhsusf_RG33L\data\RG33_Wheels_WD_CO.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
					"rhsusf\addons\rhsusf_RG33L\data\MCTAGS_WD_CO.paa",
					"rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_WDl_co.paa"
		};
        availableFor = "All";
	};	

	class BSF_Skin_RG33L_MossyOak: SneakCustoms{
		skinName = "BSF Mossy Oak";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_MossyOak_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_MossyOak_2_Chassis.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_MossyOak_3_Accessory2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_MossyOak_4_Armor.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_MossyOak_5_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_MossyOak_6_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_MossyOak_7_MK64Mount.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_MossyOak_8_MCTAGS.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_MossyOak_9_CamoNet.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Decals_BSF_90210.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_RG33L_Black: SneakCustoms{
		skinName = "BSF Black";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Black_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Black_2_Chassis.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Black_3_Accessory2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Black_4_Armor.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Black_5_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Black_6_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Black_7_MK64Mount.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Black_8_MCTAGS.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Black_9_CamoNet.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Decals_BSF_90210_White.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_RG33L_Winter: SneakCustoms{
		skinName = "BSF Winter";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Winter_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Winter_2_Chassis.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Winter_3_Accessory2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Winter_4_Armor.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Winter_5_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Winter_6_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Winter_7_MK64Mount.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Winter_8_MCTAGS.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Winter_9_CamoNet.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Decals_BSF_90210.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_RG33L_DesertDigi: SneakCustoms{
		skinName = "BSF Desert";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_DesertDigi_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_DesertDigi_2_Chassis.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_DesertDigi_3_Accessory2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_DesertDigi_4_Armor.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_DesertDigi_5_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_DesertDigi_6_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_DesertDigi_7_MK64Mount.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_DesertDigi_8_MCTAGS.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_DesertDigi_9_CamoNet.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Decals_BSF_90210.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_RG33L_Gray: SneakCustoms{
		skinName = "BSF Gray";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Gray_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Gray_2_Chassis.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Gray_3_Accessory2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Gray_4_Armor.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Gray_5_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Gray_6_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Gray_7_MK64Mount.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Gray_8_MCTAGS.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Gray_9_CamoNet.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Decals_BSF_90210.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_RG33L_WD: SneakCustoms{
		skinName = "BSF WD";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_WD_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_WD_2_Chassis.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_WD_3_Accessory2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_WD_4_Armor.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_WD_5_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_WD_6_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_WD_7_MK64Mount.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_WD_8_MCTAGS.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_WD_9_CamoNet.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Decals_BSF_90210.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_RG33L_SnowLeopard: SneakCustoms{
		skinName = "BSF Snow Leopard";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_SnowLeopard_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_SnowLeopard_2_Chassis.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_SnowLeopard_3_Accessory2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_SnowLeopard_4_Armor.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_SnowLeopard_5_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_SnowLeopard_6_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_SnowLeopard_7_MK64Mount.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_SnowLeopard_8_MCTAGS.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_SnowLeopard_9_CamoNet.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Decals_BSF_90210.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_RG33L_Tiger: SneakCustoms{
		skinName = "BSF Crouching Tiger";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Tiger_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Tiger_2_Chassis.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Tiger_3_Accessory2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Tiger_4_Armor.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Tiger_5_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Tiger_6_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Tiger_7_MK64Mount.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Tiger_8_MCTAGS.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Tiger_9_CamoNet.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Decals_BSF_90210.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_RG33L_WinterGreen: SneakCustoms{
		skinName = "BSF WinterGreen";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_WinterGreen_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_WinterGreen_2_Chassis.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_WinterGreen_3_Accessory2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_WinterGreen_4_Armor.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_WinterGreen_5_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_WinterGreen_6_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_WinterGreen_7_MK64Mount.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_WinterGreen_8_MCTAGS.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_WinterGreen_9_CamoNet.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Decals_BSF_90210.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_RG33L_Stone: SneakCustoms{
		skinName = "BSF Stone";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Stone_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Stone_2_Chassis.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Stone_3_Accessory2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Stone_4_Armor.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Stone_5_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Stone_6_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Stone_7_MK64Mount.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Stone_8_MCTAGS.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Stone_9_CamoNet.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Decals_BSF_90210.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_RG33L_Desert1: SneakCustoms{
		skinName = "BSF Desert Fox";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Desert1_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Desert1_2_Chassis.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Desert1_3_Accessory2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Desert1_4_Armor.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Desert1_5_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Desert1_6_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Desert1_7_MK64Mount.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Desert1_8_MCTAGS.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Desert1_9_CamoNet.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Decals_BSF_90210.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_RG33L_Desert2: SneakCustoms{
		skinName = "BSF Desert Storm";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Desert2_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Desert2_2_Chassis.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Desert2_3_Accessory2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Desert2_4_Armor.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Desert2_5_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Desert2_6_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Desert2_7_MK64Mount.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Desert2_8_MCTAGS.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Desert2_9_CamoNet.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Decals_BSF_90210.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_RG33L_Multi1: SneakCustoms{
		skinName = "BSF Multi";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Multi1_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Multi1_2_Chassis.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Multi1_3_Accessory2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Multi1_4_Armor.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Multi1_5_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Multi1_6_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Multi1_7_MK64Mount.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Multi1_8_MCTAGS.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Multi1_9_CamoNet.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Decals_BSF_90210.paa"
		};
        availableFor = "Vip";
	};	

////////////////////////////////	
// RG33 Cougar
////////////////////////////////	

	class BSF_Skin_Cougar_Base{
		skins[] = {
			{"BSF_Skin_Cougar_Default_Desert", 500},
			{"BSF_Skin_Cougar_Default_Woodland", 500},
			{"BSF_Skin_Cougar_MossyOak", 1},
			{"BSF_Skin_Cougar_Black", 1},
			{"BSF_Skin_Cougar_Gray", 1},
			{"BSF_Skin_Cougar_DesertDigi", 1},
			{"BSF_Skin_Cougar_WD", 1},
			{"BSF_Skin_Cougar_Tiger", 1},
			{"BSF_Skin_Cougar_SnowLeopard", 1},
			{"BSF_Skin_Cougar_WinterGreen", 1},
			{"BSF_Skin_Cougar_Winter", 1},
			{"BSF_Skin_Cougar_Stone", 1},
			{"BSF_Skin_Cougar_Multi1", 1},
			{"BSF_Skin_Cougar_Desert1", 1},
			{"BSF_Skin_Cougar_Desert2", 1}
		};
	};

	class rhsusf_Cougar_base: BSF_Skin_Cougar_Base{};
	class rhsusf_CGRCAT1A2_usmc_d: BSF_Skin_Cougar_Base{};
	class rhsusf_cougar_GPK_base: BSF_Skin_Cougar_Base{};
	class rhsusf_CGRCAT1A2_M2_usmc_d: BSF_Skin_Cougar_Base{};
	class rhsusf_CGRCAT1A2_Mk19_usmc_d: BSF_Skin_Cougar_Base{};
	class rhsusf_CGRCAT1A2_usmc_WD: BSF_Skin_Cougar_Base{};
	class rhsusf_CGRCAT1A2_M2_usmc_WD: BSF_Skin_Cougar_Base{};
	class rhsusf_CGRCAT1A2_Mk19_usmc_WD: BSF_Skin_Cougar_Base{};
			
//Textures
	class BSF_Skin_Cougar_Default_Desert: SneakCustoms{
		skinName = "RHS Default Desert";
        hiddenSelectionsTextures[] = {
			"rhsusf\addons\rhsusf_cougar\data\CGR_Body_CO.paa",
			"rhsusf\addons\rhsusf_cougar\data\CGR_Labels_CA.paa",
			"rhsusf\addons\rhsusf_rg33l\data\MCTAGS_CO.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
		};
        availableFor = "All";
	};	

	class BSF_Skin_Cougar_Default_Woodland: SneakCustoms{
		skinName = "RHS Default Woodland";
        hiddenSelectionsTextures[] = {
			"rhsusf\addons\rhsusf_cougar\data\CGR_Body_WD_CO.paa",
			"rhsusf\addons\rhsusf_cougar\data\CGR_Labels_CA.paa",
			"rhsusf\addons\rhsusf_rg33l\data\MCTAGS_WD_CO.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
		};
        availableFor = "All";
	};	

	class BSF_Skin_Cougar_Black: SneakCustoms{
		skinName = "BSF Black";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Cougar_Black_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Cougar_Decals_2_90210_Black.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Black_8_MCTAGS.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Black_7_MK64Mount.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_Cougar_MossyOak: SneakCustoms{
		skinName = "BSF Mossy Oak";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Cougar_MossyOak_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Cougar_Decals_2_90210_Black.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_MossyOak_8_MCTAGS.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_MossyOak_7_MK64Mount.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_Cougar_Gray: SneakCustoms{
		skinName = "BSF Gray";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Cougar_Gray_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Cougar_Decals_2_90210_Black.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Gray_8_MCTAGS.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Gray_7_MK64Mount.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_Cougar_DesertDigi: SneakCustoms{
		skinName = "BSF Desert";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Cougar_DesertDigi_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Cougar_Decals_2_90210_Black.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_DesertDigi_8_MCTAGS.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_DesertDigi_7_MK64Mount.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_Cougar_WD: SneakCustoms{
		skinName = "BSF WD";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Cougar_WD_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Cougar_Decals_2_90210_Black.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_WD_8_MCTAGS.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_WD_7_MK64Mount.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_Cougar_Tiger: SneakCustoms{
		skinName = "BSF Crouching Tiger";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Cougar_Tiger_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Cougar_Decals_2_90210_Black.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Tiger_8_MCTAGS.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Tiger_7_MK64Mount.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_Cougar_SnowLeopard: SneakCustoms{
		skinName = "BSF Snow Leopardd";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Cougar_SnowLeopard_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Cougar_Decals_2_90210_Black.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_SnowLeopard_8_MCTAGS.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_SnowLeopard_7_MK64Mount.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_Cougar_WinterGreen: SneakCustoms{
		skinName = "BSF WinterGreen";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Cougar_WinterGreen_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Cougar_Decals_2_90210_Black.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_WinterGreen_8_MCTAGS.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_WinterGreen_7_MK64Mount.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_Cougar_Winter: SneakCustoms{
		skinName = "BSF Winter";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Cougar_Winter_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Cougar_Decals_2_90210_Black.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Winter_8_MCTAGS.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Winter_7_MK64Mount.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_Cougar_Stone: SneakCustoms{
		skinName = "BSF Stone";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Cougar_Stone_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Cougar_Decals_2_90210_Black.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Stone_8_MCTAGS.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Stone_7_MK64Mount.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_Cougar_Multi1: SneakCustoms{
		skinName = "BSF Multi";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Cougar_Multi1_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Cougar_Decals_2_90210_Black.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Multi1_8_MCTAGS.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Multi1_7_MK64Mount.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_Cougar_Desert1: SneakCustoms{
		skinName = "BSF Desert Fox";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Cougar_Desert1_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Cougar_Decals_2_90210_Black.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Desert1_8_MCTAGS.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Desert1_7_MK64Mount.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_Cougar_Desert2: SneakCustoms{
		skinName = "BSF Desert Storm";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Cougar_Desert2_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Cougar_Decals_2_90210_Black.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Desert2_8_MCTAGS.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Desert2_7_MK64Mount.paa"
		};
        availableFor = "Vip";
	};	

////////////////////////////////	
// RG33 Caiman
////////////////////////////////	

	class BSF_Skin_Caiman_Base{
		skins[] = {
			{"BSF_Skin_Caiman_Default_Desert", 500},
			{"BSF_Skin_Caiman_Default_Woodland", 500},
			{"BSF_Skin_Caiman_MossyOak", 1},
			{"BSF_Skin_Caiman_Black", 1},
			{"BSF_Skin_Caiman_Gray", 1},
			{"BSF_Skin_Caiman_DesertDigi", 1},
			{"BSF_Skin_Caiman_WD", 1},
			{"BSF_Skin_Caiman_SnowLeopard", 1},
			{"BSF_Skin_Caiman_Tiger", 1},
			{"BSF_Skin_Caiman_Winter", 1},
			{"BSF_Skin_Caiman_WinterGreen", 1},
			{"BSF_Skin_Caiman_Stone", 1},
			{"BSF_Skin_Caiman_Multi1", 1},
			{"BSF_Skin_Caiman_Desert1", 1},
			{"BSF_Skin_Caiman_Desert2", 1}
		};
	};

	class rhsusf_caiman_base: BSF_Skin_Caiman_Base{};
	class rhsusf_M1220_usarmy_d: BSF_Skin_Caiman_Base{};
	class rhsusf_caiman_GPK_base: BSF_Skin_Caiman_Base{};
	class rhsusf_M1220_M2_usarmy_d: BSF_Skin_Caiman_Base{};
	class rhsusf_M1220_MK19_usarmy_d: BSF_Skin_Caiman_Base{};
	class rhsusf_M1220_M153_M2_usarmy_d: BSF_Skin_Caiman_Base{};
	class rhsusf_M1220_M153_MK19_usarmy_d: BSF_Skin_Caiman_Base{};
	class rhsusf_M1230_M2_usarmy_d: BSF_Skin_Caiman_Base{};
	class rhsusf_M1230_MK19_usarmy_d: BSF_Skin_Caiman_Base{};
	class rhsusf_M1230a1_usarmy_d: BSF_Skin_Caiman_Base{};
	class rhsusf_M1220_usarmy_WD: BSF_Skin_Caiman_Base{};
	class rhsusf_M1220_M2_usarmy_WD: BSF_Skin_Caiman_Base{};
	class rhsusf_M1220_MK19_usarmy_WD: BSF_Skin_Caiman_Base{};
	class rhsusf_M1230_M2_usarmy_WD: BSF_Skin_Caiman_Base{};
	class rhsusf_M1230_MK19_usarmy_WD: BSF_Skin_Caiman_Base{};
	class rhsusf_M1220_M153_M2_usarmy_WD: BSF_Skin_Caiman_Base{};
	class rhsusf_M1220_M153_MK19_usarmy_WD: BSF_Skin_Caiman_Base{};
	class rhsusf_M1230a1_usarmy_WD: BSF_Skin_Caiman_Base{};

//Textures
	class BSF_Skin_Caiman_Default_Desert: SneakCustoms{
		skinName = "RHS Default Desert";
        hiddenSelectionsTextures[] = {
			"rhsusf\addons\rhsusf_caiman\data\cmn_Body_CO.paa",
			"rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_CO.paa",
			"rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_CO.paa",
			"rhsusf\addons\rhsusf_caiman\data\cmn_Armor_CO.paa",
			"rhsusf\addons\rhsusf_RG33L\data\RG33_TurretD_CO.paa",
			"rhsusf\addons\rhsusf_caiman\data\cmn_wheel_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
			"rhsusf\addons\rhsusf_caiman\data\cmn_AMB_CO.paa",
			"rhsusf\addons\rhsusf_caiman\data\M153_CO.paa",
			"rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
		};
        availableFor = "All";
	};	

	class BSF_Skin_Caiman_Default_Woodland: SneakCustoms{
		skinName = "RHS Default Woodland";
        hiddenSelectionsTextures[] = {
			"rhsusf\addons\rhsusf_caiman\data\cmn_Body_WD_CO.paa",
			"rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_WD_CO.paa",
			"rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_WD_CO.paa",
			"rhsusf\addons\rhsusf_caiman\data\cmn_Armor_WD_CO.paa",
			"rhsusf\addons\rhsusf_RG33L\data\RG33_TurretWD_CO.paa",
			"rhsusf\addons\rhsusf_caiman\data\cmn_wheel_WD_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
			"rhsusf\addons\rhsusf_caiman\data\cmn_AMB_WD_CO.paa",
			"rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa",
			"rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_WDl_co.paa"
		};
        availableFor = "All";
	};	

	class BSF_Skin_Caiman_Black: SneakCustoms{
		skinName = "BSF Black";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Black_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Black_2_Chassis.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Black_3_Accessory2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Black_4_Armor.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Black_5_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Black_6_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Black_7_MK64Mount.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Black_8_AMB.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Black_4_M153.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Black_10_CamoNet.paa"
		};
        availableFor = "Vip";
	};
	
	class BSF_Skin_Caiman_Gray: SneakCustoms{
		skinName = "BSF Gray";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Gray_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Gray_2_Chassis.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Gray_3_Accessory2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Gray_4_Armor.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Gray_5_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Gray_6_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Gray_7_MK64Mount.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Gray_8_AMB.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Gray_4_M153.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Gray_10_CamoNet.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Caiman_DesertDigi: SneakCustoms{
		skinName = "BSF Desert";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_DesertDigi_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_DesertDigi_2_Chassis.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_DesertDigi_3_Accessory2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_DesertDigi_4_Armor.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_DesertDigi_5_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_DesertDigi_6_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_DesertDigi_7_MK64Mount.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_DesertDigi_8_AMB.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_DesertDigi_4_M153.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_DesertDigi_10_CamoNet.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Caiman_WD: SneakCustoms{
		skinName = "BSF WD";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_WD_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_WD_2_Chassis.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_WD_3_Accessory2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_WD_4_Armor.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_WD_5_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_WD_6_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_WD_7_MK64Mount.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_WD_8_AMB.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_WD_4_M153.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_WD_10_CamoNet.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Caiman_SnowLeopard: SneakCustoms{
		skinName = "BSF Snow Leopard";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_SnowLeopard_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_SnowLeopard_2_Chassis.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_SnowLeopard_3_Accessory2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_SnowLeopard_4_Armor.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_SnowLeopard_5_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_SnowLeopard_6_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_SnowLeopard_7_MK64Mount.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_SnowLeopard_8_AMB.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_SnowLeopard_4_M153.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_SnowLeopard_10_CamoNet.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Caiman_Tiger: SneakCustoms{
		skinName = "BSF Crouching Tiger";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Tiger_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Tiger_2_Chassis.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Tiger_3_Accessory2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Tiger_4_Armor.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Tiger_5_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Tiger_6_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Tiger_7_MK64Mount.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Tiger_8_AMB.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Tiger_4_M153.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Tiger_10_CamoNet.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Caiman_Winter: SneakCustoms{
		skinName = "BSF Winter";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Winter_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Winter_2_Chassis.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Winter_3_Accessory2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Winter_4_Armor.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Winter_5_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Winter_6_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Winter_7_MK64Mount.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Winter_8_AMB.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Winter_4_M153.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Winter_10_CamoNet.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Caiman_WinterGreen: SneakCustoms{
		skinName = "BSF WinterGreen";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_WinterGreen_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_WinterGreen_2_Chassis.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_WinterGreen_3_Accessory2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_WinterGreen_4_Armor.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_WinterGreen_5_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_WinterGreen_6_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_WinterGreen_7_MK64Mount.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_WinterGreen_8_AMB.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_WinterGreen_4_M153.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_WinterGreen_10_CamoNet.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Caiman_Stone: SneakCustoms{
		skinName = "BSF Stone";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Stone_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Stone_2_Chassis.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Stone_3_Accessory2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Stone_4_Armor.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Stone_5_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Stone_6_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Stone_7_MK64Mount.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Stone_8_AMB.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Stone_4_M153.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Stone_10_CamoNet.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Caiman_MossyOak: SneakCustoms{
		skinName = "BSF Mossy Oak";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_MossyOak_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_MossyOak_2_Chassis.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_MossyOak_3_Accessory2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_MossyOak_4_Armor.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_MossyOak_5_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_MossyOak_6_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_MossyOak_7_MK64Mount.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_MossyOak_8_AMB.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_MossyOak_4_M153.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_MossyOak_10_CamoNet.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Caiman_Multi1: SneakCustoms{
		skinName = "BSF Multi";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Multi1_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Multi1_2_Chassis.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Multi1_3_Accessory2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Multi1_4_Armor.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Multi1_5_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Multi1_6_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Multi1_7_MK64Mount.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Multi1_8_AMB.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Multi1_4_M153.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Multi1_10_CamoNet.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Caiman_Desert1: SneakCustoms{
		skinName = "BSF Desert Fox";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Desert1_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Desert1_2_Chassis.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Desert1_3_Accessory2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Desert1_4_Armor.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Desert1_5_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Desert1_6_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Desert1_7_MK64Mount.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Desert1_8_AMB.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Desert1_4_M153.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Desert1_10_CamoNet.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Caiman_Desert2: SneakCustoms{
		skinName = "BSF Desert Storm";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Desert2_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Desert2_2_Chassis.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Desert2_3_Accessory2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Desert2_4_Armor.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Desert2_5_Turret.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Desert2_6_Wheels.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Desert2_7_MK64Mount.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_Caiman_Desert2_8_AMB.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33_Desert2_4_M153.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\RG33\BSF_RG33L_Desert2_10_CamoNet.paa"
		};
        availableFor = "Vip";
	};

