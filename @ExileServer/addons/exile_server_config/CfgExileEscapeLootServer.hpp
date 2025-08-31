
class CfgExileEscapeLootServer
{
	class LootTables
	{

		/*
			Percental Item Group Spawn Chances of CivillianLowerClass:

			ShittyMedical      = 3.64%
			GoodMedical        = 2.73%
			NiceMedical        = 0.91%
			SmokeGrenades      = 3.64%
			ShittyHandGrenades = 2.73%
			GoodHandGrenades   = 0.91%
			SmokeTube1Rnd      = 2.73%
			GrenadeTube1Rnd    = 1.82%
			SmokeTube3Rnd      = 0.91%
			GrenadeTube3Rnd    = 0.91%
			WeaponSupressors   = 0.91%
			WeaponBipods       = 0.91%
			WeaponItems        = 0.91%
			UselessWeapons     = 3.64%
			ShittyWeapons      = 2.73%
			OkayWeapons        = 2.73%
			UsefulWeapons      = 1.82%
			GoodWeapons        = 1.82%
			NiceWeapons        = 0.91%
			UselessBackpacks   = 2.73%
			ShittyBackpacks    = 2.73%
			OkayBackpacks      = 1.82%
			UsefulBackpacks    = 1.82%
			GoodBackpacks      = 0.91%
			NiceBackpacks      = 0.91%
			UselessHeadgear    = 3.64%
			OkayHeadgear       = 2.73%
			GoodHeadgear       = 1.82%
			NiceHeadgear       = 0.91%
			ShittyPistols      = 7.27%
			GoodPistols        = 3.64%
			UselessUniforms    = 3.64%
			ShittyUniforms     = 3.64%
			OkayUniforms       = 1.82%
			UselessVests       = 3.64%
			ShittyVests        = 1.82%
			OkayVests          = 1.82%
			UsefulVests        = 0.91%
			GoodVests          = 0.91%
			ShittyScopes       = 3.64%
			OkayScopes         = 3.64%
			UsefulScopes       = 2.73%
			GoodScopes         = 0.91%
			Binoculars         = 0.91%
			Rangefinders       = 0.91%
			NightVisionGoggles = 0.91%
		*/
		CivillianLowerClass[] = {"Rangefinders", "ShittyUniforms", "ShittyScopes", "GoodMedical", "ShittyUniforms", "OkayHeadgear", "UsefulBackpacks", "ShittyMedical", "OkayUniforms", "ShittyHandGrenades", "OkayHeadgear", "GoodPistols", "UselessVests", "NiceWeapons", "OkayVests", "ShittyHandGrenades", "ShittyScopes", "GrenadeTube3Rnd", "ShittyScopes", "OkayBackpacks", "UselessUniforms", "ShittyBackpacks", "GoodPistols", "ShittyPistols", "OkayHeadgear", "GoodBackpacks", "UsefulWeapons", "ShittyPistols", "OkayWeapons", "UselessHeadgear", "ShittyVests", "UsefulBackpacks", "GoodMedical", "UsefulVests", "SmokeTube1Rnd", "UselessBackpacks", "UselessVests", "ShittyPistols", "UselessUniforms", "ShittyVests", "GrenadeTube1Rnd", "OkayScopes", "ShittyScopes", "NiceHeadgear", "UselessUniforms", "NiceMedical", "OkayWeapons", "ShittyWeapons", "Binoculars", "WeaponBipods", "OkayScopes", "UselessBackpacks", "ShittyPistols", "WeaponSupressors", "ShittyUniforms", "OkayWeapons", "UsefulScopes", "OkayBackpacks", "GoodWeapons", "GoodScopes", "ShittyPistols", "NightVisionGoggles", "ShittyPistols", "SmokeTube3Rnd", "UselessHeadgear", "UselessVests", "ShittyWeapons", "ShittyMedical", "SmokeGrenades", "ShittyPistols", "SmokeTube1Rnd", "UselessUniforms", "GoodHandGrenades", "ShittyHandGrenades", "UselessWeapons", "WeaponItems", "GoodPistols", "UselessWeapons", "ShittyBackpacks", "UsefulScopes", "UselessWeapons", "ShittyMedical", "GoodWeapons", "ShittyMedical", "GrenadeTube1Rnd", "GoodVests", "GoodHeadgear", "UselessHeadgear", "GoodPistols", "GoodHeadgear", "SmokeGrenades", "SmokeTube1Rnd", "OkayVests", "UselessHeadgear", "UselessBackpacks", "OkayUniforms", "UsefulScopes", "OkayScopes", "ShittyBackpacks", "UselessVests", "ShittyUniforms", "SmokeGrenades", "ShittyPistols", "GoodMedical", "NiceBackpacks", "UselessWeapons", "ShittyWeapons", "OkayScopes", "SmokeGrenades", "UsefulWeapons"};

		/*
			Percental Item Group Spawn Chances of CivillianUpperClass:

			ShittyMedical      = 3.64%
			GoodMedical        = 2.73%
			NiceMedical        = 0.91%
			SmokeGrenades      = 3.64%
			ShittyHandGrenades = 2.73%
			GoodHandGrenades   = 0.91%
			SmokeTube1Rnd      = 2.73%
			GrenadeTube1Rnd    = 1.82%
			SmokeTube3Rnd      = 0.91%
			GrenadeTube3Rnd    = 0.91%
			WeaponSupressors   = 0.91%
			WeaponBipods       = 0.91%
			WeaponItems        = 0.91%
			UselessWeapons     = 3.64%
			ShittyWeapons      = 2.73%
			OkayWeapons        = 2.73%
			UsefulWeapons      = 1.82%
			GoodWeapons        = 1.82%
			NiceWeapons        = 0.91%
			UselessBackpacks   = 2.73%
			ShittyBackpacks    = 2.73%
			OkayBackpacks      = 1.82%
			UsefulBackpacks    = 1.82%
			GoodBackpacks      = 0.91%
			NiceBackpacks      = 0.91%
			UselessHeadgear    = 3.64%
			OkayHeadgear       = 2.73%
			GoodHeadgear       = 1.82%
			NiceHeadgear       = 0.91%
			ShittyPistols      = 7.27%
			GoodPistols        = 3.64%
			UselessUniforms    = 3.64%
			ShittyUniforms     = 3.64%
			OkayUniforms       = 1.82%
			UselessVests       = 3.64%
			ShittyVests        = 1.82%
			OkayVests          = 1.82%
			UsefulVests        = 0.91%
			GoodVests          = 0.91%
			ShittyScopes       = 3.64%
			OkayScopes         = 3.64%
			UsefulScopes       = 2.73%
			GoodScopes         = 0.91%
			Binoculars         = 0.91%
			Rangefinders       = 0.91%
			NightVisionGoggles = 0.91%
		*/
		CivillianUpperClass[] = {"ShittyHandGrenades", "Rangefinders", "OkayHeadgear", "ShittyScopes", "UselessWeapons", "UsefulScopes", "ShittyVests", "ShittyUniforms", "GoodPistols", "ShittyMedical", "ShittyBackpacks", "ShittyUniforms", "OkayScopes", "GoodPistols", "GoodHeadgear", "OkayUniforms", "GrenadeTube1Rnd", "UselessBackpacks", "GoodMedical", "UsefulWeapons", "GrenadeTube3Rnd", "ShittyPistols", "ShittyPistols", "UsefulVests", "OkayHeadgear", "SmokeTube1Rnd", "NiceWeapons", "GoodMedical", "UsefulBackpacks", "UselessHeadgear", "OkayVests", "ShittyScopes", "GoodWeapons", "ShittyPistols", "GoodMedical", "ShittyWeapons", "ShittyMedical", "NiceHeadgear", "UselessWeapons", "OkayWeapons", "UselessHeadgear", "WeaponSupressors", "ShittyPistols", "ShittyWeapons", "SmokeGrenades", "UselessUniforms", "UsefulBackpacks", "GoodScopes", "UselessVests", "GoodPistols", "ShittyPistols", "ShittyVests", "GrenadeTube1Rnd", "SmokeGrenades", "NiceMedical", "ShittyWeapons", "UselessBackpacks", "ShittyPistols", "UsefulScopes", "OkayBackpacks", "OkayWeapons", "Binoculars", "OkayVests", "UsefulWeapons", "ShittyMedical", "SmokeGrenades", "WeaponBipods", "OkayWeapons", "ShittyScopes", "OkayScopes", "UselessVests", "SmokeTube3Rnd", "GoodWeapons", "ShittyUniforms", "SmokeGrenades", "OkayScopes", "ShittyBackpacks", "ShittyPistols", "GoodPistols", "GoodBackpacks", "ShittyBackpacks", "GoodHeadgear", "OkayScopes", "OkayHeadgear", "ShittyUniforms", "GoodHandGrenades", "ShittyScopes", "UselessBackpacks", "UselessVests", "ShittyPistols", "UsefulScopes", "WeaponItems", "UselessVests", "UselessWeapons", "NiceBackpacks", "OkayUniforms", "UselessUniforms", "SmokeTube1Rnd", "UselessHeadgear", "SmokeTube1Rnd", "GoodVests", "ShittyMedical", "UselessUniforms", "UselessHeadgear", "ShittyHandGrenades", "NightVisionGoggles", "OkayBackpacks", "UselessWeapons", "UselessUniforms", "ShittyHandGrenades"};

		/*
			Percental Item Group Spawn Chances of Shop:

			ShittyMedical      = 3.64%
			GoodMedical        = 2.73%
			NiceMedical        = 0.91%
			SmokeGrenades      = 3.64%
			ShittyHandGrenades = 2.73%
			GoodHandGrenades   = 0.91%
			SmokeTube1Rnd      = 2.73%
			GrenadeTube1Rnd    = 1.82%
			SmokeTube3Rnd      = 0.91%
			GrenadeTube3Rnd    = 0.91%
			WeaponSupressors   = 0.91%
			WeaponBipods       = 0.91%
			WeaponItems        = 0.91%
			UselessWeapons     = 3.64%
			ShittyWeapons      = 2.73%
			OkayWeapons        = 2.73%
			UsefulWeapons      = 1.82%
			GoodWeapons        = 1.82%
			NiceWeapons        = 0.91%
			UselessBackpacks   = 2.73%
			ShittyBackpacks    = 2.73%
			OkayBackpacks      = 1.82%
			UsefulBackpacks    = 1.82%
			GoodBackpacks      = 0.91%
			NiceBackpacks      = 0.91%
			UselessHeadgear    = 3.64%
			OkayHeadgear       = 2.73%
			GoodHeadgear       = 1.82%
			NiceHeadgear       = 0.91%
			ShittyPistols      = 7.27%
			GoodPistols        = 3.64%
			UselessUniforms    = 3.64%
			ShittyUniforms     = 3.64%
			OkayUniforms       = 1.82%
			UselessVests       = 3.64%
			ShittyVests        = 1.82%
			OkayVests          = 1.82%
			UsefulVests        = 0.91%
			GoodVests          = 0.91%
			ShittyScopes       = 3.64%
			OkayScopes         = 3.64%
			UsefulScopes       = 2.73%
			GoodScopes         = 0.91%
			Binoculars         = 0.91%
			Rangefinders       = 0.91%
			NightVisionGoggles = 0.91%
		*/
		Shop[] = {"GoodWeapons", "GoodMedical", "UsefulScopes", "SmokeTube1Rnd", "UselessWeapons", "GoodBackpacks", "OkayHeadgear", "GoodMedical", "SmokeGrenades", "ShittyVests", "GrenadeTube1Rnd", "ShittyMedical", "UselessBackpacks", "UselessVests", "UselessHeadgear", "UselessVests", "UsefulScopes", "OkayBackpacks", "SmokeTube3Rnd", "ShittyPistols", "ShittyPistols", "GoodHeadgear", "GoodHeadgear", "UselessVests", "UselessWeapons", "Binoculars", "SmokeTube1Rnd", "OkayHeadgear", "WeaponItems", "ShittyPistols", "OkayScopes", "UselessWeapons", "NiceWeapons", "UselessBackpacks", "ShittyWeapons", "ShittyPistols", "NiceMedical", "ShittyPistols", "GoodPistols", "ShittyUniforms", "ShittyMedical", "UselessUniforms", "ShittyHandGrenades", "UselessWeapons", "OkayVests", "ShittyMedical", "GoodPistols", "GoodPistols", "OkayWeapons", "UselessUniforms", "ShittyPistols", "UsefulWeapons", "ShittyScopes", "GoodHandGrenades", "UsefulVests", "SmokeTube1Rnd", "ShittyVests", "ShittyMedical", "OkayScopes", "SmokeGrenades", "NiceBackpacks", "OkayUniforms", "ShittyWeapons", "ShittyBackpacks", "GoodVests", "UsefulScopes", "GrenadeTube3Rnd", "UselessHeadgear", "UselessUniforms", "NightVisionGoggles", "WeaponSupressors", "SmokeGrenades", "UselessHeadgear", "GoodScopes", "OkayScopes", "OkayVests", "GrenadeTube1Rnd", "OkayWeapons", "ShittyPistols", "UselessHeadgear", "ShittyUniforms", "GoodWeapons", "UsefulWeapons", "ShittyWeapons", "ShittyPistols", "UselessUniforms", "ShittyScopes", "OkayWeapons", "UselessBackpacks", "ShittyScopes", "WeaponBipods", "UsefulBackpacks", "ShittyScopes", "UsefulBackpacks", "ShittyUniforms", "ShittyBackpacks", "OkayBackpacks", "OkayHeadgear", "GoodMedical", "UselessVests", "OkayScopes", "OkayUniforms", "Rangefinders", "ShittyHandGrenades", "ShittyUniforms", "ShittyHandGrenades", "NiceHeadgear", "SmokeGrenades", "GoodPistols", "ShittyBackpacks"};

