	
////////////////////////////////	
// HEMMT
////////////////////////////////	

//	hiddenSelectionsTextures[] = {"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\Huron1.jpg","BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\Huron2.jpg"};


	class BSF_Skin_HEMMT_Base{
		skins[] = {
			{"BSF_Skin_HEMMT_Default_Khaki", 500},
			{"BSF_Skin_HEMMT_Default_Olive", 500},
			{"BSF_Skin_HEMMT_MossyOak", 1},
			{"BSF_Skin_HEMMT_Gray", 1},
			{"BSF_Skin_HEMMT_Black", 1},
			{"BSF_Skin_HEMMT_DesertDigi", 1},
			{"BSF_Skin_HEMMT_ArcticBlue", 1},
			{"BSF_Skin_HEMMT_Tiger", 1}
		};
	};

	class Exile_Car_HEMMT_Abstract: BSF_Skin_HEMMT_Base{};
	class Exile_Car_HEMMT: BSF_Skin_HEMMT_Base{};
	class Truck_01_base_F: BSF_Skin_HEMMT_Base{};
	class B_Truck_01_transport_F: BSF_Skin_HEMMT_Base{};
	class B_Truck_01_covered_F: BSF_Skin_HEMMT_Base{};
	class B_Truck_01_medical_F: BSF_Skin_HEMMT_Base{};
	class B_T_Truck_01_transport_F: BSF_Skin_HEMMT_Base{};
	class B_T_Truck_01_covered_F: BSF_Skin_HEMMT_Base{};
	class B_T_Truck_01_medical_F: BSF_Skin_HEMMT_Base{};

	class BSF_Skin_HEMMT_Default_Khaki: SneakCustoms{
		skinName = "Khaki";
        hiddenSelectionsTextures[] = {
			"a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa",
			"a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa",
			"a3\soft_f_beta\truck_01\data\truck_01_cargo_co.paa",
			"a3\soft_f_beta\truck_01\data\truck_01_cover_co.paa"
		};
        availableFor = "All";
	};	
	class BSF_Skin_HEMMT_Default_Olive: SneakCustoms{
		skinName = "Olive";
        hiddenSelectionsTextures[] = {
			"a3\soft_f_exp\truck_01\data\truck_01_ext_01_olive_co.paa",
			"a3\soft_f_exp\truck_01\data\truck_01_ext_02_olive_co.paa",
			"a3\soft_f_exp\truck_01\data\truck_01_cargo_olive_co.paa",
			"a3\soft_f_exp\truck_01\data\truck_01_cover_olive_co.paa"
		};
        availableFor = "All";
	};	
	class BSF_Skin_HEMMT_MossyOak: SneakCustoms{
		skinName = "BSF Mossy Oak";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_MossyOak_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_MossyOak_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_MossyOak_3_Cargo.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_MossyOak_4_Cover.paa"
		};
        availableFor = "Vip";
	};	
	class BSF_Skin_HEMMT_Gray: SneakCustoms{
		skinName = "BSF Gray";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Gray_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Gray_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Gray_3_Cargo.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Gray_4_Cover.paa"
		};
        availableFor = "Vip";
	};	
	class BSF_Skin_HEMMT_Black: SneakCustoms{
		skinName = "BSF Black";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Black_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Black_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Black_3_Cargo.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Black_4_Cover.paa"
		};
        availableFor = "Vip";
	};	
	class BSF_Skin_HEMMT_DesertDigi: SneakCustoms{
		skinName = "BSF Desert Digi";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_DesertDigi_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_DesertDigi_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_DesertDigi_3_Cargo.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_DesertDigi_4_Cover.paa"
		};
        availableFor = "Vip";
	};	
	class BSF_Skin_HEMMT_ArcticBlue: SneakCustoms{
		skinName = "BSF Arctic Blue";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_ArcticBlue_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_ArcticBlue_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_ArcticBlue_3_Cargo.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_ArcticBlue_4_Cover.paa"
		};
        availableFor = "Vip";
	};	
	class BSF_Skin_HEMMT_Tiger: SneakCustoms{
		skinName = "BSF Crouching Tiger";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Tiger_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Tiger_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Tiger_3_Cargo.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Tiger_4_Cover.paa"
		};
        availableFor = "Vip";
	};	

