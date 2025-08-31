/********************************************************************
 * sneak_customs
 * file: sneak_customs\SneakCustoms_config.cpp
 * Author: Sneak
 * sneakcustoms@gmail.com
 * This extension is licensed under the Arma Public Licence
 ********************************************************************/
class CfgSneakCustoms{

	class SneakCustoms{};
	
#include "Sneak_RHS.hpp"	
#include "Sneak_UH1Y.hpp"
#include "Sneak_Huron.hpp"

/*  
////////////////////////////////	
// TEMPLATE	
////////////////////////////////	

		class xxx{
		skins[] = {
			{"xxx", 500}
		};
	};

//Textures
	class XXXClass : SneakCustoms{
        skinName = "xxxName";
        hiddenSelectionsTextures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa"};
        //missing availableFor will make this skin available for everyone
    };	
	class XXXClass : SneakCustoms{
        skinName = "xxxName";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\XXXImage.jpg"};
        availableFor = "Vip";
    };	
*/


////////////////////////////////	
// SDV	
////////////////////////////////	

		class Exile_Boat_SDV_Abstract{
		skins[] = {
			{"SDV_Yellow", 500},
			{"SDV_Rusty", 500}
		};
	};
		class SDV_01_base_F{
		skins[] = {
			{"SDV_Yellow", 500},
			{"SDV_Rusty", 500}
		};
	};
//Textures

	class SDV_Yellow : SneakCustoms{
        skinName = "We all live in a Yellow Submarine";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\SDV_Yellow.jpg"};
        availableFor = "Vip";
    };	

	class SDV_Rusty : SneakCustoms{
        skinName = "Rusty";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\SDV_Rusty.jpg"};
        availableFor = "Vip";
    };	

	
////////////////////////////////	
// Quadbike	
////////////////////////////////	

		class Exile_Bike_QuadBike_Abstract{
		skins[] = {
			{"BSF_Quadbuike_Red", 1},
			{"Quadbuike_Blue", 1}
		};
	};
		class C_Quadbike_01_F{
		skins[] = {
			{"BSF_Quadbuike_Red", 1}
		};
	};	
		class B_Quadbike_01_F{
		skins[] = {
			{"BSF_Quadbuike_Red", 1}
		};
	};	
		class O_Quadbike_01_F{
		skins[] = {
			{"BSF_Quadbuike_Red", 1}
		};
	};	
		class I_Quadbike_01_F{
		skins[] = {
			{"BSF_Quadbuike_Red", 1}
		};
	};	
		class I_G_Quadbike_01_F{
		skins[] = {
			{"BSF_Quadbuike_Red", 1}
		};
	};	
		class O_T_Quadbike_01_ghex_F{
		skins[] = {
			{"BSF_Quadbuike_Red", 1}
		};
	};	
		class B_T_Quadbike_01_F{
		skins[] = {
			{"BSF_Quadbuike_Red", 1}
		};
	};	
		
//Textures
	class BSF_Quadbuike_Red : SneakCustoms{
        skinName = "BSF Red";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Quadbike_Red.jpg"};
        availableFor = "Vip";
    };		

		class Quadbuike_Blue : SneakCustoms{
        skinName = "Blue";
        hiddenSelectionsTextures[] = {"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLUE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLUE_CO.paa"};
    };		
	
	
////////////////////////////////	
// Taru	
////////////////////////////////	

		class Exile_Chopper_Taru_Transport_Abstract{
		skins[] = {
			{"Exile_Chopper_Taru_CSAT", 500},
			{"Exile_Chopper_Taru_Black", 500},
			{"BSF_Taru_Blue_Hex", 1},
			{"BSF_Taru_Blue_Fract", 1},
			{"BSF_Taru_SnowTiger", 1}
		};
	};

