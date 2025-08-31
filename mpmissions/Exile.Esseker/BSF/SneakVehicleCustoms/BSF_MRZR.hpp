
////////////////////////////////	
// MRZR	
////////////////////////////////	

	class BSF_Skin_MRZR_Base{
		skins[] = {
			{"BSF_Skin_MRZR_Tan", 500},
			{"BSF_Skin_MRZR_TanMud", 500},
			{"BSF_Skin_MRZR_WD", 500},
			{"BSF_Skin_MRZR_WDMud", 500},
			{"BSF_Skin_MRZR_Arctic", 1},
			{"BSF_Skin_MRZR_Black", 1},
			{"BSF_Skin_MRZR_Desert1", 1},
			{"BSF_Skin_MRZR_DesertDigi", 1},
			{"BSF_Skin_MRZR_MossyOak", 1},
			{"BSF_Skin_MRZR_Multi1", 1},
			{"BSF_Skin_MRZR_SnowLeopard", 1},
			{"BSF_Skin_MRZR_Tiger", 1},
			{"BSF_Skin_MRZR_WinterGreen", 1}
		};
	};
	
	class rhsusf_mrzr_base: BSF_Skin_MRZR_Base{};
	class rhsusf_mrzr4_d: BSF_Skin_MRZR_Base{};
	class rhsusf_mrzr4_d_mud: BSF_Skin_MRZR_Base{};
	class rhsusf_mrzr4_w: BSF_Skin_MRZR_Base{};
	class rhsusf_mrzr4_w_mud: BSF_Skin_MRZR_Base{};

	class BSF_Skin_MRZR_Tan: SneakCustoms{
		skinName = "RHS Desert";
		hiddenSelectionsTextures[] = {
			"rhsusf\addons\rhsusf_mrzr\data\blue_tan_co.paa",
			"rhsusf\addons\rhsusf_mrzr\data\yel_tan_co.paa",
			"rhsusf\addons\rhsusf_mrzr\data\red_tan_co.paa",
			"rhsusf\addons\rhsusf_mrzr\data\grn_tan_co.paa",
			"rhsusf\addons\rhsusf_mrzr\data\merged\orng_tan_co.paa"
		};
		availableFor = "Vip";
	};	

	class BSF_Skin_MRZR_TanMud: SneakCustoms{
		skinName = "RHS Muddy Desert";
		hiddenSelectionsTextures[] = {
			"rhsusf\addons\rhsusf_mrzr\data\blue_tan_mud_co.paa",
			"rhsusf\addons\rhsusf_mrzr\data\yel_tan_mud_co.paa",
			"rhsusf\addons\rhsusf_mrzr\data\red_tan_mud_co.paa",
			"rhsusf\addons\rhsusf_mrzr\data\grn_tan_mud_co.paa",
			"rhsusf\addons\rhsusf_mrzr\data\merged\orng_tan_mud_co.paa"
		};
		availableFor = "Vip";
	};	

	class BSF_Skin_MRZR_WD: SneakCustoms{
		skinName = "RHS Woodland";
		hiddenSelectionsTextures[] = {
			"rhsusf\addons\rhsusf_mrzr\data\blue_tan_pnt1_co.paa",
			"rhsusf\addons\rhsusf_mrzr\data\yel_tan_pnt1_co.paa",
			"rhsusf\addons\rhsusf_mrzr\data\red_tan_pnt1_co.paa",
			"rhsusf\addons\rhsusf_mrzr\data\grn_tan_pnt1_co.paa",
			"rhsusf\addons\rhsusf_mrzr\data\merged\orng_grn_co.paa"
		};
		availableFor = "Vip";
	};	

	class BSF_Skin_MRZR_WDMud: SneakCustoms{
		skinName = "RHS Muddy Woodland";
		hiddenSelectionsTextures[] = {
			"rhsusf\addons\rhsusf_mrzr\data\blue_tan_pnt1_mud_co.paa",
			"rhsusf\addons\rhsusf_mrzr\data\yel_tan_pnt1_mud_co.paa",
			"rhsusf\addons\rhsusf_mrzr\data\red_tan_pnt1_mud_co.paa",
			"rhsusf\addons\rhsusf_mrzr\data\grn_tan_pnt1_mud_co.paa",
			"rhsusf\addons\rhsusf_mrzr\data\merged\orng_grn_mud_co.paa"
		};
		availableFor = "Vip";
	};	

	class BSF_Skin_MRZR_Arctic: SneakCustoms{
		skinName = "BSF Arctic Blue";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_Arctic_1_Blue.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_Arctic_2_Yellow.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_Arctic_3_Red.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_Arctic_4_Green.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_Arctic_5_Orange.paa"
		};
		availableFor = "Vip";
	};	

	class BSF_Skin_MRZR_Black: SneakCustoms{
		skinName = "BSF Black";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_Black_1_Blue.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_Black_2_Yellow.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_Black_3_Red.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_Black_4_Green.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_Black_5_Orange.paa"
		};
		availableFor = "Vip";
	};	

	class BSF_Skin_MRZR_Desert1: SneakCustoms{
		skinName = "BSF Desert Fox";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_Desert1_1_Blue.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_Desert1_2_Yellow.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_Desert1_3_Red.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_Desert1_4_Green.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_Desert1_5_Orange.paa"
		};
		availableFor = "Vip";
	};	

	class BSF_Skin_MRZR_DesertDigi: SneakCustoms{
		skinName = "BSF Desert Digi";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_DesertDigi_1_Blue.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_DesertDigi_2_Yellow.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_DesertDigi_3_Red.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_DesertDigi_4_Green.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_DesertDigi_5_Orange.paa"
		};
		availableFor = "Vip";
	};	

	class BSF_Skin_MRZR_MossyOak: SneakCustoms{
		skinName = "BSF Mossy Oak";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_MossyOak_1_Blue.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_MossyOak_2_Yellow.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_MossyOak_3_Red.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_MossyOak_4_Green.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_MossyOak_5_Orange.paa"
		};
		availableFor = "Vip";
	};	

	class BSF_Skin_MRZR_Multi1: SneakCustoms{
		skinName = "BSF Multi";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_Multi1_1_Blue.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_Multi1_2_Yellow.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_Multi1_3_Red.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_Multi1_4_Green.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_Multi1_5_Orange.paa"
		};
		availableFor = "Vip";
	};	

	class BSF_Skin_MRZR_SnowLeopard: SneakCustoms{
		skinName = "BSF Snow Leopard";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_SnowLeopard_1_Blue.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_SnowLeopard_2_Yellow.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_SnowLeopard_3_Red.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_SnowLeopard_4_Green.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_SnowLeopard_5_Orange.paa"
		};
		availableFor = "Vip";
	};	

	class BSF_Skin_MRZR_Tiger: SneakCustoms{
		skinName = "BSF Crouching Tiger";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_Tiger_1_Blue.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_Tiger_2_Yellow.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_Tiger_3_Red.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_Tiger_4_Green.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_Tiger_5_Orange.paa"
		};
		availableFor = "Vip";
	};	

	class BSF_Skin_MRZR_WinterGreen: SneakCustoms{
		skinName = "BSF WinterGreen";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_WinterGreen_1_Blue.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_WinterGreen_2_Yellow.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_WinterGreen_3_Red.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_WinterGreen_4_Green.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRZR\BSF_MRZR_WinterGreen_5_Orange.paa"
		};
		availableFor = "Vip";
	};	







