
////////////////////////////////	
// Taru	
////////////////////////////////	

	class BSF_Skin_Taru_Transport_Base{
		skins[] = {
			{"BSF_Skin_Taru_CSAT", 500},
			{"BSF_Skin_Taru_Black", 500},
			{"BSF_Skin_Taru_BlueHex", 1},
			{"BSF_Skin_Taru_BlueFract", 1},
			{"BSF_Skin_Taru_SnowTiger", 1}
		};
	};
	
	class Exile_Chopper_Taru_Transport_Abstract:BSF_Skin_Taru_Transport_Base{};
	class Exile_Chopper_Taru_Transport_CSAT:BSF_Skin_Taru_Transport_Base{};
	class Exile_Chopper_Taru_Transport_Black:BSF_Skin_Taru_Transport_Base{};
	class Exile_Chopper_Taru_Abstract:BSF_Skin_Taru_Transport_Base{};
	class Exile_Chopper_Taru_CSAT:BSF_Skin_Taru_Transport_Base{};
	class Exile_Chopper_Taru_Black:BSF_Skin_Taru_Transport_Base{};
	class Heli_Transport_04_base_F:BSF_Skin_Taru_Transport_Base{};
	class O_Heli_Transport_04_F:BSF_Skin_Taru_Transport_Base{};
	class O_Heli_Transport_04_black_F:BSF_Skin_Taru_Transport_Base{};
	
//Textures
	class BSF_Skin_Taru_CSAT: SneakCustoms{
		skinName = "CSAT";
		hiddenSelectionsTextures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"};
	};	
	class BSF_Skin_Taru_Black: SneakCustoms{
		skinName = "Black";
		hiddenSelectionsTextures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"};
	};	
	class BSF_Skin_Taru_BlueHex: SneakCustoms{
		skinName = "BSF Blue Hex";
		hiddenSelectionsTextures[] = {"BSF_Community_Addon\addons\BSF_Misc\data\skins\Taru\BSF_Taru_BlueHex_1.paa","BSF_Community_Addon\addons\BSF_Misc\data\skins\Taru\BSF_Taru_BlueHex_2.paa"};
		availableFor = "Vip";
	};	
	class BSF_Skin_Taru_BlueFract: SneakCustoms{
		skinName = "BSF Blue Fractal";
		hiddenSelectionsTextures[] = {"BSF_Community_Addon\addons\BSF_Misc\data\skins\Taru\BSF_Taru_BlueFract_1.paa","BSF_Community_Addon\addons\BSF_Misc\data\skins\Taru\BSF_Taru_BlueFract_2.paa"};
		availableFor = "Vip";
	};	
	class BSF_Skin_Taru_SnowTiger: SneakCustoms{
		skinName = "BSF Snow Tiger";
		hiddenSelectionsTextures[] = {"BSF_Community_Addon\addons\BSF_Misc\data\skins\Taru\BSF_Taru_SnowTiger_1.paa","BSF_Community_Addon\addons\BSF_Misc\data\skins\Taru\BSF_Taru_SnowTiger_2.paa"};
		availableFor = "Vip";
	};	

	class BSF_Skin_Taru_Bench_Base{
		skins[] = {
			{"BSF_Skin_Taru_Bench_CSAT", 500},
			{"BSF_Skin_Taru_Bench_Black", 500},
			{"BSF_Skin_Taru_Bench_BlueHex", 1},
			{"BSF_Skin_Taru_Bench_BlueFract", 1},
			{"BSF_Skin_Taru_Bench_SnowTiger", 1}
		};
	};
	
	class O_Heli_Transport_04_bench_F:BSF_Skin_Taru_Bench_Base{};
	class O_Heli_Transport_04_bench_black_F:BSF_Skin_Taru_Bench_Base{};

	