		/*
			Percental Item Group Spawn Chances of Industrial:

			ShittyMedical      = 3.64%
			GoodMedical        = 2.73%
			NiceMedical        = 0.91%
			SmokeGrenades      = 3.64%
			ShittyHandGrenades = 2.73%
			GoodHandGrenades   = 0.91%
			SmokeTube1Rnd      = 2.73%
			GrenadeTube1Rnd    = 1.82%
			SmokeTube3Rnd      = 0.91%
			GrenadeTube3Rnd    = 0.91%
			WeaponSupressors   = 0.91%
			WeaponBipods       = 0.91%
			WeaponItems        = 0.91%
			UselessWeapons     = 3.64%
			ShittyWeapons      = 2.73%
			OkayWeapons        = 2.73%
			UsefulWeapons      = 1.82%
			GoodWeapons        = 1.82%
			NiceWeapons        = 0.91%
			UselessBackpacks   = 2.73%
			ShittyBackpacks    = 2.73%
			OkayBackpacks      = 1.82%
			UsefulBackpacks    = 1.82%
			GoodBackpacks      = 0.91%
			NiceBackpacks      = 0.91%
			UselessHeadgear    = 3.64%
			OkayHeadgear       = 2.73%
			GoodHeadgear       = 1.82%
			NiceHeadgear       = 0.91%
			ShittyPistols      = 7.27%
			GoodPistols        = 3.64%
			UselessUniforms    = 3.64%
			ShittyUniforms     = 3.64%
			OkayUniforms       = 1.82%
			UselessVests       = 3.64%
			ShittyVests        = 1.82%
			OkayVests          = 1.82%
			UsefulVests        = 0.91%
			GoodVests          = 0.91%
			ShittyScopes       = 3.64%
			OkayScopes         = 3.64%
			UsefulScopes       = 2.73%
			GoodScopes         = 0.91%
			Binoculars         = 0.91%
			Rangefinders       = 0.91%
			NightVisionGoggles = 0.91%
		*/
		Industrial[] = {"ShittyScopes", "ShittyPistols", "GoodMedical", "UselessHeadgear", "GoodPistols", "SmokeTube1Rnd", "SmokeGrenades", "NightVisionGoggles", "OkayUniforms", "OkayBackpacks", "OkayWeapons", "OkayScopes", "GrenadeTube3Rnd", "UselessWeapons", "UsefulBackpacks", "ShittyMedical", "ShittyWeapons", "UselessUniforms", "OkayVests", "Rangefinders", "NiceBackpacks", "GoodPistols", "UselessVests", "OkayScopes", "SmokeGrenades", "UselessVests", "GoodVests", "GoodWeapons", "UselessUniforms", "ShittyBackpacks", "ShittyPistols", "UselessUniforms", "UsefulScopes", "SmokeTube3Rnd", "ShittyScopes", "ShittyWeapons", "UselessHeadgear", "UsefulVests", "SmokeTube1Rnd", "OkayVests", "ShittyUniforms", "ShittyScopes", "OkayBackpacks", "ShittyPistols", "GoodMedical", "UselessHeadgear", "OkayScopes", "UselessBackpacks", "ShittyUniforms", "ShittyVests", "UselessBackpacks", "UsefulScopes", "WeaponBipods", "NiceMedical", "ShittyMedical", "SmokeGrenades", "ShittyWeapons", "ShittyUniforms", "GoodHeadgear", "UselessBackpacks", "UselessWeapons", "GoodPistols", "ShittyMedical", "NiceWeapons", "ShittyMedical", "GrenadeTube1Rnd", "OkayWeapons", "UsefulScopes", "WeaponSupressors", "OkayUniforms", "ShittyBackpacks", "UselessWeapons", "GoodBackpacks", "ShittyUniforms", "OkayWeapons", "UsefulWeapons", "GoodHandGrenades", "GoodMedical", "ShittyPistols", "UselessUniforms", "ShittyVests", "GoodHeadgear", "SmokeTube1Rnd", "UselessVests", "GoodPistols", "OkayHeadgear", "ShittyPistols", "ShittyHandGrenades", "GoodWeapons", "OkayHeadgear", "Binoculars", "ShittyBackpacks", "ShittyPistols", "GoodScopes", "UselessVests", "SmokeGrenades", "UsefulWeapons", "OkayHeadgear", "ShittyHandGrenades", "ShittyScopes", "OkayScopes", "NiceHeadgear", "ShittyPistols", "UselessHeadgear", "GrenadeTube1Rnd", "ShittyPistols", "ShittyHandGrenades", "WeaponItems", "UselessWeapons", "UsefulBackpacks"};

		/*
			Percental Item Group Spawn Chances of Factories:

			ShittyMedical      = 3.64%
			GoodMedical        = 2.73%
			NiceMedical        = 0.91%
			SmokeGrenades      = 3.64%
			ShittyHandGrenades = 2.73%
			GoodHandGrenades   = 0.91%
			SmokeTube1Rnd      = 2.73%
			GrenadeTube1Rnd    = 1.82%
			SmokeTube3Rnd      = 0.91%
			GrenadeTube3Rnd    = 0.91%
			WeaponSupressors   = 0.91%
			WeaponBipods       = 0.91%
			WeaponItems        = 0.91%
			UselessWeapons     = 3.64%
			ShittyWeapons      = 2.73%
			OkayWeapons        = 2.73%
			UsefulWeapons      = 1.82%
			GoodWeapons        = 1.82%
			NiceWeapons        = 0.91%
			UselessBackpacks   = 2.73%
			ShittyBackpacks    = 2.73%
			OkayBackpacks      = 1.82%
			UsefulBackpacks    = 1.82%
			GoodBackpacks      = 0.91%
			NiceBackpacks      = 0.91%
			UselessHeadgear    = 3.64%
			OkayHeadgear       = 2.73%
			GoodHeadgear       = 1.82%
			NiceHeadgear       = 0.91%
			ShittyPistols      = 7.27%
			GoodPistols        = 3.64%
			UselessUniforms    = 3.64%
			ShittyUniforms     = 3.64%
			OkayUniforms       = 1.82%
			UselessVests       = 3.64%
			ShittyVests        = 1.82%
			OkayVests          = 1.82%
			UsefulVests        = 0.91%
			GoodVests          = 0.91%
			ShittyScopes       = 3.64%
			OkayScopes         = 3.64%
			UsefulScopes       = 2.73%
			GoodScopes         = 0.91%
			Binoculars         = 0.91%
			Rangefinders       = 0.91%
			NightVisionGoggles = 0.91%
		*/
		Factories[] = {"OkayWeapons", "ShittyScopes", "SmokeGrenades", "OkayScopes", "ShittyPistols", "WeaponSupressors", "UselessHeadgear", "UsefulBackpacks", "UselessVests", "GrenadeTube3Rnd", "UselessWeapons", "SmokeGrenades", "UsefulWeapons", "ShittyScopes", "WeaponItems", "GrenadeTube1Rnd", "Rangefinders", "NiceWeapons", "UselessWeapons", "OkayScopes", "GoodWeapons", "ShittyMedical", "NiceBackpacks", "SmokeTube1Rnd", "OkayWeapons", "ShittyMedical", "ShittyMedical", "ShittyVests", "ShittyMedical", "OkayVests", "NiceMedical", "ShittyPistols", "NightVisionGoggles", "OkayBackpacks", "SmokeTube1Rnd", "ShittyHandGrenades", "UsefulBackpacks", "GoodScopes", "OkayUniforms", "ShittyBackpacks", "OkayBackpacks", "ShittyPistols", "UselessVests", "UsefulVests", "GrenadeTube1Rnd", "ShittyPistols", "ShittyPistols", "ShittyBackpacks", "ShittyHandGrenades", "GoodVests", "SmokeGrenades", "GoodPistols", "ShittyPistols", "GoodWeapons", "ShittyScopes", "ShittyUniforms", "UselessUniforms", "UselessUniforms", "GoodMedical", "GoodBackpacks", "UsefulWeapons", "UselessBackpacks", "OkayHeadgear", "UselessWeapons", "ShittyVests", "OkayUniforms", "ShittyScopes", "ShittyUniforms", "WeaponBipods", "SmokeTube3Rnd", "ShittyUniforms", "ShittyWeapons", "OkayWeapons", "GoodHeadgear", "GoodMedical", "GoodHandGrenades", "ShittyPistols", "UselessUniforms", "ShittyHandGrenades", "OkayScopes", "ShittyPistols", "UselessVests", "ShittyBackpacks", "ShittyUniforms", "UselessHeadgear", "UselessWeapons", "SmokeGrenades", "OkayHeadgear", "UselessUniforms", "GoodPistols", "OkayScopes", "GoodPistols", "SmokeTube1Rnd", "UselessHeadgear", "ShittyWeapons", "UselessBackpacks", "ShittyWeapons", "Binoculars", "GoodMedical", "NiceHeadgear", "UsefulScopes", "OkayHeadgear", "GoodPistols", "UsefulScopes", "GoodHeadgear", "UselessVests", "UsefulScopes", "UselessHeadgear", "UselessBackpacks", "OkayVests"};