		class Exile_Chopper_Taru_Abstract{
		skins[] = {
			{"Exile_Chopper_Taru_CSAT", 500},
			{"Exile_Chopper_Taru_Black", 500},
			{"BSF_Taru_Blue_Fract", 1},
			{"BSF_Taru_SnowTiger", 1}
		};
	};	
	
	
//Textures
	class Exile_Chopper_Taru_CSAT : SneakCustoms{ //standard strider is listed here because there is no texture entry in the standard exile config
        skinName = "CSAT";
        hiddenSelectionsTextures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"};
        //missing availableFor will make this skin available for everyone
    };	
	class Exile_Chopper_Taru_Black : SneakCustoms{ //standard strider is listed here because there is no texture entry in the standard exile config
        skinName = "Black";
        hiddenSelectionsTextures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"};
        //missing availableFor will make this skin available for everyone
    };	
	class BSF_Taru_Blue_Hex : SneakCustoms{ //standard strider is listed here because there is no texture entry in the standard exile config
        skinName = "BSF Blue Hex";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Taru_Blue_Hex1.jpg","mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Taru_Blue_Hex2.jpg"};
        availableFor = "Vip";
    };	
	class BSF_Taru_Blue_Fract : SneakCustoms{ //standard strider is listed here because there is no texture entry in the standard exile config
        skinName = "BSF Blue Fractal";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Taru_Blue_Fract1.jpg","mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Taru_Blue_Fract2.jpg"};
        availableFor = "Vip";
    };	
	class BSF_Taru_SnowTiger : SneakCustoms{ //standard strider is listed here because there is no texture entry in the standard exile config
        skinName = "BSF Snow Tiger";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Taru_SnowTiger1.jpg","mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Taru_SnowTiger2.jpg"};
        availableFor = "Vip";
    };	
	
		class Exile_Chopper_Taru_Covered_Abstract{
		skins[] = {
			{"Exile_Chopper_Taru_Covered_CSAT", 500},
			{"Exile_Chopper_Taru_Covered_Black", 500},
			{"BSF_Taru_Covered_Blue_Hex", 1},
			{"BSF_Taru_Covered_Blue_Fract", 1},
			{"BSF_Taru_Covered_SnowTiger", 1}
		};
	};		
	
//Textures
	class Exile_Chopper_Taru_Covered_CSAT : SneakCustoms{ //standard strider is listed here because there is no texture entry in the standard exile config
        skinName = "CSAT";
        hiddenSelectionsTextures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_CO.paa"};
        //missing availableFor will make this skin available for everyone
    };	
	class Exile_Chopper_Taru_Covered_Black : SneakCustoms{ //standard strider is listed here because there is no texture entry in the standard exile config
        skinName = "Black";
        hiddenSelectionsTextures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext02_black_co.paa"};
        //missing availableFor will make this skin available for everyone
    };	
	class BSF_Taru_Covered_Blue_Hex : SneakCustoms{ //standard strider is listed here because there is no texture entry in the standard exile config
        skinName = "BSF Blue Hex";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Taru_Blue_Hex1.jpg","mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Taru_Blue_Hex2.jpg","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext02_black_co.paa"};
        availableFor = "Vip";
    };	
	class BSF_Taru_Covered_Blue_Fract : SneakCustoms{ //standard strider is listed here because there is no texture entry in the standard exile config
        skinName = "BSF Blue Fractal";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Taru_Blue_Fract1.jpg","mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Taru_Blue_Fract2.jpg","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext02_black_co.paa"};
        availableFor = "Vip";
    };	
	class BSF_Taru_Covered_SnowTiger : SneakCustoms{ //standard strider is listed here because there is no texture entry in the standard exile config
        skinName = "BSF Snow Tiger";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Taru_SnowTiger1.jpg","mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Taru_SnowTiger2.jpg"};
        availableFor = "Vip";
    };	
	
////////////////////////////////	
// STRIDER
////////////////////////////////	

