
////////////////////////////////
// STRIDER
////////////////////////////////

	class BSF_Skin_Strider_Base{
		skins[] = {
			{"Exile_Car_Strider", 500},
			{"BSF_Skin_Strider_Drab", 1},
			{"BSF_Skin_Strider_Grey", 1},
			{"BSF_Skin_Strider_RedDigital", 1},
			{"BSF_Skin_Strider_WhiteDigital", 1},
			{"BSF_Skin_Strider_YellowCamo", 1},
			{"BSF_Skin_Strider_Black", 1},
			{"BSF_Skin_Strider_DersertDigital", 1},
			{"BSF_Skin_Strider_Leopard", 1},
			{"BSF_Skin_Strider_Arctic", 1},
			{"BSF_Skin_Strider_Desert1", 1},
			{"BSF_Skin_Strider_Deser2", 1},
			{"BSF_Skin_Strider_MossyOak", 1},
			{"BSF_Skin_Strider_SnowLeopard", 1},
			{"BSF_Skin_Strider_Stone", 1},
			{"BSF_Skin_Strider_Tiger", 1},
			{"BSF_Skin_Strider_WD", 1},
			{"BSF_Skin_Strider_Winter", 1}
		};
	};

	class Exile_Car_Strider_Abstract: BSF_Skin_Strider_Base{};
	class MRAP_03_base_F: BSF_Skin_Strider_Base{};
	class MRAP_03_hmg_base_F: BSF_Skin_Strider_Base{};
	class MRAP_03_gmg_base_F: BSF_Skin_Strider_Base{};

//Textures
	class Exile_Car_Strider: SneakCustoms{
		skinName = "Exile Hex";
		hiddenSelectionsTextures[] = {
			"a3\soft_f_beta\mrap_03\data\mrap_03_ext_indp_co.paa",
			"a3\data_f\vehicles\turret_indp_co.paa"
		};
		availableFor = "All";
	};
	class BSF_Skin_Strider_Drab: SneakCustoms{
		skinName = "BSF Drab";
		hiddenSelectionsTextures[] = {
			"a3\soft_f_beta\mrap_03\data\mrap_03_ext_co.paa",
			"a3\data_f\vehicles\turret_co.paa"
		};
		availableFor = "Vip";
	};
	class BSF_Skin_Strider_Grey: SneakCustoms{
		skinName = "BSF Earl Gray";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Strider_Gray.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Gray.paa"
		};
		availableFor = "Vip";
	};
	class BSF_Skin_Strider_RedDigital: SneakCustoms{
		skinName = "BSF Red Digital";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Strider_RedDigital.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Dark.paa"
		};
		availableFor = "Vip";
	};

	class BSF_Skin_Strider_WhiteDigital: SneakCustoms{
		skinName = "BSF White Digital";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Strider_WhiteDigital.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Dark.paa"
		};
		availableFor = "Vip";
	};
	class BSF_Skin_Strider_DersertDigital: SneakCustoms{
		skinName = "BSF Desert Digital";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Strider_DesertDigital.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_DesertDigi.paa"
		};
		availableFor = "Vip";
	};
	class BSF_Skin_Strider_Leopard: SneakCustoms{
		skinName = "BSF Leopard";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Strider_Leopard.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Dark.paa"
		};
		availableFor = "Vip";
	};
	class BSF_Skin_Strider_YellowCamo: SneakCustoms{
		skinName = "BSF Yellow Camo";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Strider_YellowCamo.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Dark.paa"
		};
		availableFor = "Vip";
	};
	class BSF_Skin_Strider_Black: SneakCustoms{
		skinName = "BSF Black";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Strider_Dark.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Dark.paa"
		};
		availableFor = "Vip";
	};
	class BSF_Skin_Strider_Arctic: SneakCustoms{
		skinName = "BSF Arctic Blue";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Strider_Arctic.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Arctic.paa"
		};
		availableFor = "Vip";
	};
	class BSF_Skin_Strider_Desert1: SneakCustoms{
		skinName = "BSF Desert Fox";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Strider_Desert1.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Desert1.paa"
		};
		availableFor = "Vip";
	};
	class BSF_Skin_Strider_Deser2: SneakCustoms{
		skinName = "BSF Desert Storm";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Strider_Desert2.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Desert2.paa"
		};
		availableFor = "Vip";
	};
	class BSF_Skin_Strider_MossyOak: SneakCustoms{
		skinName = "BSF Mossy Oak";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Strider_MossyOak.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_MossyOak.paa"
		};
		availableFor = "Vip";
	};
	class BSF_Skin_Strider_SnowLeopard: SneakCustoms{
		skinName = "BSF Snow Leopard";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Strider_SnowLeopard.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_SnowLeopard.paa"
		};
		availableFor = "Vip";
	};
	class BSF_Skin_Strider_Stone: SneakCustoms{
		skinName = "BSF Rolling Stone";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Strider_Stone.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Stone.paa"
		};
		availableFor = "Vip";
	};
	class BSF_Skin_Strider_Tiger: SneakCustoms{
		skinName = "BSF Crouching Tiger";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Strider_Tiger.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Tiger.paa"
		};
		availableFor = "Vip";
	};
	class BSF_Skin_Strider_WD: SneakCustoms{
		skinName = "BSF Woodland";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Strider_WD.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_WD.paa"
		};
		availableFor = "Vip";
	};
	class BSF_Skin_Strider_Winter: SneakCustoms{
		skinName = "BSF Winter";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Strider_Winter.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Dark.paa"
		};
		availableFor = "Vip";
	};