		/*
			Percental Item Group Spawn Chances of VehicleService:

			ShittyMedical      = 3.64%
			GoodMedical        = 2.73%
			NiceMedical        = 0.91%
			SmokeGrenades      = 3.64%
			ShittyHandGrenades = 2.73%
			GoodHandGrenades   = 0.91%
			SmokeTube1Rnd      = 2.73%
			GrenadeTube1Rnd    = 1.82%
			SmokeTube3Rnd      = 0.91%
			GrenadeTube3Rnd    = 0.91%
			WeaponSupressors   = 0.91%
			WeaponBipods       = 0.91%
			WeaponItems        = 0.91%
			UselessWeapons     = 3.64%
			ShittyWeapons      = 2.73%
			OkayWeapons        = 2.73%
			UsefulWeapons      = 1.82%
			GoodWeapons        = 1.82%
			NiceWeapons        = 0.91%
			UselessBackpacks   = 2.73%
			ShittyBackpacks    = 2.73%
			OkayBackpacks      = 1.82%
			UsefulBackpacks    = 1.82%
			GoodBackpacks      = 0.91%
			NiceBackpacks      = 0.91%
			UselessHeadgear    = 3.64%
			OkayHeadgear       = 2.73%
			GoodHeadgear       = 1.82%
			NiceHeadgear       = 0.91%
			ShittyPistols      = 7.27%
			GoodPistols        = 3.64%
			UselessUniforms    = 3.64%
			ShittyUniforms     = 3.64%
			OkayUniforms       = 1.82%
			UselessVests       = 3.64%
			ShittyVests        = 1.82%
			OkayVests          = 1.82%
			UsefulVests        = 0.91%
			GoodVests          = 0.91%
			ShittyScopes       = 3.64%
			OkayScopes         = 3.64%
			UsefulScopes       = 2.73%
			GoodScopes         = 0.91%
			Binoculars         = 0.91%
			Rangefinders       = 0.91%
			NightVisionGoggles = 0.91%
		*/
		VehicleService[] = {"ShittyPistols", "WeaponSupressors", "GoodHandGrenades", "UselessHeadgear", "OkayWeapons", "UselessUniforms", "ShittyPistols", "GoodHeadgear", "ShittyMedical", "UselessVests", "OkayUniforms", "ShittyUniforms", "UselessVests", "GoodScopes", "UsefulScopes", "SmokeTube1Rnd", "GoodVests", "UselessHeadgear", "OkayBackpacks", "OkayUniforms", "UselessUniforms", "ShittyHandGrenades", "UsefulBackpacks", "UselessUniforms", "ShittyBackpacks", "ShittyPistols", "GoodMedical", "ShittyHandGrenades", "UsefulScopes", "ShittyScopes", "ShittyBackpacks", "OkayHeadgear", "ShittyScopes", "GoodHeadgear", "OkayVests", "GoodBackpacks", "GoodMedical", "ShittyVests", "ShittyVests", "OkayWeapons", "UselessWeapons", "UsefulWeapons", "ShittyPistols", "WeaponItems", "ShittyUniforms", "GrenadeTube1Rnd", "NightVisionGoggles", "OkayScopes", "SmokeGrenades", "GrenadeTube3Rnd", "GoodPistols", "ShittyUniforms", "ShittyWeapons", "NiceHeadgear", "ShittyPistols", "ShittyPistols", "SmokeGrenades", "OkayBackpacks", "UselessWeapons", "ShittyMedical", "SmokeTube1Rnd", "NiceBackpacks", "UselessUniforms", "GoodPistols", "ShittyBackpacks", "UsefulWeapons", "OkayScopes", "OkayWeapons", "UsefulScopes", "OkayHeadgear", "ShittyUniforms", "ShittyWeapons", "Binoculars", "GoodPistols", "ShittyHandGrenades", "UselessHeadgear", "ShittyScopes", "SmokeGrenades", "UselessWeapons", "SmokeTube3Rnd", "ShittyMedical", "OkayVests", "WeaponBipods", "NiceWeapons", "GoodMedical", "ShittyPistols", "UsefulBackpacks", "GoodPistols", "NiceMedical", "ShittyWeapons", "GoodWeapons", "OkayScopes", "UselessWeapons", "SmokeGrenades", "Rangefinders", "UselessVests", "OkayHeadgear", "UsefulVests", "OkayScopes", "UselessBackpacks", "ShittyPistols", "UselessVests", "UselessBackpacks", "UselessHeadgear", "ShittyScopes", "UselessBackpacks", "GrenadeTube1Rnd", "SmokeTube1Rnd", "ShittyMedical", "GoodWeapons"};

		/*
			Percental Item Group Spawn Chances of Military:

			ShittyMedical      = 3.64%
			GoodMedical        = 2.73%
			NiceMedical        = 0.91%
			SmokeGrenades      = 3.64%
			ShittyHandGrenades = 2.73%
			GoodHandGrenades   = 0.91%
			SmokeTube1Rnd      = 2.73%
			GrenadeTube1Rnd    = 1.82%
			SmokeTube3Rnd      = 0.91%
			GrenadeTube3Rnd    = 0.91%
			WeaponSupressors   = 0.91%
			WeaponBipods       = 0.91%
			WeaponItems        = 0.91%
			UselessWeapons     = 3.64%
			ShittyWeapons      = 2.73%
			OkayWeapons        = 2.73%
			UsefulWeapons      = 1.82%
			GoodWeapons        = 1.82%
			NiceWeapons        = 0.91%
			UselessBackpacks   = 2.73%
			ShittyBackpacks    = 2.73%
			OkayBackpacks      = 1.82%
			UsefulBackpacks    = 1.82%
			GoodBackpacks      = 0.91%
			NiceBackpacks      = 0.91%
			UselessHeadgear    = 3.64%
			OkayHeadgear       = 2.73%
			GoodHeadgear       = 1.82%
			NiceHeadgear       = 0.91%
			ShittyPistols      = 7.27%
			GoodPistols        = 3.64%
			UselessUniforms    = 3.64%
			ShittyUniforms     = 3.64%
			OkayUniforms       = 1.82%
			UselessVests       = 3.64%
			ShittyVests        = 1.82%
			OkayVests          = 1.82%
			UsefulVests        = 0.91%
			GoodVests          = 0.91%
			ShittyScopes       = 3.64%
			OkayScopes         = 3.64%
			UsefulScopes       = 2.73%
			GoodScopes         = 0.91%
			Binoculars         = 0.91%
			Rangefinders       = 0.91%
			NightVisionGoggles = 0.91%
		*/
		Military[] = {"OkayUniforms", "OkayBackpacks", "OkayHeadgear", "SmokeGrenades", "UselessUniforms", "ShittyHandGrenades", "NiceWeapons", "GoodMedical", "OkayUniforms", "GoodPistols", "GoodScopes", "ShittyScopes", "UsefulBackpacks", "ShittyBackpacks", "GoodHandGrenades", "UselessBackpacks", "Rangefinders", "OkayWeapons", "SmokeGrenades", "ShittyScopes", "UsefulScopes", "SmokeTube1Rnd", "GoodWeapons", "OkayWeapons", "GrenadeTube1Rnd", "UsefulScopes", "ShittyScopes", "OkayVests", "GoodPistols", "ShittyHandGrenades", "UselessBackpacks", "UselessWeapons", "ShittyUniforms", "OkayScopes", "ShittyPistols", "SmokeTube1Rnd", "UselessVests", "UsefulBackpacks", "OkayBackpacks", "WeaponSupressors", "UselessVests", "UselessVests", "SmokeGrenades", "ShittyWeapons", "ShittyVests", "ShittyBackpacks", "ShittyPistols", "GrenadeTube3Rnd", "OkayHeadgear", "ShittyMedical", "SmokeTube3Rnd", "ShittyMedical", "UselessWeapons", "ShittyBackpacks", "UsefulWeapons", "ShittyWeapons", "ShittyPistols", "GoodBackpacks", "GoodMedical", "SmokeTube1Rnd", "WeaponBipods", "OkayScopes", "NiceMedical", "GoodPistols", "OkayScopes", "OkayScopes", "NightVisionGoggles", "GoodPistols", "UselessHeadgear", "UselessHeadgear", "UselessVests", "OkayWeapons", "ShittyMedical", "SmokeGrenades", "UselessHeadgear", "ShittyPistols", "ShittyWeapons", "ShittyPistols", "UsefulScopes", "GoodVests", "OkayHeadgear", "UselessWeapons", "ShittyVests", "ShittyScopes", "UselessUniforms", "UselessBackpacks", "UselessWeapons", "UselessUniforms", "Binoculars", "ShittyMedical", "UsefulVests", "ShittyPistols", "GoodMedical", "GrenadeTube1Rnd", "ShittyPistols", "GoodWeapons", "WeaponItems", "GoodHeadgear", "UselessHeadgear", "NiceHeadgear", "ShittyUniforms", "ShittyPistols", "ShittyUniforms", "ShittyHandGrenades", "NiceBackpacks", "UsefulWeapons", "GoodHeadgear", "OkayVests", "UselessUniforms", "ShittyUniforms"};

		/*
			Percental Item Group Spawn Chances of Medical:

			ShittyMedical      = 3.64%
			GoodMedical        = 2.73%
			NiceMedical        = 0.91%
			SmokeGrenades      = 3.64%
			ShittyHandGrenades = 2.73%
			GoodHandGrenades   = 0.91%
			SmokeTube1Rnd      = 2.73%
			GrenadeTube1Rnd    = 1.82%
			SmokeTube3Rnd      = 0.91%
			GrenadeTube3Rnd    = 0.91%
			WeaponSupressors   = 0.91%
			WeaponBipods       = 0.91%
			WeaponItems        = 0.91%
			UselessWeapons     = 3.64%
			ShittyWeapons      = 2.73%
			OkayWeapons        = 2.73%
			UsefulWeapons      = 1.82%
			GoodWeapons        = 1.82%
			NiceWeapons        = 0.91%
			UselessBackpacks   = 2.73%
			ShittyBackpacks    = 2.73%
			OkayBackpacks      = 1.82%
			UsefulBackpacks    = 1.82%
			GoodBackpacks      = 0.91%
			NiceBackpacks      = 0.91%
			UselessHeadgear    = 3.64%
			OkayHeadgear       = 2.73%
			GoodHeadgear       = 1.82%
			NiceHeadgear       = 0.91%
			ShittyPistols      = 7.27%
			GoodPistols        = 3.64%
			UselessUniforms    = 3.64%
			ShittyUniforms     = 3.64%
			OkayUniforms       = 1.82%
			UselessVests       = 3.64%
			ShittyVests        = 1.82%
			OkayVests          = 1.82%
			UsefulVests        = 0.91%
			GoodVests          = 0.91%
			ShittyScopes       = 3.64%
			OkayScopes         = 3.64%
			UsefulScopes       = 2.73%
			GoodScopes         = 0.91%
			Binoculars         = 0.91%
			Rangefinders       = 0.91%
			NightVisionGoggles = 0.91%
		*/
		Medical[] = {"ShittyScopes", "GoodHeadgear", "UsefulWeapons", "ShittyUniforms", "ShittyScopes", "OkayVests", "ShittyVests", "GrenadeTube3Rnd", "UselessHeadgear", "OkayUniforms", "ShittyPistols", "GoodMedical", "ShittyHandGrenades", "UselessUniforms", "ShittyVests", "UsefulScopes", "GoodMedical", "UsefulWeapons", "SmokeTube3Rnd", "SmokeTube1Rnd", "GrenadeTube1Rnd", "NiceBackpacks", "WeaponItems", "OkayHeadgear", "ShittyHandGrenades", "NiceMedical", "ShittyWeapons", "ShittyUniforms", "GoodMedical", "GoodHandGrenades", "GoodHeadgear", "GoodPistols", "OkayWeapons", "ShittyPistols", "OkayBackpacks", "WeaponSupressors", "OkayScopes", "UselessWeapons", "ShittyPistols", "UselessWeapons", "ShittyPistols", "ShittyScopes", "OkayHeadgear", "UselessHeadgear", "UselessVests", "OkayVests", "UselessVests", "OkayUniforms", "UselessVests", "ShittyBackpacks", "UselessVests", "NightVisionGoggles", "ShittyBackpacks", "GoodPistols", "UselessWeapons", "SmokeGrenades", "SmokeGrenades", "ShittyMedical", "ShittyPistols", "ShittyPistols", "UsefulScopes", "OkayWeapons", "OkayHeadgear", "ShittyUniforms", "OkayScopes", "UsefulBackpacks", "UselessBackpacks", "UsefulScopes", "UselessBackpacks", "NiceHeadgear", "GoodPistols", "ShittyWeapons", "ShittyPistols", "OkayScopes", "ShittyScopes", "OkayWeapons", "WeaponBipods", "UselessBackpacks", "OkayScopes", "ShittyWeapons", "SmokeGrenades", "Binoculars", "GoodBackpacks", "SmokeGrenades", "UselessWeapons", "UselessUniforms", "ShittyMedical", "ShittyUniforms", "UselessUniforms", "UselessUniforms", "UsefulBackpacks", "OkayBackpacks", "GrenadeTube1Rnd", "UsefulVests", "ShittyPistols", "SmokeTube1Rnd", "GoodWeapons", "NiceWeapons", "ShittyHandGrenades", "SmokeTube1Rnd", "ShittyBackpacks", "UselessHeadgear", "ShittyMedical", "GoodScopes", "ShittyMedical", "UselessHeadgear", "Rangefinders", "GoodVests", "GoodPistols", "GoodWeapons"};

