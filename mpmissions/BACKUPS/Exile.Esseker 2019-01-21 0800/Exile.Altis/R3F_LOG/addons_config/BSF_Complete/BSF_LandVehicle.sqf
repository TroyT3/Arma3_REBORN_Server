R3F_LOG_CFG_can_tow = R3F_LOG_CFG_can_tow +
[
#include "BSF_Can_Tow_CUP_Vehicles.cpp"
#include "BSF_Can_Tow_MAS_Vehicles.cpp"
#include "BSF_Can_Tow_RHS_Vehicles.cpp"
#include "BSF_Can_Tow_HVP_Vehicles.cpp"
#include "BSF_Can_Tow_Fox_Survival_Cars.cpp"
#include "BSF_Can_Tow_Exile_Vehicles.cpp"

""	
];

R3F_LOG_CFG_can_be_towed = R3F_LOG_CFG_can_be_towed +
[
#include "BSF_Can_Be_Towed_CUP_Vehicles.cpp"
#include "BSF_Can_Be_Towed_MAS_Vehicles.cpp"
#include "BSF_Can_Be_Towed_RHS_Vehicles.cpp"
#include "BSF_Can_Be_Towed_HVP_Vehicles.cpp"
#include "BSF_Can_Be_Towed_Fox_Survival_Cars.cpp"
#include "BSF_Can_Be_Towed_Exile_Vehicles.cpp"

""
];

R3F_LOG_CFG_can_lift = R3F_LOG_CFG_can_lift +
[
//From "All in Arma"
//	"heli_light_02_base_f",
//	"heli_transport_01_base_f",
//	"heli_transport_02_base_f"
];

R3F_LOG_CFG_can_be_lifted = R3F_LOG_CFG_can_be_lifted +
[
/*
//From A3_Vanilla
	"bus",
	"car_f",

//From "All in Arma"
	"atv_base_ep1",
	"armoredsuv_base_pmc",
	"baf_jackal2_base_d",
	"datsun_pk1",
	"dingo_base_acr",
	"hilux_pk1",
	"hmmwv_base",
	"ikarus",
	"lada_base",
	"landrover_base",
	"octavia_acr",
	"offroad_dshkm_base",
	"pickup_pk_base",
	"s1203_tk_civ_ep1",
	"suv_base_ep1",
	"skodabase",
	"towingtractor",
	"tractorold",
	"kamaz_base",
	"mtvr",
	"t810_turrets_base_acr",
	"truck_base_h",
	"ural_base_withturret",
	"v3s_base",
	"uaz_base",
	"volha_tk_civ_base_ep1",
	"vwgolf",
	"btr40_mg_base_ep1",
	"btr90_base",
	"gaz_vodnik_hmg",
	"lav25_base",
	"strykerbase_ep1",
	"hilux1_civil_1_open",
	"d30_base",
	"m119",
	"zu23_base",
	"m113_base"
*/	
];

R3F_LOG_CFG_can_transport_cargo = R3F_LOG_CFG_can_transport_cargo +
[
/*
//From A3_Vanilla
	["tank", 5],
	["car", 6],
	["motorcycle", 2],
	["truck_f", 100],
	["bus", 30],
	["kart_01_base_f", 2],
	["mrap_01_base_f", 12],
	["mrap_02_base_f", 12],
	["mrap_03_base_f", 12],
	["offroad_01_base_f", 10],
	["offroad_01_armed_base_f", 4],
	["quadbike_01_base_f", 3],
	["quadbike_base_f", 3],
	["b_truck_01_mover_f", 5],
	["b_truck_01_repair_f", 170],
	["b_truck_01_covered_f", 120],
	["b_truck_01_ammo_f", 120],
	["b_truck_01_box_f", 170],
	["truck_02_base_f", 120],
	["i_truck_02_medical_f", 100],
	["i_truck_02_fuel_f", 5],
	["i_truck_02_transport_f", 100],
	["o_truck_02_fuel_f", 5],
	["o_truck_02_transport_f", 100],
	["o_truck_03_ammo_f", 140],
	["o_truck_03_device_f", 5],
	["o_truck_03_fuel_f", 5],
	["van_01_base_f", 5],
	["c_van_01_box_f", 40],
	["c_van_01_transport_f", 25],
	["i_g_van_01_transport_f", 25],
	["wheeled_apc_f", 10],

//From "All in Arma"
	["atv_base_ep1", 3],
	["armoredsuv_base_pmc", 15],
	["baf_jackal2_base_d", 18],
	["datsun_pk1", 10],
	["dingo_base_acr", 25],
	["hilux_pk1", 10],
	["hmmwv_base", 18],
	["hmmwv_avenger", 5],
	["ikarus", 60],
	["landrover_base", 15],
	["offroad_dshkm_base", 10],
	["pickup_pk_base", 10],
	["s1203_tk_civ_ep1", 20],
	["suv_base_ep1", 12],
	["kamaz_base", 100],
	["mtvr", 80],
	["t810_turrets_base_acr", 80],
	["truck_base_h", 50],
	["ural_base_withturret", 10],
	["ural_base", 100],
	["v3s_base", 90],
	["uaz_base", 15],
	["brdm2_base", 15],
	["btr40_mg_base_ep1", 12],
	["btr90_base", 18],
	["gaz_vodnik_hmg", 18],
	["lav25_base", 18],
	["strykerbase_ep1", 18],
	["hilux1_civil_1_open", 12],
	["baf_fv510_d", 8],
	["m113_base", 10],
	["m2a2_ep1", 8],
	["aav", 8]
*/	
];

R3F_LOG_CFG_can_be_transported_cargo = R3F_LOG_CFG_can_be_transported_cargo +
[
/*
//From A3_Vanilla
	["kart_01_base_f", 40],
	["quadbike_01_base_f", 40],
	["ugv_01_base_f", 100],

//From "All in Arma"
	["atv_base_ep1", 40],
	["mmt_base", 8],
	["m1030", 30],
	["tt650_base", 30],
	["stinger_pod", 15],
	["stinger_pod_us_ep1", 15],
	["tow_tripod", 10],
	["tow_tripod_base", 10],
	["m119", 50],
	["d30_base", 50],
	["zu23_base", 50],
	["warfarebmgnest_m240_base", 10],
	["uh1wreck", 200],
	["uh60_wreck_ep1", 200]
*/	
];

R3F_LOG_CFG_can_be_moved_by_player = R3F_LOG_CFG_can_be_moved_by_player +
[
//From "All in Arma"
//	"mmt_base"
];