	class Exile_Car_Strider_Abstract{
		skins[] = {
			{"Exile_Car_Strider", 100},
			{"SneakCustoms_Car_Strider_Desert", 1},
			{"SneakCustoms_Car_Strider_grey", 1},
			{"SneakCustoms_Car_Strider_RedDigital", 1},
			{"SneakCustoms_Car_Strider_WhiteDigital", 1},
			{"SneakCustoms_Car_Strider_YellowCamo", 1},
			{"SneakCustoms_Car_Strider_Dark", 1},
			{"SneakCustoms_Car_Strider_DersertDigital", 1},			
			{"SneakCustoms_Car_Strider_Leopard", 1}
		};
	};

		class MRAP_03_base_F{
		skins[] = {
			{"Exile_Car_Strider", 100},
			{"SneakCustoms_Car_Strider_Desert", 1},
			{"SneakCustoms_Car_Strider_grey", 1},
			{"SneakCustoms_Car_Strider_RedDigital", 1},
			{"SneakCustoms_Car_Strider_WhiteDigital", 1},
			{"SneakCustoms_Car_Strider_YellowCamo", 1},
			{"SneakCustoms_Car_Strider_Dark", 1},
			{"SneakCustoms_Car_Strider_DersertDigital", 1},			
			{"SneakCustoms_Car_Strider_Leopard", 1}
		};
	};
		
//Textures
	class Exile_Car_Strider : SneakCustoms{ //standard strider is listed here because there is no texture entry in the standard exile config
        skinName = "Hex";
        hiddenSelectionsTextures[] = {"a3\soft_f_beta\mrap_03\data\MRAP_03_ext_INDP_CO.paa", "a3\data_f\vehicles\turret_indp_co.paa"};
        //missing availableFor will make this skin available for everyone
    };	
	class SneakCustoms_Car_Strider_Desert : SneakCustoms{ //class derivative to distinguish between standard and custom skins
		skinName = "Desert"; //Name that appears in the Vehicle Customs Trader Dialog
        hiddenSelectionsTextures[] = {"a3\soft_f_beta\mrap_03\data\mrap_03_ext_co.paa", "a3\data_f\vehicles\turret_co.paa"}; //Skin files to use
        availableFor = "Vip"; //what group will be able to purchase this skin
	};
	class SneakCustoms_Car_Strider_grey : SneakCustoms{
        skinName = "Gray by Nevbox";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Strider_Gray.jpg"};
        availableFor = "Vip";
    };
	class SneakCustoms_Car_Strider_RedDigital : SneakCustoms{
        skinName = "BSF Red Digital";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Strider_BSF_RedDigital.jpg"};
        availableFor = "Vip";
    };
	class SneakCustoms_Car_Strider_WhiteDigital : SneakCustoms{
        skinName = "BSF White Digital";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Strider_BSF_WhiteDigital.jpg"};
        availableFor = "Vip";
    };
	class SneakCustoms_Car_Strider_DersertDigital : SneakCustoms{
        skinName = "BSF Desert Digital";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Strider_BSF_DesertDigital.jpg"};
        availableFor = "Vip";
    };
	class SneakCustoms_Car_Strider_Leopard : SneakCustoms{
        skinName = "BSF Leopard";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Strider_BSF_Leopard.jpg"};
        availableFor = "Vip";
    };
	class SneakCustoms_Car_Strider_YellowCamo : SneakCustoms{
        skinName = "BSF Yellow Camo";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Strider_BSF_YellowCamo.jpg"};
        availableFor = "Vip";
    };		
	class SneakCustoms_Car_Strider_Dark : SneakCustoms{
        skinName = "BSF Dark";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Strider_BSF_Dark.jpg"};
        availableFor = "Vip";
    };			
	
