
////////////////////////////////
// Mi24
////////////////////////////////

	class BSF_Skin_Mi24_Base{
		skins[] = {
			{"BSF_Skin_Mi24_RHS_Gray", 500},
			{"BSF_Skin_Mi24_RHS_Gray2", 500},
			{"BSF_Skin_Mi24_RHS_Olive", 500},
			{"BSF_Skin_Mi24_RHS_Camo1", 500},
			{"BSF_Skin_Mi24_RHS_Fog", 1},
			{"BSF_Skin_Mi24_RHS_Camo2a", 1},
			{"BSF_Skin_Mi24_RHS_Camo2b", 1},
			{"BSF_Skin_Mi24_RHS_Camo2c", 1},
			{"BSF_Skin_Mi24_RHS_UN", 1},
			{"BSF_Skin_Mi24_Arctic", 1},
			{"BSF_Skin_Mi24_Black", 1},
			{"BSF_Skin_Mi24_CSAT", 1},
			{"BSF_Skin_Mi24_Desert1", 1},
			{"BSF_Skin_Mi24_DesertDigi", 1},
			{"BSF_Skin_Mi24_BlueFractal", 1},
			{"BSF_Skin_Mi24_Midnight", 1},
			{"BSF_Skin_Mi24_CDC", 1},
			{"BSF_Skin_Mi24_MossyOak", 1},
			{"BSF_Skin_Mi24_Multi1", 1},
			{"BSF_Skin_Mi24_SnowLeopard", 1},
			{"BSF_Skin_Mi24_Tiger", 1},
			{"BSF_Skin_Mi24_WD", 1},
			{"BSF_Skin_Mi24_WinterGreen", 1},
			{"BSF_Skin_Mi24_OrangeAdmin", 1}
		};
	};

	class Heli_Attack_02_base_F: BSF_Skin_Mi24_Base{};
	class RHS_Mi24P_VVS_Base: BSF_Skin_Mi24_Base{};
	class RHS_Mi24P_vvs: BSF_Skin_Mi24_Base{};
	class RHS_Mi24P_AT_VVS_Base: BSF_Skin_Mi24_Base{};
	class RHS_Mi24P_AT_vdv: BSF_Skin_Mi24_Base{};
	class RHS_Mi24P_AT_vvs: BSF_Skin_Mi24_Base{};
	class RHS_Mi24P_AT_vvsc: BSF_Skin_Mi24_Base{};
	class RHS_Mi24P_CAS_VVS_Base: BSF_Skin_Mi24_Base{};
	class RHS_Mi24P_CAS_vdv: BSF_Skin_Mi24_Base{};
	class RHS_Mi24P_CAS_vvs: BSF_Skin_Mi24_Base{};
	class RHS_Mi24P_CAS_vvsc: BSF_Skin_Mi24_Base{};
	class RHS_Mi24P_vdv: BSF_Skin_Mi24_Base{};
	class RHS_Mi24P_vvsc: BSF_Skin_Mi24_Base{};
	class RHS_Mi24D_Base: BSF_Skin_Mi24_Base{};
	class RHS_Mi24D_Early_Base: BSF_Skin_Mi24_Base{};
	class RHS_Mi24V_AT_VVS_Base: BSF_Skin_Mi24_Base{};
	class RHS_Mi24V_AT_vdv: BSF_Skin_Mi24_Base{};
	class RHS_Mi24V_AT_vvs: BSF_Skin_Mi24_Base{};
	class RHS_Mi24V_AT_vvsc: BSF_Skin_Mi24_Base{};
	class RHS_Mi24V_Base: BSF_Skin_Mi24_Base{};
	class RHS_Mi24V_FAB_VVS_Base: BSF_Skin_Mi24_Base{};
	class RHS_Mi24V_FAB_vdv: BSF_Skin_Mi24_Base{};
	class RHS_Mi24V_FAB_vvs: BSF_Skin_Mi24_Base{};
	class RHS_Mi24V_FAB_vvsc: BSF_Skin_Mi24_Base{};
	class RHS_Mi24V_UPK23_VVS_Base: BSF_Skin_Mi24_Base{};
	class RHS_Mi24V_UPK23_vdv: BSF_Skin_Mi24_Base{};
	class RHS_Mi24V_UPK23_vvs: BSF_Skin_Mi24_Base{};
	class RHS_Mi24V_UPK23_vvsc: BSF_Skin_Mi24_Base{};
	class RHS_Mi24V_VVS_Base: BSF_Skin_Mi24_Base{};
	class RHS_Mi24V_vdv: BSF_Skin_Mi24_Base{};
	class RHS_Mi24V_vvs: BSF_Skin_Mi24_Base{};
	class RHS_Mi24V_vvsc: BSF_Skin_Mi24_Base{};
	class RHS_Mi24Vt_vvs: BSF_Skin_Mi24_Base{};
	class RHS_Mi24Vt_vvsc: BSF_Skin_Mi24_Base{};
	class RHS_Mi24_base: BSF_Skin_Mi24_Base{};
	class rhsgref_mi24g_base: BSF_Skin_Mi24_Base{};
	class mas_Mi24_Base: BSF_Skin_Mi24_Base{};
	class I_mas_Mi24_V: BSF_Skin_Mi24_Base{};
	class O_mas_Mi24_V: BSF_Skin_Mi24_Base{};

	class BSF_Skin_Mi24_OrangeAdmin: SneakCustoms{
		skinName = "BSF Super Admin";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Mi24\BSF_Mi24_AdminOrange_1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Mi24\BSF_Mi24_AdminOrange_2.paa",
			"rhsgref\addons\rhsgref_tohport_air\superhind\data\mi35_sh_co.paa",
			"",	"",	""
		};
		availableFor = "Admin";
	};
	class BSF_Skin_Mi24_RHS_Gray: SneakCustoms{
		skinName = "RHS Gray";
		hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_air\mi35\data\mi24p_001_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi35\data\mi24p_002_co.paa",
			"rhsgref\addons\rhsgref_tohport_air\superhind\data\mi35_sh_co.paa",
			"",
			"rhsafrf\addons\rhs_decals\data\numbers\aviayellow\0_ca.paa",
			"rhsafrf\addons\rhs_decals\data\numbers\aviayellow\0_ca.paa"
		};
		availableFor = "All";
	};

	class BSF_Skin_Mi24_RHS_Gray2: SneakCustoms{
		skinName = "RHS Blue Gray";
		hiddenSelectionsTextures[] = {
			"rhsgref\addons\rhsgref_tohport_air\superhind\data\mi24sh_001_co.paa",
			"rhsgref\addons\rhsgref_tohport_air\superhind\data\mi24sh_002_co.paa",
			"rhsgref\addons\rhsgref_tohport_air\superhind\data\mi35_sh_co.paa",
			"",
			"rhsafrf\addons\rhs_decals\data\numbers\aviacdf\0_ca.paa",
			"rhsafrf\addons\rhs_decals\data\numbers\aviacdf\0_ca.paa"
		};
		availableFor = "All";
	};

	class BSF_Skin_Mi24_RHS_Olive: SneakCustoms{
		skinName = "RHS Olive";
		hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_001_camo2_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_002_camo2_co.paa",
			"rhsgref\addons\rhsgref_tohport_air\superhind\data\mi35_sh_co.paa",
			"",
			"rhsafrf\addons\rhs_decals\data\numbers\aviayellow\0_ca.paa",
			"rhsafrf\addons\rhs_decals\data\numbers\aviayellow\0_ca.paa"
		};
		availableFor = "All";
	};

	class BSF_Skin_Mi24_RHS_Camo1: SneakCustoms{
		skinName = "RHS Green Camo";
		hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_001_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_002_co.paa",
			"rhsgref\addons\rhsgref_tohport_air\superhind\data\mi35_sh_co.paa",
			"",
			"rhsafrf\addons\rhs_decals\data\numbers\aviacdf\0_ca.paa",
			"rhsafrf\addons\rhs_decals\data\numbers\aviacdf\0_ca.paa"
		};
		availableFor = "All";
	};

	class BSF_Skin_Mi24_RHS_Fog: SneakCustoms{
		skinName = "RHS Fog";
		hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_001_camo3_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_002_camo3_co.paa",
			"rhsgref\addons\rhsgref_tohport_air\superhind\data\mi35_sh_co.paa",
			"",
			"rhsafrf\addons\rhs_decals\data\numbers\aviayellow\0_ca.paa",
			"rhsafrf\addons\rhs_decals\data\numbers\aviayellow\0_ca.paa"
		};
		availableFor = "Vip";
	};

	class BSF_Skin_Mi24_RHS_Camo2a: SneakCustoms{
		skinName = "RHS Russian Camo";
		hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_001_camo1_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_002_camo1_co.paa",
			"rhsgref\addons\rhsgref_tohport_air\superhind\data\mi35_sh_co.paa",
			"",
			"rhsafrf\addons\rhs_decals\data\numbers\aviayellow\0_ca.paa",
			"rhsafrf\addons\rhs_decals\data\numbers\aviayellow\0_ca.paa"
		};
		availableFor = "Vip";
	};

	class BSF_Skin_Mi24_RHS_Camo2b: SneakCustoms{
		skinName = "RHS Russian Camo (Dirty)";
		hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_air\mi35\data\soot\mi24p_001_soot1_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi35\data\soot\mi24p_002_soot1_co.paa",
			"rhsgref\addons\rhsgref_tohport_air\superhind\data\mi35_sh_co.paa",
			"",
			"rhsafrf\addons\rhs_decals\data\numbers\aviayellow\0_ca.paa",
			"rhsafrf\addons\rhs_decals\data\numbers\aviayellow\0_ca.paa"
		};
		availableFor = "Vip";
	};

	class BSF_Skin_Mi24_RHS_Camo2c: SneakCustoms{
		skinName = "RHS Russian Camo Stripe (Dirty)";
		hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_air\mi35\data\soot\mi24p_001_soot2_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi35\data\soot\mi24p_002_soot2_co.paa",
			"rhsgref\addons\rhsgref_tohport_air\superhind\data\mi35_sh_co.paa",
			"",
			"rhsafrf\addons\rhs_decals\data\numbers\aviayellow\0_ca.paa",
			"rhsafrf\addons\rhs_decals\data\numbers\aviayellow\0_ca.paa"
		};
		availableFor = "Vip";
	};

	class BSF_Skin_Mi24_RHS_UN: SneakCustoms{
		skinName = "RHS United Nations";
		hiddenSelectionsTextures[] = {
			"rhsgref\addons\rhsgref_tohport_air\mi24\data\26_unitednations_white_001_co.paa",
			"rhsgref\addons\rhsgref_tohport_air\mi24\data\26_unitednations_white_002_co.paa",
			"rhsgref\addons\rhsgref_tohport_air\superhind\data\mi35_sh_co.paa",
			"","",""
		};
		availableFor = "Vip";
	};

	class BSF_Skin_Mi24_Arctic: SneakCustoms{
		skinName = "BSF Arctic Blue";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Mi24\BSF_Mi24_Arctic_1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Mi24\BSF_Mi24_Arctic_2.paa",
			"rhsgref\addons\rhsgref_tohport_air\superhind\data\mi35_sh_co.paa",
			"",	"",	""
		};
		availableFor = "Vip";
	};

	class BSF_Skin_Mi24_Black: SneakCustoms{
		skinName = "BSF Black";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Mi24\BSF_Mi24_Black_1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Mi24\BSF_Mi24_Black_2.paa",
			"rhsgref\addons\rhsgref_tohport_air\superhind\data\mi35_sh_co.paa",
			"",	"",	""
		};
		availableFor = "Vip";
	};

	class BSF_Skin_Mi24_CSAT: SneakCustoms{
		skinName = "BSF CSAT";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Mi24\BSF_Mi24_CSAT_1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Mi24\BSF_Mi24_CSAT_2.paa",
			"rhsgref\addons\rhsgref_tohport_air\superhind\data\mi35_sh_co.paa",
			"",	"",	""
		};
		availableFor = "Vip";
	};

	class BSF_Skin_Mi24_Desert1: SneakCustoms{
		skinName = "BSF Desert Fox";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Mi24\BSF_Mi24_Desert1_1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Mi24\BSF_Mi24_Desert1_2.paa",
			"rhsgref\addons\rhsgref_tohport_air\superhind\data\mi35_sh_co.paa",
			"",	"",	""
		};
		availableFor = "Vip";
	};

	class BSF_Skin_Mi24_DesertDigi: SneakCustoms{
		skinName = "BSF Desert Digi";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Mi24\BSF_Mi24_DesertDigi_1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Mi24\BSF_Mi24_DesertDigi_2.paa",
			"rhsgref\addons\rhsgref_tohport_air\superhind\data\mi35_sh_co.paa",
			"",	"",	""
		};
		availableFor = "Vip";
	};

	class BSF_Skin_Mi24_BlueFractal: SneakCustoms{
		skinName = "BSF Blue Fractal";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Mi24\BSF_Mi24_BlueFractal_1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Mi24\BSF_Mi24_BlueFractal_2.paa",
			"rhsgref\addons\rhsgref_tohport_air\superhind\data\mi35_sh_co.paa",
			"",	"",	""
		};
		availableFor = "Vip";
	};

	class BSF_Skin_Mi24_Midnight: SneakCustoms{
		skinName = "BSF Midnight";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Mi24\BSF_Mi24_Midnight_1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Mi24\BSF_Mi24_Midnight_2.paa",
			"rhsgref\addons\rhsgref_tohport_air\superhind\data\mi35_sh_co.paa",
			"",	"",	""
		};
		availableFor = "Vip";
	};

	class BSF_Skin_Mi24_CDC: SneakCustoms{
		skinName = "BSF CDC";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Mi24\BSF_Mi24_CDC_1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Mi24\BSF_Mi24_CDC_2.paa",
			"rhsgref\addons\rhsgref_tohport_air\superhind\data\mi35_sh_co.paa",
			"",	"",	""
		};
		availableFor = "Vip";
	};

	class BSF_Skin_Mi24_MossyOak: SneakCustoms{
		skinName = "BSF Mossy Oak";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Mi24\BSF_Mi24_MossyOak_1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Mi24\BSF_Mi24_MossyOak_2.paa",
			"rhsgref\addons\rhsgref_tohport_air\superhind\data\mi35_sh_co.paa",
			"",	"",	""
		};
		availableFor = "Vip";
	};

	class BSF_Skin_Mi24_Multi1: SneakCustoms{
		skinName = "BSF Multi";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Mi24\BSF_Mi24_Multi1_1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Mi24\BSF_Mi24_Multi1_2.paa",
			"rhsgref\addons\rhsgref_tohport_air\superhind\data\mi35_sh_co.paa",
			"",	"",	""
		};
		availableFor = "Vip";
	};

	class BSF_Skin_Mi24_SnowLeopard: SneakCustoms{
		skinName = "BSF Snow Leopard";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Mi24\BSF_Mi24_SnowLeopard_1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Mi24\BSF_Mi24_SnowLeopard_2.paa",
			"rhsgref\addons\rhsgref_tohport_air\superhind\data\mi35_sh_co.paa",
			"",	"",	""
		};
		availableFor = "Vip";
	};

	class BSF_Skin_Mi24_Tiger: SneakCustoms{
		skinName = "BSF Crouching Tiger";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Mi24\BSF_Mi24_Tiger_1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Mi24\BSF_Mi24_Tiger_2.paa",
			"rhsgref\addons\rhsgref_tohport_air\superhind\data\mi35_sh_co.paa",
			"",	"",	""
		};
		availableFor = "Vip";
	};

	class BSF_Skin_Mi24_WD: SneakCustoms{
		skinName = "BSF Wooddland";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Mi24\BSF_Mi24_WD_1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Mi24\BSF_Mi24_WD_2.paa",
			"rhsgref\addons\rhsgref_tohport_air\superhind\data\mi35_sh_co.paa",
			"",	"",	""
		};
		availableFor = "Vip";
	};

	class BSF_Skin_Mi24_WinterGreen: SneakCustoms{
		skinName = "BSF WinterGreen";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Mi24\BSF_Mi24_WinterGreen_1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Mi24\BSF_Mi24_WinterGreen_2.paa",
			"rhsgref\addons\rhsgref_tohport_air\superhind\data\mi35_sh_co.paa",
			"",	"",	""
		};
		availableFor = "Vip";
	};