/*
((get3DENSelected "object") # 0) setObjectTexture [0,"D:\ExileServerALTIS\mpmissions\Exile.Altis\BSF\SneakVehicleCustoms\Textures\BSF_Hunter_SnowLeopard_1_Body.paa"];
((get3DENSelected "object") # 0) setObjectTexture [1,"D:\ExileServerALTIS\mpmissions\Exile.Altis\BSF\SneakVehicleCustoms\Textures\BSF_Hunter_SnowLeopard_2_Back.paa"];
((get3DENSelected "object") # 0) setObjectTexture [2,"D:\ExileServerALTIS\mpmissions\Exile.Altis\BSF\SneakVehicleCustoms\Textures\BSF_Turret_MRAP_SnowLeopard.paa"];

((get3DENSelected "object") # 0) setObjectTexture [0,"\A3\soft_F\MRAP_01\data\MRAP_01_base_CO.paa"];
((get3DENSelected "object") # 0) setObjectTexture [1,"\A3\soft_F\MRAP_01\data\MRAP_01_adds_CO.paa"];
((get3DENSelected "object") # 0) setObjectTexture [2,"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Dark.paa"];


*/

////////////////////////////////
// HUNTER
////////////////////////////////

	class BSF_Skin_Hunter_Base{
		skins[] = {
			{"BSF_Skin_Hunter_ExileGreen", 500},
			{"BSF_Skin_Hunter_ExileBlack", 500},
			{"BSF_Skin_Hunter_ExileSnow", 500},
			{"BSF_Skin_Hunter_SWAT", 1},
			{"BSF_Skin_Hunter_ExileHex", 1},
			{"BSF_Skin_Hunter_Desert1", 1},
			{"BSF_Skin_Hunter_Desert2", 1},
			{"BSF_Skin_Hunter_DesertDigi", 1},
			{"BSF_Skin_Hunter_MossyOak", 1},
			{"BSF_Skin_Hunter_Multi1", 1},
			{"BSF_Skin_Hunter_SnowLeopard", 1},
			{"BSF_Skin_Hunter_Stone", 1},
			{"BSF_Skin_Hunter_Tiger", 1},
			{"BSF_Skin_Hunter_WD", 1}
			};
		};
	class Exile_Car_Hunter_Abstract: BSF_Skin_Hunter_Base{};
	class MRAP_01_base_F: BSF_Skin_Hunter_Base{};
	class MRAP_01_hmg_base_F: BSF_Skin_Hunter_Base{};
	class MRAP_01_gmg_base_F: BSF_Skin_Hunter_Base{};

	class BSF_Skin_Hunter_ExileGreen: SneakCustoms{
		skinName = "Exile Green";
		hiddenSelectionsTextures[] = {
			"\A3\soft_F\MRAP_01\data\MRAP_01_base_CO.paa",
			"\A3\soft_F\MRAP_01\data\MRAP_01_adds_CO.paa",
			"a3\data_f\vehicles\turret_co.paa"
		};
		availableFor = "All";
   };
	class BSF_Skin_Hunter_ExileBlack: SneakCustoms{
		skinName = "Exile Black";
		hiddenSelectionsTextures[] = {
			"exile_assets\texture\vehicle\Exile_Hunter_Black_co.paa",
			"exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Dark.paa"
		};
		availableFor = "All";
   };
	class BSF_Skin_Hunter_ExileSnow: SneakCustoms{
		skinName = "Exile Snow";
		hiddenSelectionsTextures[] = {
			"exile_assets\texture\vehicle\Exile_Hunter_Snow_co.paa",
			"exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Dark.paa"
		};
		availableFor = "All";
	};
	class BSF_Skin_Hunter_SWAT: SneakCustoms{
		skinName = "BSF SWAT";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Hunter_SWAT.paa",
			"exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Dark.paa"
		};
		availableFor = "Vip";
	};
	class BSF_Skin_Hunter_ExileHex: SneakCustoms{
		skinName = "BSF White Hex";
		hiddenSelectionsTextures[] = {
			"exile_assets\texture\vehicle\Exile_Hunter_Hex_co.paa",
			"exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Dark.paa"
		};
		availableFor = "Vip";
	};
	class BSF_Skin_Hunter_Desert1: SneakCustoms{
		skinName = "BSF Desert Fox";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Hunter_Desert1_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Hunter_Desert1_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Desert1.paa"
		};
		availableFor = "Vip";
	};
	class BSF_Skin_Hunter_Desert2: SneakCustoms{
		skinName = "BSF Desert Storm";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Hunter_Desert2_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Hunter_Desert2_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Desert2.paa"
		};
		availableFor = "Vip";
	};
	class BSF_Skin_Hunter_DesertDigi: SneakCustoms{
		skinName = "BSF Desert Digi";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Hunter_DesertDigi_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Hunter_DesertDigi_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_DesertDigi.paa"
		};
		availableFor = "Vip";
	};
	class BSF_Skin_Hunter_MossyOak: SneakCustoms{
		skinName = "BSF Mossy Oak";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Hunter_MossyOak_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Hunter_MossyOak_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_MossyOak.paa"
		};
		availableFor = "Vip";
	};
	class BSF_Skin_Hunter_Multi1: SneakCustoms{
		skinName = "BSF Multi";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Hunter_Multi1_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Hunter_Multi1_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Multi1.paa"
		};
		availableFor = "Vip";
	};
	class BSF_Skin_Hunter_SnowLeopard: SneakCustoms{
		skinName = "BSF Snow Leopard";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Hunter_SnowLeopard_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Hunter_SnowLeopard_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_SnowLeopard.paa"
		};
		availableFor = "Vip";
	};
	class BSF_Skin_Hunter_Stone: SneakCustoms{
		skinName = "BSF Rolling Stone";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Hunter_Stone_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Hunter_Stone_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Stone.paa"
		};
		availableFor = "Vip";
	};
	class BSF_Skin_Hunter_Tiger: SneakCustoms{
		skinName = "BSF Crouching Tiger";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Hunter_Tiger_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Hunter_Tiger_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Tiger.paa"
		};
		availableFor = "Vip";
	};
	class BSF_Skin_Hunter_WD: SneakCustoms{
		skinName = "BSF Woodland";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Hunter_WD_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Hunter_WD_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_WD.paa"
		};
		availableFor = "Vip";
	};