		class MRAP_03_hmg_base_F{
		skins[] = {
			{"Exile_Car_Strider_Armed", 1},
			{"SneakCustoms_Car_Strider_Desert_Armed", 1},
			{"SneakCustoms_Car_Strider_grey_Armed", 1},
			{"SneakCustoms_Car_Strider_RedDigital_Armed", 1},
			{"SneakCustoms_Car_Strider_WhiteDigital_Armed", 1},
			{"SneakCustoms_Car_Strider_YellowCamo_Armed", 1},
			{"SneakCustoms_Car_Strider_Dark_Armed", 1},
			{"SneakCustoms_Car_Strider_DersertDigital_Armed", 1},			
			{"SneakCustoms_Car_Strider_Leopard_Armed", 1}
		};
	};

		class MRAP_03_gmg_base_F{
		skins[] = {
			{"Exile_Car_Strider_Armed", 1},
			{"SneakCustoms_Car_Strider_Desert_Armed", 1},
			{"SneakCustoms_Car_Strider_grey_Armed", 1},
			{"SneakCustoms_Car_Strider_RedDigital_Armed", 1},
			{"SneakCustoms_Car_Strider_WhiteDigital_Armed", 1},
			{"SneakCustoms_Car_Strider_YellowCamo_Armed", 1},
			{"SneakCustoms_Car_Strider_Dark_Armed", 1},
			{"SneakCustoms_Car_Strider_DersertDigital_Armed", 1},			
			{"SneakCustoms_Car_Strider_Leopard_Armed", 1}
		};
	};	
//Textures
	class Exile_Car_Strider_Armed : SneakCustoms{ //standard strider is listed here because there is no texture entry in the standard exile config
        skinName = "Hex";
        hiddenSelectionsTextures[] = {"a3\soft_f_beta\mrap _03\data\mrap_03_ext_indp_co.paa","a3\data_f\vehicles\Turret_INDP_CO.paa"};
        //missing availableFor will make this skin available for everyone
    };	
	class SneakCustoms_Car_Strider_Desert_Armed : SneakCustoms{ //class derivative to distinguish between standard and custom skins
		skinName = "Desert"; //Name that appears in the Vehicle Customs Trader Dialog
        hiddenSelectionsTextures[] = {"a3\soft_f_beta\mrap_03\data\mrap_03_ext_co.paa", "a3\data_f\vehicles\turret_co.paa"}; //Skin files to use
        availableFor = "Vip"; //what group will be able to purchase this skin
	};
	class SneakCustoms_Car_Strider_grey_Armed : SneakCustoms{
        skinName = "Gray by Nevbox";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Strider_Gray.jpg","mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Turret_CO_Dark.jpg"};
        availableFor = "Vip";
    };
	class SneakCustoms_Car_Strider_RedDigital_Armed : SneakCustoms{
        skinName = "BSF Red Digital";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Strider_BSF_RedDigital.jpg","mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Turret_CO_Gray.jpg"};
        availableFor = "Vip";
    };
	class SneakCustoms_Car_Strider_WhiteDigital_Armed : SneakCustoms{
        skinName = "BSF White Digital";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Strider_BSF_WhiteDigital.jpg","mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Turret_CO_Dark.jpg"};
        availableFor = "Vip";
    };
	class SneakCustoms_Car_Strider_DersertDigital_Armed : SneakCustoms{
        skinName = "BSF Desert Digital";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Strider_BSF_DesertDigital.jpg","mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Turret_CO_Gray.jpg"};
        availableFor = "Vip";
    };
	class SneakCustoms_Car_Strider_Leopard_Armed : SneakCustoms{
        skinName = "BSF Leopard";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Strider_BSF_Leopard.jpg","mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Turret_CO_Dark.jpg"};
        availableFor = "Vip";
    };
	class SneakCustoms_Car_Strider_YellowCamo_Armed : SneakCustoms{
        skinName = "BSF Yellow Camo";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Strider_BSF_YellowCamo.jpg","mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Turret_CO_Dark.jpg"};
        availableFor = "Vip";
    };		
	class SneakCustoms_Car_Strider_Dark_Armed : SneakCustoms{
        skinName = "BSF Dark";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Strider_BSF_Dark.jpg","mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Turret_CO_Dark.jpg"};
        availableFor = "Vip";
    };			
	
////////////////////////////////	
// HUNTER
////////////////////////////////

