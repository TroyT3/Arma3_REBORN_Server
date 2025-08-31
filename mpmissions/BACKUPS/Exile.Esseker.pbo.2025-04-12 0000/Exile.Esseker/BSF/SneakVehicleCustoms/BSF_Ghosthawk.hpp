
////////////////////////////////
// Ghosthawk
////////////////////////////////

	class BSF_Skin_Ghosthawk_Base{
		skins[] = {
			{"BSF_Skin_Ghosthawk_Default_Black", 500},
			{"BSF_Skin_Ghosthawk_Default_Olive", 500},
			{"BSF_Skin_Ghosthawk_Default_Sand", 500},
			{"BSF_Skin_Ghosthawk_Default_Tropic", 500},
			{"", 1},
			{"", 1},
			{"", 1}
		};
	};

	class B_Heli_Transport_01_F: BSF_Skin_Ghosthawk_Base{};
	class B_Heli_Transport_01_camo_F: BSF_Skin_Ghosthawk_Base{};
	class B_CTRG_Heli_Transport_01_sand_F: BSF_Skin_Ghosthawk_Base{};
	class B_CTRG_Heli_Transport_01_tropic_F: BSF_Skin_Ghosthawk_Base{};

//Textures

		class BSF_Skin_Ghosthawk_Default_Black: SneakCustoms{
		skinName = "Black";
		hiddenSelectionsTextures[] = {
			"a3\air_f_beta\heli_transport_01\data\heli_transport_01_ext01_co.paa",
			"a3\air_f_beta\heli_transport_01\data\heli_transport_01_ext02_co.paa"
			};
		availableFor = "All";
	};

	class BSF_Skin_Ghosthawk_Default_Olive: SneakCustoms{
		skinName = "Olive";
		hiddenSelectionsTextures[] = {
			"a3\air_f_beta\heli_transport_01\data\heli_transport_01_ext01_blufor_co.paa",
			"a3\air_f_beta\heli_transport_01\data\heli_transport_01_ext02_blufor_co.paa"
			};
		availableFor = "All";
	};

		class BSF_Skin_Ghosthawk_Default_Sand: SneakCustoms{
		skinName = "Sand";
		hiddenSelectionsTextures[] = {
			"a3\air_f_exp\heli_transport_01\data\heli_transport_01_ext01_sand_co.paa",
			"a3\air_f_exp\heli_transport_01\data\heli_transport_01_ext02_sand_co.paa"
			};
		availableFor = "All";
	};

		class BSF_Skin_Ghosthawk_Default_Tropic: SneakCustoms{
		skinName = "Tropic";
		hiddenSelectionsTextures[] = {
			"a3\air_f_exp\heli_transport_01\data\heli_transport_01_ext01_tropic_co.paa",
			"a3\air_f_exp\heli_transport_01\data\heli_transport_01_ext02_tropic_co.paa"
			};
		availableFor = "All";
	};

		class BSF_Skin_Ghosthawk_Forest: SneakCustoms{
		skinName = "BSF Forest";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ghosthawk\BSF_Ghosthawk_Forest_1_Front.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ghosthawk\BSF_Ghosthawk_Forest_2_Back.paa"
			};
		availableFor = "Vip";
	};

		class BSF_Skin_Ghosthawk_Tropic: SneakCustoms{
		skinName = "BSF Tropic Thunder";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ghosthawk\BSF_Ghosthawk_Tropical_1_Front.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ghosthawk\BSF_Ghosthawk_Tropical_2_Back.paa"
			};
		availableFor = "Vip";
	};

	class BSF_Skin_Ghosthawk_Sand: SneakCustoms{
		skinName = "BSF Sandstorm";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ghosthawk\BSF_Ghosthawk_Sand_1_Front.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Ghosthawk\BSF_Ghosthawk_Sand_2_Back.paa"
			};
		availableFor = "Vip";
	};

