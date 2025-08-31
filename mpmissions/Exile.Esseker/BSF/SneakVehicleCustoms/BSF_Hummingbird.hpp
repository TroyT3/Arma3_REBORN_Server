
////////////////////////////////
//HUMMINGBIRD
////////////////////////////////

	class BSF_Skin_Hummingbird_Base{
		skins[] = {
			{"BSF_Skin_Hummingbird_Olive", 500},
			{"BSF_Skin_Hummingbird_Black", 500},
			{"BSF_Skin_Hummingbird_GrayDigi", 500},
			{"BSF_Skin_Hummingbird_Colors", 500},
			{"BSF_Skin_Hummingbird_Civ1", 500},
			{"BSF_Skin_Hummingbird_Civ2", 500},
			{"BSF_Skin_Hummingbird_Civ3", 500},
			{"BSF_Skin_Hummingbird_Civ4", 500},
			{"BSF_Skin_Hummingbird_Civ5", 500},
			{"BSF_Skin_Hummingbird_Civ6", 500},
			{"BSF_Skin_Hummingbird_Civ7", 500},
			{"BSF_Skin_Hummingbird_Civ8", 500},
			{"BSF_Skin_Hummingbird_Civ9", 500},
			{"BSF_Skin_Hummingbird_Civ10", 500},
			{"BSF_Skin_Hummingbird_Civ11", 500},
			{"BSF_Skin_Hummingbird_Civ12", 500},
			{"BSF_Skin_Hummingbird_Civ13", 500},
			{"BSF_Skin_Hummingbird_Civ14", 500},
			{"BSF_Skin_Hummingbird_Civ15", 500}
		};
	};

	class Heli_Light_01_base_F: BSF_Skin_Hummingbird_Base{};
	class Heli_Light_01_unarmed_base_F: BSF_Skin_Hummingbird_Base{};
	class Heli_Light_01_civil_base_F: BSF_Skin_Hummingbird_Base{};
	class Heli_Light_01_armed_base_F: BSF_Skin_Hummingbird_Base{};
	class Heli_Light_01_dynamicLoadout_base_F: BSF_Skin_Hummingbird_Base{};
	class B_Heli_Light_01_F: BSF_Skin_Hummingbird_Base{};
	class B_Heli_Light_01_armed_F: BSF_Skin_Hummingbird_Base{};
	class B_Heli_Light_01_dynamicLoadout_F: BSF_Skin_Hummingbird_Base{};
	class C_Heli_Light_01_civil_F: BSF_Skin_Hummingbird_Base{};
	class C_Heli_light_01_blue_F: BSF_Skin_Hummingbird_Base{};
	class C_Heli_light_01_red_F: BSF_Skin_Hummingbird_Base{};
	class C_Heli_light_01_ion_F: BSF_Skin_Hummingbird_Base{};
	class C_Heli_light_01_blueLine_F: BSF_Skin_Hummingbird_Base{};
	class C_Heli_light_01_digital_F: BSF_Skin_Hummingbird_Base{};
	class C_Heli_light_01_elliptical_F: BSF_Skin_Hummingbird_Base{};
	class C_Heli_light_01_furious_F: BSF_Skin_Hummingbird_Base{};
	class C_Heli_light_01_graywatcher_F: BSF_Skin_Hummingbird_Base{};
	class C_Heli_light_01_jeans_F: BSF_Skin_Hummingbird_Base{};
	class C_Heli_light_01_light_F: BSF_Skin_Hummingbird_Base{};
	class C_Heli_light_01_shadow_F: BSF_Skin_Hummingbird_Base{};
	class C_Heli_light_01_sheriff_F: BSF_Skin_Hummingbird_Base{};
	class C_Heli_light_01_speedy_F: BSF_Skin_Hummingbird_Base{};
	class C_Heli_light_01_sunset_F: BSF_Skin_Hummingbird_Base{};
	class C_Heli_light_01_vrana_F: BSF_Skin_Hummingbird_Base{};
	class C_Heli_light_01_wasp_F: BSF_Skin_Hummingbird_Base{};
	class C_Heli_light_01_wave_F: BSF_Skin_Hummingbird_Base{};
	class C_Heli_light_01_stripped_F: BSF_Skin_Hummingbird_Base{};
	class C_Heli_light_01_luxe_F: BSF_Skin_Hummingbird_Base{};
	class B_Heli_Light_01_stripped_F: BSF_Skin_Hummingbird_Base{};
	class Exile_Chopper_Hummingbird_Abstract: BSF_Skin_Hummingbird_Base{};
	class Exile_Chopper_Hummingbird_Civillian_Abstract: BSF_Skin_Hummingbird_Base{};