		class Exile_Car_Hunter_Abstract{
		skins[] = {
			{"SneakCustoms_Car_Hunter_ExileGreen", 500},
//			{"SneakCustoms_Car_Hunter_Police", 100},
			{"SneakCustoms_Car_Hunter_ExileBlack", 500},
			{"SneakCustoms_Car_Hunter_ExileSnow", 1000},
			{"SneakCustoms_Car_Hunter_ExileHex", 1}
			};
		};
		class MRAP_01_base_F{
		skins[] = {
			{"SneakCustoms_Car_Hunter_ExileGreen", 500},
//			{"SneakCustoms_Car_Hunter_Police", 100},
			{"SneakCustoms_Car_Hunter_ExileBlack", 500},
			{"SneakCustoms_Car_Hunter_ExileSnow", 1000},
			{"SneakCustoms_Car_Hunter_ExileHex", 1}
			};
		};

//Textures

	class SneakCustoms_Car_Hunter_ExileGreen : SneakCustoms{ //standard strider is listed here because there is no texture entry in the standard exile config
        skinName = "Green";
		hiddenSelectionsTextures[] = {"\A3\soft_F\MRAP_01\data\MRAP_01_base_CO.paa","\A3\soft_F\MRAP_01\data\MRAP_01_adds_CO.paa",""};
    };	
	class SneakCustoms_Car_Hunter_ExileBlack : SneakCustoms{ //standard strider is listed here because there is no texture entry in the standard exile config
        skinName = "Black";
        hiddenSelectionsTextures[] = {"exile_assets\texture\vehicle\Exile_Hunter_Black_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa"};
    };	
	class SneakCustoms_Car_Hunter_ExileSnow : SneakCustoms{ //standard strider is listed here because there is no texture entry in the standard exile config
        skinName = "Snow";
        hiddenSelectionsTextures[] = {"exile_assets\texture\vehicle\Exile_Hunter_Snow_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa"};
    };		
	class SneakCustoms_Car_Hunter_Police : SneakCustoms{ //standard strider is listed here because there is no texture entry in the standard exile config
        skinName = "Police";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Hunter_Police.jpg","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa"};
        availableFor = "Vip";
    };	
	class SneakCustoms_Car_Hunter_ExileHex : SneakCustoms{ //standard strider is listed here because there is no texture entry in the standard exile config
        skinName = "Hex";
        hiddenSelectionsTextures[] = {"exile_assets\texture\vehicle\Exile_Hunter_Hex_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa"};
        availableFor = "Vip";
    };		

	
			class MRAP_01_hmg_base_F{
		skins[] = {
			{"SneakCustoms_Car_Hunter_ExileGreen_Armed", 1},
			{"SneakCustoms_Car_Hunter_Police_Armed", 1},
			{"SneakCustoms_Car_Hunter_ExileBlack_Armed", 1},
			{"SneakCustoms_Car_Hunter_ExileSnow_Armed", 1},
			{"SneakCustoms_Car_Hunter_ExileHex_Armed", 1}
			};
		};

		class MRAP_01_gmg_base_F{
		skins[] = {
			{"SneakCustoms_Car_Hunter_ExileGreen_Armed", 1},
			{"SneakCustoms_Car_Hunter_Police_Armed", 1},
			{"SneakCustoms_Car_Hunter_ExileBlack_Armed", 1},
			{"SneakCustoms_Car_Hunter_ExileSnow_Armed", 1},
			{"SneakCustoms_Car_Hunter_ExileHex_Armed", 1}
			};
		};	
		