//Textures
	class BSF_Skin_Taru_Bench_CSAT: SneakCustoms{
		skinName = "CSAT";
		hiddenSelectionsTextures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_bench_CO.paa"};
	};	
	class BSF_Skin_Taru_Bench_Black: SneakCustoms{
		skinName = "Black";
		hiddenSelectionsTextures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_bench_Black_CO.paa"};
	};	
	class BSF_Skin_Taru_Bench_BlueHex: SneakCustoms{
		skinName = "BSF Blue Hex";
		hiddenSelectionsTextures[] = {"BSF_Community_Addon\addons\BSF_Misc\data\skins\Taru\BSF_Taru_BlueHex_1.paa","BSF_Community_Addon\addons\BSF_Misc\data\skins\Taru\BSF_Taru_BlueHex_2.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_bench_Black_CO.paa"};
		availableFor = "Vip";
	};	
	class BSF_Skin_Taru_Bench_BlueFract: SneakCustoms{
		skinName = "BSF Blue Fractal";
		hiddenSelectionsTextures[] = {"BSF_Community_Addon\addons\BSF_Misc\data\skins\Taru\BSF_Taru_BlueFract_1.paa","BSF_Community_Addon\addons\BSF_Misc\data\skins\Taru\BSF_Taru_BlueFract_2.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_bench_Black_CO.paa"};
		availableFor = "Vip";
	};	
	class BSF_Skin_Taru_Bench_SnowTiger: SneakCustoms{
		skinName = "BSF Snow Tiger";
		hiddenSelectionsTextures[] = {"BSF_Community_Addon\addons\BSF_Misc\data\skins\Taru\BSF_Taru_SnowTiger_1.paa","BSF_Community_Addon\addons\BSF_Misc\data\skins\Taru\BSF_Taru_SnowTiger_2.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_bench_Black_CO.paa"};
		availableFor = "Vip";
	};	


	class BSF_Skin_Taru_Covered_Base{
		skins[] = {
			{"BSF_Skin_Taru_Covered_CSAT", 500},
			{"BSF_Skin_Taru_Covered_Black", 500},
			{"BSF_Skin_Taru_Covered_BlueHex", 1},
			{"BSF_Skin_Taru_Covered_BlueFract", 1},
			{"BSF_Skin_Taru_Covered_SnowTiger", 1}
		};
	};		
	class Exile_Chopper_Taru_Covered_Abstract:BSF_Skin_Taru_Covered_Base{};
	class Exile_Chopper_Taru_Covered_CSAT:BSF_Skin_Taru_Covered_Base{};
	class Exile_Chopper_Taru_Covered_Black:BSF_Skin_Taru_Covered_Base{};
	class O_Heli_Transport_04_covered_F:BSF_Skin_Taru_Covered_Base{};
	class O_Heli_Transport_04_covered_black_F:BSF_Skin_Taru_Covered_Base{};
	class O_Heli_Transport_04_ammo_F:BSF_Skin_Taru_Covered_Base{};
	class O_Heli_Transport_04_ammo_black_F:BSF_Skin_Taru_Covered_Base{};
	class O_Heli_Transport_04_medevac_F:BSF_Skin_Taru_Covered_Base{};
	class O_Heli_Transport_04_medevac_black_F:BSF_Skin_Taru_Covered_Base{};
	class O_Heli_Transport_04_repair_F:BSF_Skin_Taru_Covered_Base{};
	class O_Heli_Transport_04_repair_black_F:BSF_Skin_Taru_Covered_Base{};
	class O_Heli_Transport_04_box_F:BSF_Skin_Taru_Covered_Base{};
	class O_Heli_Transport_04_box_black_F:BSF_Skin_Taru_Covered_Base{};

	
