
////////////////////////////////
//Cycle1
////////////////////////////////

	class BSF_Skin_Cycle1_Base{
		skins[] = {
			{"BSF_Skin_Cycle1_Olive", 500},
			{"BSF_Skin_Cycle1_Sand", 500},
			{"BSF_Skin_Cycle1_Black", 500},
			{"BSF_Skin_Cycle1_Brown", 500},
			{"BSF_Skin_Cycle1_MossyOak", 1},
			{"BSF_Skin_Cycle1_DesertDigi", 1},
			{"BSF_Skin_Cycle1_Desert1", 1},
			{"BSF_Skin_Cycle1_Desert2", 1},
			{"BSF_Skin_Cycle1_ArcticBlue", 1},
			{"BSF_Skin_Cycle1_Tiger", 1},
			{"BSF_Skin_Cycle1_Stone", 1},
			{"BSF_Skin_Cycle1_SnowLeopard", 1},
			{"BSF_Skin_Cycle1_WinterGreen", 1},
			{"BSF_Skin_Cycle1_Woodland", 1},
			{"BSF_Skin_Cycle1_CSAT", 1},
			{"BSF_Skin_Cycle1_Multi", 1},
		};
	};
// 50cc
	class BSF_KTM50_Brown: BSF_Skin_Cycle1_Base{};
	class BSF_KTM50_Black: BSF_Skin_Cycle1_Base{};
	class BSF_KTM50_Olive: BSF_Skin_Cycle1_Base{};
	class BSF_KTM50_Sand: BSF_Skin_Cycle1_Base{};
	class V12_KTM50CCN: BSF_Skin_Cycle1_Base{};
	class V12_KTM50CCO: BSF_Skin_Cycle1_Base{};
	class V12_KTM50CCB: BSF_Skin_Cycle1_Base{};

// 450 Quad
	class BSF_YFZ450_QuadBike_Black: BSF_Skin_Cycle1_Base{};
	class BSF_YFZ450_QuadBike_Brown: BSF_Skin_Cycle1_Base{};
	class BSF_YFZ450_QuadBike_Olive: BSF_Skin_Cycle1_Base{};
	class BSF_YFZ450_QuadBike_Sand: BSF_Skin_Cycle1_Base{};
	class V12_YFZ450_BLEU: BSF_Skin_Cycle1_Base{};
	class V12_YFZ450_GRIS: BSF_Skin_Cycle1_Base{};
	class V12_YFZ450_NOIR: BSF_Skin_Cycle1_Base{};
	class V12_YFZ450_RACE1: BSF_Skin_Cycle1_Base{};
	class V12_YFZ450_RACE2: BSF_Skin_Cycle1_Base{};
	class V12_YFZ450_RACE3: BSF_Skin_Cycle1_Base{};
	class V12_YFZ450_RACE4: BSF_Skin_Cycle1_Base{};
	class V12_YFZ450_RACE5: BSF_Skin_Cycle1_Base{};
	class V12_YFZ450_ROUGE: BSF_Skin_Cycle1_Base{};

// APRILIA MXV 450
	class BSF_Aprilia_DirtBike_Black: BSF_Skin_Cycle1_Base{};
	class BSF_Aprilia_DirtBike_Brown: BSF_Skin_Cycle1_Base{};
	class BSF_Aprilia_DirtBike_Olive: BSF_Skin_Cycle1_Base{};
	class BSF_Aprilia_DirtBike_Sand: BSF_Skin_Cycle1_Base{};
	class V12_APRILIAMXV450: BSF_Skin_Cycle1_Base{};
	class V12_APRILIAMXV4502: BSF_Skin_Cycle1_Base{};
	class V12_APRILIAMXV4503: BSF_Skin_Cycle1_Base{};
	class V12_APRILIAMXV4504: BSF_Skin_Cycle1_Base{};
	class : BSF_Skin_Cycle1_Base{};

//Textures

		class BSF_Skin_Cycle1_Olive: SneakCustoms{
		skinName = "Olive";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.5,0.5,0.4,0.2,co)"};
		availableFor = "All";
	};
		class BSF_Skin_Cycle1_Sand: SneakCustoms{
		skinName = "Sand";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.8,0.7,0.5,0.4,CO)"};
		availableFor = "All";
	};
		class BSF_Skin_Cycle1_Black: SneakCustoms{
		skinName = "Black";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0,0,0,1,co)"};
		availableFor = "All";
	};
		class BSF_Skin_Cycle1_Brown: SneakCustoms{
		skinName = "Brown";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.55,0.5,0.4,0.1,co)"};
		availableFor = "All";
	};

	class BSF_Skin_Cycle1_MossyOak: SneakCustoms{
		skinName = "BSF Mossy Oak";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Textures\BSF_1024_MossyOak.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Cycle1_DesertDigi: SneakCustoms{
		skinName = "BSF Desert Digi";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Textures\BSF_1024_DesertDigi.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Cycle1_Desert1: SneakCustoms{
		skinName = "BSF Desert Fox";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Textures\BSF_1024_Desert_1.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Cycle1_Desert2: SneakCustoms{
		skinName = "BSF Desert Storm";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Textures\BSF_1024_Desert_2.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Cycle1_ArcticBlue: SneakCustoms{
		skinName = "BSF Arctic Blue";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Textures\BSF_1024_ArcticBlue.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Cycle1_Tiger: SneakCustoms{
		skinName = "BSF Crouching Tiger";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Textures\BSF_512_Tiger.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Cycle1_Stone: SneakCustoms{
		skinName = "BSF Stone";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Textures\BSF_512_Stone.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Cycle1_SnowLeopard: SneakCustoms{
		skinName = "BSF Snow Leopard";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Textures\BSF_512_SnowLeopard.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Cycle1_WinterGreen: SneakCustoms{
		skinName = "BSF Winter Green";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Textures\BSF_512_WinterGreen.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Cycle1_Woodland: SneakCustoms{
		skinName = "BSF Woodland";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Textures\BSF_512_Woodland.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Cycle1_CSAT: SneakCustoms{
		skinName = "BSF CSAT";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Textures\BSF_1024_CSAT.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Cycle1_Multi: SneakCustoms{
		skinName = "BSF Multi";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Textures\BSF_1024_Multi_1.paa"
		};
        availableFor = "Vip";
	};