//Textures

		class BSF_Skin_Hummingbird_Olive: SneakCustoms{
		skinName = "Olive";
		hiddenSelectionsTextures[] = {"A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_Blufor_CO.paa"};
		availableFor = "All";
	};
		class BSF_Skin_Hummingbird_Black: SneakCustoms{
		skinName = "Black";
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"};
		availableFor = "All";
	};
		class BSF_Skin_Hummingbird_GrayDigi: SneakCustoms{
		skinName = "Gray Digi";
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"};
		availableFor = "Vip";
	};
		class BSF_Skin_Hummingbird_Colors: SneakCustoms{
		skinName = "Colors by Nevbox";
		hiddenSelectionsTextures[] = {"BSF_Community_Addon\addons\BSF_Misc\data\skins\Hummingbird\Hummingbird_WhiteColors.paa"};
		availableFor = "Vip";
	};
		class BSF_Skin_Hummingbird_Civ1: SneakCustoms{
		skinName = "Red Stripes";
		hiddenSelectionsTextures[] = {"A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_CO.paa"};
		availableFor = "All";
	};
		class BSF_Skin_Hummingbird_Civ2: SneakCustoms{
		skinName = "Blue Stripes";
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"};
		availableFor = "All";
	};
		class BSF_Skin_Hummingbird_Civ3: SneakCustoms{
		skinName = "Blue Line";
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueLine_co.paa"};
		availableFor = "All";
	};
		class BSF_Skin_Hummingbird_Civ4: SneakCustoms{
		skinName = "Red Eliptical";
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"};
		availableFor = "All";
	};
		class BSF_Skin_Hummingbird_Civ5: SneakCustoms{
		skinName = "Blue Streak";
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"};
		availableFor = "All";
	};
		class BSF_Skin_Hummingbird_Civ6: SneakCustoms{
		skinName = "Gray Water";
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_graywatcher_co.paa"};
		availableFor = "All";
	};
		class BSF_Skin_Hummingbird_Civ7: SneakCustoms{
		skinName = "Blue Jean Baby";
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"};
		availableFor = "All";
	};
		class BSF_Skin_Hummingbird_Civ8: SneakCustoms{
		skinName = "Golden Light";
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_light_co.paa"};
		availableFor = "All";
	};
		class BSF_Skin_Hummingbird_Civ9: SneakCustoms{
		skinName = "Goldenrod";
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_shadow_co.paa"};
		availableFor = "All";
	};
		class BSF_Skin_Hummingbird_Civ10: SneakCustoms{
		skinName = "Sheriff";
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"};
		availableFor = "All";
	};
		class BSF_Skin_Hummingbird_Civ11: SneakCustoms{
		skinName = "Speedy";
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"};
		availableFor = "All";
	};
		class BSF_Skin_Hummingbird_Civ12: SneakCustoms{
		skinName = "Sunrise";
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"};
		availableFor = "All";
	};
		class BSF_Skin_Hummingbird_Civ13: SneakCustoms{
		skinName = "Red Delicious";
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"};
		availableFor = "All";
	};
		class BSF_Skin_Hummingbird_Civ14: SneakCustoms{
		skinName = "Hornet";
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wasp_co.paa"};
		availableFor = "All";
	};
		class BSF_Skin_Hummingbird_Civ15: SneakCustoms{
		skinName = "Blue Wave";
		hiddenSelectionsTextures[] = {"a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"};
		availableFor = "All";
	};