		/*
			Percental Item Group Spawn Chances of Tourist:

			ShittyMedical      = 3.64%
			GoodMedical        = 2.73%
			NiceMedical        = 0.91%
			SmokeGrenades      = 3.64%
			ShittyHandGrenades = 2.73%
			GoodHandGrenades   = 0.91%
			SmokeTube1Rnd      = 2.73%
			GrenadeTube1Rnd    = 1.82%
			SmokeTube3Rnd      = 0.91%
			GrenadeTube3Rnd    = 0.91%
			WeaponSupressors   = 0.91%
			WeaponBipods       = 0.91%
			WeaponItems        = 0.91%
			UselessWeapons     = 3.64%
			ShittyWeapons      = 2.73%
			OkayWeapons        = 2.73%
			UsefulWeapons      = 1.82%
			GoodWeapons        = 1.82%
			NiceWeapons        = 0.91%
			UselessBackpacks   = 2.73%
			ShittyBackpacks    = 2.73%
			OkayBackpacks      = 1.82%
			UsefulBackpacks    = 1.82%
			GoodBackpacks      = 0.91%
			NiceBackpacks      = 0.91%
			UselessHeadgear    = 3.64%
			OkayHeadgear       = 2.73%
			GoodHeadgear       = 1.82%
			NiceHeadgear       = 0.91%
			ShittyPistols      = 7.27%
			GoodPistols        = 3.64%
			UselessUniforms    = 3.64%
			ShittyUniforms     = 3.64%
			OkayUniforms       = 1.82%
			UselessVests       = 3.64%
			ShittyVests        = 1.82%
			OkayVests          = 1.82%
			UsefulVests        = 0.91%
			GoodVests          = 0.91%
			ShittyScopes       = 3.64%
			OkayScopes         = 3.64%
			UsefulScopes       = 2.73%
			GoodScopes         = 0.91%
			Binoculars         = 0.91%
			Rangefinders       = 0.91%
			NightVisionGoggles = 0.91%
		*/
		Tourist[] = {"GoodMedical", "NiceMedical", "ShittyPistols", "ShittyWeapons", "UselessVests", "GoodScopes", "GoodHandGrenades", "UsefulWeapons", "OkayVests", "ShittyMedical", "GoodPistols", "ShittyPistols", "SmokeTube3Rnd", "UselessWeapons", "ShittyWeapons", "Rangefinders", "UselessUniforms", "SmokeGrenades", "NightVisionGoggles", "ShittyBackpacks", "ShittyScopes", "ShittyMedical", "ShittyHandGrenades", "GrenadeTube1Rnd", "ShittyUniforms", "UselessWeapons", "GoodBackpacks", "UselessHeadgear", "UsefulScopes", "UselessHeadgear", "ShittyHandGrenades", "GrenadeTube3Rnd", "SmokeGrenades", "NiceHeadgear", "ShittyMedical", "OkayWeapons", "OkayWeapons", "ShittyUniforms", "ShittyPistols", "Binoculars", "ShittyUniforms", "UsefulScopes", "ShittyPistols", "UselessBackpacks", "UselessUniforms", "WeaponBipods", "SmokeTube1Rnd", "UselessHeadgear", "WeaponItems", "GoodVests", "ShittyScopes", "GoodHeadgear", "UsefulScopes", "UselessVests", "GoodMedical", "OkayVests", "SmokeGrenades", "ShittyScopes", "UsefulBackpacks", "OkayUniforms", "ShittyScopes", "ShittyMedical", "UsefulBackpacks", "OkayScopes", "GoodMedical", "ShittyPistols", "GrenadeTube1Rnd", "GoodWeapons", "UselessVests", "UselessWeapons", "GoodWeapons", "UsefulWeapons", "UsefulVests", "WeaponSupressors", "UselessBackpacks", "SmokeTube1Rnd", "GoodHeadgear", "UselessHeadgear", "ShittyWeapons", "ShittyBackpacks", "NiceWeapons", "ShittyHandGrenades", "SmokeTube1Rnd", "ShittyPistols", "UselessUniforms", "UselessBackpacks", "OkayHeadgear", "OkayScopes", "GoodPistols", "UselessUniforms", "OkayWeapons", "OkayBackpacks", "OkayUniforms", "OkayBackpacks", "ShittyUniforms", "ShittyVests", "ShittyVests", "UselessWeapons", "ShittyPistols", "OkayHeadgear", "SmokeGrenades", "UselessVests", "OkayScopes", "GoodPistols", "GoodPistols", "ShittyPistols", "OkayHeadgear", "NiceBackpacks", "ShittyBackpacks", "OkayScopes"};

		/*
			Percental Item Group Spawn Chances of Radiation:

			ShittyMedical      = 3.64%
			GoodMedical        = 2.73%
			NiceMedical        = 0.91%
			SmokeGrenades      = 3.64%
			ShittyHandGrenades = 2.73%
			GoodHandGrenades   = 0.91%
			SmokeTube1Rnd      = 2.73%
			GrenadeTube1Rnd    = 1.82%
			SmokeTube3Rnd      = 0.91%
			GrenadeTube3Rnd    = 0.91%
			WeaponSupressors   = 0.91%
			WeaponBipods       = 0.91%
			WeaponItems        = 0.91%
			UselessWeapons     = 3.64%
			ShittyWeapons      = 2.73%
			OkayWeapons        = 2.73%
			UsefulWeapons      = 1.82%
			GoodWeapons        = 1.82%
			NiceWeapons        = 0.91%
			UselessBackpacks   = 2.73%
			ShittyBackpacks    = 2.73%
			OkayBackpacks      = 1.82%
			UsefulBackpacks    = 1.82%
			GoodBackpacks      = 0.91%
			NiceBackpacks      = 0.91%
			UselessHeadgear    = 3.64%
			OkayHeadgear       = 2.73%
			GoodHeadgear       = 1.82%
			NiceHeadgear       = 0.91%
			ShittyPistols      = 7.27%
			GoodPistols        = 3.64%
			UselessUniforms    = 3.64%
			ShittyUniforms     = 3.64%
			OkayUniforms       = 1.82%
			UselessVests       = 3.64%
			ShittyVests        = 1.82%
			OkayVests          = 1.82%
			UsefulVests        = 0.91%
			GoodVests          = 0.91%
			ShittyScopes       = 3.64%
			OkayScopes         = 3.64%
			UsefulScopes       = 2.73%
			GoodScopes         = 0.91%
			Binoculars         = 0.91%
			Rangefinders       = 0.91%
			NightVisionGoggles = 0.91%
		*/
		Radiation[] = {"ShittyUniforms", "UselessWeapons", "UselessBackpacks", "ShittyPistols", "ShittyPistols", "OkayBackpacks", "UselessUniforms", "UsefulScopes", "SmokeTube3Rnd", "ShittyHandGrenades", "UsefulScopes", "NiceMedical", "UselessVests", "ShittyScopes", "NightVisionGoggles", "ShittyPistols", "GoodVests", "ShittyMedical", "OkayWeapons", "ShittyScopes", "OkayScopes", "UselessBackpacks", "ShittyBackpacks", "ShittyUniforms", "ShittyHandGrenades", "UsefulVests", "OkayScopes", "OkayVests", "ShittyScopes", "SmokeTube1Rnd", "UselessHeadgear", "UsefulScopes", "OkayHeadgear", "ShittyPistols", "SmokeTube1Rnd", "UsefulBackpacks", "OkayScopes", "UselessUniforms", "WeaponSupressors", "UselessHeadgear", "OkayBackpacks", "GoodWeapons", "ShittyMedical", "SmokeGrenades", "OkayVests", "UselessHeadgear", "GoodMedical", "UselessHeadgear", "ShittyPistols", "SmokeTube1Rnd", "GrenadeTube1Rnd", "GoodScopes", "ShittyPistols", "UselessBackpacks", "ShittyUniforms", "NiceHeadgear", "UselessUniforms", "ShittyUniforms", "SmokeGrenades", "ShittyWeapons", "SmokeGrenades", "OkayWeapons", "ShittyVests", "Binoculars", "UselessWeapons", "GoodHeadgear", "GoodMedical", "GrenadeTube3Rnd", "UsefulWeapons", "OkayHeadgear", "GoodPistols", "ShittyPistols", "GoodPistols", "UselessWeapons", "OkayUniforms", "ShittyWeapons", "ShittyWeapons", "ShittyHandGrenades", "GrenadeTube1Rnd", "OkayHeadgear", "ShittyBackpacks", "OkayScopes", "UselessVests", "ShittyScopes", "WeaponBipods", "UselessUniforms", "UsefulBackpacks", "ShittyMedical", "UselessVests", "GoodMedical", "WeaponItems", "GoodHeadgear", "UselessWeapons", "ShittyMedical", "NiceBackpacks", "GoodBackpacks", "OkayWeapons", "NiceWeapons", "GoodWeapons", "OkayUniforms", "GoodHandGrenades", "ShittyPistols", "UsefulWeapons", "Rangefinders", "UselessVests", "GoodPistols", "SmokeGrenades", "ShittyBackpacks", "ShittyVests", "GoodPistols"};
	};

	class ItemGroups
	{

		/*
			Percental Item Spawn Chances of UselessWeapons:

			Exile_Weapon_CZ550      = 33.33%
			Exile_Weapon_M1014      = 33.33%
			Exile_Weapon_LeeEnfield = 33.33%
		*/
		UselessWeapons[] = {"Exile_Weapon_LeeEnfield", "Exile_Weapon_CZ550", "Exile_Weapon_M1014"};

		/*
			Percental Item Spawn Chances of ShittyWeapons:

			hgun_PDW2000_F = 25.00%
			SMG_01_F       = 25.00%
			SMG_02_F       = 25.00%
			SMG_05_F       = 25.00%
		*/
		ShittyWeapons[] = {"SMG_02_F", "SMG_01_F", "hgun_PDW2000_F", "SMG_05_F"};

		/*
			Percental Item Spawn Chances of OkayWeapons:

			arifle_Mk20_F     = 14.29%
			arifle_Mk20_GL_F  = 14.29%
			arifle_Mk20C_F    = 14.29%
			arifle_SDAR_F     = 14.29%
			arifle_TRG20_F    = 14.29%
			arifle_TRG21_F    = 14.29%
			arifle_TRG21_GL_F = 14.29%
		*/
		OkayWeapons[] = {"arifle_SDAR_F", "arifle_Mk20_GL_F", "arifle_Mk20_F", "arifle_TRG20_F", "arifle_Mk20C_F", "arifle_TRG21_GL_F", "arifle_TRG21_F"};

		/*
			Percental Item Spawn Chances of GoodWeapons:

			arifle_SPAR_01_blk_F    = 16.67%
			arifle_SPAR_01_GL_blk_F = 16.67%
			arifle_SPAR_01_GL_khk_F = 16.67%
			arifle_SPAR_01_GL_snd_F = 16.67%
			arifle_SPAR_01_khk_F    = 16.67%
			arifle_SPAR_01_snd_F    = 16.67%
		*/
		GoodWeapons[] = {"arifle_SPAR_01_GL_snd_F", "arifle_SPAR_01_khk_F", "arifle_SPAR_01_snd_F", "arifle_SPAR_01_GL_khk_F", "arifle_SPAR_01_GL_blk_F", "arifle_SPAR_01_blk_F"};