	class SneakCustoms_Car_Hunter_ExileGreen_Armed : SneakCustoms{ //standard strider is listed here because there is no texture entry in the standard exile config
        skinName = "Green";
		hiddenSelectionsTextures[] = {"\A3\soft_F\MRAP_01\data\MRAP_01_base_CO.paa","\A3\soft_F\MRAP_01\data\MRAP_01_adds_CO.paa","mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Turret_CO_Dark.jpg"};
        availableFor = "Vip";
   };	
	class SneakCustoms_Car_Hunter_ExileBlack_Armed : SneakCustoms{ //standard strider is listed here because there is no texture entry in the standard exile config
        skinName = "Black";
        hiddenSelectionsTextures[] = {"exile_assets\texture\vehicle\Exile_Hunter_Black_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa","mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Turret_CO_Dark.jpg"};
        availableFor = "Vip";
   };	
	class SneakCustoms_Car_Hunter_ExileSnow_Armed : SneakCustoms{ //standard strider is listed here because there is no texture entry in the standard exile config
        skinName = "Snow";
        hiddenSelectionsTextures[] = {"exile_assets\texture\vehicle\Exile_Hunter_Snow_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa","mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Turret_CO_Dark.jpg"};
        availableFor = "Vip";
    };		
	class SneakCustoms_Car_Hunter_Police_Armed : SneakCustoms{ //standard strider is listed here because there is no texture entry in the standard exile config
        skinName = "Police";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Hunter_Police.jpg","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa","mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Turret_CO_Dark.jpg"};
        availableFor = "Vip";
    };	
	class SneakCustoms_Car_Hunter_ExileHex_Armed : SneakCustoms{ //standard strider is listed here because there is no texture entry in the standard exile config
        skinName = "Hex";
        hiddenSelectionsTextures[] = {"exile_assets\texture\vehicle\Exile_Hunter_Hex_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa","mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Turret_CO_Dark.jpg"};
        availableFor = "Vip";
    };		
		
////////////////////////////////
//IFRIT
////////////////////////////////

	class Exile_Car_Ifrit_Abstract{
		skins[] = {
			{"SneakCustoms_Car_Ifrit_Dark", 1},
			{"SneakCustoms_Car_Ifrit_Hex", 500},
			{"SneakCustoms_Car_Ifrit_GHEX", 500},
			{"SneakCustoms_Car_Ifrit_YellowCamo", 1},
			{"SneakCustoms_Car_Ifrit_SWAT", 1}
		};
	};
	class MRAP_02_base_F{
		skins[] = {
			{"SneakCustoms_Car_Ifrit_Dark", 1},
			{"SneakCustoms_Car_Ifrit_Hex", 500},
			{"SneakCustoms_Car_Ifrit_GHEX", 500},
			{"SneakCustoms_Car_Ifrit_YellowCamo", 1},
			{"SneakCustoms_Car_Ifrit_SWAT", 1}
		};
	};

	
	
//Textures
	class SneakCustoms_Car_Ifrit_Hex : SneakCustoms{ //standard strider is listed here because there is no texture entry in the standard exile config
        skinName = "HEX";
		hiddenSelectionsTextures[] = {"\A3\soft_F\MRAP_02\data\MRAP_02_ext_01_CO.paa","\A3\soft_F\MRAP_02\data\MRAP_02_ext_02_CO.paa","\A3\Data_F\Vehicles\turret_opfor_co.paa"};	
    };
	class SneakCustoms_Car_Ifrit_GHEX : SneakCustoms{ //standard strider is listed here because there is no texture entry in the standard exile config
        skinName = "Green HEX";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_01_ghex_CO.paa","\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_02_ghex_CO.paa","\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"};
    };
	class SneakCustoms_Car_Ifrit_YellowCamo : SneakCustoms{ 
        skinName = "BSF Yellow Camo";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Ifrit_BSF_Body_YellowCamo.jpg","mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Ifrit_BSF_Back_YellowCamo.jpg"};
        availableFor = "Vip";
    };	
	class SneakCustoms_Car_Ifrit_Dark : SneakCustoms{
        skinName = "BSF Dark";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Ifrit_BSF_Body_Dark.jpg","mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Ifrit_BSF_Back_Dark.jpg"};
        availableFor = "Vip";
    };	
	class SneakCustoms_Car_Ifrit_SWAT : SneakCustoms{ 
        skinName = "BSF SWAT";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Ifrit_BSF_Body_SWAT.jpg","mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Ifrit_BSF_Back_SWAT.jpg"};
        availableFor = "Vip";
    };		
	

	
	class MRAP_02_hmg_base_F{
		skins[] = {
			{"SneakCustoms_Car_Ifrit_Dark_Armed", 1},
			{"SneakCustoms_Car_Ifrit_Hex_Armed", 1},
			{"SneakCustoms_Car_Ifrit_GHEX_Armed", 1},
			{"SneakCustoms_Car_Ifrit_YellowCamo_Armed", 1},
			{"SneakCustoms_Car_Ifrit_SWAT_Armed", 1}
		};
	};

