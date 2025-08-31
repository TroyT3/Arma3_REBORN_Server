
////////////////////////////////	
// AH1Z
////////////////////////////////	
	class BSF_Skin_AH1Z_Base{
		skins[] = {
			{"BSF_Skin_AH1Z_Default", 500},
			{"BSF_Skin_AH1Z_Black", 1},
			{"BSF_Skin_AH1Z_DesertDigi", 1},
			{"BSF_Skin_AH1Z_Desert1", 1},
			{"BSF_Skin_AH1Z_Desert2", 1},
			{"BSF_Skin_AH1Z_WD", 1},
			{"BSF_Skin_AH1Z_SnowLeopard", 1},
			{"BSF_Skin_AH1Z_CDC", 1},
			{"BSF_Skin_AH1Z_Stone", 1},
			{"BSF_Skin_AH1Z_UN", 1},
			{"BSF_Skin_AH1Z_Tiger", 1},
			{"BSF_Skin_AH1Z_Pacific", 1},
			{"BSF_Skin_AH1Z_Winter", 1},
			{"BSF_Skin_AH1Z_MossyOak", 1},
			{"BSF_Skin_AH1Z_Arctic", 1},
			{"BSF_Skin_AH1Z_Multi1", 1},
			{"BSF_Skin_AH1Z_CSAT", 1}
		};
	};
	class RHS_AH1Z_base: BSF_Skin_AH1Z_Base{};
	class RHS_AH1Z: BSF_Skin_AH1Z_Base{};
	class RHS_AH1Z_GS: BSF_Skin_AH1Z_Base{};
	class RHS_AH1Z_CS: BSF_Skin_AH1Z_Base{};
	class RHS_AH1Z_wd: BSF_Skin_AH1Z_Base{};
	class RHS_AH1Z_wd_GS: BSF_Skin_AH1Z_Base{};
	class RHS_AH1Z_wd_CS: BSF_Skin_AH1Z_Base{};

	class BSF_Skin_AH1Z_Default: SneakCustoms{
		skinName = "USMC";
        hiddenSelectionsTextures[] = {
			"\rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_body_co.paa",
			"\rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_engines_co.paa"
		};
	};	

	class BSF_Skin_AH1Z_Black: SneakCustoms{
		skinName = "BSF Black Ops";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\AH1Z\BSF_AH1Z_Black_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\AH1Z\BSF_AH1Z_Black_2_Engines.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_AH1Z_DesertDigi: SneakCustoms{
		skinName = "BSF Desert Digi";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\AH1Z\BSF_AH1Z_DesertDigi_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\AH1Z\BSF_AH1Z_DesertDigi_2_Engines.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_AH1Z_Desert1: SneakCustoms{
		skinName = "BSF Desert Fox";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\AH1Z\BSF_AH1Z_Desert1_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\AH1Z\BSF_AH1Z_Desert1_2_Engines.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_AH1Z_WD: SneakCustoms{
		skinName = "BSF Woodland";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\AH1Z\BSF_AH1Z_WD_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\AH1Z\BSF_AH1Z_WD_2_Engines.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_AH1Z_SnowLeopard: SneakCustoms{
		skinName = "BSF Snow Leopard";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\AH1Z\BSF_AH1Z_SnowLeopard_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\AH1Z\BSF_AH1Z_SnowLeopard_2_Engines.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_AH1Z_CDC: SneakCustoms{
		skinName = "BSF CDC";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\AH1Z\BSF_AH1Z_CDC_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\AH1Z\BSF_AH1Z_CDC_2_Engines.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_AH1Z_Stone: SneakCustoms{
		skinName = "BSF Rolling Stone";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\AH1Z\BSF_AH1Z_Stone_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\AH1Z\BSF_AH1Z_Stone_2_Engines.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_AH1Z_UN: SneakCustoms{
		skinName = "BSF UN";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\AH1Z\BSF_AH1Z_UN_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\AH1Z\BSF_AH1Z_CDC_2_Engines.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_AH1Z_Tiger: SneakCustoms{
		skinName = "BSF Crouching Tiger";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\AH1Z\BSF_AH1Z_Tiger_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\AH1Z\BSF_AH1Z_Tiger_2_Engines.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_AH1Z_Pacific: SneakCustoms{
		skinName = "BSF Pacific";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\AH1Z\BSF_AH1Z_Pacific_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\AH1Z\BSF_AH1Z_Pacific_2_Engines.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_AH1Z_Winter: SneakCustoms{
		skinName = "BSF Winter";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\AH1Z\BSF_AH1Z_Winter_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\AH1Z\BSF_AH1Z_Winter_2_Engines.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_AH1Z_MossyOak: SneakCustoms{
		skinName = "BSF Mossy Oak";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\AH1Z\BSF_AH1Z_MossyOak_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\AH1Z\BSF_AH1Z_MossyOak_2_Engines.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_AH1Z_Arctic: SneakCustoms{
		skinName = "BSF Arctic Blue";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\AH1Z\BSF_AH1Z_MossyOak_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\AH1Z\BSF_AH1Z_MossyOak_2_Engines.paa"
		};
        availableFor = "Vip";
	};


	class BSF_Skin_AH1Z_Multi1: SneakCustoms{
		skinName = "BSF Multi";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\AH1Z\BSF_AH1Z_Multi1_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\AH1Z\BSF_AH1Z_Multi1_2_Engines.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_AH1Z_Desert2: SneakCustoms{
		skinName = "BSF Desert Storm";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\AH1Z\BSF_AH1Z_Desert2_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\AH1Z\BSF_AH1Z_Desert2_2_Engines.paa"
		};
        availableFor = "Vip";
	};	

	class BSF_Skin_AH1Z_CSAT: SneakCustoms{
		skinName = "BSF CSAT";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\AH1Z\BSF_AH1Z_CSAT_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\AH1Z\BSF_AH1Z_CSAT_2_Engines.paa"
		};
        availableFor = "Vip";
	};
