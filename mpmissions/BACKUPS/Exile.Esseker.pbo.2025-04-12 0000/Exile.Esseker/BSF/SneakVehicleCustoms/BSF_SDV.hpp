
////////////////////////////////	
// SDV	
////////////////////////////////	

	class BSF_Skin_SDV_Base{
		skins[] = {
			{"BSF_Skin_SDV_Gray", 500},
			{"BSF_Skin_SDV_CSAT", 500},
			{"BSF_Skin_SDV_Digital", 500},
			{"BSF_Skin_SDV_Arctic", 1},
			{"BSF_Skin_SDV_Aqua", 1},
			{"BSF_Skin_SDV_Black", 1},
			{"BSF_Skin_SDV_Shark", 1},
			{"BSF_Skin_SDV_BlueFlame", 1},
			{"BSF_Skin_SDV_Yellow", 1},
			{"BSF_Skin_SDV_Rusty", 1}
		};
	};
	class Exile_Boat_SDV_Abstract: BSF_Skin_SDV_Base{};
	class SDV_01_base_F: BSF_Skin_SDV_Base{};
	class Exile_Boat_SDV_CSAT: BSF_Skin_SDV_Base{};
	class Exile_Boat_SDV_Digital: BSF_Skin_SDV_Base{};
	class Exile_Boat_SDV_Grey: BSF_Skin_SDV_Base{};
	class O_SDV_01_F: BSF_Skin_SDV_Base{};
	class I_SDV_01_F: BSF_Skin_SDV_Base{};
	class B_SDV_01_F: BSF_Skin_SDV_Base{};

	class BSF_Skin_SDV_Gray: SneakCustoms{
		skinName = "Exile Gray";
		hiddenSelectionsTextures[] = {"a3\boat_f_beta\sdv_01\data\sdv_ext_co.paa"};
		availableFor = "All";
	};	

	class BSF_Skin_SDV_CSAT: SneakCustoms{
		skinName = "Exile CSAT";
		hiddenSelectionsTextures[] = {"a3\boat_f_beta\sdv_01\data\sdv_ext_opfor_co.paa"};
		availableFor = "All";
	};	

	class BSF_Skin_SDV_Digital: SneakCustoms{
		skinName = "Exile Digital";
		hiddenSelectionsTextures[] = {"a3\boat_f_beta\sdv_01\data\sdv_ext_indp_co.paa"};
		availableFor = "All";
	};	

	class BSF_Skin_SDV_Yellow: SneakCustoms{
		skinName = "We all live in a Yellow Submarine";
		hiddenSelectionsTextures[] = {"BSF_Community_Addon\addons\BSF_Misc\data\skins\SDV\BSF_SDV_Yellow.paa"};
		availableFor = "Vip";
	};	

	class BSF_Skin_SDV_Rusty: SneakCustoms{
		skinName = "BSF Rust Bucket";
		hiddenSelectionsTextures[] = {"BSF_Community_Addon\addons\BSF_Misc\data\skins\SDV\BSF_SDV_Rusty.paa"};
		availableFor = "Vip";
	};	
	
	class BSF_Skin_SDV_Arctic: SneakCustoms{
		skinName = "BSF Arctic Blue";
		hiddenSelectionsTextures[] = {"BSF_Community_Addon\addons\BSF_Misc\data\skins\SDV\BSF_SDV_Arctic.paa"};
		availableFor = "Vip";
	};	

	class BSF_Skin_SDV_Aqua: SneakCustoms{
		skinName = "BSF Aqua";
		hiddenSelectionsTextures[] = {"BSF_Community_Addon\addons\BSF_Misc\data\skins\SDV\BSF_SDV_Aqua.paa"};
		availableFor = "Vip";
	};	

	class BSF_Skin_SDV_Black: SneakCustoms{
		skinName = "BSF Black";
		hiddenSelectionsTextures[] = {"BSF_Community_Addon\addons\BSF_Misc\data\skins\SDV\BSF_SDV_Black.paa"};
		availableFor = "Vip";
	};	

	class BSF_Skin_SDV_Shark: SneakCustoms{
		skinName = "BSF Shark";
		hiddenSelectionsTextures[] = {"BSF_Community_Addon\addons\BSF_Misc\data\skins\SDV\BSF_SDV_Shark.paa"};
		availableFor = "Vip";
	};	

	class BSF_Skin_SDV_BlueFlame: SneakCustoms{
		skinName = "BSF Blue Flame";
		hiddenSelectionsTextures[] = {"BSF_Community_Addon\addons\BSF_Misc\data\skins\SDV\BSF_SDV_BlueFlame.paa"};
		availableFor = "Vip";
	};	