		/*
			Percental Item Spawn Chances of UsefulWeapons:

			arifle_AKS_F          = 7.69%
			arifle_Katiba_F       = 7.69%
			arifle_Katiba_GL_F    = 7.69%
			arifle_MX_Black_F     = 7.69%
			arifle_MX_F           = 7.69%
			arifle_MX_GL_Black_F  = 7.69%
			arifle_MX_GL_F        = 7.69%
			arifle_MX_GL_khk_F    = 7.69%
			arifle_MX_khk_F       = 7.69%
			arifle_MXC_Black_F    = 7.69%
			arifle_MXC_F          = 7.69%
			arifle_MXC_khk_F      = 7.69%
			Exile_Weapon_AKS_Gold = 7.69%
		*/
		UsefulWeapons[] = {"arifle_MX_F", "arifle_MX_GL_F", "arifle_Katiba_GL_F", "arifle_AKS_F", "arifle_MX_khk_F", "arifle_MXC_F", "arifle_MX_Black_F", "Exile_Weapon_AKS_Gold", "arifle_MXC_khk_F", "arifle_Katiba_F", "arifle_MXC_Black_F", "arifle_MX_GL_Black_F", "arifle_MX_GL_khk_F"};

		/*
			Percental Item Spawn Chances of NiceWeapons:

			arifle_SPAR_02_blk_F  = 4.35%
			arifle_SPAR_02_khk_F  = 4.35%
			arifle_SPAR_02_snd_F  = 4.35%
			arifle_AK12_F         = 4.35%
			arifle_AK12_GL_F      = 4.35%
			arifle_CTAR_blk_F     = 4.35%
			arifle_CTAR_ghex_F    = 4.35%
			arifle_CTAR_GL_blk_F  = 4.35%
			arifle_CTAR_hex_F     = 4.35%
			arifle_CTARS_blk_F    = 4.35%
			arifle_CTARS_ghex_F   = 4.35%
			arifle_CTARS_hex_F    = 4.35%
			arifle_MXM_Black_F    = 4.35%
			arifle_MXM_F          = 4.35%
			arifle_MXM_khk_F      = 4.35%
			arifle_SPAR_03_blk_F  = 4.35%
			arifle_SPAR_03_khk_F  = 4.35%
			arifle_SPAR_03_snd_F  = 4.35%
			Exile_Weapon_AK107    = 4.35%
			Exile_Weapon_AK107_GL = 4.35%
			Exile_Weapon_AK47     = 4.35%
			Exile_Weapon_AK74     = 4.35%
			Exile_Weapon_AK74_GL  = 4.35%
		*/
		NiceWeapons[] = {"Exile_Weapon_AK107_GL", "arifle_MXM_khk_F", "arifle_CTARS_blk_F", "arifle_AK12_F", "arifle_AK12_GL_F", "Exile_Weapon_AK107", "arifle_MXM_Black_F", "arifle_SPAR_02_khk_F", "Exile_Weapon_AK74_GL", "Exile_Weapon_AK47", "Exile_Weapon_AK74", "arifle_CTAR_hex_F", "arifle_MXM_F", "arifle_CTAR_blk_F", "arifle_CTARS_ghex_F", "arifle_SPAR_03_khk_F", "arifle_CTARS_hex_F", "arifle_SPAR_03_snd_F", "arifle_CTAR_GL_blk_F", "arifle_SPAR_03_blk_F", "arifle_SPAR_02_snd_F", "arifle_CTAR_ghex_F", "arifle_SPAR_02_blk_F"};

		/*
			Percental Item Spawn Chances of EpicWeapons:

			arifle_MX_SW_Black_F     = 2.63%
			arifle_MX_SW_F           = 2.63%
			Exile_Weapon_DMR         = 2.63%
			Exile_Weapon_PK          = 2.63%
			Exile_Weapon_PKP         = 2.63%
			Exile_Weapon_RPK         = 2.63%
			Exile_Weapon_SVD         = 2.63%
			Exile_Weapon_SVDCamo     = 2.63%
			Exile_Weapon_VSSVintorez = 2.63%
			LMG_03_F                 = 2.63%
			LMG_Mk200_F              = 2.63%
			LMG_Zafir_F              = 2.63%
			srifle_DMR_01_F          = 2.63%
			srifle_DMR_02_camo_F     = 2.63%
			srifle_DMR_02_F          = 2.63%
			srifle_DMR_02_sniper_F   = 2.63%
			srifle_DMR_03_F          = 2.63%
			srifle_DMR_03_khaki_F    = 2.63%
			srifle_DMR_03_tan_F      = 2.63%
			srifle_DMR_03_woodland_F = 2.63%
			srifle_DMR_04_F          = 2.63%
			srifle_DMR_04_Tan_F      = 2.63%
			srifle_DMR_05_blk_F      = 2.63%
			srifle_DMR_05_hex_F      = 2.63%
			srifle_DMR_05_tan_F      = 2.63%
			srifle_DMR_06_camo_F     = 2.63%
			srifle_DMR_06_olive_F    = 2.63%
			srifle_DMR_07_blk_F      = 2.63%
			srifle_DMR_07_ghex_F     = 2.63%
			srifle_DMR_07_hex_F      = 2.63%
			srifle_EBR_F             = 2.63%
			srifle_GM6_F             = 2.63%
			srifle_GM6_ghex_F        = 2.63%
			srifle_LRR_F             = 2.63%
			srifle_LRR_tna_F         = 2.63%
			arifle_ARX_blk_F         = 2.63%
			arifle_ARX_ghex_F        = 2.63%
			arifle_ARX_hex_F         = 2.63%
		*/
		EpicWeapons[] = {"srifle_LRR_tna_F", "srifle_DMR_05_hex_F", "srifle_DMR_01_F", "srifle_DMR_02_camo_F", "srifle_LRR_F", "arifle_MX_SW_F", "Exile_Weapon_SVD", "LMG_Zafir_F", "srifle_DMR_06_olive_F", "Exile_Weapon_RPK", "srifle_DMR_07_ghex_F", "LMG_Mk200_F", "Exile_Weapon_PKP", "srifle_DMR_07_hex_F", "arifle_ARX_blk_F", "srifle_DMR_06_camo_F", "Exile_Weapon_PK", "srifle_DMR_03_khaki_F", "srifle_DMR_04_F", "arifle_MX_SW_Black_F", "Exile_Weapon_VSSVintorez", "srifle_DMR_03_F", "Exile_Weapon_DMR", "srifle_DMR_05_blk_F", "Exile_Weapon_SVDCamo", "srifle_EBR_F", "srifle_DMR_03_woodland_F", "srifle_DMR_05_tan_F", "srifle_DMR_02_F", "srifle_DMR_07_blk_F", "arifle_ARX_hex_F", "arifle_ARX_ghex_F", "srifle_DMR_04_Tan_F", "LMG_03_F", "srifle_GM6_F", "srifle_GM6_ghex_F", "srifle_DMR_03_tan_F", "srifle_DMR_02_sniper_F"};

		/*
			Percental Item Spawn Chances of ShittyScopes:

			optic_Holosight           = 20.00%
			optic_Holosight_blk_F     = 20.00%
			optic_Holosight_khk_F     = 20.00%
			optic_Holosight_smg       = 20.00%
			optic_Holosight_smg_blk_F = 20.00%
		*/
		ShittyScopes[] = {"optic_Holosight_blk_F", "optic_Holosight_smg", "optic_Holosight", "optic_Holosight_smg_blk_F", "optic_Holosight_khk_F"};

		/*
			Percental Item Spawn Chances of OkayScopes:

			optic_ACO         = 25.00%
			optic_ACO_grn     = 25.00%
			optic_ACO_grn_smg = 25.00%
			optic_Aco_smg     = 25.00%
		*/
		OkayScopes[] = {"optic_Aco_smg", "optic_ACO_grn_smg", "optic_ACO_grn", "optic_ACO"};

		/*
			Percental Item Spawn Chances of UsefulScopes:

			optic_Arco        = 14.29%
			optic_Arco_blk_F  = 14.29%
			optic_Arco_ghex_F = 14.29%
			optic_ERCO_blk_F  = 14.29%
			optic_ERCO_khk_F  = 14.29%
			optic_ERCO_snd_F  = 14.29%
			optic_MRCO        = 14.29%
		*/
		UsefulScopes[] = {"optic_ERCO_khk_F", "optic_Arco_blk_F", "optic_Arco", "optic_Arco_ghex_F", "optic_ERCO_blk_F", "optic_MRCO", "optic_ERCO_snd_F"};

		/*
			Percental Item Spawn Chances of GoodScopes:

			optic_DMS        = 25.00%
			optic_DMS_ghex_F = 25.00%
			optic_Hamr       = 25.00%
			optic_Hamr_khk_F = 25.00%
		*/
		GoodScopes[] = {"optic_DMS", "optic_Hamr", "optic_Hamr_khk_F", "optic_DMS_ghex_F"};

		/*
			Percental Item Spawn Chances of NiceScopes:

			optic_AMS       = 11.11%
			optic_AMS_khk   = 11.11%
			optic_AMS_snd   = 11.11%
			optic_KHS_blk   = 11.11%
			optic_KHS_hex   = 11.11%
			optic_KHS_old   = 11.11%
			optic_KHS_tan   = 11.11%
			optic_SOS       = 11.11%
			optic_SOS_khk_F = 11.11%
		*/
		NiceScopes[] = {"optic_AMS", "optic_SOS_khk_F", "optic_AMS_snd", "optic_KHS_tan", "optic_SOS", "optic_KHS_blk", "optic_AMS_khk", "optic_KHS_old", "optic_KHS_hex"};

		/*
			Percental Item Spawn Chances of WeaponSupressors:

			muzzle_snds_58_blk_F     = 5.00%
			muzzle_snds_58_wdm_F     = 5.00%
			muzzle_snds_65_TI_blk_F  = 5.00%
			muzzle_snds_65_TI_ghex_F = 5.00%
			muzzle_snds_65_TI_hex_F  = 5.00%
			muzzle_snds_93mmg        = 5.00%
			muzzle_snds_93mmg_tan    = 5.00%
			muzzle_snds_acp          = 5.00%
			muzzle_snds_B            = 5.00%
			muzzle_snds_B_khk_F      = 5.00%
			muzzle_snds_B_snd_F      = 5.00%
			muzzle_snds_H            = 5.00%
			muzzle_snds_H_khk_F      = 5.00%
			muzzle_snds_H_MG_blk_F   = 5.00%
			muzzle_snds_H_MG_khk_F   = 5.00%
			muzzle_snds_H_snd_F      = 5.00%
			muzzle_snds_L            = 5.00%
			muzzle_snds_M            = 5.00%
			muzzle_snds_m_khk_F      = 5.00%
			muzzle_snds_m_snd_F      = 5.00%
		*/
		WeaponSupressors[] = {"muzzle_snds_H_khk_F", "muzzle_snds_B", "muzzle_snds_L", "muzzle_snds_58_blk_F", "muzzle_snds_H", "muzzle_snds_m_snd_F", "muzzle_snds_B_khk_F", "muzzle_snds_acp", "muzzle_snds_m_khk_F", "muzzle_snds_B_snd_F", "muzzle_snds_65_TI_blk_F", "muzzle_snds_H_MG_blk_F", "muzzle_snds_93mmg", "muzzle_snds_65_TI_ghex_F", "muzzle_snds_93mmg_tan", "muzzle_snds_H_MG_khk_F", "muzzle_snds_58_wdm_F", "muzzle_snds_H_snd_F", "muzzle_snds_M", "muzzle_snds_65_TI_hex_F"};

		/*
			Percental Item Spawn Chances of ZipTies:

			Exile_Item_ZipTie = 100.00%
		*/
		ZipTies[] = {"Exile_Item_ZipTie"};

		/*
			Percental Item Spawn Chances of WeaponItems:

			acc_flashlight = 50.00%
			acc_pointer_IR = 50.00%
		*/
		WeaponItems[] = {"acc_flashlight", "acc_pointer_IR"};