////////////////////////////////	
// HEMMT Mover
////////////////////////////////	

	class BSF_Skin_HEMMT_Mover_Base{
		skins[] = {
			{"BSF_Skin_HEMMT_Mover_Khaki", 500},
			{"BSF_Skin_HEMMT_Mover_Olive", 500},
			{"BSF_Skin_HEMMT_Mover_MossyOak", 1},
			{"BSF_Skin_HEMMT_Mover_Gray", 1},
			{"BSF_Skin_HEMMT_Mover_Black", 1},
			{"BSF_Skin_HEMMT_Mover_DesertDigi", 1},
			{"BSF_Skin_HEMMT_Mover_ArcticBlue", 1},
			{"BSF_Skin_HEMMT_Mover_Tiger", 1}
		};
	};
	class B_Truck_01_mover_F: BSF_Skin_HEMMT_Mover_Base{};
	class B_T_Truck_01_mover_F: BSF_Skin_HEMMT_Mover_Base{};
	class BSF_B_Truck_01_mover_F: BSF_Skin_HEMMT_Mover_Base{};

	class BSF_Skin_HEMMT_Mover_Khaki: SneakCustoms{
		skinName = "Khaki";
        hiddenSelectionsTextures[] = {
			"a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa",
			"a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa",
			"a3\soft_f_gamma\truck_01\data\truck_01_mprimer_co.paa"
		};
        availableFor = "All";
	};	
	class BSF_Skin_HEMMT_Mover_Olive: SneakCustoms{
		skinName = "Olive";
        hiddenSelectionsTextures[] = {
			"a3\soft_f_exp\truck_01\data\truck_01_ext_01_olive_co.paa",
			"a3\soft_f_exp\truck_01\data\truck_01_ext_02_olive_co.paa",
			"a3\soft_f_exp\truck_01\data\truck_01_mprimer_olive_co.paa"
		};
        availableFor = "All";
	};	
	class BSF_Skin_HEMMT_Mover_MossyOak: SneakCustoms{
		skinName = "BSF Mossy Oak";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_MossyOak_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_MossyOak_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_MossyOak_3_Mover.paa"
		};
        availableFor = "Vip";
	};	
	class BSF_Skin_HEMMT_Mover_Gray: SneakCustoms{
		skinName = "BSF Gray";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Gray_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Gray_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Gray_3_Mover.paa"
		};
        availableFor = "Vip";
	};	
	class BSF_Skin_HEMMT_Mover_Black: SneakCustoms{
		skinName = "BSF Black";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Black_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Black_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Black_3_Mover.paa"
		};
        availableFor = "Vip";
	};	
	class BSF_Skin_HEMMT_Mover_DesertDigi: SneakCustoms{
		skinName = "BSF Desert Digi";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_DesertDigi_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_DesertDigi_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_DesertDigi_3_Mover.paa"
		};
        availableFor = "Vip";
	};	
	class BSF_Skin_HEMMT_Mover_ArcticBlue: SneakCustoms{
		skinName = "BSF Arctic Blue";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_ArcticBlue_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_ArcticBlue_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_ArcticBlue_3_Mover.paa"
		};
        availableFor = "Vip";
	};	
	class BSF_Skin_HEMMT_Mover_Tiger: SneakCustoms{
		skinName = "BSF Crouching Tiger";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Tiger_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Tiger_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Tiger_3_Mover.paa"
		};
        availableFor = "Vip";
	};	

