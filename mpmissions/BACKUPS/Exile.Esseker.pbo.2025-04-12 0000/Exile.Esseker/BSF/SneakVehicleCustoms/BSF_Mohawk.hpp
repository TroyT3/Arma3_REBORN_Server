
////////////////////////////////
// MOHAWK
////////////////////////////////

	class BSF_Skin_Mohawk_Base{
		skins[] = {
			{"BSF_Skin_Mohawk_AAF", 500},
			{"BSF_Skin_Mohawk_USMC", 1},
			{"BSF_Skin_Mohawk_Dahoman", 1},
			{"BSF_Skin_Mohawk_Ion", 1}
		};
	};

	class Exile_Chopper_Mohawk_Abstract: BSF_Skin_Mohawk_Base{};
	class Exile_Chopper_Mohawk_FIA: BSF_Skin_Mohawk_Base{};
	class Heli_Transport_02_base_F: BSF_Skin_Mohawk_Base{};
	class I_Heli_Transport_02_F: BSF_Skin_Mohawk_Base{};

//Textures
	class BSF_Skin_Mohawk_AAF: SneakCustoms{
		skinName = "Default AAF";
		hiddenSelectionsTextures[] = {
			"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_1_INDP_CO.paa",
			"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_2_INDP_CO.paa",
			"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_3_INDP_CO.paa",
			"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
			};
//		availableFor = "All";		
	};

	class BSF_Skin_Mohawk_USMC: SneakCustoms{
		skinName = "US Marines";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Mohawk\CH49_USMC_1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Mohawk\CH49_USMC_2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Mohawk\CH49_USMC_3.paa",
			"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
			};
		availableFor = "Vip";		
	};

	class BSF_Skin_Mohawk_Dahoman: SneakCustoms{
		skinName = "Dahoman";
		hiddenSelectionsTextures[] = {
			"A3\Air_F_Beta\Heli_Transport_02\Data\skins\heli_transport_02_1_dahoman_co.paa",
			"A3\Air_F_Beta\Heli_Transport_02\Data\skins\heli_transport_02_2_dahoman_co.paa",
			"A3\Air_F_Beta\Heli_Transport_02\Data\skins\heli_transport_02_3_dahoman_co.paa",
			"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
			};
		availableFor = "Vip";		
	};

	class BSF_Skin_Mohawk_Ion: SneakCustoms{
		skinName = "Ion";
		hiddenSelectionsTextures[] = {
			"A3\Air_F_Beta\Heli_Transport_02\Data\skins\heli_transport_02_1_ion_co.paa",
			"A3\Air_F_Beta\Heli_Transport_02\Data\skins\heli_transport_02_2_ion_co.paa",
			"A3\Air_F_Beta\Heli_Transport_02\Data\skins\heli_transport_02_3_ion_co.paa",
			"A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
			};
		availableFor = "Vip";		
	};