	class MRAP_02_gmg_base_F{
		skins[] = {
			{"SneakCustoms_Car_Ifrit_Dark_Armed", 1},
			{"SneakCustoms_Car_Ifrit_Hex_Armed", 1},
			{"SneakCustoms_Car_Ifrit_GHEX_Armed", 1},
			{"SneakCustoms_Car_Ifrit_YellowCamo_Armed", 1},
			{"SneakCustoms_Car_Ifrit_SWAT_Armed", 1}
		};
	};	
//Textures
	class SneakCustoms_Car_Ifrit_Hex_Armed : SneakCustoms{ //standard strider is listed here because there is no texture entry in the standard exile config
        skinName = "HEX";
		hiddenSelectionsTextures[] = {"\A3\soft_F\MRAP_02\data\MRAP_02_ext_01_CO.paa","\A3\soft_F\MRAP_02\data\MRAP_02_ext_02_CO.paa","\A3\Data_F\Vehicles\turret_opfor_co.paa"};	
        availableFor = "Vip";
    };
	class SneakCustoms_Car_Ifrit_GHEX_Armed : SneakCustoms{ //standard strider is listed here because there is no texture entry in the standard exile config
        skinName = "Green HEX";
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_01_ghex_CO.paa","\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_02_ghex_CO.paa","\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"};
        availableFor = "Vip";
    };
	class SneakCustoms_Car_Ifrit_YellowCamo_Armed : SneakCustoms{ 
        skinName = "BSF Yellow Camo";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Ifrit_BSF_Body_YellowCamo.jpg","mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Ifrit_BSF_Back_YellowCamo.jpg","mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Turret_CO_Dark.jpg"};
        availableFor = "Vip";
    };	
	class SneakCustoms_Car_Ifrit_Dark_Armed : SneakCustoms{
        skinName = "BSF Dark";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Ifrit_BSF_Body_Dark.jpg","mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Ifrit_BSF_Back_Dark.jpg","mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Turret_CO_Dark.jpg"};
        availableFor = "Vip";
    };	
	class SneakCustoms_Car_Ifrit_SWAT_Armed : SneakCustoms{ 
        skinName = "BSF SWAT";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Ifrit_BSF_Body_SWAT.jpg","mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Ifrit_BSF_Back_SWAT.jpg","mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Turret_CO_Dark.jpg"};
        availableFor = "Vip";
    };		

////////////////////////////////
//SUV
////////////////////////////////	
	
/*
	class Exile_Car_SUV_Abstract{
		skins[] = {
//			{"SneakCustoms_Car_SUV_FNC", 100},
			{"SneakCustoms_Car_SUV_BW", 100},
			{"SneakCustoms_Car_SUV_Spider", 100}
		};
	};

//Textures

	class SneakCustoms_Car_SUV_FNC : SneakCustoms{ //class derivative to distinguish between standard and custom skins
		skinName = "FNC";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\SUV_FNC.jpg"};
        availableFor = "Vip";
	};
	class SneakCustoms_Car_SUV_Spider : SneakCustoms{ //class derivative to distinguish between standard and custom skins
		skinName = "Spider";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\SUV_Spider.jpg"};
        availableFor = "Vip";
	};
	class SneakCustoms_Car_SUV_BW : SneakCustoms{ //class derivative to distinguish between standard and custom skins
		skinName = "BW";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\SUV_BW.jpg"};
        availableFor = "Vip";
	};
*/

////////////////////////////////
//BOX VAN
////////////////////////////////

