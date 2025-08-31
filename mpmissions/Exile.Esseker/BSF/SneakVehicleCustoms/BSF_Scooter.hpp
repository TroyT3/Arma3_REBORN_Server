
////////////////////////////////
// Water Scooter
////////////////////////////////

	class BSF_Skin_Scooter_Base{
		skins[] = {
			{"Exile_Skin_Scooter_Black", 500},
			{"Exile_Skin_Scooter_Blue", 500},
			{"Exile_Skin_Scooter_Grey", 500},
			{"Exile_Skin_Scooter_Lime", 500},
			{"Exile_Skin_Scooter_Red", 500},
			{"Exile_Skin_Scooter_White", 500},
			{"Exile_Skin_Scooter_Yellow", 500},
			{"BSF_Skin_Scooter_Black", 1},
			{"BSF_Skin_Scooter_MossyOak", 1},
			{"BSF_Skin_Scooter_Multi1", 1},
			{"BSF_Skin_Scooter_WD", 1},
			{"BSF_Skin_Scooter_Tiger", 1},
			{"BSF_Skin_Scooter_Arctic", 1},
			{"BSF_Skin_Scooter_SnowLeopard", 1}
		};
	};

	class Exile_Boat_WaterScooter_Abstract: BSF_Skin_Scooter_Base{};
	class Exile_Boat_WaterScooter: BSF_Skin_Scooter_Base{};
	class C_Scooter_Transport_01_F: BSF_Skin_Scooter_Base{};


	class BSF_Skin_Scooter_MossyOak: SneakCustoms{
		skinName = "BSF Mossy Oak";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Scooter\BSF_Scooter_MossyOak_1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Scooter\BSF_Scooter_MossyOak_2.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Scooter_Black: SneakCustoms{
		skinName = "BSF Black";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Scooter\BSF_Scooter_Black_1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Scooter\BSF_Scooter_Black_2.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Scooter_WD: SneakCustoms{
		skinName = "BSF Woodland";
        hiddenSelectionsTextures[] = {

			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Scooter\BSF_Scooter_WD_1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Scooter\BSF_Scooter_WD_2.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Scooter_Tiger: SneakCustoms{
		skinName = "BSF Crouching Tiger";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Scooter\BSF_Scooter_Tiger_1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Scooter\BSF_Scooter_Tiger_2.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Scooter_Arctic: SneakCustoms{
		skinName = "BSF Arctic Blue";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Scooter\BSF_Scooter_Arctic_1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Scooter\BSF_Scooter_Arctic_2.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Scooter_SnowLeopard: SneakCustoms{
		skinName = "BSF Snow Leopard";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Scooter\BSF_Scooter_SnowLeopard_1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Scooter\BSF_Scooter_SnowLeopard_2.paa"
		};
        availableFor = "Vip";
	};

	class BSF_Skin_Scooter_Multi1: SneakCustoms{
		skinName = "BSF Multi";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Scooter\BSF_Scooter_Multi1_1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Scooter\BSF_Scooter_Multi1_2.paa"
		};
        availableFor = "Vip";
	};

	class Exile_Skin_Scooter_Black: SneakCustoms{
		skinName = "Scooter, Black";
        hiddenSelectionsTextures[] = {
			"a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_black_co.paa",
			"a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_vp_black_co.paa"
		};
        availableFor = "All";
	};	

	class Exile_Skin_Scooter_Blue: SneakCustoms{
		skinName = "Exile, Blue";
        hiddenSelectionsTextures[] = {
			"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa",
			"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"
		};
        availableFor = "All";
	};	

	class Exile_Skin_Scooter_Grey: SneakCustoms{
		skinName = "Exile, Gray";
        hiddenSelectionsTextures[] = {
			"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa",
			"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"
		};
        availableFor = "All";
	};	

	class Exile_Skin_Scooter_Lime: SneakCustoms{
		skinName = "Exile, Lime";
        hiddenSelectionsTextures[] = {
			"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa",
			"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"
		};
        availableFor = "All";
	};	

	class Exile_Skin_Scooter_Red: SneakCustoms{
		skinName = "Exile, Red";
        hiddenSelectionsTextures[] = {
			"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa",
			"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
		};
        availableFor = "All";
	};	

	class Exile_Skin_Scooter_White: SneakCustoms{
		skinName = "Exile, White";
        hiddenSelectionsTextures[] = {
			"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa",
			"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
		};
        availableFor = "All";
	};	

	class Exile_Skin_Scooter_Yellow: SneakCustoms{
		skinName = "Exile, Yellow";
        hiddenSelectionsTextures[] = {
			"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa",
			"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"
		};
        availableFor = "All";
	};	