		/*
			Percental Item Spawn Chances of WeaponBipods:

			bipod_01_F_blk = 11.11%
			bipod_01_F_khk = 11.11%
			bipod_01_F_mtp = 11.11%
			bipod_01_F_snd = 11.11%
			bipod_02_F_blk = 11.11%
			bipod_02_F_hex = 11.11%
			bipod_02_F_tan = 11.11%
			bipod_03_F_blk = 11.11%
			bipod_03_F_oli = 11.11%
		*/
		WeaponBipods[] = {"bipod_02_F_hex", "bipod_03_F_oli", "bipod_01_F_mtp", "bipod_03_F_blk", "bipod_02_F_blk", "bipod_01_F_snd", "bipod_02_F_tan", "bipod_01_F_blk", "bipod_01_F_khk"};

		/*
			Percental Item Spawn Chances of UselessVests:

			V_BandollierB_blk    = 4.55%
			V_BandollierB_cbr    = 4.55%
			V_BandollierB_ghex_F = 4.55%
			V_BandollierB_khk    = 4.55%
			V_BandollierB_oli    = 4.55%
			V_BandollierB_rgr    = 4.55%
			V_Chestrig_blk       = 4.55%
			V_Chestrig_khk       = 4.55%
			V_Chestrig_oli       = 4.55%
			V_Chestrig_rgr       = 4.55%
			V_HarnessO_brn       = 4.55%
			V_HarnessO_ghex_F    = 4.55%
			V_HarnessO_gry       = 4.55%
			V_HarnessOGL_brn     = 4.55%
			V_HarnessOGL_ghex_F  = 4.55%
			V_HarnessOGL_gry     = 4.55%
			V_HarnessOSpec_brn   = 4.55%
			V_HarnessOSpec_gry   = 4.55%
			V_Rangemaster_belt   = 4.55%
			V_TacChestrig_cbr_F  = 4.55%
			V_TacChestrig_grn_F  = 4.55%
			V_TacChestrig_oli_F  = 4.55%
		*/
		UselessVests[] = {"V_Chestrig_blk", "V_HarnessO_ghex_F", "V_BandollierB_blk", "V_Chestrig_rgr", "V_HarnessOGL_gry", "V_BandollierB_cbr", "V_HarnessOGL_brn", "V_Chestrig_khk", "V_Rangemaster_belt", "V_BandollierB_oli", "V_TacChestrig_oli_F", "V_HarnessOSpec_gry", "V_HarnessO_brn", "V_Chestrig_oli", "V_TacChestrig_cbr_F", "V_HarnessOGL_ghex_F", "V_BandollierB_rgr", "V_HarnessO_gry", "V_TacChestrig_grn_F", "V_BandollierB_khk", "V_BandollierB_ghex_F", "V_HarnessOSpec_brn"};

		/*
			Percental Item Spawn Chances of ShittyVests:

			V_I_G_resistanceLeader_F = 33.33%
			V_TacVest_blk_POLICE     = 33.33%
			V_TacVest_gen_F          = 33.33%
		*/
		ShittyVests[] = {"V_TacVest_gen_F", "V_I_G_resistanceLeader_F", "V_TacVest_blk_POLICE"};

		/*
			Percental Item Spawn Chances of OkayVests:

			V_PlateCarrier1_blk          = 14.29%
			V_PlateCarrier1_rgr          = 14.29%
			V_PlateCarrier1_rgr_noflag_F = 14.29%
			V_PlateCarrier1_tna_F        = 14.29%
			V_PlateCarrierIA1_dgtl       = 14.29%
			V_PlateCarrierL_CTRG         = 14.29%
			V_Press_F                    = 14.29%
		*/
		OkayVests[] = {"V_PlateCarrierL_CTRG", "V_PlateCarrier1_tna_F", "V_PlateCarrier1_blk", "V_PlateCarrier1_rgr_noflag_F", "V_Press_F", "V_PlateCarrierIA1_dgtl", "V_PlateCarrier1_rgr"};

		/*
			Percental Item Spawn Chances of UsefulVests:

			V_PlateCarrier2_rgr          = 16.67%
			V_PlateCarrier2_rgr_noflag_F = 16.67%
			V_PlateCarrier2_tna_F        = 16.67%
			V_PlateCarrier3_rgr          = 16.67%
			V_PlateCarrierH_CTRG         = 16.67%
			V_PlateCarrierIA2_dgtl       = 16.67%
		*/
		UsefulVests[] = {"V_PlateCarrierH_CTRG", "V_PlateCarrierIA2_dgtl", "V_PlateCarrier2_tna_F", "V_PlateCarrier3_rgr", "V_PlateCarrier2_rgr", "V_PlateCarrier2_rgr_noflag_F"};

		/*
			Percental Item Spawn Chances of GoodVests:

			V_PlateCarrierSpec_blk   = 25.00%
			V_PlateCarrierSpec_mtp   = 25.00%
			V_PlateCarrierSpec_rgr   = 25.00%
			V_PlateCarrierSpec_tna_F = 25.00%
		*/
		GoodVests[] = {"V_PlateCarrierSpec_mtp", "V_PlateCarrierSpec_tna_F", "V_PlateCarrierSpec_blk", "V_PlateCarrierSpec_rgr"};

		/*
			Percental Item Spawn Chances of EpicVests:

			V_PlateCarrierGL_blk    = 16.67%
			V_PlateCarrierGL_mtp    = 16.67%
			V_PlateCarrierGL_rgr    = 16.67%
			V_PlateCarrierGL_tna_F  = 16.67%
			V_PlateCarrierIAGL_dgtl = 16.67%
			V_PlateCarrierIAGL_oli  = 16.67%
		*/
		EpicVests[] = {"V_PlateCarrierIAGL_oli", "V_PlateCarrierGL_tna_F", "V_PlateCarrierGL_mtp", "V_PlateCarrierGL_rgr", "V_PlateCarrierIAGL_dgtl", "V_PlateCarrierGL_blk"};

		/*
			Percental Item Spawn Chances of UselessUniforms:

			U_C_HunterBody_grn      = 4.17%
			U_C_Journalist          = 4.17%
			U_C_Man_casual_1_F      = 4.17%
			U_C_Man_casual_2_F      = 4.17%
			U_C_Man_casual_3_F      = 4.17%
			U_C_Man_casual_4_F      = 4.17%
			U_C_Man_casual_5_F      = 4.17%
			U_C_Man_casual_6_F      = 4.17%
			U_C_man_sport_1_F       = 4.17%
			U_C_man_sport_2_F       = 4.17%
			U_C_man_sport_3_F       = 4.17%
			U_C_Poloshirt_blue      = 4.17%
			U_C_Poloshirt_burgundy  = 4.17%
			U_C_Poloshirt_salmon    = 4.17%
			U_C_Poloshirt_stripped  = 4.17%
			U_C_Poloshirt_tricolour = 4.17%
			U_C_Poor_1              = 4.17%
			U_C_Poor_2              = 4.17%
			U_C_Poor_shorts_1       = 4.17%
			U_C_Scientist           = 4.17%
			U_NikosAgedBody         = 4.17%
			U_NikosBody             = 4.17%
			U_OrestesBody           = 4.17%
			U_Rangemaster           = 4.17%
		*/
		UselessUniforms[] = {"U_NikosBody", "U_C_Poloshirt_salmon", "U_C_Poloshirt_tricolour", "U_C_HunterBody_grn", "U_C_Poloshirt_burgundy", "U_C_Poor_2", "U_C_Poloshirt_stripped", "U_C_man_sport_3_F", "U_C_Poor_shorts_1", "U_C_Man_casual_5_F", "U_C_Scientist", "U_C_man_sport_2_F", "U_C_Man_casual_6_F", "U_C_Journalist", "U_C_Man_casual_1_F", "U_OrestesBody", "U_C_man_sport_1_F", "U_C_Man_casual_3_F", "U_C_Poor_1", "U_NikosAgedBody", "U_C_Man_casual_2_F", "U_C_Poloshirt_blue", "U_Rangemaster", "U_C_Man_casual_4_F"};

		/*
			Percental Item Spawn Chances of ShittyUniforms:

			U_B_GEN_Commander_F      = 4.76%
			U_B_GEN_Soldier_F        = 4.76%
			U_I_C_Soldier_Bandit_1_F = 4.76%
			U_I_C_Soldier_Bandit_2_F = 4.76%
			U_I_C_Soldier_Bandit_3_F = 4.76%
			U_I_C_Soldier_Bandit_4_F = 4.76%
			U_I_C_Soldier_Bandit_5_F = 4.76%
			U_I_C_Soldier_Camo_F     = 4.76%
			U_I_C_Soldier_Para_1_F   = 4.76%
			U_I_C_Soldier_Para_2_F   = 4.76%
			U_I_C_Soldier_Para_3_F   = 4.76%
			U_I_C_Soldier_Para_4_F   = 4.76%
			U_I_C_Soldier_Para_5_F   = 4.76%
			U_I_G_resistanceLeader_F = 4.76%
			U_IG_Guerilla1_1         = 4.76%
			U_IG_Guerilla2_1         = 4.76%
			U_IG_Guerilla2_2         = 4.76%
			U_IG_Guerilla2_3         = 4.76%
			U_IG_Guerilla3_1         = 4.76%
			U_IG_Guerilla3_2         = 4.76%
			U_IG_leader              = 4.76%
		*/
		ShittyUniforms[] = {"U_I_C_Soldier_Camo_F", "U_I_C_Soldier_Para_1_F", "U_IG_Guerilla3_1", "U_I_C_Soldier_Bandit_5_F", "U_I_G_resistanceLeader_F", "U_B_GEN_Commander_F", "U_I_C_Soldier_Bandit_3_F", "U_IG_Guerilla3_2", "U_IG_Guerilla1_1", "U_B_GEN_Soldier_F", "U_IG_Guerilla2_3", "U_I_C_Soldier_Para_2_F", "U_I_C_Soldier_Bandit_2_F", "U_I_C_Soldier_Para_3_F", "U_I_C_Soldier_Bandit_1_F", "U_I_C_Soldier_Bandit_4_F", "U_I_C_Soldier_Para_4_F", "U_I_C_Soldier_Para_5_F", "U_IG_Guerilla2_2", "U_IG_Guerilla2_1", "U_IG_leader"};

		/*
			Percental Item Spawn Chances of OkayUniforms:

			U_B_CombatUniform_mcam        = 4.35%
			U_B_CombatUniform_mcam_tshirt = 4.35%
			U_B_CombatUniform_mcam_vest   = 4.35%
			U_B_CombatUniform_mcam_worn   = 4.35%
			U_B_CTRG_1                    = 4.35%
			U_B_CTRG_2                    = 4.35%
			U_B_CTRG_3                    = 4.35%
			U_B_CTRG_Soldier_2_F          = 4.35%
			U_B_CTRG_Soldier_3_F          = 4.35%
			U_B_CTRG_Soldier_F            = 4.35%
			U_B_CTRG_Soldier_urb_1_F      = 4.35%
			U_B_CTRG_Soldier_urb_2_F      = 4.35%
			U_B_CTRG_Soldier_urb_3_F      = 4.35%
			U_B_SpecopsUniform_sgg        = 4.35%
			U_B_T_Soldier_AR_F            = 4.35%
			U_B_T_Soldier_SL_F            = 4.35%
			U_B_Wetsuit                   = 4.35%
			U_I_CombatUniform             = 4.35%
			U_I_CombatUniform_shortsleeve = 4.35%
			U_I_CombatUniform_tshirt      = 4.35%
			U_I_OfficerUniform            = 4.35%
			U_I_Wetsuit                   = 4.35%
			U_O_Wetsuit                   = 4.35%
		*/
		OkayUniforms[] = {"U_I_CombatUniform_shortsleeve", "U_B_CTRG_Soldier_3_F", "U_B_CTRG_Soldier_urb_3_F", "U_O_Wetsuit", "U_B_T_Soldier_AR_F", "U_B_CombatUniform_mcam_tshirt", "U_I_Wetsuit", "U_I_CombatUniform_tshirt", "U_B_CTRG_1", "U_B_CTRG_3", "U_I_CombatUniform", "U_B_CombatUniform_mcam_worn", "U_B_CTRG_Soldier_2_F", "U_B_SpecopsUniform_sgg", "U_B_CTRG_Soldier_F", "U_B_CTRG_Soldier_urb_2_F", "U_I_OfficerUniform", "U_B_CTRG_Soldier_urb_1_F", "U_B_CTRG_2", "U_B_T_Soldier_SL_F", "U_B_CombatUniform_mcam_vest", "U_B_Wetsuit", "U_B_CombatUniform_mcam"};