////////////////////////////////
//IFRIT
////////////////////////////////

	class BSF_Skin_Ifrit_Base{
		skins[] = {
			{"BSF_Skin_Ifrit_Hex", 500},
			{"BSF_Skin_Ifrit_GHEX", 500},
			{"BSF_Skin_Ifrit_Arctic", 1},
			{"BSF_Skin_Ifrit_Black", 1},
			{"BSF_Skin_Ifrit_Desert1", 1},
			{"BSF_Skin_Ifrit_Desert2", 1},
			{"BSF_Skin_Ifrit_DesertDigi", 1},
			{"BSF_Skin_Ifrit_MossyOak", 1},
			{"BSF_Skin_Ifrit_Multi1", 1},
			{"BSF_Skin_Ifrit_SnowLeopard", 1},
			{"BSF_Skin_Ifrit_Stone", 1},
			{"BSF_Skin_Ifrit_Tiger", 1},
			{"BSF_Skin_Ifrit_WD", 1},
			{"BSF_Skin_Ifrit_Winter", 1},
			{"BSF_Skin_Ifrit_YellowCamo", 1},
			{"BSF_Skin_Ifrit_SWAT", 1}
		};
	};

	class Exile_Car_Ifrit_Abstract:BSF_Skin_Ifrit_Base{};
	class MRAP_02_base_F:BSF_Skin_Ifrit_Base{};
	class MRAP_02_hmg_base_F:BSF_Skin_Ifrit_Base{};
	class MRAP_02_gmg_base_F:BSF_Skin_Ifrit_Base{};

	class BSF_Skin_Ifrit_Hex: SneakCustoms{
		skinName = "Exile CSAT";
		hiddenSelectionsTextures[] = {
			"\A3\soft_F\MRAP_02\data\MRAP_02_ext_01_CO.paa",
			"\A3\soft_F\MRAP_02\data\MRAP_02_ext_02_CO.paa",
			"\A3\Data_F\Vehicles\turret_opfor_co.paa"
		};
		availableFor = "All";
	};

	class BSF_Skin_Ifrit_GHEX: SneakCustoms{
		skinName = "Exile Green HEX";
		hiddenSelectionsTextures[] = {
			"\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_01_ghex_CO.paa",
			"\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_02_ghex_CO.paa",
			"\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"
		};
		availableFor = "All";
	};

	class BSF_Skin_Ifrit_Arctic: SneakCustoms{
		skinName = "BSF Arctic Blue";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Ifrit_Arctic_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Ifrit_Arctic_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Arctic.paa"
		};
		availableFor = "Vip";
	};

	class BSF_Skin_Ifrit_Black: SneakCustoms{
		skinName = "BSF Black";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Ifrit_Black_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Ifrit_Black_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Dark.paa"
		};
		availableFor = "Vip";
	};

	class BSF_Skin_Ifrit_Desert1: SneakCustoms{
		skinName = "BSF Desert Fox";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Ifrit_Desert1_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Ifrit_Desert1_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Desert1.paa"
		};
		availableFor = "Vip";
	};

	class BSF_Skin_Ifrit_Desert2: SneakCustoms{
		skinName = "BSF Desert Storm";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Ifrit_Desert2_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Ifrit_Desert2_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Desert2.paa"
		};
		availableFor = "Vip";
	};

	class BSF_Skin_Ifrit_DesertDigi: SneakCustoms{
		skinName = "BSF Desert Digi";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Ifrit_DesertDigi_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Ifrit_DesertDigi_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_DesertDigi.paa"
		};
		availableFor = "Vip";
	};

	class BSF_Skin_Ifrit_MossyOak: SneakCustoms{
		skinName = "BSF Mossy Oak";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Ifrit_MossyOak_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Ifrit_MossyOak_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_MossyOak.paa"
		};
		availableFor = "Vip";
	};

	class BSF_Skin_Ifrit_Multi1: SneakCustoms{
		skinName = "BSF Multi";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Ifrit_Multi1_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Ifrit_Multi1_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Multi1.paa"
		};
		availableFor = "Vip";
	};

	class BSF_Skin_Ifrit_SnowLeopard: SneakCustoms{
		skinName = "BSF Snow Leopard";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Ifrit_SnowLeopard_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Ifrit_SnowLeopard_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_SnowLeopard.paa"
		};
		availableFor = "Vip";
	};

	class BSF_Skin_Ifrit_Stone: SneakCustoms{
		skinName = "BSF Rolling Stone";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Ifrit_Stone_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Ifrit_Stone_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Stone.paa"
		};
		availableFor = "Vip";
	};

	class BSF_Skin_Ifrit_Tiger: SneakCustoms{
		skinName = "BSF Crouching Tiger";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Ifrit_Tiger_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Ifrit_Tiger_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Tiger.paa"
		};
		availableFor = "Vip";
	};

	class BSF_Skin_Ifrit_WD: SneakCustoms{
		skinName = "BSF Woodland";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Ifrit_WD_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Ifrit_WD_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_WD.paa"
		};
		availableFor = "Vip";
	};

	class BSF_Skin_Ifrit_Winter: SneakCustoms{
		skinName = "BSF Winter";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Ifrit_Winter_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Ifrit_Winter_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Dark.paa"
		};
		availableFor = "Vip";
	};

	class BSF_Skin_Ifrit_YellowCamo: SneakCustoms{
		skinName = "BSF Yellow Camo";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Ifrit_YellowCamo_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Ifrit_YellowCamo_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Dark.paa"
		};
		availableFor = "Vip";
	};

	class BSF_Skin_Ifrit_SWAT: SneakCustoms{
		skinName = "BSF SWAT";
		hiddenSelectionsTextures[] = {
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Ifrit_SWAT_1_Body.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Ifrit_SWAT_2_Back.paa",
			"BSF_Community_Addon\addons\BSF_Misc\data\skins\MRAP\BSF_Turret_MRAP_Dark.paa"
		};
		availableFor = "Vip";
	};
