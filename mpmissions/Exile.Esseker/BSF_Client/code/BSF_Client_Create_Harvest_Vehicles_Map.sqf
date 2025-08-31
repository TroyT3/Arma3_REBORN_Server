/*
* BSF_Client_Create_Harvest_Vehicles_Map
* \BSF_Client\code\BSF_Client_Create_Harvest_Vehicles_Map.sqf
* 
* BS-Free Game Servers
* www.bs-free.com
* © 2023 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/

BSF_Harvest_Vehicles = [
	"Trucks",
	"BSF_B_Truck_01_box_F","BSF_Offroad_Comms_Black_Matte","BSF_Cargo_Van_Black_Matte",
	"Exile_Car_Hunter","B_T_MRAP_01_F","B_MRAP_01_F","B_MRAP_01_hmg_F","B_MRAP_01_gmg_F",
	"Exile_Car_Ifrit","O_MRAP_02_F","O_MRAP_02_hmg_F","O_MRAP_02_gmg_F",
	"Exile_Car_Strider","I_MRAP_03_F","I_MRAP_03_hmg_F","I_MRAP_03_gmg_F",
	"UAZ_Base","Exile_Car_UAZ_Green","Exile_Car_UAZ_Open_Green","UAZ_Open_Base","UAZ_Armed_Base",

	"B_G_Offroad_01_F","B_G_Offroad_01_repair_F","B_GEN_Offroad_01_gen_F","O_G_Offroad_01_F","O_G_Offroad_01_repair_F","I_G_Offroad_01_F","I_G_Offroad_01_repair_F",

	"C_IDAP_Offroad_01_F","B_Truck_01_box_F","B_Truck_01_medical_F","B_Truck_01_transport_F","B_Truck_01_covered_F","Exile_Car_HEMMT","Exile_Car_Tempest",

	"O_Truck_03_transport_F","O_Truck_03_covered_F","O_Truck_02_transport_F","O_Truck_02_covered_F","I_Truck_02_covered_F","I_Truck_02_transport_F","C_Truck_02_covered_F","C_Truck_02_transport_F","C_IDAP_Truck_02_transport_F","C_IDAP_Truck_02_F","Exile_Car_Zamak",

	"Exile_Car_V3S_Open","V3S_base","V3S_Base_EP1","Exile_Car_V3S_Covered",

	"Ural_Civ_02","Ural_Open_Civ_02","Ural_Civ_01","Ural_Open_Civ_01","Exile_Car_Ural_Covered_Worker","Exile_Car_Ural_Covered_Military","Exile_Car_Ural_Covered_Yellow","Exile_Car_Ural_Covered_Blue","Exile_Car_Ural_Open_Military","Exile_Car_Ural_Open_Yellow","Exile_Car_Ural_Open_Blue","Exile_Car_Ural_Open_Worker","Ural_Civ_03","Ural_Open_Civ_03",

	"Landrover_Civ_02","Landrover_Civ_01","Landrover_Civ_03","Exile_Car_LandRover_Sand","Exile_Car_LandRover_Green","Exile_Car_LandRover_Red","Exile_Car_LandRover_Desert","Exile_Car_LandRover_Urban","Landrover_Des","Exile_Car_LandRover_Ambulance_Desert","Exile_Car_LandRover_Ambulance_Green","LR_Ambulance_Base","LR_Ambulance_02","LR_Ambulance_01",

	"B_G_Van_01_transport_F","O_G_Van_01_transport_F","I_G_Van_01_transport_F","I_C_Van_01_transport_F","C_Van_01_transport_F","Exile_Car_Van_Guerilla05","Exile_Car_Van_Red","Exile_Car_Van_White","Exile_Car_Van_Guerilla04","Exile_Car_Van_Guerilla08","Exile_Car_Van_Guerilla07","Exile_Car_Van_Guerilla06","Exile_Car_Van_Guerilla01","Exile_Car_Van_Guerilla03","Exile_Car_Van_Guerilla02","Exile_Car_Van_Black","C_Van_01_box_F",

	"Exile_Car_Van_Box_Guerilla02","Exile_Car_Van_Box_Guerilla01","Exile_Car_Van_Box_White","Exile_Car_Van_Box_Guerilla03","Exile_Car_Van_Box_Guerilla04","Exile_Car_Van_Box_Red","Exile_Car_Van_Box_Black","Exile_Car_Van_Box_Guerilla07","Exile_Car_Van_Box_Guerilla05","Exile_Car_Van_Box_Guerilla08","Exile_Car_Van_Box_Guerilla06",

	"Exile_Car_Offroad_Repair_Guerilla02","Exile_Car_Offroad_Repair_Guerilla12","Exile_Car_Offroad_Repair_Guerilla10","Exile_Car_Offroad_Repair_Guerilla09","Exile_Car_Offroad_Repair_Guerilla08","Exile_Car_Offroad_Repair_Guerilla07","Exile_Car_Offroad_Repair_Guerilla06","Exile_Car_Offroad_Repair_Guerilla05","Exile_Car_Offroad_Repair_Guerilla03","Exile_Car_Offroad_Repair_Guerilla11","Exile_Car_Offroad_Repair_Guerilla01","Exile_Car_Offroad_Repair_BlueCustom","Exile_Car_Offroad_Repair_DarkRed","Exile_Car_Offroad_Repair_Blue","Exile_Car_Offroad_Repair_White","Exile_Car_Offroad_Repair_Beige","Exile_Car_Offroad_Repair_Red","Exile_Car_Offroad_Repair_Civillian","Exile_Car_Offroad_Repair_Guerilla04","C_Offroad_01_repair_F",

	"Exile_Car_Offroad_Guerilla10","Exile_Car_Offroad_Guerilla12","Exile_Car_Offroad_Guerilla09","Exile_Car_Offroad_Rusty2","Exile_Car_Offroad_Rusty3","Exile_Car_Offroad_Guerilla11","Exile_Car_Offroad_Guerilla03","Exile_Car_Offroad_Guerilla08","Exile_Car_Offroad_Guerilla07","Exile_Car_Offroad_Guerilla06","Exile_Car_Offroad_Guerilla05","Exile_Car_Offroad_Rusty1","Exile_Car_Offroad_Guerilla04","Exile_Car_Offroad_BlueCustom","Exile_Car_Offroad_Guerilla01","Exile_Car_Offroad_Red","Exile_Car_Offroad_Beige","C_Offroad_01_F","Exile_Car_Offroad_DarkRed","Exile_Car_Offroad_Guerilla02","Exile_Car_Offroad_White","Exile_Car_Offroad_Blue",

	"B_GEN_Van_02_vehicle_F","B_G_Van_02_vehicle_F","B_G_Van_02_transport_F","B_GEN_Van_02_transport_F","O_G_Van_02_vehicle_F","O_G_Van_02_transport_F","I_G_Van_02_vehicle_F","I_G_Van_02_transport_F","I_C_Van_02_vehicle_F","I_C_Van_02_transport_F","C_Van_02_medevac_F","C_Van_02_vehicle_F","C_Van_02_service_F","C_Van_02_transport_F","C_IDAP_Van_02_medevac_F","C_IDAP_Van_02_vehicle_F","C_IDAP_Van_02_transport_F",

	"rhs_gaz66_msv","rhs_gaz66_flat_msv","rhs_gaz66_r142_msv","rhs_gaz66_vdv","rhs_gaz66_flat_vdv","rhs_gaz66_r142_vdv","rhs_gaz66_flat_vmf","rhs_gaz66_r142_vmf","rhs_gaz66_vv","rhs_gaz66_flat_vv","rhs_gaz66_r142_vv","rhsgref_ins_gaz66",
	"rhsgref_ins_gaz66_flat","rhsgref_ins_gaz66_r142","rhs_gaz66_vmf","rhsgref_cdf_b_gaz66","rhsgref_cdf_b_gaz66_flat","rhsgref_cdf_b_gaz66_r142","rhsgref_ins_g_gaz66","rhsgref_ins_g_gaz66_flat","rhsgref_ins_g_gaz66_r142","rhsgref_cdf_gaz66","rhsgref_cdf_gaz66_flat","rhsgref_cdf_gaz66_r142",
	"rhs_gaz66_ap2_msv","rhs_gaz66_ap2_vdv","rhs_gaz66_ap2_vmf","rhs_gaz66_ap2_vv","rhsgref_ins_gaz66_ap2","rhsgref_cdf_b_gaz66_ap2","rhsgref_ins_g_gaz66_ap2","rhsgref_cdf_gaz66_ap2",

	"rhs_gaz66o_msv","rhs_gaz66o_flat_msv","rhs_gaz66o_vdv","rhs_gaz66o_flat_vdv","rhs_gaz66o_vmf","rhs_gaz66o_flat_vmf","rhs_gaz66o_vv","rhs_gaz66o_flat_vv","rhsgref_ins_gaz66o","rhsgref_ins_gaz66o_flat","rhsgref_cdf_b_gaz66o","rhsgref_cdf_b_gaz66o_flat","rhsgref_ins_g_gaz66o","rhsgref_ins_g_gaz66o_flat","rhsgref_cdf_gaz66o","rhsgref_cdf_gaz66o_flat",

	"RHS_Ural_MSV_01","RHS_Ural_Flat_MSV_01","RHS_Ural_Open_MSV_01","RHS_Ural_Open_Flat_MSV_01","RHS_Ural_VDV_01","RHS_Ural_Flat_VDV_01","RHS_Ural_Open_VDV_01","RHS_Ural_Open_Flat_VDV_01","RHS_Ural_VMF_01","RHS_Ural_Flat_VMF_01","RHS_Ural_Open_VMF_01","RHS_Ural_Open_Flat_VMF_01","RHS_Ural_VV_01","RHS_Ural_Flat_VV_01","RHS_Ural_Open_VV_01","RHS_Ural_Open_Flat_VV_01",
	"rhsgref_ins_ural","rhsgref_ins_ural_open","rhsgref_cdf_b_ural","rhsgref_cdf_b_ural_open","rhsgref_ins_g_ural","rhsgref_ins_g_ural_open","rhsgref_cdf_ural","rhsgref_cdf_ural_open","rhsgref_nat_ural","rhsgref_nat_ural_open","rhsgref_nat_van",

	"RHS_Ural_Civ_01","RHS_Ural_Open_Civ_01","RHS_Ural_Civ_03","RHS_Ural_Open_Civ_03","RHS_Ural_Civ_02","RHS_Ural_Open_Civ_02","rhsgref_ins_ural_work","rhsgref_ins_ural_work_open","rhsgref_ins_g_ural_work","rhsgref_ins_g_ural_work_open","rhsgref_un_ural","rhsgref_nat_ural_work","rhsgref_nat_ural_work_open",

	"rhs_kamaz5350_msv","rhs_kamaz5350_flatbed_cover_msv","rhs_kamaz5350_open_msv","rhs_kamaz5350_flatbed_msv","rhs_kamaz5350_vdv","rhs_kamaz5350_flatbed_cover_vdv","rhs_kamaz5350_open_vdv","rhs_kamaz5350_flatbed_vdv","rhs_kamaz5350_vmf","rhs_kamaz5350_flatbed_cover_vmf","rhs_kamaz5350_open_vmf","rhs_kamaz5350_flatbed_vmf","rhs_kamaz5350_vv","rhs_kamaz5350_flatbed_cover_vv","rhs_kamaz5350_open_vv","rhs_kamaz5350_flatbed_vv",

	"rhsusf_M1078A1P2_D_fmtv_usarmy","rhsusf_M1078A1P2_WD_fmtv_usarmy","rhsusf_M1078A1P2_D_flatbed_fmtv_usarmy","rhsusf_M1078A1P2_WD_flatbed_fmtv_usarmy","rhsusf_M1078A1P2_WD_open_fmtv_usarmy","rhsusf_M1078A1P2_D_open_fmtv_usarmy","rhsusf_M1078A1P2_B_D_fmtv_usarmy","rhsusf_M1078A1P2_B_WD_fmtv_usarmy","rhsusf_M1078A1P2_B_WD_flatbed_fmtv_usarmy","rhsusf_M1078A1P2_B_D_flatbed_fmtv_usarmy","rhsusf_M1078A1P2_B_M2_WD_fmtv_usarmy","rhsusf_M1078A1P2_B_M2_D_fmtv_usarmy","rhsusf_M1078A1P2_B_M2_WD_flatbed_fmtv_usarmy","rhsusf_M1078A1P2_B_M2_D_flatbed_fmtv_usarmy","rhsusf_M1078A1P2_B_M2_D_open_fmtv_usarmy","rhsusf_M1078A1P2_B_M2_WD_open_fmtv_usarmy","rhsusf_M1078A1P2_B_WD_open_fmtv_usarmy","rhsusf_M1078A1P2_B_D_open_fmtv_usarmy","rhsusf_M1078A1P2_B_D_CP_fmtv_usarmy","rhsusf_M1078A1P2_B_WD_CP_fmtv_usarmy",

	"rhsusf_M1083A1P2_WD_fmtv_usarmy","rhsusf_M1083A1P2_D_fmtv_usarmy","rhsusf_M1083A1P2_WD_flatbed_fmtv_usarmy","rhsusf_M1083A1P2_D_flatbed_fmtv_usarmy","rhsusf_M1083A1P2_D_open_fmtv_usarmy","rhsusf_M1083A1P2_WD_open_fmtv_usarmy","rhsusf_M1083A1P2_B_D_fmtv_usarmy","rhsusf_M1083A1P2_B_WD_fmtv_usarmy","rhsusf_M1083A1P2_B_D_flatbed_fmtv_usarmy","rhsusf_M1083A1P2_B_WD_flatbed_fmtv_usarmy","rhsusf_M1083A1P2_B_M2_D_fmtv_usarmy","rhsusf_M1083A1P2_B_M2_WD_fmtv_usarmy","rhsusf_M1083A1P2_B_M2_D_flatbed_fmtv_usarmy","rhsusf_M1083A1P2_B_M2_WD_flatbed_fmtv_usarmy","rhsusf_M1083A1P2_B_M2_WD_open_fmtv_usarmy","rhsusf_M1083A1P2_B_M2_D_open_fmtv_usarmy","rhsusf_M1083A1P2_B_WD_open_fmtv_usarmy","rhsusf_M1083A1P2_B_D_open_fmtv_usarmy","rhsusf_M1084A1P2_WD_fmtv_usarmy","rhsusf_M1084A1P2_D_fmtv_usarmy","rhsusf_M1084A1P2_B_WD_fmtv_usarmy","rhsusf_M1084A1P2_B_D_fmtv_usarmy","rhsusf_M1084A1P2_B_M2_D_fmtv_usarmy","rhsusf_M1084A1P2_B_M2_WD_fmtv_usarmy","rhsusf_M1084A1R_SOV_M2_D_fmtv_socom","rhsusf_M1084A1R_SOV_M2_WD_fmtv_socom",

	"rhsusf_M1078A1P2_D_fmtv_usarmy","rhsusf_M1078A1P2_WD_fmtv_usarmy","rhsusf_M1078A1P2_D_flatbed_fmtv_usarmy","rhsusf_M1078A1P2_WD_flatbed_fmtv_usarmy","rhsusf_M1078A1P2_WD_open_fmtv_usarmy","rhsusf_M1078A1P2_D_open_fmtv_usarmy","rhsusf_M1078A1P2_B_D_fmtv_usarmy","rhsusf_M1078A1P2_B_WD_fmtv_usarmy","rhsusf_M1078A1P2_B_WD_flatbed_fmtv_usarmy","rhsusf_M1078A1P2_B_D_flatbed_fmtv_usarmy","rhsusf_M1078A1P2_B_M2_WD_fmtv_usarmy","rhsusf_M1078A1P2_B_M2_D_fmtv_usarmy","rhsusf_M1078A1P2_B_M2_WD_flatbed_fmtv_usarmy","rhsusf_M1078A1P2_B_M2_D_flatbed_fmtv_usarmy","rhsusf_M1078A1P2_B_M2_D_open_fmtv_usarmy","rhsusf_M1078A1P2_B_M2_WD_open_fmtv_usarmy","rhsusf_M1078A1P2_B_WD_open_fmtv_usarmy","rhsusf_M1078A1P2_B_D_open_fmtv_usarmy",

	"rhsusf_M1083A1P2_WD_fmtv_usarmy","rhsusf_M1083A1P2_D_fmtv_usarmy","rhsusf_M1083A1P2_WD_flatbed_fmtv_usarmy","rhsusf_M1083A1P2_D_flatbed_fmtv_usarmy","rhsusf_M1083A1P2_D_open_fmtv_usarmy","rhsusf_M1083A1P2_WD_open_fmtv_usarmy","rhsusf_M1083A1P2_B_D_fmtv_usarmy","rhsusf_M1083A1P2_B_WD_fmtv_usarmy","rhsusf_M1083A1P2_B_D_flatbed_fmtv_usarmy","rhsusf_M1083A1P2_B_WD_flatbed_fmtv_usarmy","rhsusf_M1083A1P2_B_M2_D_fmtv_usarmy","rhsusf_M1083A1P2_B_M2_WD_fmtv_usarmy","rhsusf_M1083A1P2_B_M2_D_flatbed_fmtv_usarmy","rhsusf_M1083A1P2_B_M2_WD_flatbed_fmtv_usarmy","rhsusf_M1083A1P2_B_M2_WD_open_fmtv_usarmy","rhsusf_M1083A1P2_B_M2_D_open_fmtv_usarmy","rhsusf_M1083A1P2_B_WD_open_fmtv_usarmy","rhsusf_M1083A1P2_B_D_open_fmtv_usarmy","rhsusf_M1084A1P2_WD_fmtv_usarmy","rhsusf_M1084A1P2_D_fmtv_usarmy","rhsusf_M1084A1P2_B_WD_fmtv_usarmy","rhsusf_M1084A1P2_B_D_fmtv_usarmy","rhsusf_M1084A1P2_B_M2_D_fmtv_usarmy","rhsusf_M1084A1P2_B_M2_WD_fmtv_usarmy","rhsusf_M1084A1R_SOV_M2_D_fmtv_socom","rhsusf_M1084A1R_SOV_M2_WD_fmtv_socom",

	"rhsusf_M977A4_usarmy_d","rhsusf_M977A4_BKIT_usarmy_d","rhsusf_M977A4_BKIT_M2_usarmy_d","rhsusf_M977A4_usarmy_wd","rhsusf_M977A4_BKIT_usarmy_wd","rhsusf_M977A4_BKIT_M2_usarmy_wd",

	"RHS_UAZ_MSV_01","rhs_uaz_open_MSV_01","rhs_uaz_vdv","rhs_uaz_open_vdv","rhs_uaz_vmf","rhs_uaz_open_vmf","rhs_uaz_vv","rhs_uaz_open_vv","rhsgref_ins_uaz","rhsgref_ins_uaz_open","rhsgref_cdf_b_reg_uaz","rhsgref_cdf_b_reg_uaz_open","rhsgref_ins_g_uaz","rhsgref_ins_g_uaz_open","rhsgref_cdf_reg_uaz","rhsgref_cdf_reg_uaz_open","rhsgref_un_uaz","rhsgref_nat_uaz","rhsgref_nat_uaz_open",

	"rhs_tigr_msv","rhs_tigr_3camo_msv","rhs_tigr_m_msv","rhs_tigr_m_3camo_msv","rhs_tigr_vdv","rhs_tigr_3camo_vdv","rhs_tigr_m_vdv","rhs_tigr_m_3camo_vdv","rhs_tigr_vmf","rhs_tigr_3camo_vmf","rhs_tigr_m_vmf","rhs_tigr_m_3camo_vmf","rhs_tigr_vv","rhs_tigr_3camo_vv","rhs_tigr_m_vv","rhs_tigr_m_3camo_vv","rhs_tigr_ffv_vv","rhs_tigr_ffv_msv","rhs_tigr_ffv_vmf","rhs_tigr_ffv_vdv","rhs_tigr_ffv_3camo_msv","rhs_tigr_ffv_3camo_vmf","rhs_tigr_ffv_3camo_vdv","rhs_tigr_ffv_3camo_vv","rhs_pts_vmf","rhssaf_army_pts",

	"rhsusf_M1232_usarmy_d","rhsusf_M1232_M2_usarmy_d","rhsusf_M1232_MK19_usarmy_d","rhsusf_M1232_usarmy_wd","rhsusf_M1232_M2_usarmy_wd","rhsusf_M1232_MK19_usarmy_wd",

	"rhsusf_M1237_M2_usarmy_wd","rhsusf_M1237_MK19_usarmy_wd","rhsusf_M1237_M2_usarmy_d","rhsusf_M1237_MK19_usarmy_d",

	"rhsusf_rg33_wd","rhsusf_rg33_usmc_wd","rhsusf_rg33_usmc_d","rhsusf_rg33_d",

	"rhsusf_m998_d_2dr_fulltop","rhsusf_m998_d_2dr_halftop","rhsusf_m998_d_2dr","rhsusf_m998_d_4dr_fulltop","rhsusf_m998_d_4dr_halftop","rhsusf_m998_d_4dr","rhsusf_m998_w_2dr_fulltop","rhsusf_m998_w_2dr_halftop","rhsusf_m998_w_2dr","rhsusf_m998_w_4dr_fulltop","rhsusf_m998_w_4dr_halftop","rhsusf_m998_w_4dr","rhsusf_m998_d_s_2dr_halftop","rhsusf_m998_d_s_2dr","rhsusf_m998_d_s_2dr_fulltop","rhsusf_m998_d_s_4dr_halftop","rhsusf_m998_d_s_4dr","rhsusf_m998_d_s_4dr_fulltop","rhsusf_m998_w_s_2dr_halftop","rhsusf_m998_w_s_2dr","rhsusf_m998_w_s_2dr_fulltop","rhsusf_m998_w_s_4dr_halftop","rhsusf_m998_w_s_4dr","rhsusf_m998_w_s_4dr_fulltop",

	"rhsusf_M1220_usarmy_d","rhsusf_M1220_M153_M2_usarmy_d","rhsusf_M1220_M2_usarmy_d","rhsusf_M1220_MK19_usarmy_d","rhsusf_M1220_usarmy_wd","rhsusf_M1220_M153_M2_usarmy_wd","rhsusf_M1220_M2_usarmy_wd","rhsusf_M1220_MK19_usarmy_wd","rhsusf_M1230_M2_usarmy_d","rhsusf_M1230_MK19_usarmy_d","rhsusf_M1230a1_usarmy_d","rhsusf_M1230_M2_usarmy_wd","rhsusf_M1230_MK19_usarmy_wd","rhsusf_M1230a1_usarmy_wd",

	"I_mas_cars_UAZ_Unarmed","I_mas_cars_UAZ_Med","O_mas_cars_UAZ_Unarmed","O_mas_cars_UAZ_Med","B_mas_cars_Hilux_Unarmed","B_mas_cars_Hilux_Med","B_mas_cars_LR_Unarmed",
	"B_mas_cars_LR_Med","I_mas_cars_LR_soft_Unarmed","I_mas_cars_LR_soft_Med","B_mas_HMMWV_UNA","B_mas_HMMWV_MEV","B_mas_HMMWV_UNA_des","B_mas_HMMWV_MEV_des",
	"I_mas_cars_Ural","I_mas_cars_Ural_open","I_mas_cars_Ural_ammo","I_mas_cars_Ural_repair","I_mas_cars_Ural_fuel","O_mas_cars_Ural","O_mas_cars_Ural_open","O_mas_cars_Ural_ammo",
	"O_mas_cars_Ural_repair","O_mas_cars_Ural_fuel","I_mas_cars_UAZ_MG","I_mas_cars_UAZ_M2","O_mas_cars_UAZ_MG","B_mas_cars_Hilux_MG","B_mas_cars_Hilux_M2","I_mas_cars_LR_soft_M2","B_mas_cars_LR_M2"
];

publicVariable "BSF_Harvest_Vehicles";