////////////////////////////////	
// HEMMT Ammo
////////////////////////////////	

	class BSF_Skin_HEMMT_Ammo_Base{
		skins[] = {
			{"BSF_Skin_HEMMT_Ammo_Khaki", 500},
			{"BSF_Skin_HEMMT_Ammo_Olive", 500},
			{"BSF_Skin_HEMMT_Ammo_MossyOak", 1},
			{"BSF_Skin_HEMMT_Ammo_Gray", 1},
			{"BSF_Skin_HEMMT_Ammo_Black", 1},
			{"BSF_Skin_HEMMT_Ammo_DesertDigi", 1},
			{"BSF_Skin_HEMMT_Ammo_ArcticBlue", 1},
			{"BSF_Skin_HEMMT_Ammo_Tiger", 1}
		};
	};
	class B_Truck_01_ammo_F: BSF_Skin_HEMMT_Ammo_Base{};
	class B_T_Truck_01_ammo_F: BSF_Skin_HEMMT_Ammo_Base{};
	class B_Truck_01_flatbed_F: BSF_Skin_HEMMT_Ammo_Base{};		//Not working
	class B_T_Truck_01_flatbed_F: BSF_Skin_HEMMT_Ammo_Base{};	//Not workin
	class BSF_B_Truck_01_ammo_F: BSF_Skin_HEMMT_Ammo_Base{};
	class B_Truck_01_cargo_F: BSF_Skin_HEMMT_Ammo_Base{};		//Not workin
	class B_T_Truck_01_cargo_F: BSF_Skin_HEMMT_Ammo_Base{};		//Not workin

	class BSF_Skin_HEMMT_Ammo_Khaki: SneakCustoms{
		skinName = "Khaki";
        hiddenSelectionsTextures[] = {
			"a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa",
			"a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa",
			"a3\soft_f_gamma\truck_01\data\truck_01_ammo_co.paa"
		};
        availableFor = "All";
	};	
	class BSF_Skin_HEMMT_Ammo_Olive: SneakCustoms{
		skinName = "Olive";
        hiddenSelectionsTextures[] = {
			"a3\soft_f_exp\truck_01\data\truck_01_ext_01_olive_co.paa",
			"a3\soft_f_exp\truck_01\data\truck_01_ext_02_olive_co.paa",
			"a3\soft_f_exp\truck_01\data\truck_01_ammo_olive_co.paa"
		};
        availableFor = "All";
	};	
	class BSF_Skin_HEMMT_Ammo_MossyOak: SneakCustoms{
		skinName = "BSF Mossy Oak";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_MossyOak_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_MossyOak_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_MossyOak_3_Ammo.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_MossyOak_3_Cargo.paa"
		};
        availableFor = "Vip";
	};	
	class BSF_Skin_HEMMT_Ammo_Gray: SneakCustoms{
		skinName = "BSF Gray";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Gray_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Gray_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Gray_3_Ammo.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Gray_3_Cargo.paa"
		};
        availableFor = "Vip";
	};	
	class BSF_Skin_HEMMT_Ammo_Black: SneakCustoms{
		skinName = "BSF Black";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Black_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Black_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Black_3_Ammo.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Black_3_Cargo.paa"
		};
        availableFor = "Vip";
	};	
	class BSF_Skin_HEMMT_Ammo_DesertDigi: SneakCustoms{
		skinName = "BSF Desert Digi";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_DesertDigi_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_DesertDigi_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_DesertDigi_3_Ammo.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_DesertDigi_3_Cargo.paa"
		};
        availableFor = "Vip";
	};	
	class BSF_Skin_HEMMT_Ammo_ArcticBlue: SneakCustoms{
		skinName = "BSF Arctic Blue";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_ArcticBlue_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_ArcticBlue_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_ArcticBlue_3_Ammo.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_ArcticBlue_3_Cargo.paa"
		};
        availableFor = "Vip";
	};	
	class BSF_Skin_HEMMT_Ammo_Tiger: SneakCustoms{
		skinName = "BSF Crouching Tiger";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Tiger_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Tiger_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Tiger_3_Ammo.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Tiger_3_Cargo.paa"
		};
        availableFor = "Vip";
	};	