		/*
			Percental Item Spawn Chances of EpicUniforms:

			U_B_HeliPilotCoveralls    = 7.14%
			U_B_PilotCoveralls        = 7.14%
			U_I_HeliPilotCoveralls    = 7.14%
			U_I_pilotCoveralls        = 7.14%
			U_O_CombatUniform_ocamo   = 7.14%
			U_O_CombatUniform_oucamo  = 7.14%
			U_O_OfficerUniform_ocamo  = 7.14%
			U_O_PilotCoveralls        = 7.14%
			U_O_SpecopsUniform_blk    = 7.14%
			U_O_SpecopsUniform_ocamo  = 7.14%
			U_O_T_Officer_F           = 7.14%
			U_O_T_Soldier_F           = 7.14%
			U_O_V_Soldier_Viper_F     = 7.14%
			U_O_V_Soldier_Viper_hex_F = 7.14%
		*/
		EpicUniforms[] = {"U_O_V_Soldier_Viper_hex_F", "U_I_pilotCoveralls", "U_O_PilotCoveralls", "U_O_T_Officer_F", "U_O_V_Soldier_Viper_F", "U_B_HeliPilotCoveralls", "U_O_SpecopsUniform_blk", "U_O_OfficerUniform_ocamo", "U_B_PilotCoveralls", "U_O_CombatUniform_ocamo", "U_I_HeliPilotCoveralls", "U_O_CombatUniform_oucamo", "U_O_SpecopsUniform_ocamo", "U_O_T_Soldier_F"};

		/*
			Percental Item Spawn Chances of ShittyHandGrenades:

			MiniGrenade = 100.00%
		*/
		ShittyHandGrenades[] = {"MiniGrenade"};

		/*
			Percental Item Spawn Chances of GoodHandGrenades:

			HandGrenade = 100.00%
		*/
		GoodHandGrenades[] = {"HandGrenade"};

		/*
			Percental Item Spawn Chances of SmokeGrenades:

			SmokeShell       = 14.29%
			SmokeShellRed    = 14.29%
			SmokeShellGreen  = 14.29%
			SmokeShellYellow = 14.29%
			SmokeShellPurple = 14.29%
			SmokeShellBlue   = 14.29%
			SmokeShellOrange = 14.29%
		*/
		SmokeGrenades[] = {"SmokeShellBlue", "SmokeShellGreen", "SmokeShellPurple", "SmokeShellOrange", "SmokeShell", "SmokeShellYellow", "SmokeShellRed"};

		/*
			Percental Item Spawn Chances of Rebreathers:

			V_RebreatherB  = 33.33%
			V_RebreatherIR = 33.33%
			V_RebreatherIA = 33.33%
		*/
		Rebreathers[] = {"V_RebreatherIA", "V_RebreatherB", "V_RebreatherIR"};

		/*
			Percental Item Spawn Chances of Rangefinders:

			Rangefinder = 100.00%
		*/
		Rangefinders[] = {"Rangefinder"};

		/*
			Percental Item Spawn Chances of ShittyPistols:

			hgun_Rook40_F         = 16.67%
			hgun_P07_F            = 16.67%
			hgun_P07_khk_F        = 16.67%
			hgun_Pistol_01_F      = 16.67%
			Exile_Weapon_Colt1911 = 16.67%
			Exile_Weapon_Makarov  = 16.67%
		*/
		ShittyPistols[] = {"Exile_Weapon_Makarov", "Exile_Weapon_Colt1911", "hgun_Pistol_01_F", "hgun_Rook40_F", "hgun_P07_F", "hgun_P07_khk_F"};

		/*
			Percental Item Spawn Chances of GoodPistols:

			hgun_Pistol_heavy_01_F  = 20.00%
			hgun_Pistol_heavy_02_F  = 20.00%
			Exile_Weapon_Taurus     = 20.00%
			Exile_Weapon_TaurusGold = 20.00%
			hgun_ACPC2_F            = 20.00%
		*/
		GoodPistols[] = {"Exile_Weapon_TaurusGold", "hgun_ACPC2_F", "Exile_Weapon_Taurus", "hgun_Pistol_heavy_01_F", "hgun_Pistol_heavy_02_F"};

		/*
			Percental Item Spawn Chances of PistolScopes:

			optic_Yorris = 50.00%
			optic_MRD    = 50.00%
		*/
		PistolScopes[] = {"optic_MRD", "optic_Yorris"};

		/*
			Percental Item Spawn Chances of SmokeTube1Rnd:

			1Rnd_Smoke_Grenade_shell       = 14.29%
			1Rnd_SmokeBlue_Grenade_shell   = 14.29%
			1Rnd_SmokeGreen_Grenade_shell  = 14.29%
			1Rnd_SmokeOrange_Grenade_shell = 14.29%
			1Rnd_SmokePurple_Grenade_shell = 14.29%
			1Rnd_SmokeRed_Grenade_shell    = 14.29%
			1Rnd_SmokeYellow_Grenade_shell = 14.29%
		*/
		SmokeTube1Rnd[] = {"1Rnd_SmokeYellow_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell"};

		/*
			Percental Item Spawn Chances of SmokeTube3Rnd:

			3Rnd_Smoke_Grenade_shell       = 14.29%
			3Rnd_SmokeBlue_Grenade_shell   = 14.29%
			3Rnd_SmokeGreen_Grenade_shell  = 14.29%
			3Rnd_SmokeOrange_Grenade_shell = 14.29%
			3Rnd_SmokePurple_Grenade_shell = 14.29%
			3Rnd_SmokeRed_Grenade_shell    = 14.29%
			3Rnd_SmokeYellow_Grenade_shell = 14.29%
		*/
		SmokeTube3Rnd[] = {"3Rnd_SmokePurple_Grenade_shell", "3Rnd_SmokeGreen_Grenade_shell", "3Rnd_SmokeBlue_Grenade_shell", "3Rnd_SmokeOrange_Grenade_shell", "3Rnd_SmokeRed_Grenade_shell", "3Rnd_SmokeYellow_Grenade_shell", "3Rnd_Smoke_Grenade_shell"};

		/*
			Percental Item Spawn Chances of GrenadeTube1Rnd:

			1Rnd_HE_Grenade_shell = 100.00%
		*/
		GrenadeTube1Rnd[] = {"1Rnd_HE_Grenade_shell"};

		/*
			Percental Item Spawn Chances of GrenadeTube3Rnd:

			3Rnd_HE_Grenade_shell = 100.00%
		*/
		GrenadeTube3Rnd[] = {"3Rnd_HE_Grenade_shell"};

		/*
			Percental Item Spawn Chances of NightVisionGoggles:

			NVGoggles          = 20.00%
			NVGoggles_tna_F    = 20.00%
			O_NVGoggles_ghex_F = 20.00%
			O_NVGoggles_hex_F  = 20.00%
			O_NVGoggles_urb_F  = 20.00%
		*/
		NightVisionGoggles[] = {"O_NVGoggles_urb_F", "NVGoggles", "NVGoggles_tna_F", "O_NVGoggles_ghex_F", "O_NVGoggles_hex_F"};

		/*
			Percental Item Spawn Chances of ShittyMedical:

			Exile_Item_Bandage = 100.00%
		*/
		ShittyMedical[] = {"Exile_Item_Bandage"};

		/*
			Percental Item Spawn Chances of GoodMedical:

			Exile_Item_Vishpirin = 100.00%
		*/
		GoodMedical[] = {"Exile_Item_Vishpirin"};

		/*
			Percental Item Spawn Chances of NiceMedical:

			Exile_Item_InstaDoc = 100.00%
		*/
		NiceMedical[] = {"Exile_Item_InstaDoc"};

		/*
			Percental Item Spawn Chances of UselessHeadgear:

			H_Bandanna_camo           = 1.32%
			H_Bandanna_cbr            = 1.32%
			H_Bandanna_gry            = 1.32%
			H_Bandanna_khk            = 1.32%
			H_Bandanna_khk_hs         = 1.32%
			H_Bandanna_mcamo          = 1.32%
			H_Bandanna_sgg            = 1.32%
			H_Bandanna_surfer         = 1.32%
			H_Beret_02                = 1.32%
			H_Beret_blk               = 1.32%
			H_Beret_blk_POLICE        = 1.32%
			H_Beret_brn_SF            = 1.32%
			H_Beret_Colonel           = 1.32%
			H_Beret_grn               = 1.32%
			H_Beret_grn_SF            = 1.32%
			H_Beret_ocamo             = 1.32%
			H_Beret_red               = 1.32%
			H_Booniehat_tna_F         = 1.32%
			H_Cap_blk                 = 1.32%
			H_Cap_blk_Raven           = 1.32%
			H_Cap_blk_Syndikat_F      = 1.32%
			H_Cap_blu                 = 1.32%
			H_Cap_grn                 = 1.32%
			H_Cap_grn_Syndikat_F      = 1.32%
			H_Cap_headphones          = 1.32%
			H_Cap_oli                 = 1.32%
			H_Cap_oli_Syndikat_F      = 1.32%
			H_Cap_press               = 1.32%
			H_Cap_red                 = 1.32%
			H_Cap_tan                 = 1.32%
			H_Cap_tan_Syndikat_F      = 1.32%
			H_FakeHeadgear_Syndikat_F = 1.32%
			H_Hat_blue                = 1.32%
			H_Hat_brown               = 1.32%
			H_Hat_checker             = 1.32%
			H_Hat_grey                = 1.32%
			H_Hat_tan                 = 1.32%
			H_MilCap_gen_F            = 1.32%
			H_MilCap_ghex_F           = 1.32%
			H_MilCap_tna_F            = 1.32%
			H_Shemag_khk              = 1.32%
			H_Shemag_olive            = 1.32%
			H_Shemag_olive_hs         = 1.32%
			H_Shemag_tan              = 1.32%
			H_ShemagOpen_khk          = 1.32%
			H_ShemagOpen_tan          = 1.32%
			H_StrawHat                = 1.32%
			H_StrawHat_dark           = 1.32%
			H_TurbanO_blk             = 1.32%
			H_Watchcap_camo           = 1.32%
			H_Watchcap_sgg            = 1.32%
			H_BandMask_blk            = 1.32%
			H_Cap_brn_SPECOPS         = 1.32%
			H_Cap_khaki_specops_UK    = 1.32%
			H_Cap_tan_specops_US      = 1.32%
			H_Hat_camo                = 1.32%
			H_Watchcap_blk            = 1.32%
			H_Watchcap_khk            = 1.32%
			H_Booniehat_dgtl          = 1.32%
			H_Booniehat_dirty         = 1.32%
			H_Booniehat_grn           = 1.32%
			H_Booniehat_indp          = 1.32%
			H_Booniehat_khk           = 1.32%
			H_Booniehat_khk_hs        = 1.32%
			H_Booniehat_mcamo         = 1.32%
			H_Booniehat_tan           = 1.32%
			H_BandMask_demon          = 1.32%
			H_BandMask_khk            = 1.32%
			H_BandMask_reaper         = 1.32%
			H_Beret_gen_F             = 1.32%
			H_MilCap_blue             = 1.32%
			H_MilCap_dgtl             = 1.32%
			H_MilCap_mcamo            = 1.32%
			H_MilCap_ocamo            = 1.32%
			H_MilCap_oucamo           = 1.32%
			H_MilCap_rucamo           = 1.32%
		*/
		UselessHeadgear[] = {"H_Watchcap_blk", "H_Beret_ocamo", "H_Watchcap_camo", "H_Shemag_olive", "H_MilCap_oucamo", "H_Hat_blue", "H_MilCap_ocamo", "H_Booniehat_khk", "H_Booniehat_dgtl", "H_FakeHeadgear_Syndikat_F", "H_BandMask_reaper", "H_StrawHat", "H_TurbanO_blk", "H_Bandanna_sgg", "H_Cap_headphones", "H_BandMask_blk", "H_Beret_blk", "H_Cap_oli", "H_Shemag_khk", "H_Beret_02", "H_Booniehat_indp", "H_Watchcap_khk", "H_Bandanna_camo", "H_Bandanna_khk", "H_Bandanna_gry", "H_Beret_blk_POLICE", "H_ShemagOpen_tan", "H_Bandanna_mcamo", "H_Bandanna_cbr", "H_Beret_brn_SF", "H_Bandanna_khk_hs", "H_Beret_gen_F", "H_Booniehat_mcamo", "H_Beret_grn_SF", "H_Hat_tan", "H_BandMask_demon", "H_Beret_Colonel", "H_Cap_tan_Syndikat_F", "H_Shemag_tan", "H_ShemagOpen_khk", "H_Cap_blk_Raven", "H_MilCap_gen_F", "H_Cap_oli_Syndikat_F", "H_Cap_press", "H_Cap_blu", "H_MilCap_rucamo", "H_Cap_blk_Syndikat_F", "H_MilCap_ghex_F", "H_Booniehat_grn", "H_Bandanna_surfer", "H_StrawHat_dark", "H_Beret_grn", "H_Shemag_olive_hs", "H_Cap_tan_specops_US", "H_Beret_red", "H_Hat_camo", "H_Hat_brown", "H_Cap_grn", "H_BandMask_khk", "H_Booniehat_tan", "H_Cap_red", "H_MilCap_tna_F", "H_MilCap_mcamo", "H_Watchcap_sgg", "H_Booniehat_khk_hs", "H_Cap_tan", "H_MilCap_dgtl", "H_Hat_checker", "H_Booniehat_tna_F", "H_Cap_brn_SPECOPS", "H_MilCap_blue", "H_Hat_grey", "H_Booniehat_dirty", "H_Cap_blk", "H_Cap_khaki_specops_UK", "H_Cap_grn_Syndikat_F"};