	class Exile_Car_Van_Box_Abstract{
		skins[] = {
			{"SneakCustoms_Car_Van_Box_Medic", 1}
		};
	};	
	class Exile_Car_Van_Abstract{
		skins[] = {
			{"SneakCustoms_Car_Van_Box_Medic", 1}
		};
	};		

//Textures
	class SneakCustoms_Car_Van_Box_Medic : SneakCustoms{
        skinName = "Medic";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\BoxTruck_Medic.jpg"};
        availableFor = "Vip";
    };

////////////////////////////////
// OFFROAD
////////////////////////////////

////////////////////////////////	
// HEMMT
////////////////////////////////

	class Exile_Car_Hemmt_Abstract{
		skins[] = {
			{"SneakCustoms_Car_HEMMT_Dark", 1}
		};
	};	

//Textures
	class SneakCustoms_Car_HEMMT_Dark : SneakCustoms{ 
        skinName = "Dark";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\MILHemmtfront.jpg","mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\MILHemmtBack.jpg"};
		availableFor = "Vip";
    };

////////////////////////////////
//HUMMINGBIRD
////////////////////////////////

	class Exile_Chopper_Hummingbird_Abstract{
		skins[] = {
			{"SneakCustoms_Chopper_Hummingbird_Colors", 1}
		};
	};
	class Exile_Chopper_Hummingbird_Civillian_Abstract{
		skins[] = {
			{"SneakCustoms_Chopper_Hummingbird_Colors", 1}
		};
	};

//Textures

		class SneakCustoms_Chopper_Hummingbird_Colors : SneakCustoms{ //class derivative to distinguish between standard and custom skins
		skinName = "Colors by Nevbox";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Hummingbird_WhiteColors.jpg"};
        availableFor = "Vip";
	};
	
////////////////////////////////
// MOHAWK
////////////////////////////////

	class Exile_Chopper_Mohawk_Abstract{
		skins[] = {
			{"SneakCustoms_Chopper_Mohawk_USMC", 1}
		};
	};

//Textures
	class SneakCustoms_Chopper_Mohawk_USMC : SneakCustoms{ //class derivative to distinguish between standard and custom skins
		skinName = "US Marines";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\CH49_USMC_1.jpg","mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\CH49_USMC_2.jpg","mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\CH49_USMC_3.jpg"};
//        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\CH49_USMC_1.jpg","mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\CH49_USMC_2.jpg","mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\CH49_USMC_3.jpg"};
		availableFor = "Vip";		
	};
	

////////////////////////////////
//ORCA
////////////////////////////////

	class Exile_Chopper_Orca_Abstract{
		skins[] = {
			{"SneakCustoms_Chopper_Orca_PO30", 1}
		};
	};
	
//Textures
	class SneakCustoms_Chopper_Orca_PO30 : SneakCustoms{ //class derivative to distinguish between standard and custom skins
		skinName = "Dirty Black";
        hiddenSelectionsTextures[] = {"mpmissions\__cur_mp.Malden\BSF\SneakVehicleCustoms\textures\Orca_BSF_Dark.jpg"};
        availableFor = "Vip";
	};


	
	
};

