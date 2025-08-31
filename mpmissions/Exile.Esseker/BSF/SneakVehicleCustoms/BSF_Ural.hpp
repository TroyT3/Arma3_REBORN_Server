
////////////////////////////////
// Ural
////////////////////////////////

	class BSF_Skin_Ural_Base{
		skins[] = {
			{"BSF_Skin_Ural_Arctic", 1},
			{"BSF_Skin_Ural_Black", 1},
			{"BSF_Skin_Ural_Desert1", 1},
			{"BSF_Skin_Ural_Gray", 1},
			{"BSF_Skin_Ural_MossyOak", 1},
			{"BSF_Skin_Ural_Multi1", 1},
			{"BSF_Skin_Ural_SnowLeopard", 1},
			{"BSF_Skin_Ural_Tiger", 1},
			{"BSF_Skin_Ural_WD", 1},
			{"RHS_Skin_Ural_Blue", 500},
			{"RHS_Skin_Ural_Yellow", 500},
			{"RHS_Skin_Ural_Worker", 500},
			{"RHS_Skin_Ural_Olive", 500},
			{"RHS_Skin_Ural_Camo1", 500},
			{"RHS_Skin_Ural_Camo2", 500},
			{"RHS_Skin_Ural_UN", 500},
			{"MAS_Skin_Ural_Russian", 150}
		};
	};

	class RHS_Ural_MSV_Base: BSF_Skin_Ural_Base{};
	class RHS_Ural_Civ_Base: BSF_Skin_Ural_Base{};

	class RHS_Ural_MSV_01: BSF_Skin_Ural_Base{};
	class RHS_Ural_VDV_01: BSF_Skin_Ural_Base{};
	class RHS_Ural_VMF_01: BSF_Skin_Ural_Base{};
	class RHS_Ural_VV_01: BSF_Skin_Ural_Base{};
	class RHS_Ural_Flat_MSV_01: BSF_Skin_Ural_Base{};
	class RHS_Ural_Flat_VDV_01: BSF_Skin_Ural_Base{};
	class RHS_Ural_Flat_VMF_01: BSF_Skin_Ural_Base{};
	class RHS_Ural_Flat_VV_01: BSF_Skin_Ural_Base{};

	class RHS_Ural_Civ_01: BSF_Skin_Ural_Base{};
	class RHS_Ural_Civ_02: BSF_Skin_Ural_Base{};
	class RHS_Ural_Civ_03: BSF_Skin_Ural_Base{};
	class rhsgref_nat_ural_work: BSF_Skin_Ural_Base{};
	class rhsgref_ins_g_ural_work: BSF_Skin_Ural_Base{};
	class rhsgref_ins_ural_work: BSF_Skin_Ural_Base{};

	class rhsgref_nat_ural: BSF_Skin_Ural_Base{};
	class rhssaf_army_ural: BSF_Skin_Ural_Base{};
	class rhssaf_army_o_ural: BSF_Skin_Ural_Base{};
	class rhsgref_un_ural: BSF_Skin_Ural_Base{};
	class rhssaf_un_ural: BSF_Skin_Ural_Base{};

	class rhsgref_cdf_ural: BSF_Skin_Ural_Base{};
	class rhsgref_cdf_b_ural: BSF_Skin_Ural_Base{};
	class rhsgref_ins_g_ural: BSF_Skin_Ural_Base{};
	class rhsgref_ins_ural: BSF_Skin_Ural_Base{};

	class BSF_Skin_Ural_Arctic: SneakCustoms{
		skinName = "BSF Arctic Blue";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Arctic_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Arctic_2_Back.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Black: SneakCustoms{
		skinName = "BSF Black Ops";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Black_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Black_2_Back.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Desert1: SneakCustoms{
		skinName = "BSF Desert Fox";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Desert1_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Desert1_2_Back.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Gray: SneakCustoms{
		skinName = "BSF Earl Gray";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Gray_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Gray_2_Back.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_MossyOak: SneakCustoms{
		skinName = "BSF Mossy Oak";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_MossyOak_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_MossyOak_2_Back.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Multi1: SneakCustoms{
		skinName = "BSF Multi";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Multi1_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Multi1_2_Back.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_SnowLeopard: SneakCustoms{
		skinName = "BSF Desert Fox";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_SnowLeopard_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_SnowLeopard_2_Back.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Tiger: SneakCustoms{
		skinName = "BSF Crouching Tiger";
        hiddenSelectionsTextures[] = {

			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Tiger_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Tiger_2_Back.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_WD: SneakCustoms{
		skinName = "BSF Woodland";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_WD_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_WD_2_Back.paa"
		};
        availableFor = "Vip";
	};

	class RHS_Skin_Ural_Blue: SneakCustoms{
		skinName = "RHS Blue";
        hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_civil_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_civil_co.paa"
		};
        availableFor = "All";
	};

	class RHS_Skin_Ural_Yellow: SneakCustoms{
		skinName = "RHS Yellow";
        hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_civ1_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_civ1_co.paa"
		};
        availableFor = "All";
	};

	class RHS_Skin_Ural_Worker: SneakCustoms{
		skinName = "RHS Worker";
        hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_civ2_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_civil_co.paa"
		};
        availableFor = "All";
	};

	class RHS_Skin_Ural_Olive: SneakCustoms{
		skinName = "RHS Olive";
        hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_co.paa"
		};
        availableFor = "All";
	};

	class RHS_Skin_Ural_Camo1: SneakCustoms{
		skinName = "RHS Camo 1";
        hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_camo_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_camo_co.paa"
		};
        availableFor = "All";
	};

	class RHS_Skin_Ural_Camo2: SneakCustoms{
		skinName = "RHS Camo 2";
        hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_chdkz_co.paa"
		};
        availableFor = "All";
	};

	class RHS_Skin_Ural_UN: SneakCustoms{
		skinName = "RHS UN";
        hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_un_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_un_co.paa"
		};
        availableFor = "All";
	};

	class MAS_Skin_Ural_Russian: SneakCustoms{
		skinName = "MAS Russian";
        hiddenSelectionsTextures[] = {
			"mas_cars\ural\data\ural_kabina_tka_co.paa",
			"mas_cars\ural\data\ural_plachta_tka_co.paa"
		};
        availableFor = "All";
	};


////////////////////////////////
// Ural Open
////////////////////////////////

	class BSF_Skin_Ural_Open_Base{
		skins[] = {
			{"BSF_Skin_Ural_Open_Arctic", 1},
			{"BSF_Skin_Ural_Open_Black", 1},
			{"BSF_Skin_Ural_Open_Desert1", 1},
			{"BSF_Skin_Ural_Open_Gray", 1},
			{"BSF_Skin_Ural_Open_MossyOak", 1},
			{"BSF_Skin_Ural_Open_Multi1", 1},
			{"BSF_Skin_Ural_Open_SnowLeopard", 1},
			{"BSF_Skin_Ural_Open_Tiger", 1},
			{"BSF_Skin_Ural_Open_WD", 1},
			{"RHS_Skin_Ural_Open_Blue", 500},
			{"RHS_Skin_Ural_Open_Yellow", 500},
			{"RHS_Skin_Ural_Open_Worker", 500},
			{"RHS_Skin_Ural_Open_Olive", 500},
			{"RHS_Skin_Ural_Open_Camo1", 500},
			{"RHS_Skin_Ural_Open_Camo2", 150}

		};
	};

	class RHS_Ural_Open_MSV_01: BSF_Skin_Ural_Open_Base{};	// Remove from trader
		class RHS_Ural_Open_VDV_01: BSF_Skin_Ural_Open_Base{};
		class RHS_Ural_Open_VMF_01: BSF_Skin_Ural_Open_Base{};
		class RHS_Ural_Open_VV_01: BSF_Skin_Ural_Open_Base{};
		class RHS_Ural_Open_Flat_MSV_01: BSF_Skin_Ural_Open_Base{};
			class RHS_Ural_Open_Flat_VMF_01: BSF_Skin_Ural_Open_Base{};
			class RHS_Ural_Open_Flat_VDV_01: BSF_Skin_Ural_Open_Base{};
			class RHS_Ural_Open_Flat_VV_01: BSF_Skin_Ural_Open_Base{};
		class rhssaf_army_ural_open: BSF_Skin_Ural_Open_Base{};
			class rhssaf_army_o_ural_open: BSF_Skin_Ural_Open_Base{};
				class rhsgref_cdf_b_ural_open: BSF_Skin_Ural_Open_Base{};
			class rhsgref_cdf_ural_open: BSF_Skin_Ural_Open_Base{};


	class RHS_Ural_Open_Civ_01: BSF_Skin_Ural_Open_Base{};

//THESE HAVE ISSUES:
//	class rhsgref_nat_ural_open: BSF_Skin_Ural_Open_Base{};
//	class rhsgref_nat_ural_work_open: BSF_Skin_Ural_Open_Base{};
//	class rhsgref_ins_ural_work_open: BSF_Skin_Ural_Open_Base{};

//	class rhsgref_ins_ural_open: BSF_Skin_Ural_Open_Base{};		// Bad Texture

//	class rhsgref_ins_g_ural_open: BSF_Skin_Ural_Open_Base{};
//	class rhsgref_ins_g_ural_work_open: BSF_Skin_Ural_Open_Base{};
//	class RHS_Ural_Open_Civ_02: BSF_Skin_Ural_Open_Base{};	// Funky stake rails
//	class RHS_Ural_Open_Civ_03: BSF_Skin_Ural_Open_Base{};	// Funky stake rails



	class BSF_Skin_Ural_Open_Arctic: SneakCustoms{
		skinName = "BSF Arctic Blue";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Arctic_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Arctic_2_Open.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Open_Black: SneakCustoms{
		skinName = "BSF Black Ops";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Black_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Black_2_Open.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Open_Desert1: SneakCustoms{
		skinName = "BSF Desert Fox";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Desert1_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Desert1_2_Open.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Open_Gray: SneakCustoms{
		skinName = "BSF Earl Gray";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Gray_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Gray_2_Open.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Open_MossyOak: SneakCustoms{
		skinName = "BSF Mossy Oak";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_MossyOak_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_MossyOak_2_Open.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Open_Multi1: SneakCustoms{
		skinName = "BSF Multi";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Multi1_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Multi1_2_Open.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Open_SnowLeopard: SneakCustoms{
		skinName = "BSF Desert Fox";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_SnowLeopard_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_SnowLeopard_2_Open.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Open_Tiger: SneakCustoms{
		skinName = "BSF Crouching Tiger";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Tiger_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Tiger_2_Open.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Open_WD: SneakCustoms{
		skinName = "BSF Woodland";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_WD_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_WD_2_Open.paa"
		};
        availableFor = "Vip";
	};

	class RHS_Skin_Ural_Open_Blue: SneakCustoms{
		skinName = "RHS Blue";
        hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_civil_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_civil_co.paa"
		};
        availableFor = "All";
	};

	class RHS_Skin_Ural_Open_Yellow: SneakCustoms{
		skinName = "RHS Yellow";
        hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_civ1_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_civ1_co.paa"
		};
        availableFor = "All";
	};

	class RHS_Skin_Ural_Open_Worker: SneakCustoms{
		skinName = "RHS Worker";
        hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_civ2_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_civil_co.paa"
		};
        availableFor = "All";
	};

	class RHS_Skin_Ural_Open_Olive: SneakCustoms{
		skinName = "RHS Olive";
        hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_co.paa"
		};
        availableFor = "All";
	};

	class RHS_Skin_Ural_Open_Camo1: SneakCustoms{
		skinName = "RHS CDF Camo";
        hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_camo_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_cdf_co.paa"
		};
        availableFor = "All";
	};

	class RHS_Skin_Ural_Open_Camo2: SneakCustoms{
		skinName = "RHS INS Camo";
        hiddenSelectionsTextures[] = {
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_co.paa",
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_chdkz_co.paa"
		};
        availableFor = "All";
	};

////////////////////////////////
// Ural (Exile)
////////////////////////////////

	class BSF_Skin_Exile_Ural_Base{
		skins[] = {
			{"BSF_Skin_Exile_Ural_Arctic", 1},
			{"BSF_Skin_Exile_Ural_Black", 1},
			{"BSF_Skin_Exile_Ural_Desert1", 1},
			{"BSF_Skin_Exile_Ural_Gray", 1},
			{"BSF_Skin_Exile_Ural_MossyOak", 1},
			{"BSF_Skin_Exile_Ural_Multi1", 1},
			{"BSF_Skin_Exile_Ural_SnowLeopard", 1},
			{"BSF_Skin_Exile_Ural_Tiger", 1},
			{"BSF_Skin_Exile_Ural_WD", 1},
			{"Exile_Skin_Ural_Blue", 1},
			{"Exile_Skin_Ural_Yellow", 1},
			{"Exile_Skin_Ural_Worker", 1},
			{"Exile_Skin_Ural_Olive", 1},
			{"RHS_Skin_Exile_Ural_Camo1", 500},
			{"RHS_Skin_Exile_Ural_Camo2", 500},
			{"RHS_Skin_Exile_Ural_UN", 500},
			{"MAS_Skin_Exile_Ural_Russian", 150}
		};
	};

	class Exile_Car_Ural_Covered_Abstract: BSF_Skin_Exile_Ural_Base{};
	class Exile_Car_Ural_Open_Abstract: BSF_Skin_Exile_Ural_Base{};

	class I_mas_cars_Ural_Base: BSF_Skin_Exile_Ural_Base{};
	class I_mas_cars_Ural: BSF_Skin_Exile_Ural_Base{};
	class O_mas_cars_Ural: BSF_Skin_Exile_Ural_Base{};
	class I_mas_cars_Ural_ammo: BSF_Skin_Exile_Ural_Base{};
	class O_mas_cars_Ural_ammo: BSF_Skin_Exile_Ural_Base{};
	class O_mas_cars_Ural_open: BSF_Skin_Exile_Ural_Base{};
	class I_mas_cars_Ural_open: BSF_Skin_Exile_Ural_Base{};

	class BSF_Skin_Exile_Ural_Arctic: SneakCustoms{
		skinName = "BSF Arctic Blue";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Arctic_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Arctic_2_Back.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Exile_Ural_Black: SneakCustoms{
		skinName = "BSF Black Ops";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Black_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Black_2_Back.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Exile_Ural_Desert1: SneakCustoms{
		skinName = "BSF Desert Fox";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Desert1_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Desert1_2_Back.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Exile_Ural_Gray: SneakCustoms{
		skinName = "BSF Earl Gray";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Gray_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Gray_2_Back.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Exile_Ural_MossyOak: SneakCustoms{
		skinName = "BSF Mossy Oak";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_MossyOak_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_MossyOak_2_Back.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Exile_Ural_Multi1: SneakCustoms{
		skinName = "BSF Multi";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Multi1_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Multi1_2_Back.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Exile_Ural_SnowLeopard: SneakCustoms{
		skinName = "BSF Desert Fox";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_SnowLeopard_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_SnowLeopard_2_Back.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Exile_Ural_Tiger: SneakCustoms{
		skinName = "BSF Crouching Tiger";
        hiddenSelectionsTextures[] = {

			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Tiger_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Tiger_2_Back.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Exile_Ural_WD: SneakCustoms{
		skinName = "BSF Woodland";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_WD_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_WD_2_Back.paa"
		};
        availableFor = "Vip";
	};

	class Exile_Skin_Ural_Blue: SneakCustoms{
		skinName = "Exile Blue";
        hiddenSelectionsTextures[] = {
			"Exile_psycho_Ural\data\ural_kabina_civil_co.paa",
			"Exile_psycho_Ural\data\ural_plachta_civil_co.paa"
		};
        availableFor = "All";
	};

	class Exile_Skin_Ural_Yellow: SneakCustoms{
		skinName = "Exile Yellow";
        hiddenSelectionsTextures[] = {
			"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa",
			"Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"
		};
        availableFor = "All";
	};

	class Exile_Skin_Ural_Worker: SneakCustoms{
		skinName = "Exile Worker";
        hiddenSelectionsTextures[] = {
			"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa",
			"Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"
		};
        availableFor = "All";
	};

	class Exile_Skin_Ural_Olive: SneakCustoms{
		skinName = "Exile Olive";
        hiddenSelectionsTextures[] = {
			"Exile_psycho_Ural\data\ural_kabina_khk_co.paa",
			"Exile_psycho_Ural\data\ural_plachta_co.paa"
		};
        availableFor = "All";
	};

	class RHS_Skin_Exile_Ural_Camo1: SneakCustoms{
		skinName = "RHS CDF Camo";
        hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_camo_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_camo_co.paa"
		};
        availableFor = "All";
	};

	class RHS_Skin_Exile_Ural_Camo2: SneakCustoms{
		skinName = "RHS INS Camo";
        hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_chdkz_co.paa"
		};
        availableFor = "All";
	};

	class MAS_Skin_Exile_Ural_Russian: SneakCustoms{
		skinName = "MAS Russian";
        hiddenSelectionsTextures[] = {
			"mas_cars\ural\data\ural_kabina_tka_co.paa",
			"mas_cars\ural\data\ural_plachta_tka_co.paa"
		};
        availableFor = "All";
	};

////////////////////////////////
// Ural Fuel
////////////////////////////////

	class BSF_Skin_Ural_Fuel_Base{
		skins[] = {
			{"BSF_Skin_Ural_Fuel_Arctic", 1},
			{"BSF_Skin_Ural_Fuel_Black", 1},
			{"BSF_Skin_Ural_Fuel_Desert1", 1},
			{"BSF_Skin_Ural_Fuel_Gray", 1},
			{"BSF_Skin_Ural_Fuel_MossyOak", 1},
			{"BSF_Skin_Ural_Fuel_Multi1", 1},
			{"BSF_Skin_Ural_Fuel_SnowLeopard", 1},
			{"BSF_Skin_Ural_Fuel_Tiger", 1},
			{"BSF_Skin_Ural_Fuel_WD", 1},
			{"RHS_Skin_Ural_Fuel_Olive", 500},
			{"RHS_Skin_Ural_Fuel_Camo1", 500},
			{"RHS_Skin_Ural_Fuel_Camo2", 150}
		};
	};

	class rhssaf_army_ural_fuel: BSF_Skin_Ural_Fuel_Base{};
	class rhssaf_army_o_ural_fuel: BSF_Skin_Ural_Fuel_Base{};
	class RHS_Ural_Fuel_VV_01: BSF_Skin_Ural_Fuel_Base{};
	class RHS_Ural_Fuel_VMF_01: BSF_Skin_Ural_Fuel_Base{};
	class RHS_Ural_Fuel_VDV_01: BSF_Skin_Ural_Fuel_Base{};
	class rhsgref_cdf_ural_fuel: BSF_Skin_Ural_Fuel_Base{};
	class rhsgref_cdf_b_ural_fuel: BSF_Skin_Ural_Fuel_Base{};
	class RHS_Ural_Fuel_MSV_01: BSF_Skin_Ural_Fuel_Base{};

	class BSF_Skin_Ural_Fuel_Arctic: SneakCustoms{
		skinName = "BSF Arctic Blue";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Arctic_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Arctic_2_Back.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Arctic_10_Fuel.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Fuel_Black: SneakCustoms{
		skinName = "BSF Black Ops";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Black_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Black_2_Back.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Black_10_Fuel.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Fuel_Desert1: SneakCustoms{
		skinName = "BSF Desert Fox";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Desert1_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Desert1_2_Back.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Desert1_10_Fuel.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Fuel_Gray: SneakCustoms{
		skinName = "BSF Earl Gray";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Gray_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Gray_2_Back.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Gray_10_Fuel.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Fuel_MossyOak: SneakCustoms{
		skinName = "BSF Mossy Oak";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_MossyOak_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_MossyOak_2_Back.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_MossyOak_10_Fuel.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Fuel_Multi1: SneakCustoms{
		skinName = "BSF Multi";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Multi1_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Multi1_2_Back.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Multi1_10_Fuel.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Fuel_SnowLeopard: SneakCustoms{
		skinName = "BSF Snow Leopard";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_SnowLeopard_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_SnowLeopard_2_Back.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_SnowLeopard_10_Fuel.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Fuel_Tiger: SneakCustoms{
		skinName = "BSF Crouching Tiger";
        hiddenSelectionsTextures[] = {

			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Tiger_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Tiger_2_Back.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Tiger_10_Fuel.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Fuel_WD: SneakCustoms{
		skinName = "BSF Woodland";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_WD_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_WD_2_Back.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_WD_10_Fuel.paa"
		};
        availableFor = "Vip";
	};

	class RHS_Skin_Ural_Fuel_Olive: SneakCustoms{
		skinName = "RHS Olive";
        hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_co.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_fuel_khk_co.paa"
		};
        availableFor = "Vip";
	};

	class RHS_Skin_Ural_Fuel_Camo1: SneakCustoms{
		skinName = "RHS CDF Camo";
        hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_camo_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_cdf_co.paa",
			"rhsafrf\addons\rhs_decals\data\numbers\cdf\1_ca.paa",
			"rhsafrf\addons\rhs_decals\data\numbers\cdf\9_ca.paa",
			"rhsafrf\addons\rhs_decals\data\numbers\cdf\2_ca.paa",
			"rhsafrf\addons\rhs_decals\data\numbers\cdf\5_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_fuel_cdf_co.paa"
		};
        availableFor = "Vip";
	};

	class RHS_Skin_Ural_Fuel_Camo2: SneakCustoms{
		skinName = "RHS INS Camo";
        hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_cdf_co.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_fuel_cdf_co.paa"
		};
        availableFor = "Vip";
	};

////////////////////////////////
// Ural Repair (RHS)
////////////////////////////////

	class BSF_Skin_Ural_Repair_RHS_Base{
		skins[] = {
			{"BSF_Skin_Ural_Repair_RHS_Arctic", 1},
			{"BSF_Skin_Ural_Repair_RHS_Black", 1},
			{"BSF_Skin_Ural_Repair_RHS_Desert1", 1},
			{"BSF_Skin_Ural_Repair_RHS_Gray", 1},
			{"BSF_Skin_Ural_Repair_RHS_MossyOak", 1},
			{"BSF_Skin_Ural_Repair_RHS_Multi1", 1},
			{"BSF_Skin_Ural_Repair_RHS_SnowLeopard", 1},
			{"BSF_Skin_Ural_Repair_RHS_Tiger", 1},
			{"BSF_Skin_Ural_Repair_RHS_WD", 1},
			{"BSF_Skin_Ural_Repair_RHS_Camo1", 1},
			{"BSF_Skin_Ural_Repair_RHS_Camo2", 1}
		};
	};

	class RHS_Ural_Repair_MSV_01: BSF_Skin_Ural_Repair_RHS_Base{}; // Remove from trader
	class RHS_Ural_Repair_VDV_01: BSF_Skin_Ural_Repair_RHS_Base{};
	class RHS_Ural_Repair_VMF_01: BSF_Skin_Ural_Repair_RHS_Base{};
	class RHS_Ural_Repair_VV_01: BSF_Skin_Ural_Repair_RHS_Base{};
	class rhsgref_cdf_ural_repair: BSF_Skin_Ural_Repair_RHS_Base{};
	class rhsgref_cdf_b_ural_repair: BSF_Skin_Ural_Repair_RHS_Base{};
	class rhsgref_ins_ural_repair: BSF_Skin_Ural_Repair_RHS_Base{};
	class rhsgref_ins_g_ural_repair: BSF_Skin_Ural_Repair_RHS_Base{};

	class BSF_Skin_Ural_Repair_RHS_Arctic: SneakCustoms{
		skinName = "BSF Arctic Blue";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Arctic_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Arctic_2_Repair_RHS.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Repair_RHS_Black: SneakCustoms{
		skinName = "BSF Black Ops";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Black_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Black_2_Repair_RHS.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Repair_RHS_Desert1: SneakCustoms{
		skinName = "BSF Desert Fox";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Desert1_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Desert1_2_Repair_RHS.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Repair_RHS_Gray: SneakCustoms{
		skinName = "BSF Earl Gray";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Gray_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Gray_2_Repair_RHS.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Repair_RHS_MossyOak: SneakCustoms{
		skinName = "BSF Mossy Oak";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_MossyOak_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_MossyOak_2_Repair_RHS.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Repair_RHS_Multi1: SneakCustoms{
		skinName = "BSF Multi";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Multi1_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Multi1_2_Repair_RHS.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Repair_RHS_SnowLeopard: SneakCustoms{
		skinName = "BSF Snow Leopard";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_SnowLeopard_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_SnowLeopard_2_Repair_RHS.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Repair_RHS_Tiger: SneakCustoms{
		skinName = "BSF Crouching Tiger";
        hiddenSelectionsTextures[] = {

			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Tiger_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Tiger_2_Repair_RHS.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Repair_RHS_WD: SneakCustoms{
		skinName = "BSF Woodland";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_WD_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_WD_2_Repair_RHS.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Repair_RHS_Camo1: SneakCustoms{
		skinName = "RHS CDF Camo";
        hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_camo_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_repair_co.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Repair_RHS_Camo2: SneakCustoms{
		skinName = "RHS INS Camo";
        hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_repair_co.paa"
		};
        availableFor = "Vip";
	};

////////////////////////////////
// Ural Fuel (MAS)  
////////////////////////////////
/*  Fuel Tank is a proxy and can't be skinned.
	class BSF_Skin_MAS_Ural_Fuel_Base{
		skins[] = {
			{"BSF_Skin_MAS_Ural_Fuel_Arctic", 1},
			{"BSF_Skin_MAS_Ural_Fuel_Black", 1},
			{"BSF_Skin_MAS_Ural_Fuel_Desert1", 1},
			{"BSF_Skin_MAS_Ural_Fuel_Gray", 1},
			{"BSF_Skin_MAS_Ural_Fuel_MossyOak", 1},
			{"BSF_Skin_MAS_Ural_Fuel_Multi1", 1},
			{"BSF_Skin_MAS_Ural_Fuel_SnowLeopard", 1},
			{"BSF_Skin_MAS_Ural_Fuel_Tiger", 1},
			{"BSF_Skin_MAS_Ural_Fuel_WD", 1},
			{"RHS_Skin_MAS_Ural_Fuel_Camo1", 500},
			{"RHS_Skin_MAS_Ural_Fuel_Camo2", 500},
			{"MAS_Skin_MAS_Ural_Fuel_Russian", 150}
		};
	};

	class I_mas_cars_Ural_fuel: BSF_Skin_MAS_Ural_Fuel_Base{}; //Wrong tank file
	class O_mas_cars_Ural_fuel: BSF_Skin_MAS_Ural_Fuel_Base{};

	class BSF_Skin_MAS_Ural_Fuel_Arctic: SneakCustoms{
		skinName = "BSF Arctic Blue";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Arctic_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Arctic_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Arctic_10_Fuel.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_MAS_Ural_Fuel_Black: SneakCustoms{
		skinName = "BSF Black Ops";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Black_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Black_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Black_10_Fuel.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_MAS_Ural_Fuel_Desert1: SneakCustoms{
		skinName = "BSF Desert Fox";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Desert1_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Desert1_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Desert1_10_Fuel.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_MAS_Ural_Fuel_Gray: SneakCustoms{
		skinName = "BSF Earl Gray";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Gray_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Gray_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Gray_10_Fuel.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_MAS_Ural_Fuel_MossyOak: SneakCustoms{
		skinName = "BSF Mossy Oak";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_MossyOak_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_MossyOak_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_MossyOak_10_Fuel.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_MAS_Ural_Fuel_Multi1: SneakCustoms{
		skinName = "BSF Multi";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Multi1_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Multi1_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Multi1_10_Fuel.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_MAS_Ural_Fuel_SnowLeopard: SneakCustoms{
		skinName = "BSF Snow Leopard";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_SnowLeopard_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_SnowLeopard_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_SnowLeopard_10_Fuel.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_MAS_Ural_Fuel_Tiger: SneakCustoms{
		skinName = "BSF Crouching Tiger";
        hiddenSelectionsTextures[] = {

			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Tiger_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Tiger_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Tiger_10_Fuel.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_MAS_Ural_Fuel_WD: SneakCustoms{
		skinName = "BSF Woodland";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_WD_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_WD_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_WD_10_Fuel.paa"
		};
        availableFor = "Vip";
	};

	class RHS_Skin_MAS_Ural_Camo1: SneakCustoms{
		skinName = "RHS Camo 1";
        hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_camo_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_camo_co.paa",
		};
        availableFor = "All";
	};

	class RHS_Skin_MAS_Ural_Camo2: SneakCustoms{
		skinName = "RHS Camo 2";
        hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_chdkz_co.paa",
		};
        availableFor = "All";
	};

	class MAS_Skin_MAS_Ural_Russian: SneakCustoms{
		skinName = "MAS Russian";
        hiddenSelectionsTextures[] = {
			"mas_cars\ural\data\ural_kabina_tka_co.paa",
			"mas_cars\ural\data\ural_plachta_tka_co.paa",
		};
        availableFor = "All";
	};
*/
////////////////////////////////
// Ural Repair (MAS)
////////////////////////////////

	class BSF_Skin_Ural_Repair_Base{
		skins[] = {
			{"BSF_Skin_Ural_Repair_Arctic", 1},
			{"BSF_Skin_Ural_Repair_Black", 1},
			{"BSF_Skin_Ural_Repair_Desert1", 1},
			{"BSF_Skin_Ural_Repair_Gray", 1},
			{"BSF_Skin_Ural_Repair_MossyOak", 1},
			{"BSF_Skin_Ural_Repair_Multi1", 1},
			{"BSF_Skin_Ural_Repair_SnowLeopard", 1},
			{"BSF_Skin_Ural_Repair_Tiger", 1},
			{"BSF_Skin_Ural_Repair_WD", 1},
			{"BSF_Skin_Ural_Repair_Camo", 1},
			{"BSF_Skin_Ural_Repair_Russian", 1},
		};
	};

	class O_mas_cars_Ural_repair: BSF_Skin_Ural_Repair_Base{};
	class I_mas_cars_Ural_repair: BSF_Skin_Ural_Repair_Base{};

	class BSF_Skin_Ural_Repair_Arctic: SneakCustoms{
		skinName = "BSF Arctic Blue";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Arctic_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Arctic_2_Repair.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Repair_Black: SneakCustoms{
		skinName = "BSF Black Ops";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Black_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Black_2_Repair.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Repair_Desert1: SneakCustoms{
		skinName = "BSF Desert Fox";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Desert1_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Desert1_2_Repair.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Repair_Gray: SneakCustoms{
		skinName = "BSF Earl Gray";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Gray_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Gray_2_Repair.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Repair_MossyOak: SneakCustoms{
		skinName = "BSF Mossy Oak";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_MossyOak_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_MossyOak_2_Repair.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Repair_Multi1: SneakCustoms{
		skinName = "BSF Multi";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Multi1_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Multi1_2_Repair.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Repair_SnowLeopard: SneakCustoms{
		skinName = "BSF Snow Leopard";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_SnowLeopard_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_SnowLeopard_2_Repair.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Repair_Tiger: SneakCustoms{
		skinName = "BSF Crouching Tiger";
        hiddenSelectionsTextures[] = {

			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Tiger_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Tiger_2_Repair.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Repair_WD: SneakCustoms{
		skinName = "BSF Woodland";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_WD_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_WD_2_Repair.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Repair_Camo: SneakCustoms{
		skinName = "MAS Camo";
        hiddenSelectionsTextures[] = {
			"mas_cars\ural\data\ural_kabina_camo_co.paa",
			"mas_cars\ural\data\ural_repair_cdf_co.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Repair_Russian: SneakCustoms{
		skinName = "MAS Russian";
        hiddenSelectionsTextures[] = {
			"mas_cars\ural\data\ural_kabina_tka_co.paa",
			"mas_cars\ural\data\ural_repair_tka_co.paa"
		};
        availableFor = "Vip";
	};

////////////////////////////////
// Ural Zu23 (RHS)
////////////////////////////////

	class BSF_Skin_Ural_Zu23_Base{
		skins[] = {
			{"BSF_Skin_Ural_Zu23_Arctic", 1},
			{"BSF_Skin_Ural_Zu23_Black", 1},
			{"BSF_Skin_Ural_Zu23_Desert1", 1},
			{"BSF_Skin_Ural_Zu23_Gray", 1},
			{"BSF_Skin_Ural_Zu23_MossyOak", 1},
			{"BSF_Skin_Ural_Zu23_Multi1", 1},
			{"BSF_Skin_Ural_Zu23_SnowLeopard", 1},
			{"BSF_Skin_Ural_Zu23_Tiger", 1},
			{"BSF_Skin_Ural_Zu23_WD", 1},
			{"BSF_Skin_Ural_Zu23_Camo1", 1},
			{"BSF_Skin_Ural_Zu23_Camo2", 1}
		};
	};

	class RHS_Ural_Zu23_Base: BSF_Skin_Ural_Zu23_Base{};
	class RHS_Ural_Zu23_MSV_01: BSF_Skin_Ural_Zu23_Base{};
	class RHS_Ural_Zu23_VDV_01: BSF_Skin_Ural_Zu23_Base{};
	class RHS_Ural_Zu23_VMF_01: BSF_Skin_Ural_Zu23_Base{};
	class RHS_Ural_Zu23_VV_01: BSF_Skin_Ural_Zu23_Base{};
	class rhsgref_cdf_ural_Zu23: BSF_Skin_Ural_Zu23_Base{};
	class rhsgref_cdf_b_ural_Zu23: BSF_Skin_Ural_Zu23_Base{};
	class rhsgref_nat_ural_Zu23: BSF_Skin_Ural_Zu23_Base{};
	class rhsgref_ins_ural_Zu23: BSF_Skin_Ural_Zu23_Base{};
	class rhsgref_ins_g_ural_Zu23: BSF_Skin_Ural_Zu23_Base{};

	class BSF_Skin_Ural_Zu23_Arctic: SneakCustoms{
		skinName = "BSF Arctic Blue";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Arctic_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Arctic_2_Open.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Zu23_Black: SneakCustoms{
		skinName = "BSF Black Ops";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Black_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Black_2_Open.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Zu23_Desert1: SneakCustoms{
		skinName = "BSF Desert Fox";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Desert1_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Desert1_2_Open.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Zu23_Gray: SneakCustoms{
		skinName = "BSF Earl Gray";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Gray_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Gray_2_Open.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Zu23_MossyOak: SneakCustoms{
		skinName = "BSF Mossy Oak";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_MossyOak_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_MossyOak_2_Open.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Zu23_Multi1: SneakCustoms{
		skinName = "BSF Multi";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Multi1_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Multi1_2_Open.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Zu23_SnowLeopard: SneakCustoms{
		skinName = "BSF Snow Leopard";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_SnowLeopard_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_SnowLeopard_2_Open.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Zu23_Tiger: SneakCustoms{
		skinName = "BSF Crouching Tiger";
        hiddenSelectionsTextures[] = {

			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Tiger_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Tiger_2_Open.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Zu23_WD: SneakCustoms{
		skinName = "BSF Woodland";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_WD_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_WD_2_Open.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Zu23_Camo1: SneakCustoms{
		skinName = "RHS CDF Camo";
        hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_camo_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_cdf_co.paa",
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Zu23_Camo2: SneakCustoms{
		skinName = "RHS INS Camo";
        hiddenSelectionsTextures[] = {
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_chdkz_co.paa"
		};
        availableFor = "Vip";
	};

////////////////////////////////
// Ural Zu23 (MAS)
////////////////////////////////

	class BSF_Skin_Ural_Zu23_MAS_Base{
		skins[] = {
			{"BSF_Skin_Ural_Zu23_MAS_Arctic", 1},
			{"BSF_Skin_Ural_Zu23_MAS_Black", 1},
			{"BSF_Skin_Ural_Zu23_MAS_Desert1", 1},
			{"BSF_Skin_Ural_Zu23_MAS_Gray", 1},
			{"BSF_Skin_Ural_Zu23_MAS_MossyOak", 1},
			{"BSF_Skin_Ural_Zu23_MAS_Multi1", 1},
			{"BSF_Skin_Ural_Zu23_MAS_SnowLeopard", 1},
			{"BSF_Skin_Ural_Zu23_MAS_Tiger", 1},
			{"BSF_Skin_Ural_Zu23_MAS_WD", 1},
			{"BSF_Skin_Ural_Zu23_MAS_Camo", 1},
			{"BSF_Skin_Ural_Zu23_MAS_Russian", 1}
		};
	};

	class I_mas_cars_Ural_ZU23_Base: BSF_Skin_Ural_Zu23_MAS_Base{}; // Wrong model
	class I_mas_cars_Ural_ZU23: BSF_Skin_Ural_Zu23_MAS_Base{}; // Wrong model
	class O_mas_cars_Ural_ZU23: BSF_Skin_Ural_Zu23_MAS_Base{};

	class BSF_Skin_Ural_Zu23_MAS_Arctic: SneakCustoms{
		skinName = "BSF Arctic Blue";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Arctic_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Arctic_2_Back.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Zu23_MAS_Black: SneakCustoms{
		skinName = "BSF Black Ops";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Black_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Black_2_Back.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Zu23_MAS_Desert1: SneakCustoms{
		skinName = "BSF Desert Fox";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Desert1_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Desert1_2_Back.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Zu23_MAS_Gray: SneakCustoms{
		skinName = "BSF Earl Gray";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Gray_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Gray_2_Back.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Zu23_MAS_MossyOak: SneakCustoms{
		skinName = "BSF Mossy Oak";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_MossyOak_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_MossyOak_2_Back.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Zu23_MAS_Multi1: SneakCustoms{
		skinName = "BSF Multi";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Multi1_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Multi1_2_Back.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Zu23_MAS_SnowLeopard: SneakCustoms{
		skinName = "BSF Snow Leopard";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_SnowLeopard_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_SnowLeopard_2_Back.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Zu23_MAS_Tiger: SneakCustoms{
		skinName = "BSF Crouching Tiger";
        hiddenSelectionsTextures[] = {

			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Tiger_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_Tiger_2_Back.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Zu23_MAS_WD: SneakCustoms{
		skinName = "BSF Woodland";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_WD_1_Cab.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ural\BSF_Ural_WD_2_Back.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Zu23_MAS_Camo: SneakCustoms{
		skinName = "MAS Camo";
        hiddenSelectionsTextures[] = {
			"mas_cars\ural\data\ural_kabina_camo_co.paa",
			"mas_cars\ural\data\ural_plachta_camo_co.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Ural_Zu23_MAS_Russian: SneakCustoms{
		skinName = "MAS Russian";
        hiddenSelectionsTextures[] = {
			"mas_cars\ural\data\ural_kabina_tka_co.paa",
			"mas_cars\ural\data\ural_plachta_tka_co.paa"
		};
        availableFor = "Vip";
	};