////////////////////////////////	
// HEMMT Fuel
////////////////////////////////	

	class BSF_Skin_HEMMT_Fuel_Base{
		skins[] = {
			{"BSF_Skin_HEMMT_Fuel_Khaki", 500},
			{"BSF_Skin_HEMMT_Fuel_Olive", 500},
			{"BSF_Skin_HEMMT_Fuel_MossyOak", 1},
			{"BSF_Skin_HEMMT_Fuel_Gray", 1},
			{"BSF_Skin_HEMMT_Fuel_Black", 1},
			{"BSF_Skin_HEMMT_Fuel_DesertDigi", 1},
			{"BSF_Skin_HEMMT_Fuel_ArcticBlue", 1},
			{"BSF_Skin_HEMMT_Fuel_Tiger", 1}
		};
	};
	class B_Truck_01_fuel_F: BSF_Skin_HEMMT_Fuel_Base{};
	class B_T_Truck_01_fuel_F: BSF_Skin_HEMMT_Fuel_Base{};
	class BSF_B_Truck_01_fuel_F: BSF_Skin_HEMMT_Fuel_Base{};

	class BSF_Skin_HEMMT_Fuel_Khaki: SneakCustoms{
		skinName = "Khaki";
        hiddenSelectionsTextures[] = {
			"a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa",
			"a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa",
			"a3\soft_f_gamma\truck_01\data\truck_01_fuel_co.paa"
		};
        availableFor = "All";
	};	
	class BSF_Skin_HEMMT_Fuel_Olive: SneakCustoms{
		skinName = "Olive";
        hiddenSelectionsTextures[] = {
			"a3\soft_f_exp\truck_01\data\truck_01_ext_01_olive_co.paa",
			"a3\soft_f_exp\truck_01\data\truck_01_ext_02_olive_co.paa",
			"a3\soft_f_exp\truck_01\data\truck_01_fuel_olive_co.paa"
		};
        availableFor = "All";
	};	
	class BSF_Skin_HEMMT_Fuel_MossyOak: SneakCustoms{
		skinName = "BSF Mossy Oak";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_MossyOak_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_MossyOak_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_MossyOak_3_Fuel.paa"
		};
        availableFor = "Vip";
	};	
	class BSF_Skin_HEMMT_Fuel_Gray: SneakCustoms{
		skinName = "BSF Gray";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Gray_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Gray_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Gray_3_Fuel.paa"
		};
        availableFor = "Vip";
	};	
	class BSF_Skin_HEMMT_Fuel_Black: SneakCustoms{
		skinName = "BSF Black";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Black_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Black_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Black_3_Fuel.paa"
		};
        availableFor = "Vip";
	};	
	class BSF_Skin_HEMMT_Fuel_DesertDigi: SneakCustoms{
		skinName = "BSF Desert Digi";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_DesertDigi_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_DesertDigi_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_DesertDigi_3_Fuel.paa"
		};
        availableFor = "Vip";
	};	
	class BSF_Skin_HEMMT_Fuel_ArcticBlue: SneakCustoms{
		skinName = "BSF Arctic Blue";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_ArcticBlue_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_ArcticBlue_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_ArcticBlue_3_Fuel.paa"
		};
        availableFor = "Vip";
	};	
	class BSF_Skin_HEMMT_Fuel_Tiger: SneakCustoms{
		skinName = "BSF Crouching Tiger";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Tiger_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Tiger_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Tiger_3_Fuel.paa"
		};
        availableFor = "Vip";
	};	