//Textures
	class BSF_Skin_Taru_Covered_CSAT: SneakCustoms{
		skinName = "CSAT";
		hiddenSelectionsTextures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_CO.paa"};
	};	
	class BSF_Skin_Taru_Covered_Black: SneakCustoms{
		skinName = "Black";
		hiddenSelectionsTextures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext02_black_co.paa"};
	};	
	class BSF_Skin_Taru_Covered_BlueHex: SneakCustoms{
		skinName = "BSF Blue Hex";
		hiddenSelectionsTextures[] = {"BSF_Community_Addon\addons\BSF_Misc\data\skins\Taru\BSF_Taru_BlueHex_1.paa","BSF_Community_Addon\addons\BSF_Misc\data\skins\Taru\BSF_Taru_BlueHex_2.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext02_black_co.paa"};
		availableFor = "Vip";
	};	
	class BSF_Skin_Taru_Covered_BlueFract: SneakCustoms{
		skinName = "BSF Blue Fractal";
		hiddenSelectionsTextures[] = {"BSF_Community_Addon\addons\BSF_Misc\data\skins\Taru\BSF_Taru_BlueFract_1.paa","BSF_Community_Addon\addons\BSF_Misc\data\skins\Taru\BSF_Taru_BlueFract_2.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext02_black_co.paa"};
		availableFor = "Vip";
	};	
	class BSF_Skin_Taru_Covered_SnowTiger: SneakCustoms{
		skinName = "BSF Snow Tiger";
		hiddenSelectionsTextures[] = {"BSF_Community_Addon\addons\BSF_Misc\data\skins\Taru\BSF_Taru_SnowTiger_1.paa","BSF_Community_Addon\addons\BSF_Misc\data\skins\Taru\Taru_SnowTiger_2.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext02_black_co.paa"};
		availableFor = "Vip";
	};	


	class BSF_Skin_Taru_Fuel_Base{
		skins[] = {
			{"BSF_Skin_Taru_Fuel_CSAT", 500},
			{"BSF_Skin_Taru_Fuel_Black", 500},
			{"BSF_Skin_Taru_Fuel_BlueHex", 1},
			{"BSF_Skin_Taru_Fuel_BlueFract", 1},
			{"BSF_Skin_Taru_Fuel_SnowTiger", 1}
		};
	};		
	class O_Heli_Transport_04_fuel_F:BSF_Skin_Taru_Fuel_Base{};
	class O_Heli_Transport_04_fuel_black_F:BSF_Skin_Taru_Fuel_Base{};
	class BSF_O_Heli_Transport_04_fuel_black_F:BSF_Skin_Taru_Fuel_Base{};

	class BSF_Skin_Taru_Fuel_CSAT: SneakCustoms{
		skinName = "CSAT";
		hiddenSelectionsTextures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_fuel_CO.paa"};
	};	
	class BSF_Skin_Taru_Fuel_Black: SneakCustoms{
		skinName = "Black";
		hiddenSelectionsTextures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_fuel_black_CO.paa"};
	};	
	class BSF_Skin_Taru_Fuel_BlueHex: SneakCustoms{
		skinName = "BSF Blue Hex";
		hiddenSelectionsTextures[] = {"BSF_Community_Addon\addons\BSF_Misc\data\skins\Taru\BSF_Taru_BlueHex_1.paa","BSF_Community_Addon\addons\BSF_Misc\data\skins\Taru\BSF_Taru_BlueHex_2.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_fuel_black_CO.paa"};
		availableFor = "Vip";
	};	
	class BSF_Skin_Taru_Fuel_BlueFract: SneakCustoms{
		skinName = "BSF Blue Fractal";
		hiddenSelectionsTextures[] = {"BSF_Community_Addon\addons\BSF_Misc\data\skins\Taru\BSF_Taru_BlueFract_1.paa","BSF_Community_Addon\addons\BSF_Misc\data\skins\Taru\BSF_Taru_BlueFract_2.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_fuel_black_CO.paa"};
		availableFor = "Vip";
	};	
	class BSF_Skin_Taru_Fuel_SnowTiger: SneakCustoms{
		skinName = "BSF Snow Tiger";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Taru\BSF_Taru_SnowTiger_1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Taru\BSF_Taru_SnowTiger_2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Taru\BSF_Taru_SnowTiger_3_FuelPod.paa"
			};
		availableFor = "Vip";
	};