		/*
			Percental Item Spawn Chances of OkayHeadgear:

			H_Helmet_Skate            = 12.50%
			H_HelmetB_light_black     = 12.50%
			H_HelmetB_light_desert    = 12.50%
			H_HelmetB_light_grass     = 12.50%
			H_HelmetB_light_sand      = 12.50%
			H_HelmetB_light_snakeskin = 12.50%
			H_HelmetB_Light_tna_F     = 12.50%
			H_HelmetB_light           = 12.50%
		*/
		OkayHeadgear[] = {"H_HelmetB_light", "H_HelmetB_light_grass", "H_HelmetB_light_black", "H_Helmet_Skate", "H_HelmetB_light_sand", "H_HelmetB_light_desert", "H_HelmetB_Light_tna_F", "H_HelmetB_light_snakeskin"};

		/*
			Percental Item Spawn Chances of GoodHeadgear:

			H_HelmetB_camo      = 6.25%
			H_PilotHelmetHeli_B = 6.25%
			H_PilotHelmetHeli_I = 6.25%
			H_PilotHelmetHeli_O = 6.25%
			H_HelmetB_black     = 6.25%
			H_HelmetB_desert    = 6.25%
			H_HelmetB_grass     = 6.25%
			H_HelmetB_sand      = 6.25%
			H_HelmetB_snakeskin = 6.25%
			H_HelmetB_tna_F     = 6.25%
			H_HelmetIA_camo     = 6.25%
			H_HelmetIA_net      = 6.25%
			H_HelmetB           = 6.25%
			H_HelmetB_paint     = 6.25%
			H_HelmetB_plain_blk = 6.25%
			H_HelmetIA          = 6.25%
		*/
		GoodHeadgear[] = {"H_HelmetB", "H_HelmetB_black", "H_HelmetIA_net", "H_PilotHelmetHeli_I", "H_PilotHelmetHeli_B", "H_HelmetB_tna_F", "H_HelmetB_sand", "H_HelmetB_paint", "H_HelmetB_snakeskin", "H_HelmetIA_camo", "H_HelmetIA", "H_PilotHelmetHeli_O", "H_HelmetB_desert", "H_HelmetB_camo", "H_HelmetB_plain_blk", "H_HelmetB_grass"};

		/*
			Percental Item Spawn Chances of NiceHeadgear:

			H_HelmetCrew_B        = 14.29%
			H_HelmetCrew_I        = 14.29%
			H_HelmetCrew_O        = 14.29%
			H_HelmetO_ocamo       = 14.29%
			H_HelmetO_oucamo      = 14.29%
			H_HelmetO_ghex_F      = 14.29%
			H_HelmetCrew_O_ghex_F = 14.29%
		*/
		NiceHeadgear[] = {"H_HelmetCrew_I", "H_HelmetCrew_O_ghex_F", "H_HelmetCrew_B", "H_HelmetO_ocamo", "H_HelmetO_ghex_F", "H_HelmetO_oucamo", "H_HelmetCrew_O"};

		/*
			Percental Item Spawn Chances of EpicHeadgear:

			H_CrewHelmetHeli_B     = 5.56%
			H_CrewHelmetHeli_I     = 5.56%
			H_CrewHelmetHeli_O     = 5.56%
			H_PilotHelmetFighter_B = 5.56%
			H_PilotHelmetFighter_I = 5.56%
			H_PilotHelmetFighter_O = 5.56%
			H_HelmetSpecO_ghex_F   = 5.56%
			H_HelmetSpecB          = 5.56%
			H_HelmetSpecB_blk      = 5.56%
			H_HelmetSpecB_paint1   = 5.56%
			H_HelmetSpecB_paint2   = 5.56%
			H_HelmetB_TI_tna_F     = 5.56%
			H_HelmetSpecO_blk      = 5.56%
			H_HelmetSpecO_ocamo    = 5.56%
			H_HelmetB_Enh_tna_F    = 5.56%
			H_HelmetLeaderO_ocamo  = 5.56%
			H_HelmetLeaderO_oucamo = 5.56%
			H_HelmetLeaderO_ghex_F = 5.56%
		*/
		EpicHeadgear[] = {"H_HelmetSpecO_blk", "H_HelmetLeaderO_oucamo", "H_HelmetSpecO_ghex_F", "H_CrewHelmetHeli_O", "H_HelmetSpecB", "H_HelmetSpecB_blk", "H_HelmetLeaderO_ghex_F", "H_PilotHelmetFighter_B", "H_HelmetB_TI_tna_F", "H_HelmetSpecB_paint1", "H_HelmetSpecO_ocamo", "H_PilotHelmetFighter_I", "H_HelmetB_Enh_tna_F", "H_CrewHelmetHeli_I", "H_PilotHelmetFighter_O", "H_HelmetSpecB_paint2", "H_HelmetLeaderO_ocamo", "H_CrewHelmetHeli_B"};

		/*
			Percental Item Spawn Chances of Explosives:

			APERSTripMine_Wire_Mag = 100.00%
		*/
		Explosives[] = {"APERSTripMine_Wire_Mag"};

		/*
			Percental Item Spawn Chances of Binoculars:

			Binocular = 100.00%
		*/
		Binoculars[] = {"Binocular"};

		/*
			Percental Item Spawn Chances of UselessBackpacks:

			B_HuntingBackpack = 25.00%
			B_OutdoorPack_blk = 25.00%
			B_OutdoorPack_blu = 25.00%
			B_OutdoorPack_tan = 25.00%
		*/
		UselessBackpacks[] = {"B_HuntingBackpack", "B_OutdoorPack_blk", "B_OutdoorPack_tan", "B_OutdoorPack_blu"};

		/*
			Percental Item Spawn Chances of ShittyBackpacks:

			B_AssaultPack_blk   = 12.50%
			B_AssaultPack_cbr   = 12.50%
			B_AssaultPack_dgtl  = 12.50%
			B_AssaultPack_khk   = 12.50%
			B_AssaultPack_mcamo = 12.50%
			B_AssaultPack_rgr   = 12.50%
			B_AssaultPack_sgg   = 12.50%
			B_AssaultPack_tna_F = 12.50%
		*/
		ShittyBackpacks[] = {"B_AssaultPack_sgg", "B_AssaultPack_mcamo", "B_AssaultPack_tna_F", "B_AssaultPack_dgtl", "B_AssaultPack_khk", "B_AssaultPack_rgr", "B_AssaultPack_blk", "B_AssaultPack_cbr"};

		/*
			Percental Item Spawn Chances of OkayBackpacks:

			B_FieldPack_blk    = 20.00%
			B_FieldPack_cbr    = 20.00%
			B_FieldPack_ghex_F = 20.00%
			B_FieldPack_ocamo  = 20.00%
			B_FieldPack_oucamo = 20.00%
		*/
		OkayBackpacks[] = {"B_FieldPack_oucamo", "B_FieldPack_blk", "B_FieldPack_cbr", "B_FieldPack_ghex_F", "B_FieldPack_ocamo"};

		/*
			Percental Item Spawn Chances of UsefulBackpacks:

			B_ViperLightHarness_blk_F  = 20.00%
			B_ViperLightHarness_ghex_F = 20.00%
			B_ViperLightHarness_hex_F  = 20.00%
			B_ViperLightHarness_khk_F  = 20.00%
			B_ViperLightHarness_oli_F  = 20.00%
		*/
		UsefulBackpacks[] = {"B_ViperLightHarness_khk_F", "B_ViperLightHarness_hex_F", "B_ViperLightHarness_blk_F", "B_ViperLightHarness_oli_F", "B_ViperLightHarness_ghex_F"};

		/*
			Percental Item Spawn Chances of GoodBackpacks:

			B_Bergen_blk          = 8.33%
			B_Bergen_mcamo        = 8.33%
			B_Bergen_rgr          = 8.33%
			B_Bergen_sgg          = 8.33%
			B_Kitbag_cbr          = 8.33%
			B_Kitbag_mcamo        = 8.33%
			B_Kitbag_sgg          = 8.33%
			B_ViperHarness_blk_F  = 8.33%
			B_ViperHarness_ghex_F = 8.33%
			B_ViperHarness_hex_F  = 8.33%
			B_ViperHarness_khk_F  = 8.33%
			B_ViperHarness_oli_F  = 8.33%
		*/
		GoodBackpacks[] = {"B_Kitbag_sgg", "B_Kitbag_mcamo", "B_Bergen_sgg", "B_Bergen_rgr", "B_ViperHarness_hex_F", "B_ViperHarness_khk_F", "B_ViperHarness_blk_F", "B_ViperHarness_ghex_F", "B_Bergen_mcamo", "B_ViperHarness_oli_F", "B_Kitbag_cbr", "B_Bergen_blk"};

		/*
			Percental Item Spawn Chances of NiceBackpacks:

			B_Carryall_cbr    = 14.29%
			B_Carryall_ghex_F = 14.29%
			B_Carryall_khk    = 14.29%
			B_Carryall_mcamo  = 14.29%
			B_Carryall_ocamo  = 14.29%
			B_Carryall_oli    = 14.29%
			B_Carryall_oucamo = 14.29%
		*/
		NiceBackpacks[] = {"B_Carryall_mcamo", "B_Carryall_ocamo", "B_Carryall_oucamo", "B_Carryall_ghex_F", "B_Carryall_khk", "B_Carryall_cbr", "B_Carryall_oli"};

		/*
			Percental Item Spawn Chances of EpicBackpacks:

			B_Bergen_dgtl_F  = 25.00%
			B_Bergen_hex_F   = 25.00%
			B_Bergen_mcamo_F = 25.00%
			B_Bergen_tna_F   = 25.00%
		*/
		EpicBackpacks[] = {"B_Bergen_tna_F", "B_Bergen_mcamo_F", "B_Bergen_hex_F", "B_Bergen_dgtl_F"};
	};
};