////////////////////////////////	
// HEMMT Utility
////////////////////////////////	

	class BSF_Skin_HEMMT_Utility_Base{
		skins[] = {
			{"BSF_Skin_HEMMT_Utility_Khaki", 500},
			{"BSF_Skin_HEMMT_Utility_Olive", 500},
			{"BSF_Skin_HEMMT_Utility_MossyOak", 1},
			{"BSF_Skin_HEMMT_Utility_Gray", 1},
			{"BSF_Skin_HEMMT_Utility_Black", 1},
			{"BSF_Skin_HEMMT_Utility_DesertDigi", 1},
			{"BSF_Skin_HEMMT_Utility_ArcticBlue", 1},
			{"BSF_Skin_HEMMT_Utility_Tiger", 1}
		};
	};
	class B_Truck_01_box_F: BSF_Skin_HEMMT_Utility_Base{};
	class B_Truck_01_Repair_F: BSF_Skin_HEMMT_Utility_Base{};
	class B_T_Truck_01_box_F: BSF_Skin_HEMMT_Utility_Base{};
	class B_T_Truck_01_Repair_F: BSF_Skin_HEMMT_Utility_Base{};
	class BSF_B_Truck_01_box_F: BSF_Skin_HEMMT_Utility_Base{};
	class BSF_B_Truck_01_repair_F: BSF_Skin_HEMMT_Utility_Base{};

	class BSF_Skin_HEMMT_Utility_Khaki: SneakCustoms{
		skinName = "Khaki";
        hiddenSelectionsTextures[] = {
			"a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa",
			"a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa",
			"a3\soft_f_gamma\truck_01\data\truck_01_ammo_co.paa",
			"a3\structures_f\data\metal\containers\containers_02_set_co.paa"
		};
        availableFor = "All";
	};	
	class BSF_Skin_HEMMT_Utility_Olive: SneakCustoms{
		skinName = "Olive";
        hiddenSelectionsTextures[] = {
			"a3\soft_f_exp\truck_01\data\truck_01_ext_01_olive_co.paa",
			"a3\soft_f_exp\truck_01\data\truck_01_ext_02_olive_co.paa",
			"a3\soft_f_exp\truck_01\data\truck_01_ammo_olive_co.paa",
			"a3\structures_f\data\metal\containers\containers_02_set_co.paa"
		};
        availableFor = "All";
	};	
	class BSF_Skin_HEMMT_Utility_MossyOak: SneakCustoms{
		skinName = "BSF Mossy Oak";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_MossyOak_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_MossyOak_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_MossyOak_3_Ammo.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_XXX_4_Containers.paa"
		};
        availableFor = "Vip";
	};		
	class BSF_Skin_HEMMT_Utility_Gray: SneakCustoms{
		skinName = "BSF Gray";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Gray_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Gray_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Gray_3_Ammo.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_XXX_4_Containers.paa"
		};
        availableFor = "Vip";
	};		
	class BSF_Skin_HEMMT_Utility_Black: SneakCustoms{
		skinName = "BSF Black";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Black_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Black_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Black_3_Ammo.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_XXX_4_Containers.paa"
		};
        availableFor = "Vip";
	};		
	class BSF_Skin_HEMMT_Utility_DesertDigi: SneakCustoms{
		skinName = "BSF Desert Digi";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_DesertDigi_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_DesertDigi_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_DesertDigi_3_Ammo.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_XXX_4_Containers.paa"
		};
        availableFor = "Vip";
	};	
	class BSF_Skin_HEMMT_Utility_ArcticBlue: SneakCustoms{
		skinName = "BSF Arctic Blue";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_ArcticBlue_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_ArcticBlue_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_ArcticBlue_3_Ammo.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_XXX_4_Containers.paa"
		};
        availableFor = "Vip";
	};	
		class BSF_Skin_HEMMT_Utility_Tiger: SneakCustoms{
		skinName = "BSF Crouching Tiger";
        hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Tiger_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Tiger_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_Tiger_3_Ammo.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\HEMMT\BSF_HEMMT_XXX_4_Containers.paa"
		};
        availableFor = "Vip";
	};	
	