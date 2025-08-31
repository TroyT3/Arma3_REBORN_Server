	
////////////////////////////////	
// Huron	
////////////////////////////////	
	
		class BSF_Skin_Huron_Base{
		skins[] =
		{
			{"Exile_Chopper_Huron_Black", 500},
			{"Exile_Chopper_Huron_Green", 500},
			{"BSF_Skin_Huron_Arctic", 1},
			{"BSF_Skin_Huron_CG", 1},
			{"BSF_Skin_Huron_Crayon", 1},
			{"BSF_Skin_Huron_CSAT", 1},
			{"BSF_Skin_Huron_Desert1", 1},
			{"BSF_Skin_Huron_Gray", 1},
			{"BSF_Skin_Huron_Multi1", 1},
			{"BSF_Skin_Huron_SnowLeopard", 1},
			{"BSF_Skin_Huron_Starlight", 1},
			{"BSF_Skin_Huron_WD", 1},
			{"BSF_Skin_Huron_SchoolBus", 1}
		};
	};

	class Exile_Chopper_Huron_Abstract : BSF_Skin_Huron_Base{};
	class Heli_Transport_03_base_F : BSF_Skin_Huron_Base{};
	class Heli_Transport_03_unarmed_base_F : BSF_Skin_Huron_Base{};
	class B_Heli_Transport_03_black_F : BSF_Skin_Huron_Base{};
	class B_Heli_Transport_03_base_F : BSF_Skin_Huron_Base{};
	class B_Heli_Transport_03_F : BSF_Skin_Huron_Base{};
	class B_Heli_Transport_03_black_ : BSF_Skin_Huron_Base{};
	class B_Heli_Transport_03_unarmed_base_F : BSF_Skin_Huron_Base{};
	class B_Heli_Transport_03_unarmed_F : BSF_Skin_Huron_Base{};
	class B_Heli_Transport_03_unarmed_green_F : BSF_Skin_Huron_Base{};
	
	class Exile_Chopper_Huron_Black : SneakCustoms{
		skinName = "Exile Black";
		hiddenSelectionsTextures[] = {
			"\A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa",
			"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"
		};
        availableFor = "All";
	};

	class Exile_Chopper_Huron_Green : SneakCustoms{
		skinName = "Exile Green";
		hiddenSelectionsTextures[] = {
			"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa",
			"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"
		};
        availableFor = "All";
	};	

	class BSF_Skin_Huron_Arctic : SneakCustoms{
		skinName = "BSF Arctic Blue";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Huron\BSF_Huron_Arctic_1_Front.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Huron\BSF_Huron_Arctic_2_Back.paa"
		};
		availableFor = "Vip";
	};			
	
	class BSF_Skin_Huron_CG : SneakCustoms{
		skinName = "BSF Coast Guard";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Huron\BSF_Huron_CoastGuard_1_Front.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Huron\BSF_Huron_CoastGuard_2_Back.paa"
		};
		availableFor = "Vip";
	};			
	
	class BSF_Skin_Huron_Crayon : SneakCustoms{
		skinName = "BSF Crayon";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Huron\BSF_Huron_Crayon_1_Front.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Huron\BSF_Huron_Crayon_2_Back.paa"
		};
		availableFor = "Vip";
	};			

	class BSF_Skin_Huron_CSAT : SneakCustoms{
		skinName = "BSF CSAT";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Huron\BSF_Huron_CSAT_1_Front.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Huron\BSF_Huron_CSAT_2_Back.paa"
		};
		availableFor = "Vip";
	};			

	class BSF_Skin_Huron_Desert1 : SneakCustoms{
		skinName = "BSF Desert Fox";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Huron\BSF_Huron_Desert1_1_Front.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Huron\BSF_Huron_Desert1_2_Back.paa"
		};
		availableFor = "Vip";
	};			

	class BSF_Skin_Huron_Gray : SneakCustoms{
		skinName = "BSF Earl Gray";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Huron\BSF_Huron_Gray_1_Front.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Huron\BSF_Huron_Gray_2_Back.paa"
		};
		availableFor = "Vip";
	};			

	class BSF_Skin_Huron_Multi1 : SneakCustoms{
		skinName = "BSF Multi";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Huron\BSF_Huron_Multi1_1_Front.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Huron\BSF_Huron_Multi1_2_Back.paa"
		};
		availableFor = "Vip";
	};			

	class BSF_Skin_Huron_SnowLeopard : SneakCustoms{
		skinName = "BSF Snow Leopard";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Huron\BSF_Huron_SnowLeopard_1_Front.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Huron\BSF_Huron_SnowLeopard_2_Back.paa"
		};
		availableFor = "Vip";
	};			

	class BSF_Skin_Huron_Starlight : SneakCustoms{
		skinName = "BSF Starlight";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Huron\BSF_Huron_Starlight_1_Front.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Huron\BSF_Huron_Starlight_2_Back.paa"
		};
		availableFor = "Vip";
	};			

	class BSF_Skin_Huron_WD : SneakCustoms{
		skinName = "BSF Woodland";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Huron\BSF_Huron_WD_1_Front.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Huron\BSF_Huron_WD_2_Back.paa"
		};
		availableFor = "Vip";
	};			

	class BSF_Skin_Huron_SchoolBus : SneakCustoms{
		skinName = "BSF School Bus";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Huron\BSF_Huron_SchoolBus_1_Front.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\Huron\BSF_Huron_SchoolBus_2_Back.paa"
		};
		availableFor = "Vip";
	};			
	
/*
((get3DENSelected "object") # 0) setObjectTexture [0,"D:\ExileServerALTIS\mpmissions\Exile.Altis\BSF\SneakVehicleCustoms\Textures\BSF_Huron_Arctic_1_Front.paa"];
((get3DENSelected "object") # 0) setObjectTexture [1,"D:\ExileServerALTIS\mpmissions\Exile.Altis\BSF\SneakVehicleCustoms\Textures\BSF_Huron_Arctic_2_Back.paa"];
*/