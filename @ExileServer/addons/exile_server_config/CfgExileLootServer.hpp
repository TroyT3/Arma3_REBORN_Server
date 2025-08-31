class CfgExileLootServer
{
	class LootTables
	{

		/*
			Percental Item Group Spawn Chances of CivillianLowerClass:

			Restraints        = 0.68%
			RoadFlares        = 2.70%
			PistolAttachments = 1.35%
			RifleAmmo         = 1.35%
			RifleAttachments  = 1.35%
			Rifles            = 1.35%
			SMGAttachments    = 1.35%
			Shotguns          = 2.03%
			SMG               = 2.03%
			CivilianVests     = 2.70%
			SMGAmmo           = 2.70%
			ShotgunAmmo       = 4.05%
			Pistols           = 4.05%
			PistolAmmo        = 5.41%
			Chemlights        = 4.05%
			CivilianItems     = 4.05%
			Drinks            = 5.41%
			CivilianBackpacks = 5.41%
			CivilianClothing  = 10.14%
			CivilianHeadgear  = 10.14%
			Food              = 13.51%
			Trash             = 14.19%
		*/
		CivillianLowerClass[] = {"SMG", "CivilianBackpacks", "CivilianHeadgear", "CivilianItems", "Food", "CivilianClothing", "CivilianBackpacks", "CivilianClothing", "CivilianClothing", "CivilianHeadgear", "Food", "SMGAttachments", "CivilianClothing", "CivilianClothing", "CivilianHeadgear", "CivilianItems", "CivilianHeadgear", "Shotguns", "PistolAmmo", "Trash", "CivilianBackpacks", "Chemlights", "Trash", "CivilianHeadgear", "ShotgunAmmo", "Trash", "Food", "CivilianClothing", "Pistols", "CivilianClothing", "ShotgunAmmo", "PistolAmmo", "RifleAttachments", "CivilianHeadgear", "CivilianClothing", "RoadFlares", "SMGAmmo", "CivilianHeadgear", "SMGAmmo", "Drinks", "CivilianHeadgear", "RifleAmmo", "Trash", "Trash", "Trash", "Food", "SMG", "Food", "CivilianBackpacks", "Food", "CivilianBackpacks", "Trash", "CivilianClothing", "Trash", "CivilianHeadgear", "Trash", "Food", "Chemlights", "PistolAttachments", "Chemlights", "Food", "Pistols", "CivilianHeadgear", "Food", "Food", "CivilianItems", "CivilianClothing", "RifleAmmo", "CivilianHeadgear", "Trash", "Drinks", "CivilianItems", "Food", "CivilianVests", "Drinks", "RoadFlares", "Trash", "CivilianHeadgear", "Food", "CivilianClothing", "Trash", "CivilianClothing", "CivilianItems", "CivilianHeadgear", "Trash", "Trash", "Trash", "Drinks", "Trash", "Drinks", "Food", "CivilianItems", "RifleAttachments", "SMG", "ShotgunAmmo", "Food", "CivilianVests", "CivilianClothing", "Pistols", "Rifles", "Chemlights", "Pistols", "SMGAmmo", "Food", "SMGAmmo", "Trash", "Trash", "PistolAttachments", "Chemlights", "CivilianBackpacks", "Food", "Rifles", "Drinks", "CivilianVests", "RoadFlares", "PistolAmmo", "ShotgunAmmo", "CivilianBackpacks", "Food", "PistolAmmo", "Restraints", "Food", "Drinks", "Drinks", "PistolAmmo", "Trash", "SMGAttachments", "Food", "PistolAmmo", "Pistols", "CivilianClothing", "ShotgunAmmo", "CivilianClothing", "CivilianHeadgear", "CivilianVests", "Trash", "Chemlights", "RoadFlares", "Trash", "CivilianBackpacks", "PistolAmmo", "Shotguns", "CivilianHeadgear", "Pistols", "PistolAmmo", "Shotguns", "Food", "ShotgunAmmo"};

		/*
			Percental Item Group Spawn Chances of CivillianUpperClass:

			Restraints        = 0.55%
			PistolAttachments = 1.66%
			RifleAmmo         = 1.66%
			RifleAttachments  = 1.66%
			Rifles            = 1.66%
			SMGAttachments    = 1.66%
			Shotguns          = 2.21%
			SMG               = 2.21%
			CivilianVests     = 2.76%
			SMGAmmo           = 3.31%
			ShotgunAmmo       = 4.42%
			RoadFlares        = 4.42%
			Pistols           = 4.42%
			PistolAmmo        = 5.52%
			Chemlights        = 5.52%
			CivilianItems     = 5.52%
			Drinks            = 5.52%
			CivilianBackpacks = 6.08%
			CivilianClothing  = 8.29%
			CivilianHeadgear  = 8.29%
			Food              = 11.05%
			Trash             = 11.60%
		*/
		CivillianUpperClass[] = {"Food", "CivilianClothing", "CivilianClothing", "RoadFlares", "Pistols", "RifleAttachments", "CivilianItems", "Chemlights", "Chemlights", "CivilianItems", "PistolAmmo", "CivilianVests", "Drinks", "RifleAttachments", "Trash", "Food", "SMG", "CivilianBackpacks", "SMGAttachments", "CivilianHeadgear", "CivilianClothing", "Drinks", "Shotguns", "ShotgunAmmo", "SMGAttachments", "Drinks", "CivilianItems", "RifleAttachments", "Trash", "RoadFlares", "CivilianClothing", "CivilianHeadgear", "CivilianItems", "CivilianVests", "CivilianVests", "CivilianClothing", "Chemlights", "Trash", "CivilianItems", "Food", "CivilianBackpacks", "Drinks", "SMG", "Trash", "RifleAmmo", "Drinks", "SMG", "Shotguns", "SMGAmmo", "Chemlights", "Drinks", "PistolAmmo", "Food", "CivilianVests", "Trash", "Trash", "CivilianItems", "CivilianBackpacks", "CivilianBackpacks", "CivilianBackpacks", "Trash", "ShotgunAmmo", "Food", "Rifles", "Trash", "Food", "Food", "CivilianHeadgear", "Food", "CivilianHeadgear", "Chemlights", "CivilianClothing", "CivilianClothing", "ShotgunAmmo", "Trash", "ShotgunAmmo", "Trash", "Rifles", "PistolAmmo", "CivilianHeadgear", "Food", "CivilianItems", "Food", "CivilianBackpacks", "Food", "CivilianHeadgear", "Trash", "CivilianHeadgear", "CivilianClothing", "Pistols", "Trash", "Chemlights", "Food", "RoadFlares", "RoadFlares", "CivilianClothing", "ShotgunAmmo", "SMGAmmo", "RoadFlares", "Trash", "SMGAmmo", "Food", "SMGAttachments", "Food", "CivilianItems", "RoadFlares", "Trash", "Food", "CivilianClothing", "CivilianBackpacks", "Shotguns", "RifleAmmo", "Chemlights", "CivilianBackpacks", "CivilianItems", "Pistols", "Trash", "Trash", "CivilianHeadgear", "CivilianHeadgear", "Chemlights", "Drinks", "Pistols", "PistolAttachments", "SMGAmmo", "ShotgunAmmo", "CivilianHeadgear", "PistolAmmo", "Chemlights", "CivilianHeadgear", "Pistols", "Trash", "CivilianVests", "PistolAmmo", "PistolAmmo", "SMGAmmo", "ShotgunAmmo", "RoadFlares", "Trash", "Food", "CivilianHeadgear", "Rifles", "PistolAmmo", "Drinks", "Drinks", "Food", "SMG", "Trash", "Trash", "Shotguns", "Restraints", "CivilianHeadgear", "Pistols", "CivilianBackpacks", "PistolAmmo", "CivilianClothing", "RoadFlares", "PistolAmmo", "Food", "Chemlights", "Pistols", "CivilianClothing", "SMGAmmo", "CivilianClothing", "CivilianBackpacks", "Trash", "PistolAttachments", "CivilianHeadgear", "CivilianClothing", "CivilianClothing", "CivilianBackpacks", "Pistols", "PistolAmmo", "Food", "PistolAttachments", "RifleAmmo", "Drinks", "CivilianHeadgear", "CivilianItems", "ShotgunAmmo", "Food"};

		/*
			Percental Item Group Spawn Chances of Shop:

			CivilianClothing  = 0.81%
			CivilianVests     = 0.81%
			PistolAttachments = 0.81%
			ShotgunAmmo       = 2.44%
			SMGAmmo           = 2.44%
			SMGAttachments    = 0.81%
			PistolAmmo        = 4.88%
			CivilianHeadgear  = 2.44%
			IndustrialItems   = 2.44%
			MedicalItems      = 2.44%
			Restraints        = 2.44%
			Shotguns          = 3.25%
			SmokeGrenades     = 3.25%
			Chemlights        = 4.07%
			CivilianBackpacks = 4.07%
			RoadFlares        = 4.07%
			SMG               = 4.07%
			CivilianItems     = 5.69%
			Pistols           = 8.13%
			Drinks            = 12.20%
			Food              = 12.20%
			Trash             = 16.26%
		*/
		Shop[] = {"IndustrialItems", "Drinks", "SMGAttachments", "MedicalItems", "SmokeGrenades", "Pistols", "Pistols", "Trash", "Pistols", "Trash", "PistolAttachments", "Pistols", "CivilianItems", "CivilianBackpacks", "Drinks", "Food", "Pistols", "SMG", "RoadFlares", "Pistols", "RoadFlares", "ShotgunAmmo", "Trash", "Trash", "PistolAmmo", "PistolAmmo", "CivilianItems", "RoadFlares", "Food", "SmokeGrenades", "Drinks", "CivilianItems", "Food", "Food", "Trash", "Food", "Trash", "Food", "Pistols", "ShotgunAmmo", "CivilianVests", "CivilianBackpacks", "PistolAmmo", "RoadFlares", "Food", "ShotgunAmmo", "Trash", "MedicalItems", "RoadFlares", "IndustrialItems", "Drinks", "CivilianHeadgear", "Drinks", "Shotguns", "Drinks", "CivilianBackpacks", "CivilianBackpacks", "Trash", "PistolAmmo", "Food", "Trash", "Chemlights", "Restraints", "Drinks", "SMG", "Drinks", "SMGAmmo", "CivilianBackpacks", "Food", "PistolAmmo", "Drinks", "Trash", "Food", "SMGAmmo", "Pistols", "Shotguns", "Drinks", "SmokeGrenades", "SmokeGrenades", "Drinks", "Trash", "SMG", "Drinks", "Chemlights", "Food", "Drinks", "Shotguns", "CivilianItems", "Chemlights", "CivilianItems", "Trash", "Pistols", "Drinks", "Drinks", "Trash", "Food", "SMG", "Trash", "PistolAmmo", "Pistols", "Food", "IndustrialItems", "Trash", "Chemlights", "Food", "SMGAmmo", "Trash", "CivilianClothing", "Shotguns", "Restraints", "SMG", "CivilianHeadgear", "Trash", "CivilianHeadgear", "CivilianItems", "Chemlights", "CivilianItems", "Trash", "Restraints", "Trash", "MedicalItems", "Trash", "Food"};

		/*
			Percental Item Group Spawn Chances of Industrial:

			BaseParts       = 4.17%
			Restraints      = 2.08%
			Pistols         = 2.08%
			RifleAmmo       = 2.08%
			PistolAmmo      = 2.08%
			ShotgunAmmo     = 2.08%
			RoadFlares      = 6.25%
			Vehicle         = 20.83%
			Trash           = 25.00%
			IndustrialItems = 33.33%
		*/
		Industrial[] = {"RifleAmmo", "ShotgunAmmo", "IndustrialItems", "Trash", "IndustrialItems", "Vehicle", "IndustrialItems", "Trash", "IndustrialItems", "IndustrialItems", "Vehicle", "Trash", "IndustrialItems", "BaseParts", "Restraints", "RoadFlares", "Vehicle", "Vehicle", "Trash", "Trash", "IndustrialItems", "Pistols", "IndustrialItems", "Trash", "Trash", "RoadFlares", "IndustrialItems", "BaseParts", "Vehicle", "Trash", "Trash", "Vehicle", "Trash", "Vehicle", "IndustrialItems", "IndustrialItems", "Vehicle", "Trash", "Trash", "IndustrialItems", "RoadFlares", "Vehicle", "IndustrialItems", "Vehicle", "IndustrialItems", "IndustrialItems", "IndustrialItems", "PistolAmmo"};

		/*
			Percental Item Group Spawn Chances of Factories:

			BaseParts       = 9.52%
			Electronics     = 4.76%
			PistolAmmo      = 4.76%
			ShotgunAmmo     = 4.76%
			RifleAmmo       = 4.76%
			Trash           = 28.57%
			IndustrialItems = 42.86%
		*/
		Factories[] = {"RifleAmmo", "BaseParts", "IndustrialItems", "PistolAmmo", "IndustrialItems", "IndustrialItems", "Trash", "IndustrialItems", "Trash", "Electronics", "ShotgunAmmo", "IndustrialItems", "Trash", "IndustrialItems", "BaseParts", "IndustrialItems", "Trash", "Trash", "IndustrialItems", "IndustrialItems", "Trash"};

		/*
			Percental Item Group Spawn Chances of VehicleService:

			Pistols         = 3.13%
			Restraints      = 3.13%
			RifleAmmo       = 3.13%
			PistolAmmo      = 3.13%
			ShotgunAmmo     = 3.13%
			RoadFlares      = 6.25%
			IndustrialItems = 25.00%
			Trash           = 21.88%
			Vehicle         = 31.25%
		*/
		VehicleService[] = {"IndustrialItems", "Trash", "RoadFlares", "IndustrialItems", "Vehicle", "IndustrialItems", "Trash", "Trash", "IndustrialItems", "RifleAmmo", "IndustrialItems", "Trash", "Vehicle", "RoadFlares", "Vehicle", "ShotgunAmmo", "Vehicle", "Trash", "Vehicle", "IndustrialItems", "PistolAmmo", "Trash", "Trash", "Pistols", "IndustrialItems", "Vehicle", "Vehicle", "Vehicle", "IndustrialItems", "Vehicle", "Restraints", "Vehicle"};

		/*
			Percental Item Group Spawn Chances of Military:

			Launchers         = 0.51%
			LauncherAmmo      = 0.51%
			DLCGhillies       = 0.51%
			Ghillies          = 0.51%
			Rebreathers       = 0.51%
			Bipods            = 1.02%
			DLCAmmo           = 4.06%
			DLCOptics         = 1.02%
			DLCSupressor      = 1.02%
			LMGAmmo           = 3.05%
			MedicalItems      = 1.02%
			Restraints        = 1.02%
			SniperAmmo        = 4.06%
			SniperAttachments = 1.02%
			DLCRifles         = 1.52%
			DLCVests          = 1.52%
			GuerillaHeadgear  = 1.52%
			GuerillaVests     = 1.52%
			HandGrenades      = 1.52%
			HEGrenades        = 1.52%
			MilitaryBackpacks = 1.52%
			MilitaryHeadgear  = 1.52%
			MilitaryVests     = 1.52%
			RifleAmmo         = 5.08%
			RifleAttachments  = 1.52%
			SmokeGrenades     = 1.52%
			Snipers           = 1.52%
			UGLFlares         = 1.52%
			UGLSmokes         = 1.52%
			CivilianItems     = 2.03%
			GuerillaBackpacks = 2.03%
			GuerillaItems     = 2.03%
			LMG               = 2.03%
			Explosives        = 2.54%
			GuerillaClothing  = 2.54%
			MilitaryClothing  = 2.54%
			Rifles            = 2.54%
			Trash             = 35.53%
		*/
		Military[] = {"DLCRifles", "Trash", "DLCSupressor", "GuerillaBackpacks", "Trash", "Trash", "Trash", "SniperAmmo", "Trash", "RifleAmmo", "UGLFlares", "GuerillaClothing", "MilitaryBackpacks", "Trash", "RifleAmmo", "DLCAmmo", "Trash", "GuerillaClothing", "Trash", "SniperAmmo", "SniperAmmo", "MilitaryBackpacks", "Trash", "Trash", "Trash", "DLCAmmo", "Trash", "CivilianItems", "MilitaryBackpacks", "SmokeGrenades", "Trash", "Trash", "MilitaryVests", "Trash", "DLCOptics", "Restraints", "GuerillaHeadgear", "Trash", "MilitaryClothing", "Trash", "GuerillaItems", "Trash", "SniperAttachments", "HEGrenades", "DLCAmmo", "Trash", "RifleAmmo", "Trash", "UGLSmokes", "Trash", "UGLSmokes", "Trash", "DLCOptics", "HandGrenades", "LMGAmmo", "MilitaryClothing", "SniperAttachments", "DLCAmmo", "HandGrenades", "Trash", "GuerillaClothing", "Trash", "RifleAmmo", "Trash", "RifleAmmo", "Bipods", "MilitaryVests", "DLCAmmo", "Trash", "Trash", "Trash", "DLCAmmo", "GuerillaVests", "Explosives", "DLCRifles", "HandGrenades", "Trash", "MilitaryHeadgear", "MedicalItems", "Rifles", "LMGAmmo", "GuerillaItems", "Trash", "DLCVests", "Trash", "LMGAmmo", "Snipers", "Trash", "Trash", "DLCVests", "SmokeGrenades", "Explosives", "RifleAmmo", "DLCGhillies", "Trash", "Rifles", "Trash", "MedicalItems", "SniperAmmo", "GuerillaVests", "Trash", "SmokeGrenades", "Rifles", "Explosives", "RifleAttachments", "Trash", "Trash", "Trash", "LMG", "UGLFlares", "Trash", "MilitaryVests", "Trash", "Trash", "Trash", "LMG", "Trash", "GuerillaItems", "Trash", "DLCRifles", "Trash", "Trash", "GuerillaClothing", "GuerillaHeadgear", "Trash", "Trash", "DLCAmmo", "Trash", "DLCSupressor", "RifleAmmo", "Trash", "RifleAmmo", "GuerillaHeadgear", "SniperAmmo", "Trash", "Trash", "MilitaryClothing", "HEGrenades", "HEGrenades", "CivilianItems", "Snipers", "RifleAttachments", "GuerillaBackpacks", "Trash", "MilitaryClothing", "Restraints", "RifleAmmo", "Rifles", "GuerillaItems", "Bipods", "LauncherAmmo", "SniperAmmo", "Rifles", "Trash", "MilitaryClothing", "LMG", "Trash", "SniperAmmo", "GuerillaBackpacks", "LMGAmmo", "Trash", "CivilianItems", "Trash", "Trash", "Rebreathers", "Ghillies", "Trash", "RifleAmmo", "UGLFlares", "Trash", "Trash", "Trash", "DLCAmmo", "RifleAttachments", "Launchers", "MilitaryHeadgear", "MilitaryHeadgear", "Trash", "LMG", "Trash", "Trash", "Explosives", "DLCVests", "Trash", "SniperAmmo", "CivilianItems", "Explosives", "LMGAmmo", "Trash", "Snipers", "GuerillaBackpacks", "Trash", "GuerillaVests", "UGLSmokes", "LMGAmmo", "GuerillaClothing", "Trash"};

		/*
			Percental Item Group Spawn Chances of Medical:

			Pistols      = 9.09%
			Trash        = 27.27%
			MedicalItems = 63.64%
		*/
		Medical[] = {"MedicalItems", "Pistols", "MedicalItems", "MedicalItems", "MedicalItems", "Trash", "MedicalItems", "Trash", "MedicalItems", "MedicalItems", "Trash"};

		/*
			Percental Item Group Spawn Chances of Tourist:

			DLCAmmo           = 7.69%
			DLCOptics         = 1.92%
			DLCSupressor      = 1.92%
			SniperAmmo        = 9.62%
			SniperAttachments = 1.92%
			CivilianItems     = 3.85%
			Explosives        = 3.85%
			HandGrenades      = 3.85%
			MedicalItems      = 3.85%
			Restraints        = 3.85%
			DLCGhillies       = 5.77%
			Ghillies          = 5.77%
			MilitaryBackpacks = 7.69%
			MilitaryHeadgear  = 7.69%
			DLCRifles         = 15.38%
			Snipers           = 15.38%
		*/
		Tourist[] = {"SniperAmmo", "SniperAmmo", "CivilianItems", "DLCRifles", "CivilianItems", "MilitaryHeadgear", "DLCRifles", "DLCRifles", "Ghillies", "HandGrenades", "MedicalItems", "DLCRifles", "Ghillies", "DLCRifles", "Snipers", "Snipers", "Snipers", "DLCRifles", "DLCGhillies", "Snipers", "Restraints", "DLCAmmo", "DLCAmmo", "DLCRifles", "MilitaryBackpacks", "MilitaryBackpacks", "Snipers", "SniperAttachments", "SniperAmmo", "HandGrenades", "MilitaryBackpacks", "DLCAmmo", "MilitaryHeadgear", "Ghillies", "SniperAmmo", "DLCSupressor", "MilitaryBackpacks", "Snipers", "Snipers", "DLCGhillies", "DLCRifles", "Explosives", "MilitaryHeadgear", "Snipers", "MedicalItems", "Restraints", "Explosives", "MilitaryHeadgear", "SniperAmmo", "DLCGhillies", "DLCAmmo", "DLCOptics"};

		/*
			Percental Item Group Spawn Chances of Radiation:

			DLCAmmo           = 6.25%
			DLCOptics         = 2.08%
			DLCSupressor      = 2.08%
			SniperAmmo        = 6.25%
			SniperAttachments = 2.08%
			EpicWeapons       = 4.17%
			HandGrenades      = 4.17%
			MedicalItems      = 4.17%
			Restraints        = 4.17%
			DLCGhillies       = 6.25%
			Ghillies          = 6.25%
			Explosives        = 10.42%
			MilitaryBackpacks = 10.42%
			MilitaryHeadgear  = 10.42%
			DLCRifles         = 10.42%
			Snipers           = 10.42%
		*/
		Radiation[] = {"MilitaryBackpacks", "SniperAmmo", "DLCGhillies", "Ghillies", "MilitaryHeadgear", "Ghillies", "Restraints", "EpicWeapons", "MilitaryHeadgear", "DLCOptics", "MedicalItems", "Explosives", "DLCSupressor", "MilitaryBackpacks", "Snipers", "DLCRifles", "DLCRifles", "SniperAmmo", "SniperAttachments", "MilitaryBackpacks", "MedicalItems", "DLCRifles", "MilitaryBackpacks", "MilitaryHeadgear", "HandGrenades", "Restraints", "Explosives", "Explosives", "Ghillies", "Snipers", "SniperAmmo", "DLCAmmo", "Snipers", "DLCRifles", "DLCRifles", "DLCAmmo", "MilitaryHeadgear", "HandGrenades", "Explosives", "Snipers", "MilitaryHeadgear", "EpicWeapons", "DLCGhillies", "DLCAmmo", "Snipers", "DLCGhillies", "MilitaryBackpacks", "Explosives"};
	};

	class ItemGroups
	{

		/*
			Percental Item Spawn Chances of Food:

			Exile_Item_BeefParts                = 10.87%
			BSF_Carla_Cane                      = 2.17%
			Exile_Item_EMRE                     = 2.17%
			Exile_Item_GloriousKnakworst        = 2.17%
			Exile_Item_GloriousKnakworst_Cooked = 2.17%
			Exile_Item_Surstromming             = 2.17%
			Exile_Item_Surstromming_Cooked      = 2.17%
			Exile_Item_SausageGravy             = 2.17%
			Exile_Item_SausageGravy_Cooked      = 2.17%
			Exile_Item_Catfood                  = 2.17%
			Exile_Item_Catfood_Cooked           = 2.17%
			Exile_Item_ChristmasTinner          = 2.17%
			Exile_Item_ChristmasTinner_Cooked   = 2.17%
			Exile_Item_BBQSandwich              = 2.17%
			Exile_Item_BBQSandwich_Cooked       = 2.17%
			Exile_Item_DsNuts                   = 2.17%
			Exile_Item_CockONut                 = 2.17%
			Exile_Item_MacasCheese              = 2.17%
			Exile_Item_MacasCheese_Cooked       = 2.17%
			Exile_Item_Dogfood                  = 2.17%
			Exile_Item_Dogfood_Cooked           = 2.17%
			Exile_Item_Cheathas                 = 2.17%
			Exile_Item_Noodles                  = 2.17%
			Exile_Item_SeedAstics               = 2.17%
			Exile_Item_Raisins                  = 2.17%
			Exile_Item_Moobar                   = 2.17%
			Exile_Item_InstantCoffee            = 2.17%
			Exile_Item_SheepSteak_Cooked        = 2.17%
			Exile_Item_AlsatianSteak_Cooked     = 2.17%
			Exile_Item_CatSharkFilet_Cooked     = 2.17%
			Exile_Item_FinSteak_Cooked          = 2.17%
			Exile_Item_GoatSteak_Cooked         = 2.17%
			Exile_Item_TurtleFilet_Cooked       = 2.17%
			Exile_Item_TunaFilet_Cooked         = 2.17%
			Exile_Item_RabbitSteak_Cooked       = 2.17%
			Exile_Item_ChickenFilet_Cooked      = 2.17%
			Exile_Item_RoosterFilet_Cooked      = 2.17%
			Exile_Item_MulletFilet_Cooked       = 2.17%
			Exile_Item_SalemaFilet_Cooked       = 2.17%
			Exile_Item_MackerelFilet_Cooked     = 2.17%
			Exile_Item_OrnateFilet_Cooked       = 2.17%
			Exile_Item_SnakeFilet_Cooked1       = 2.17%
		*/
		Food[] = {"Exile_Item_RabbitSteak_Cooked", "Exile_Item_ChristmasTinner_Cooked", "Exile_Item_GloriousKnakworst_Cooked", "Exile_Item_Catfood_Cooked", "Exile_Item_MulletFilet_Cooked", "Exile_Item_Surstromming_Cooked", "Exile_Item_SausageGravy_Cooked", "Exile_Item_DsNuts", "Exile_Item_MacasCheese_Cooked", "Exile_Item_Catfood", "Exile_Item_BeefParts", "Exile_Item_Dogfood", "Exile_Item_TurtleFilet_Cooked", "Exile_Item_BeefParts", "Exile_Item_ChristmasTinner", "Exile_Item_BeefParts", "Exile_Item_BeefParts", "Exile_Item_Cheathas", "Exile_Item_AlsatianSteak_Cooked", "Exile_Item_OrnateFilet_Cooked", "Exile_Item_BBQSandwich", "Exile_Item_Raisins", "Exile_Item_SheepSteak_Cooked", "Exile_Item_SeedAstics", "Exile_Item_FinSteak_Cooked", "Exile_Item_SalemaFilet_Cooked", "Exile_Item_Moobar", "Exile_Item_MacasCheese", "Exile_Item_Surstromming", "Exile_Item_GloriousKnakworst", "Exile_Item_MackerelFilet_Cooked", "Exile_Item_BBQSandwich_Cooked", "Exile_Item_RoosterFilet_Cooked", "Exile_Item_CatSharkFilet_Cooked", "Exile_Item_InstantCoffee", "Exile_Item_GoatSteak_Cooked", "Exile_Item_ChickenFilet_Cooked", "Exile_Item_Noodles", "Exile_Item_EMRE", "Exile_Item_SnakeFilet_Cooked1", "Exile_Item_CockONut", "BSF_Carla_Cane", "Exile_Item_Dogfood_Cooked", "Exile_Item_TunaFilet_Cooked", "Exile_Item_SausageGravy", "Exile_Item_BeefParts"};

		/*
			Percental Item Spawn Chances of Drinks:

			BSF_Item_Canteen_WaterDirty        = 10.00%
			BSF_Item_Canteen_Empty             = 10.00%
			BSF_Item_Canteen_Coffee            = 5.00%
			Exile_Item_Beer                    = 5.00%
			Exile_Item_PlasticBottleCoffee     = 5.00%
			Exile_Item_EnergyDrink             = 5.00%
			Exile_Item_PlasticBottleFreshWater = 5.00%
			Exile_Item_PowerDrink              = 5.00%
			Exile_Item_MountainDupe            = 10.00%
			Exile_Item_ChocolateMilk           = 15.00%
			Exile_Item_PlasticBottleDirtyWater = 25.00%
		*/
		Drinks[] = {"Exile_Item_MountainDupe", "Exile_Item_ChocolateMilk", "BSF_Item_Canteen_Empty", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_ChocolateMilk", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_MountainDupe", "BSF_Item_Canteen_Empty", "Exile_Item_PlasticBottleDirtyWater", "BSF_Item_Canteen_WaterDirty", "Exile_Item_PlasticBottleFreshWater", "Exile_Item_Beer", "BSF_Item_Canteen_WaterDirty", "Exile_Item_PlasticBottleCoffee", "Exile_Item_PowerDrink", "BSF_Item_Canteen_Coffee", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_EnergyDrink", "Exile_Item_ChocolateMilk"};

		/*
			Percental Item Spawn Chances of Pistols:

			rhs_weap_pya                 = 2.94%
			rhsusf_weap_glock17g4        = 2.94%
			rhsusf_weap_m9               = 2.94%
			rhsusf_weap_m1911a1          = 2.94%
			rhs_weap_M320                = 2.94%
			rhs_weap_6p53                = 2.94%
			rhs_weap_tt33                = 2.94%
			rhs_weap_type94_new          = 2.94%
			rhs_weap_pp2000_folded       = 2.94%
			rhs_weap_cz99                = 2.94%
			rhs_weap_cz99_etched1        = 2.94%
			bnae_l35_virtual             = 2.94%
			bnae_l35_c_virtual           = 2.94%
			bnae_r1_t_virtual            = 2.94%
			bnae_r1_m_virtual            = 2.94%
			bnae_saa_virtual             = 2.94%
			bnae_saa_c_virtual           = 2.94%
			bnae_r1_virtual              = 2.94%
			bnae_r1_e_virtual            = 2.94%
			bnae_r1_c_virtual            = 2.94%
			Exile_Weapon_Colt1911        = 2.94%
			Exile_Weapon_Makarov         = 2.94%
			Exile_Weapon_Taurus          = 2.94%
			Exile_Weapon_TaurusGold      = 2.94%
			hgun_P07_khk_F               = 2.94%
			hgun_Pistol_01_F             = 2.94%
			hgun_Pistol_heavy_01_F       = 2.94%
			hgun_Pistol_heavy_01_green_F = 2.94%
			hgun_Pistol_heavy_02_F       = 2.94%
			hgun_Pistol_Signal_F         = 2.94%
			hgun_ACPC2_F                 = 2.94%
			hgun_P07_F                   = 2.94%
			hgun_Rook40_F                = 2.94%
			Exile_Weapon_SA61            = 2.94%
		*/
		Pistols[] = {"rhsusf_weap_m9", "rhsusf_weap_m1911a1", "hgun_ACPC2_F", "rhs_weap_tt33", "rhs_weap_6p53", "bnae_r1_e_virtual", "hgun_Rook40_F", "rhs_weap_pp2000_folded", "rhs_weap_pya", "bnae_saa_c_virtual", "hgun_Pistol_01_F", "rhs_weap_cz99", "rhsusf_weap_glock17g4", "bnae_saa_virtual", "bnae_l35_c_virtual", "hgun_Pistol_heavy_01_F", "Exile_Weapon_Colt1911", "rhs_weap_type94_new", "bnae_r1_t_virtual", "bnae_r1_c_virtual", "hgun_Pistol_heavy_01_green_F", "bnae_l35_virtual", "Exile_Weapon_Taurus", "bnae_r1_m_virtual", "bnae_r1_virtual", "Exile_Weapon_SA61", "rhs_weap_cz99_etched1", "Exile_Weapon_Makarov", "rhs_weap_M320", "hgun_P07_F", "hgun_Pistol_Signal_F", "Exile_Weapon_TaurusGold", "hgun_P07_khk_F", "hgun_Pistol_heavy_02_F"};

		/*
			Percental Item Spawn Chances of PistolAmmo:

			rhs_mag_9x19_17                  = 1.79%
			rhsusf_mag_17Rnd_9x19_FMJ        = 1.79%
			rhsusf_mag_15Rnd_9x19_FMJ        = 1.79%
			rhsusf_mag_7x45acp_MHP           = 1.79%
			rhs_18rnd_9x21mm_7N28            = 1.79%
			rhs_mag_762x25_8                 = 1.79%
			rhs_mag_6x8mm_mhp                = 1.79%
			rhs_mag_9x19mm_7n21_20           = 7.14%
			rhssaf_mag_15Rnd_9x19_FMJ        = 1.79%
			8Rnd_9x19_Magazine               = 1.79%
			8Rnd_45ACP_Magazine              = 1.79%
			6Rnd_357M_Magazine               = 1.79%
			Exile_Magazine_7Rnd_45ACP        = 7.14%
			Exile_Magazine_8Rnd_9x18         = 7.14%
			Exile_Magazine_6Rnd_45ACP        = 7.14%
			16Rnd_9x21_Mag                   = 1.79%
			10Rnd_9x21_Mag                   = 7.14%
			11Rnd_45ACP_Mag                  = 7.14%
			6Rnd_45ACP_Cylinder              = 3.57%
			6Rnd_GreenSignal_F               = 1.79%
			6Rnd_RedSignal_F                 = 1.79%
			9Rnd_45ACP_Mag                   = 7.14%
			30Rnd_9x21_Mag                   = 7.14%
			Exile_Magazine_10Rnd_765x17_SA61 = 7.14%
			Exile_Magazine_20Rnd_765x17_SA61 = 7.14%
		*/
		PistolAmmo[] = {"rhs_mag_762x25_8", "Exile_Magazine_7Rnd_45ACP", "rhssaf_mag_15Rnd_9x19_FMJ", "Exile_Magazine_6Rnd_45ACP", "9Rnd_45ACP_Mag", "Exile_Magazine_20Rnd_765x17_SA61", "Exile_Magazine_20Rnd_765x17_SA61", "10Rnd_9x21_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "Exile_Magazine_10Rnd_765x17_SA61", "Exile_Magazine_8Rnd_9x18", "30Rnd_9x21_Mag", "6Rnd_RedSignal_F", "Exile_Magazine_6Rnd_45ACP", "6Rnd_45ACP_Cylinder", "10Rnd_9x21_Mag", "6Rnd_GreenSignal_F", "8Rnd_45ACP_Magazine", "Exile_Magazine_8Rnd_9x18", "11Rnd_45ACP_Mag", "rhs_mag_6x8mm_mhp", "Exile_Magazine_7Rnd_45ACP", "Exile_Magazine_10Rnd_765x17_SA61", "6Rnd_45ACP_Cylinder", "rhs_mag_9x19mm_7n21_20", "Exile_Magazine_7Rnd_45ACP", "Exile_Magazine_8Rnd_9x18", "Exile_Magazine_10Rnd_765x17_SA61", "Exile_Magazine_8Rnd_9x18", "rhs_mag_9x19_17", "rhs_mag_9x19mm_7n21_20", "10Rnd_9x21_Mag", "Exile_Magazine_6Rnd_45ACP", "16Rnd_9x21_Mag", "30Rnd_9x21_Mag", "6Rnd_357M_Magazine", "rhs_mag_9x19mm_7n21_20", "11Rnd_45ACP_Mag", "Exile_Magazine_7Rnd_45ACP", "rhsusf_mag_15Rnd_9x19_FMJ", "11Rnd_45ACP_Mag", "rhs_mag_9x19mm_7n21_20", "30Rnd_9x21_Mag", "Exile_Magazine_10Rnd_765x17_SA61", "11Rnd_45ACP_Mag", "30Rnd_9x21_Mag", "rhsusf_mag_17Rnd_9x19_FMJ", "9Rnd_45ACP_Mag", "Exile_Magazine_20Rnd_765x17_SA61", "rhsusf_mag_7x45acp_MHP", "Exile_Magazine_6Rnd_45ACP", "Exile_Magazine_20Rnd_765x17_SA61", "rhs_18rnd_9x21mm_7N28", "10Rnd_9x21_Mag", "8Rnd_9x19_Magazine"};

		/*
			Percental Item Spawn Chances of PistolAttachments:

			rhs_acc_6p9_suppressor = 14.29%
			rhsusf_acc_omega9k     = 14.29%
			optic_MRD              = 14.29%
			muzzle_snds_acp        = 28.57%
			muzzle_snds_L          = 28.57%
		*/
		PistolAttachments[] = {"muzzle_snds_L", "muzzle_snds_L", "rhsusf_acc_omega9k", "optic_MRD", "rhs_acc_6p9_suppressor", "muzzle_snds_acp", "muzzle_snds_acp"};

		/*
			Percental Item Spawn Chances of Shotguns:

			BSF_AA12_1A_F                    = 8.33%
			Exile_Weapon_M1014               = 8.33%
			sgun_HunterShotgun_01_F          = 8.33%
			sgun_HunterShotgun_01_sawedoff_F = 8.33%
			rhs_weap_M590_8RD                = 8.33%
			rhs_weap_M590_5RD                = 8.33%
			bnae_m97_virtual                 = 8.33%
			bnae_m97_camo1_virtual           = 8.33%
			bnae_spr220_virtual              = 8.33%
			bnae_spr220_camo1_virtual        = 8.33%
			bnae_spr220_so_virtual           = 8.33%
			bnae_spr220_so_camo1_virtual     = 8.33%
		*/
		Shotguns[] = {"sgun_HunterShotgun_01_F", "bnae_spr220_virtual", "bnae_m97_virtual", "bnae_spr220_camo1_virtual", "rhs_weap_M590_8RD", "bnae_m97_camo1_virtual", "bnae_spr220_so_camo1_virtual", "bnae_spr220_so_virtual", "rhs_weap_M590_5RD", "sgun_HunterShotgun_01_sawedoff_F", "Exile_Weapon_M1014", "BSF_AA12_1A_F"};

		/*
			Percental Item Spawn Chances of ShotgunAmmo:

			BSF_12g_Drum_32Rnnd_Pellets = 6.25%
			BSF_12g_Drum_32Rnnd_Slug    = 6.25%
			rhsusf_8Rnd_00Buck          = 6.25%
			rhsusf_8Rnd_Slug            = 6.25%
			6Rnd_Slug_Magazine          = 6.25%
			6Rnd_00_Buckshot_Magazine   = 6.25%
			2Rnd_Slug_Magazine          = 6.25%
			2Rnd_00_Buckshot_Magazine   = 6.25%
			5Rnd_Slug_Magazine          = 6.25%
			5Rnd_00_Buckshot_Magazine   = 6.25%
			Exile_Magazine_8Rnd_74Slug  = 25.00%
			2Rnd_12Gauge_Pellets        = 6.25%
			2Rnd_12Gauge_Slug           = 6.25%
		*/
		ShotgunAmmo[] = {"2Rnd_12Gauge_Pellets", "rhsusf_8Rnd_00Buck", "Exile_Magazine_8Rnd_74Slug", "2Rnd_00_Buckshot_Magazine", "rhsusf_8Rnd_Slug", "6Rnd_Slug_Magazine", "6Rnd_00_Buckshot_Magazine", "BSF_12g_Drum_32Rnnd_Slug", "Exile_Magazine_8Rnd_74Slug", "5Rnd_Slug_Magazine", "2Rnd_Slug_Magazine", "BSF_12g_Drum_32Rnnd_Pellets", "Exile_Magazine_8Rnd_74Slug", "Exile_Magazine_8Rnd_74Slug", "5Rnd_00_Buckshot_Magazine", "2Rnd_12Gauge_Slug"};

		/*
			Percental Item Spawn Chances of SMG:

			rhs_weap_savz61          = 7.14%
			rhs_weap_savz61_folded   = 7.14%
			rhs_weap_scorpion        = 7.14%
			rhs_weap_m3a1            = 7.14%
			rhs_weap_m3a1_specops    = 7.14%
			rhs_weap_pp2000          = 7.14%
			rhs_weap_pp2000_folded   = 7.14%
			rhsusf_weap_MP7A1_winter = 7.14%
			rhsusf_weap_MP7A1_desert = 7.14%
			rhsusf_weap_MP7A1_aor1   = 7.14%
			SMG_01_F                 = 7.14%
			SMG_02_F                 = 7.14%
			SMG_05_F                 = 7.14%
			hgun_PDW2000_F           = 7.14%
		*/
		SMG[] = {"rhsusf_weap_MP7A1_desert", "hgun_PDW2000_F", "rhs_weap_pp2000", "SMG_05_F", "rhsusf_weap_MP7A1_aor1", "rhs_weap_m3a1", "rhs_weap_savz61_folded", "rhs_weap_m3a1_specops", "rhs_weap_savz61", "rhsusf_weap_MP7A1_winter", "rhs_weap_scorpion", "SMG_01_F", "rhs_weap_pp2000_folded", "SMG_02_F"};

		/*
			Percental Item Spawn Chances of SMGAmmo:

			rhsusf_mag_40Rnd_46x30_FMJ          = 7.69%
			rhsusf_mag_40Rnd_46x30_JHP          = 7.69%
			rhsusf_mag_40Rnd_46x30_AP           = 7.69%
			rhs_mag_9x19mm_7n21_20              = 7.69%
			rhs_mag_9x19mm_7n21_44              = 7.69%
			rhs_mag_9x19mm_7n31_20              = 7.69%
			rhs_mag_9x19mm_7n31_44              = 7.69%
			30Rnd_45ACP_Mag_SMG_01              = 7.69%
			30Rnd_45ACP_Mag_SMG_01_Tracer_Green = 7.69%
			30Rnd_9x21_Mag_SMG_02               = 7.69%
			30Rnd_9x21_Mag_SMG_02_Tracer_Red    = 7.69%
			30Rnd_9x21_Mag_SMG_02_Tracer_Yellow = 7.69%
			30Rnd_9x21_Mag_SMG_02_Tracer_Green  = 7.69%
		*/
		SMGAmmo[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Green", "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow", "rhs_mag_9x19mm_7n21_20", "30Rnd_9x21_Mag_SMG_02", "30Rnd_45ACP_Mag_SMG_01_Tracer_Green", "rhsusf_mag_40Rnd_46x30_JHP", "rhsusf_mag_40Rnd_46x30_FMJ", "rhs_mag_9x19mm_7n31_20", "30Rnd_45ACP_Mag_SMG_01", "rhs_mag_9x19mm_7n21_44", "30Rnd_9x21_Mag_SMG_02_Tracer_Red", "rhs_mag_9x19mm_7n31_44", "rhsusf_mag_40Rnd_46x30_AP"};

		/*
			Percental Item Spawn Chances of SMGAttachments:

			optic_Holosight_smg       = 16.67%
			optic_Holosight_smg_blk_F = 16.67%
			optic_ACO_grn_smg         = 16.67%
			optic_Aco_smg             = 16.67%
			optic_ACO_grn             = 16.67%
			optic_Aco                 = 16.67%
		*/
		SMGAttachments[] = {"optic_ACO_grn_smg", "optic_Holosight_smg", "optic_ACO_grn", "optic_Aco", "optic_Aco_smg", "optic_Holosight_smg_blk_F"};

		/*
			Percental Item Spawn Chances of Rifles:

			bnae_rk95_virtual           = 0.79%
			bnae_rk95_camo1_virtual     = 0.79%
			bnae_rk95r_virtual          = 0.79%
			bnae_rk95r_camo1_virtual    = 0.79%
			rhs_weap_m14                = 0.79%
			rhs_weap_m14_wd             = 0.79%
			rhs_weap_m14_d              = 0.79%
			rhs_weap_m14_rail           = 0.79%
			rhs_weap_m14_rail_wd        = 0.79%
			rhs_weap_m14_rail_d         = 0.79%
			rhs_weap_m14_ris            = 0.79%
			rhs_weap_m14_ris_wd         = 0.79%
			rhs_weap_m14_ris_d          = 0.79%
			rhs_weap_m14ebrri           = 0.79%
			rhs_weap_mosin_sbr          = 0.79%
			rhs_weap_MP44               = 0.79%
			rhs_weap_m79                = 0.79%
			rhs_weap_savz58p            = 0.79%
			rhs_weap_savz58v_fold       = 0.79%
			rhs_weap_savz58p_black      = 0.79%
			rhs_weap_savz58v_fold_black = 0.79%
			rhs_weap_g36c               = 0.79%
			rhs_weap_m110               = 0.79%
			rhs_weap_m32                = 0.79%
			rhs_weap_m1garand_sa43      = 0.79%
			rhs_weap_hk416d10           = 0.79%
			rhs_weap_hk416d10_m320      = 0.79%
			rhs_weap_hk416d10_LMT       = 0.79%
			rhs_weap_hk416d145          = 0.79%
			rhs_weap_hk416d145_m320     = 0.79%
			rhs_weap_m4a1_d_mstock      = 0.79%
			rhs_weap_m4a1_d             = 0.79%
			rhs_weap_m4a1_m203s_d       = 0.79%
			rhs_weap_m16a4              = 0.79%
			rhs_weap_m21a               = 0.79%
			rhs_weap_m21a_fold          = 0.79%
			rhs_weap_m4                 = 0.79%
			rhs_weap_m4_m203            = 0.79%
			rhs_weap_m4_m320            = 0.79%
			rhs_weap_m4a1               = 0.79%
			rhs_weap_m4a1_wd            = 0.79%
			rhs_weap_m4a1_m203          = 0.79%
			rhs_weap_m4a1_m320          = 0.79%
			rhs_weap_m4a1_blockII       = 0.79%
			rhs_weap_m4a1_blockII_KAC   = 0.79%
			rhs_weap_m4a1_blockII_M203  = 0.79%
			rhs_weap_mk18               = 0.79%
			rhs_weap_mk18_KAC           = 0.79%
			rhs_weap_mk18_m320          = 0.79%
			rhs_weap_akm                = 0.79%
			rhs_weap_akmn_gp25          = 0.79%
			rhs_weap_aks74              = 0.79%
			rhs_weap_aks74_gp25         = 0.79%
			rhs_weap_aks74n             = 0.79%
			rhs_weap_vss                = 0.79%
			rhs_weap_vhsd2              = 0.79%
			rhs_weap_m70b1              = 0.79%
			rhs_weap_m70ab2_fold        = 0.79%
			rhs_weap_m76                = 0.79%
			rhs_weap_m92                = 0.79%
			rhs_weap_m92_fold           = 0.79%
			arifle_Katiba_GL_F          = 0.79%
			arifle_Mk20_GL_F            = 0.79%
			arifle_MX_GL_Black_F        = 0.79%
			arifle_MX_GL_F              = 0.79%
			arifle_MXM_F                = 0.79%
			arifle_TRG21_GL_F           = 0.79%
			Exile_Weapon_AK107_GL       = 0.79%
			Exile_Weapon_AK74_GL        = 0.79%
			arifle_AK12_GL_F            = 0.79%
			arifle_AKM_F                = 0.79%
			arifle_AKM_FL_F             = 0.79%
			arifle_AKS_F                = 0.79%
			arifle_ARX_blk_F            = 0.79%
			arifle_ARX_ghex_F           = 0.79%
			arifle_ARX_hex_F            = 0.79%
			arifle_CTAR_blk_F           = 0.79%
			arifle_CTAR_ghex_F          = 0.79%
			arifle_CTAR_GL_blk_F        = 0.79%
			arifle_CTAR_hex_F           = 0.79%
			arifle_CTARS_blk_F          = 0.79%
			arifle_CTARS_ghex_F         = 0.79%
			arifle_CTARS_hex_F          = 0.79%
			arifle_Katiba_F             = 0.79%
			arifle_Mk20_F               = 0.79%
			arifle_Mk20C_F              = 0.79%
			arifle_MX_Black_F           = 0.79%
			arifle_MX_F                 = 0.79%
			arifle_MXC_Black_F          = 0.79%
			arifle_MXC_F                = 0.79%
			arifle_MXM_Black_F          = 0.79%
			arifle_SDAR_F               = 0.79%
			arifle_SPAR_01_blk_F        = 0.79%
			arifle_SPAR_01_GL_blk_F     = 0.79%
			arifle_SPAR_01_GL_khk_F     = 0.79%
			arifle_SPAR_01_GL_snd_F     = 0.79%
			arifle_SPAR_01_khk_F        = 0.79%
			arifle_SPAR_01_snd_F        = 0.79%
			arifle_SPAR_02_blk_F        = 0.79%
			arifle_SPAR_02_khk_F        = 0.79%
			arifle_SPAR_02_snd_F        = 0.79%
			arifle_SPAR_03_blk_F        = 0.79%
			arifle_SPAR_03_khk_F        = 0.79%
			arifle_SPAR_03_snd_F        = 0.79%
			arifle_TRG20_F              = 0.79%
			arifle_TRG21_F              = 0.79%
			Exile_Weapon_AK107          = 0.79%
			Exile_Weapon_AK74           = 0.79%
			Exile_Weapon_DMR            = 0.79%
			arifle_MXM_khk_F            = 0.79%
			Exile_Weapon_AK47           = 0.79%
			Exile_Weapon_AKS_Gold       = 0.79%
			Exile_Weapon_SVD            = 0.79%
			Exile_Weapon_SVDCamo        = 0.79%
			Exile_Weapon_VSSVintorez    = 0.79%
			arifle_MX_GL_khk_F          = 0.79%
			arifle_AK12_F               = 0.79%
			Exile_Weapon_CZ550          = 0.79%
			arifle_MX_khk_F             = 0.79%
			arifle_MXC_khk_F            = 0.79%
			Exile_Weapon_M4             = 0.79%
			Exile_Weapon_M16A4          = 0.79%
			Exile_Weapon_M16A2          = 0.79%
			Exile_Weapon_LeeEnfield     = 3.15%
		*/
		Rifles[] = {"arifle_AK12_GL_F", "rhs_weap_m4a1_blockII_KAC", "arifle_TRG20_F", "rhs_weap_vhsd2", "arifle_SDAR_F", "rhs_weap_m70b1", "Exile_Weapon_VSSVintorez", "Exile_Weapon_M16A2", "arifle_MXC_Black_F", "rhs_weap_m4a1_blockII", "rhs_weap_m14_rail", "rhs_weap_savz58v_fold", "rhs_weap_m14_rail_wd", "arifle_SPAR_02_snd_F", "rhs_weap_m110", "rhs_weap_m76", "rhs_weap_m79", "rhs_weap_hk416d10_LMT", "Exile_Weapon_LeeEnfield", "arifle_CTAR_blk_F", "arifle_MX_Black_F", "rhs_weap_hk416d145_m320", "arifle_Katiba_F", "rhs_weap_m4_m203", "rhs_weap_m4a1_d_mstock", "arifle_Mk20_F", "rhs_weap_m14_rail_d", "rhs_weap_m14_ris", "rhs_weap_mk18_KAC", "arifle_SPAR_01_GL_khk_F", "rhs_weap_m4a1_m320", "arifle_SPAR_03_khk_F", "rhs_weap_m14_wd", "Exile_Weapon_LeeEnfield", "rhs_weap_mosin_sbr", "arifle_CTAR_ghex_F", "Exile_Weapon_LeeEnfield", "rhs_weap_m92_fold", "arifle_MXM_Black_F", "Exile_Weapon_M4", "rhs_weap_savz58v_fold_black", "rhs_weap_m1garand_sa43", "arifle_Mk20_GL_F", "arifle_SPAR_03_blk_F", "arifle_TRG21_GL_F", "arifle_SPAR_02_blk_F", "Exile_Weapon_AKS_Gold", "rhs_weap_hk416d10", "Exile_Weapon_CZ550", "Exile_Weapon_AK107", "rhs_weap_hk416d10_m320", "arifle_TRG21_F", "arifle_AK12_F", "rhs_weap_m4a1_blockII_M203", "rhs_weap_aks74", "arifle_SPAR_03_snd_F", "arifle_ARX_ghex_F", "arifle_AKM_F", "Exile_Weapon_AK74", "rhs_weap_vss", "Exile_Weapon_DMR", "arifle_Mk20C_F", "arifle_CTARS_blk_F", "rhs_weap_m92", "arifle_MX_F", "rhs_weap_m21a_fold", "arifle_MX_GL_khk_F", "arifle_Katiba_GL_F", "bnae_rk95_virtual", "Exile_Weapon_AK74_GL", "rhs_weap_g36c", "arifle_MXM_khk_F", "arifle_MXC_khk_F", "arifle_CTARS_hex_F", "rhs_weap_aks74n", "arifle_MX_GL_Black_F", "rhs_weap_savz58p", "rhs_weap_m14_d", "arifle_SPAR_02_khk_F", "Exile_Weapon_SVDCamo", "rhs_weap_m14_ris_wd", "arifle_ARX_hex_F", "Exile_Weapon_M16A4", "bnae_rk95r_camo1_virtual", "rhs_weap_m16a4", "arifle_CTAR_hex_F", "Exile_Weapon_SVD", "arifle_MXM_F", "arifle_CTAR_GL_blk_F", "rhs_weap_m4", "rhs_weap_MP44", "arifle_SPAR_01_GL_blk_F", "arifle_SPAR_01_khk_F", "rhs_weap_m4a1_d", "arifle_AKS_F", "rhs_weap_savz58p_black", "rhs_weap_m4a1_wd", "rhs_weap_mk18_m320", "Exile_Weapon_AK47", "arifle_MX_khk_F", "rhs_weap_m32", "rhs_weap_m4a1_m203", "rhs_weap_mk18", "rhs_weap_m21a", "arifle_ARX_blk_F", "arifle_SPAR_01_GL_snd_F", "rhs_weap_m4a1_m203s_d", "arifle_SPAR_01_blk_F", "arifle_MX_GL_F", "arifle_MXC_F", "bnae_rk95r_virtual", "rhs_weap_m14_ris_d", "arifle_CTARS_ghex_F", "rhs_weap_m14ebrri", "rhs_weap_hk416d145", "rhs_weap_m4_m320", "rhs_weap_akm", "arifle_AKM_FL_F", "rhs_weap_akmn_gp25", "Exile_Weapon_AK107_GL", "rhs_weap_m14", "arifle_SPAR_01_snd_F", "Exile_Weapon_LeeEnfield", "rhs_weap_m70ab2_fold", "rhs_weap_m4a1", "bnae_rk95_camo1_virtual", "rhs_weap_aks74_gp25"};

		/*
			Percental Item Spawn Chances of RifleAmmo:

			30Rnd_762x39_Magazine                        = 0.96%
			rhs_mag_20Rnd_SCAR_762x51_m80_ball           = 0.96%
			rhs_mag_30Rnd_556x45_Mk318_Stanag            = 0.96%
			rhs_mag_30Rnd_556x45_Mk262_Stanag            = 0.96%
			rhs_mag_30Rnd_556x45_M855A1_Stanag           = 0.96%
			rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer = 0.96%
			rhsusf_20Rnd_762x51_m993_Mag                 = 0.96%
			rhsusf_5Rnd_300winmag_xm2010                 = 0.96%
			rhsusf_20Rnd_762x51_m118_special_Mag         = 0.96%
			rhsusf_20Rnd_762x51_m62_Mag                  = 0.96%
			rhsusf_mag_40Rnd_46x30_FMJ                   = 0.96%
			20Rnd_556x45_UW_mag                          = 1.92%
			30Rnd_556x45_Stanag                          = 1.92%
			30Rnd_556x45_Stanag_green                    = 1.92%
			30Rnd_556x45_Stanag_red                      = 1.92%
			30Rnd_556x45_Stanag_Tracer_Green             = 1.92%
			30Rnd_556x45_Stanag_Tracer_Red               = 1.92%
			30Rnd_556x45_Stanag_Tracer_Yellow            = 1.92%
			30Rnd_65x39_caseless_green                   = 1.92%
			30Rnd_65x39_caseless_green_mag_Tracer        = 1.92%
			30Rnd_65x39_caseless_mag                     = 1.92%
			30Rnd_65x39_caseless_mag_Tracer              = 1.92%
			Exile_Magazine_10Rnd_303                     = 9.62%
			Exile_Magazine_30Rnd_762x39_AK               = 1.92%
			Exile_Magazine_30Rnd_545x39_AK               = 1.92%
			Exile_Magazine_30Rnd_545x39_AK_Green         = 1.92%
			Exile_Magazine_30Rnd_545x39_AK_Red           = 1.92%
			Exile_Magazine_30Rnd_545x39_AK_White         = 1.92%
			Exile_Magazine_30Rnd_545x39_AK_Yellow        = 1.92%
			Exile_Magazine_20Rnd_762x51_DMR              = 0.96%
			Exile_Magazine_20Rnd_762x51_DMR_Yellow       = 0.96%
			Exile_Magazine_20Rnd_762x51_DMR_Red          = 0.96%
			Exile_Magazine_20Rnd_762x51_DMR_Green        = 0.96%
			Exile_Magazine_20Rnd_762x51_DMR_White        = 0.96%
			Exile_Magazine_5Rnd_22LR                     = 1.92%
			Exile_Magazine_10Rnd_762x54                  = 1.92%
			Exile_Magazine_10Rnd_9x39                    = 1.92%
			Exile_Magazine_20Rnd_9x39                    = 1.92%
			30Rnd_762x39_Mag_F                           = 1.92%
			30Rnd_762x39_Mag_Green_F                     = 1.92%
			30Rnd_762x39_Mag_Tracer_F                    = 1.92%
			30Rnd_762x39_Mag_Tracer_Green_F              = 1.92%
			30Rnd_762x39_AK47_M                          = 1.92%
			30Rnd_545x39_Mag_F                           = 1.92%
			30Rnd_545x39_Mag_Green_F                     = 1.92%
			30Rnd_545x39_Mag_Tracer_F                    = 1.92%
			30Rnd_545x39_Mag_Tracer_Green_F              = 1.92%
			10Rnd_50BW_Mag_F                             = 3.85%
			30Rnd_580x42_Mag_F                           = 1.92%
			30Rnd_580x42_Mag_Tracer_F                    = 1.92%
			100Rnd_580x42_Mag_F                          = 1.92%
			100Rnd_580x42_Mag_Tracer_F                   = 1.92%
			150Rnd_556x45_Drum_Mag_F                     = 1.92%
			150Rnd_556x45_Drum_Mag_Tracer_F              = 1.92%
			20Rnd_762x51_Mag                             = 1.92%
		*/
		RifleAmmo[] = {"30Rnd_545x39_Mag_Tracer_F", "Exile_Magazine_10Rnd_303", "rhsusf_mag_40Rnd_46x30_FMJ", "30Rnd_545x39_Mag_Tracer_Green_F", "20Rnd_762x51_Mag", "Exile_Magazine_10Rnd_303", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_762x39_Magazine", "Exile_Magazine_30Rnd_545x39_AK_Red", "Exile_Magazine_10Rnd_762x54", "30Rnd_762x39_Mag_F", "Exile_Magazine_10Rnd_303", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "100Rnd_580x42_Mag_F", "30Rnd_545x39_Mag_Green_F", "Exile_Magazine_10Rnd_303", "30Rnd_65x39_caseless_mag", "30Rnd_580x42_Mag_F", "Exile_Magazine_20Rnd_762x51_DMR_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "Exile_Magazine_20Rnd_762x51_DMR_White", "rhsusf_5Rnd_300winmag_xm2010", "Exile_Magazine_10Rnd_9x39", "Exile_Magazine_10Rnd_303", "30Rnd_556x45_Stanag_green", "30Rnd_65x39_caseless_green", "30Rnd_556x45_Stanag_Tracer_Green", "100Rnd_580x42_Mag_F", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "30Rnd_556x45_Stanag_green", "30Rnd_545x39_Mag_Tracer_Green_F", "Exile_Magazine_30Rnd_762x39_AK", "Exile_Magazine_10Rnd_762x54", "Exile_Magazine_5Rnd_22LR", "Exile_Magazine_30Rnd_545x39_AK", "rhsusf_20Rnd_762x51_m118_special_Mag", "30Rnd_556x45_Stanag", "30Rnd_65x39_caseless_green", "Exile_Magazine_10Rnd_303", "20Rnd_556x45_UW_mag", "Exile_Magazine_30Rnd_545x39_AK_Red", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_556x45_Stanag_Tracer_Red", "20Rnd_556x45_UW_mag", "rhsusf_20Rnd_762x51_m62_Mag", "150Rnd_556x45_Drum_Mag_Tracer_F", "Exile_Magazine_30Rnd_545x39_AK", "30Rnd_65x39_caseless_mag", "30Rnd_762x39_Mag_Green_F", "Exile_Magazine_10Rnd_303", "30Rnd_762x39_Mag_Tracer_Green_F", "Exile_Magazine_30Rnd_762x39_AK", "Exile_Magazine_10Rnd_303", "30Rnd_580x42_Mag_F", "rhsusf_20Rnd_762x51_m993_Mag", "Exile_Magazine_30Rnd_545x39_AK_White", "rhs_mag_20Rnd_SCAR_762x51_m80_ball", "Exile_Magazine_30Rnd_545x39_AK_Green", "150Rnd_556x45_Drum_Mag_F", "Exile_Magazine_20Rnd_762x51_DMR", "Exile_Magazine_10Rnd_303", "30Rnd_556x45_Stanag_red", "30Rnd_762x39_Mag_Tracer_F", "30Rnd_545x39_Mag_Tracer_F", "30Rnd_762x39_AK47_M", "100Rnd_580x42_Mag_Tracer_F", "Exile_Magazine_20Rnd_9x39", "30Rnd_556x45_Stanag", "10Rnd_50BW_Mag_F", "30Rnd_762x39_Mag_Green_F", "30Rnd_65x39_caseless_green_mag_Tracer", "Exile_Magazine_20Rnd_9x39", "Exile_Magazine_30Rnd_545x39_AK_White", "150Rnd_556x45_Drum_Mag_Tracer_F", "Exile_Magazine_10Rnd_9x39", "Exile_Magazine_30Rnd_545x39_AK_Green", "30Rnd_556x45_Stanag_Tracer_Green", "100Rnd_580x42_Mag_Tracer_F", "10Rnd_50BW_Mag_F", "Exile_Magazine_20Rnd_762x51_DMR_Red", "10Rnd_50BW_Mag_F", "30Rnd_65x39_caseless_green_mag_Tracer", "30Rnd_762x39_AK47_M", "30Rnd_545x39_Mag_Green_F", "10Rnd_50BW_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_762x39_Mag_Tracer_Green_F", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_580x42_Mag_Tracer_F", "Exile_Magazine_5Rnd_22LR", "Exile_Magazine_20Rnd_762x51_DMR_Green", "30Rnd_762x39_Mag_Tracer_F", "30Rnd_580x42_Mag_Tracer_F", "Exile_Magazine_30Rnd_545x39_AK_Yellow", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "30Rnd_556x45_Stanag_red", "Exile_Magazine_10Rnd_303", "30Rnd_545x39_Mag_F", "rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer", "20Rnd_762x51_Mag", "Exile_Magazine_30Rnd_545x39_AK_Yellow", "30Rnd_762x39_Mag_F", "150Rnd_556x45_Drum_Mag_F", "30Rnd_556x45_Stanag_Tracer_Red"};

		/*
			Percental Item Spawn Chances of RifleAttachments:

			rhsusf_acc_rotex_mp7             = 1.20%
			rhsusf_acc_m24_muzzlehider_black = 1.20%
			rhsusf_acc_m24_muzzlehider_wd    = 1.20%
			rhsusf_acc_m24_silencer_wd       = 1.20%
			rhs_acc_pbs4                     = 1.20%
			rhs_acc_dtk1                     = 1.20%
			rhs_acc_dtk4screws               = 1.20%
			rhsgref_sdn6_suppressor          = 1.20%
			rhsgref_acc_zendl                = 1.20%
			rhsusf_acc_T1_high               = 1.20%
			rhsusf_acc_su230_c               = 1.20%
			rhsusf_acc_LEUPOLDMK4_wd         = 1.20%
			rhsusf_acc_ACOG_wd               = 1.20%
			rhsusf_acc_ACOG_USMC             = 1.20%
			rhsusf_acc_ACOG2_USMC_pip        = 1.20%
			rhsusf_acc_ACOG2_3d              = 1.20%
			rhsusf_acc_premier               = 1.20%
			rhsusf_acc_g33_xps3              = 1.20%
			rhs_acc_pso1m2_pkp               = 1.20%
			rhs_acc_nita                     = 1.20%
			rhs_acc_pgo7v                    = 1.20%
			rhs_acc_rakursPM                 = 1.20%
			rhsgref_mg42_acc_AAsight         = 2.41%
			muzzle_snds_M                    = 2.41%
			muzzle_snds_H                    = 2.41%
			muzzle_snds_H_khk_F              = 2.41%
			muzzle_snds_H_snd_F              = 2.41%
			muzzle_snds_58_blk_F             = 2.41%
			muzzle_snds_m_khk_F              = 2.41%
			muzzle_snds_m_snd_F              = 2.41%
			muzzle_snds_58_wdm_F             = 2.41%
			muzzle_snds_65_TI_blk_F          = 2.41%
			muzzle_snds_65_TI_hex_F          = 2.41%
			muzzle_snds_65_TI_ghex_F         = 2.41%
			muzzle_snds_H_MG_blk_F           = 2.41%
			muzzle_snds_H_MG_khk_F           = 2.41%
			optic_Arco                       = 2.41%
			optic_Arco_blk_F                 = 2.41%
			optic_Arco_ghex_F                = 2.41%
			optic_Hamr                       = 2.41%
			optic_Hamr_khk_F                 = 2.41%
			optic_Holosight                  = 2.41%
			optic_Holosight_blk_F            = 2.41%
			optic_Holosight_khk_F            = 2.41%
			acc_flashlight                   = 2.41%
			acc_pointer_IR                   = 2.41%
			optic_MRCO                       = 2.41%
			optic_DMS                        = 2.41%
			optic_DMS_ghex_F                 = 2.41%
			optic_ERCO_blk_F                 = 2.41%
			optic_ERCO_khk_F                 = 2.41%
			optic_ERCO_snd_F                 = 2.41%
			optic_NVS                        = 1.20%
		*/
		RifleAttachments[] = {"rhsgref_mg42_acc_AAsight", "optic_DMS_ghex_F", "optic_Holosight_blk_F", "optic_Arco_ghex_F", "muzzle_snds_m_khk_F", "rhsusf_acc_premier", "rhsusf_acc_LEUPOLDMK4_wd", "muzzle_snds_H_snd_F", "rhsgref_sdn6_suppressor", "muzzle_snds_65_TI_ghex_F", "optic_MRCO", "optic_ERCO_blk_F", "rhsusf_acc_T1_high", "optic_MRCO", "optic_Holosight_khk_F", "muzzle_snds_H_khk_F", "optic_Hamr", "muzzle_snds_H_MG_blk_F", "muzzle_snds_65_TI_hex_F", "muzzle_snds_65_TI_hex_F", "muzzle_snds_65_TI_blk_F", "muzzle_snds_58_blk_F", "muzzle_snds_M", "optic_Holosight", "optic_Arco", "rhs_acc_pbs4", "optic_DMS", "rhs_acc_rakursPM", "optic_ERCO_khk_F", "rhs_acc_nita", "rhsgref_mg42_acc_AAsight", "rhsusf_acc_m24_muzzlehider_wd", "rhsusf_acc_m24_muzzlehider_black", "acc_pointer_IR", "muzzle_snds_H_snd_F", "rhs_acc_dtk1", "optic_Holosight_blk_F", "rhsusf_acc_m24_silencer_wd", "muzzle_snds_H_MG_khk_F", "muzzle_snds_58_wdm_F", "optic_ERCO_snd_F", "rhs_acc_pgo7v", "optic_Hamr_khk_F", "optic_Arco_blk_F", "optic_Hamr_khk_F", "optic_ERCO_blk_F", "muzzle_snds_58_wdm_F", "muzzle_snds_65_TI_blk_F", "rhsgref_acc_zendl", "optic_ERCO_snd_F", "muzzle_snds_H", "rhsusf_acc_su230_c", "muzzle_snds_m_snd_F", "muzzle_snds_M", "optic_ERCO_khk_F", "rhsusf_acc_rotex_mp7", "optic_Holosight", "rhsusf_acc_g33_xps3", "optic_Arco_ghex_F", "muzzle_snds_H_MG_blk_F", "acc_pointer_IR", "muzzle_snds_H", "rhs_acc_dtk4screws", "optic_Arco", "muzzle_snds_65_TI_ghex_F", "optic_Holosight_khk_F", "optic_NVS", "muzzle_snds_m_snd_F", "rhsusf_acc_ACOG2_USMC_pip", "rhsusf_acc_ACOG_wd", "muzzle_snds_m_khk_F", "optic_DMS", "rhsusf_acc_ACOG_USMC", "rhs_acc_pso1m2_pkp", "acc_flashlight", "muzzle_snds_H_MG_khk_F", "optic_Arco_blk_F", "muzzle_snds_58_blk_F", "acc_flashlight", "muzzle_snds_H_khk_F", "optic_DMS_ghex_F", "optic_Hamr", "rhsusf_acc_ACOG2_3d"};

		/*
			Percental Item Spawn Chances of LMG:

			rhs_weap_m27iar      = 6.67%
			rhs_weap_m84         = 6.67%
			rhs_weap_m240B       = 6.67%
			rhs_weap_m240B_CAP   = 6.67%
			rhs_weap_m240G       = 6.67%
			rhs_weap_pkm         = 6.67%
			rhs_weap_pkp         = 6.67%
			arifle_MX_SW_Black_F = 6.67%
			arifle_MX_SW_F       = 6.67%
			LMG_Mk200_F          = 6.67%
			LMG_Zafir_F          = 6.67%
			Exile_Weapon_RPK     = 6.67%
			Exile_Weapon_PK      = 6.67%
			Exile_Weapon_PKP     = 6.67%
			LMG_03_F             = 6.67%
		*/
		LMG[] = {"rhs_weap_pkp", "rhs_weap_m27iar", "Exile_Weapon_RPK", "LMG_Zafir_F", "LMG_03_F", "rhs_weap_m240G", "LMG_Mk200_F", "Exile_Weapon_PKP", "rhs_weap_m240B", "arifle_MX_SW_F", "Exile_Weapon_PK", "arifle_MX_SW_Black_F", "rhs_weap_pkm", "rhs_weap_m240B_CAP", "rhs_weap_m84"};

		/*
			Percental Item Spawn Chances of LMGAmmo:

			rhs_mag_30Rnd_556x45_M855_Stanag      = 2.56%
			rhs_mag_30Rnd_556x45_Mk318_Stanag     = 2.56%
			rhsusf_50Rnd_762x51                   = 2.56%
			rhs_100Rnd_762x54mmR                  = 2.56%
			150Rnd_762x51_Box                     = 2.56%
			100Rnd_65x39_caseless_mag             = 5.13%
			100Rnd_65x39_caseless_mag_Tracer      = 7.69%
			150Rnd_762x54_Box                     = 7.69%
			150Rnd_762x54_Box_Tracer              = 2.56%
			130Rnd_338_Mag                        = 12.82%
			150Rnd_93x64_Mag                      = 12.82%
			Exile_Magazine_45Rnd_545x39_RPK_Green = 2.56%
			Exile_Magazine_75Rnd_545x39_RPK_Green = 2.56%
			Exile_Magazine_100Rnd_762x54_PK_Green = 2.56%
			200Rnd_65x39_cased_Box                = 20.51%
			200Rnd_556x45_Box_F                   = 2.56%
			200Rnd_556x45_Box_Red_F               = 2.56%
			200Rnd_556x45_Box_Tracer_F            = 2.56%
			200Rnd_556x45_Box_Tracer_Red_F        = 2.56%
		*/
		LMGAmmo[] = {"Exile_Magazine_75Rnd_545x39_RPK_Green", "200Rnd_65x39_cased_Box", "200Rnd_556x45_Box_F", "100Rnd_65x39_caseless_mag", "Exile_Magazine_100Rnd_762x54_PK_Green", "200Rnd_65x39_cased_Box", "150Rnd_93x64_Mag", "200Rnd_65x39_cased_Box", "Exile_Magazine_45Rnd_545x39_RPK_Green", "130Rnd_338_Mag", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "150Rnd_762x54_Box", "100Rnd_65x39_caseless_mag_Tracer", "130Rnd_338_Mag", "rhs_mag_30Rnd_556x45_M855_Stanag", "150Rnd_93x64_Mag", "150Rnd_762x54_Box", "rhsusf_50Rnd_762x51", "100Rnd_65x39_caseless_mag_Tracer", "200Rnd_65x39_cased_Box", "150Rnd_762x54_Box_Tracer", "100Rnd_65x39_caseless_mag", "150Rnd_93x64_Mag", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "200Rnd_556x45_Box_Tracer_Red_F", "130Rnd_338_Mag", "rhs_100Rnd_762x54mmR", "200Rnd_556x45_Box_Red_F", "200Rnd_65x39_cased_Box", "130Rnd_338_Mag", "150Rnd_762x51_Box", "150Rnd_93x64_Mag", "150Rnd_762x54_Box", "100Rnd_65x39_caseless_mag_Tracer", "130Rnd_338_Mag", "200Rnd_556x45_Box_Tracer_F", "150Rnd_93x64_Mag"};

		/*
			Percental Item Spawn Chances of Snipers:

			bnae_falkor_blk_virtual         = 1.25%
			bnae_falkor_snd_virtual         = 1.25%
			bnae_falkor_camo1_virtual       = 1.25%
			bnae_falkor_camo2_virtual       = 1.25%
			bnae_mk1_virtual                = 1.25%
			bnae_mk1_t_virtual              = 1.25%
			bnae_mk1_t_camo1_virtual        = 1.25%
			bnae_trg42_virtual              = 1.25%
			bnae_trg42_camo1_virtual        = 1.25%
			bnae_trg42_camo2_virtual        = 1.25%
			bnae_trg42_mmrs_virtual         = 1.25%
			bnae_trg42_mmrs_camo1_virtual   = 1.25%
			bnae_trg42_f_mmrs_virtual       = 1.25%
			bnae_trg42_f_camo1_virtual      = 1.25%
			bnae_trg42_f_virtual            = 1.25%
			bnae_trg42_f_mmrs_camo1_virtual = 1.25%
			rhs_weap_t5000                  = 1.25%
			rhs_weap_m82a1                  = 1.25%
			rhs_weap_XM2010                 = 1.25%
			rhs_weap_XM2010_wd              = 1.25%
			rhs_weap_XM2010_d               = 1.25%
			rhs_weap_XM2010_sa              = 1.25%
			rhs_weap_dsr1                   = 1.25%
			rhs_weap_m40a5                  = 1.25%
			rhs_weap_m40a5_d                = 1.25%
			rhs_weap_m40a5_wd               = 1.25%
			rhs_weap_m24sws                 = 1.25%
			rhs_weap_m24sws_d               = 1.25%
			rhs_weap_m24sws_wd              = 1.25%
			rhs_weap_m24sws_blk             = 1.25%
			rhs_weap_m24sws_ghillie         = 1.25%
			rhs_weap_sr25                   = 1.25%
			rhs_weap_sr25_d                 = 1.25%
			rhs_weap_sr25_wd                = 1.25%
			rhs_weap_sr25_ec                = 1.25%
			rhs_weap_sr25_ec_d              = 1.25%
			rhs_weap_sr25_ec_wd             = 1.25%
			rhs_weap_m14                    = 1.25%
			rhs_weap_m14_ris                = 1.25%
			rhs_weap_m14_rail               = 1.25%
			rhs_weap_m14_fiberglass         = 1.25%
			rhs_weap_m14_ris_fiberglass     = 1.25%
			rhs_weap_m14_wd                 = 1.25%
			rhs_weap_m14_ris_wd             = 1.25%
			rhs_weap_m14_rail_wd            = 1.25%
			rhs_weap_m14_d                  = 1.25%
			rhs_weap_m14_ris_d              = 1.25%
			rhs_weap_m14_rail_d             = 1.25%
			rhs_weap_m14ebrri               = 1.25%
			rhs_weap_mk17_CQC               = 1.25%
			rhs_weap_mk17_STD               = 1.25%
			rhs_weap_mk17_LB                = 1.25%
			rhs_weap_mk17_CQC_Folded        = 1.25%
			rhs_weap_mk17_STD_Folded        = 1.25%
			rhs_weap_mk17_LB_Folded         = 1.25%
			rhs_weap_svd                    = 1.25%
			rhs_weap_svdp                   = 1.25%
			rhs_weap_svdp_npz               = 1.25%
			rhs_weap_svdp_wd                = 1.25%
			rhs_weap_svdp_wd_npz            = 1.25%
			rhs_weap_svds                   = 1.25%
			rhs_weap_svds_npz               = 1.25%
			rhs_weap_m38                    = 1.25%
			rhs_weap_m38_rail               = 1.25%
			rhs_weap_asval                  = 1.25%
			rhs_weap_asval_npz              = 1.25%
			rhs_weap_asval_grip             = 1.25%
			rhs_weap_asval_grip_npz         = 1.25%
			rhs_weap_kar98k                 = 1.25%
			srifle_DMR_01_F                 = 1.25%
			srifle_EBR_F                    = 1.25%
			srifle_GM6_F                    = 1.25%
			srifle_LRR_F                    = 1.25%
			srifle_LRR_tna_F                = 1.25%
			srifle_GM6_ghex_F               = 1.25%
			srifle_DMR_07_blk_F             = 1.25%
			srifle_DMR_07_hex_F             = 1.25%
			srifle_DMR_07_ghex_F            = 1.25%
			Exile_Weapon_m107               = 1.25%
			Exile_Weapon_ksvk               = 1.25%
		*/
		Snipers[] = {"rhs_weap_m14_wd", "rhs_weap_XM2010_sa", "rhs_weap_m40a5_d", "srifle_LRR_tna_F", "bnae_trg42_mmrs_camo1_virtual", "rhs_weap_mk17_STD_Folded", "rhs_weap_dsr1", "bnae_mk1_t_virtual", "srifle_DMR_07_blk_F", "rhs_weap_XM2010_d", "rhs_weap_m14_rail_d", "rhs_weap_kar98k", "bnae_trg42_mmrs_virtual", "rhs_weap_m24sws_blk", "rhs_weap_asval_grip", "bnae_falkor_camo2_virtual", "rhs_weap_mk17_CQC_Folded", "rhs_weap_m24sws_d", "rhs_weap_svdp", "bnae_trg42_f_mmrs_virtual", "Exile_Weapon_m107", "bnae_falkor_camo1_virtual", "rhs_weap_m24sws_wd", "rhs_weap_sr25_ec_wd", "rhs_weap_svdp_npz", "rhs_weap_m14_rail", "srifle_DMR_07_ghex_F", "srifle_DMR_01_F", "srifle_GM6_F", "rhs_weap_mk17_CQC", "rhs_weap_m82a1", "rhs_weap_t5000", "rhs_weap_XM2010", "rhs_weap_sr25_wd", "rhs_weap_sr25_d", "rhs_weap_sr25_ec", "bnae_falkor_snd_virtual", "rhs_weap_svd", "rhs_weap_m40a5_wd", "srifle_EBR_F", "rhs_weap_m38_rail", "bnae_mk1_t_camo1_virtual", "rhs_weap_m14_fiberglass", "rhs_weap_mk17_STD", "rhs_weap_asval_npz", "srifle_GM6_ghex_F", "rhs_weap_asval", "rhs_weap_XM2010_wd", "rhs_weap_mk17_LB_Folded", "rhs_weap_m14ebrri", "bnae_trg42_camo2_virtual", "rhs_weap_svdp_wd_npz", "rhs_weap_svdp_wd", "bnae_trg42_f_virtual", "rhs_weap_m14", "rhs_weap_m24sws", "rhs_weap_svds", "rhs_weap_m40a5", "rhs_weap_sr25", "rhs_weap_m14_ris_wd", "rhs_weap_m24sws_ghillie", "rhs_weap_svds_npz", "rhs_weap_mk17_LB", "rhs_weap_m14_d", "bnae_trg42_f_camo1_virtual", "bnae_falkor_blk_virtual", "srifle_DMR_07_hex_F", "bnae_mk1_virtual", "bnae_trg42_virtual", "rhs_weap_m14_rail_wd", "bnae_trg42_f_mmrs_camo1_virtual", "bnae_trg42_camo1_virtual", "rhs_weap_m38", "Exile_Weapon_ksvk", "rhs_weap_asval_grip_npz", "rhs_weap_m14_ris_fiberglass", "rhs_weap_m14_ris_d", "srifle_LRR_F", "rhs_weap_sr25_ec_d", "rhs_weap_m14_ris"};

		/*
			Percental Item Spawn Chances of SniperAmmo:

			rhs_5Rnd_338lapua_t5000                              = 0.49%
			rhsusf_mag_10Rnd_STD_50BMG_M33                       = 0.49%
			rhsusf_5Rnd_300winmag_xm2010                         = 0.49%
			rhsusf_5Rnd_762x51_m118_special_Mag                  = 4.88%
			rhsusf_10Rnd_762x51_m118_special_Mag                 = 4.88%
			rhsusf_20Rnd_762x51_SR25_m118_special_Mag            = 4.88%
			rhsusf_20Rnd_762x51_m118_special_Mag                 = 4.88%
			rhs_mag_20Rnd_SCAR_762x51_m80_ball                   = 4.88%
			rhs_10Rnd_762x54mmR_7N1                              = 0.49%
			rhsgref_5Rnd_762x54_m38                              = 0.49%
			rhs_10rnd_9x39mm_SP5                                 = 0.49%
			rhs_20rnd_9x39mm_SP5                                 = 0.49%
			rhsgref_5Rnd_792x57_kar98k                           = 0.49%
			Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag      = 0.49%
			Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag = 0.49%
			Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag      = 0.98%
			Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag           = 0.98%
			Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag      = 1.46%
			Exile_Magazine_7Rnd_408_Bullet_Cam_Mag               = 1.46%
			10Rnd_300WM_Magazine                                 = 1.46%
			10Rnd_303_Magazine                                   = 1.46%
			5Rnd_APDS_338LM_Magazine                             = 1.46%
			5Rnd_338LM_Magazine                                  = 1.46%
			Exile_Magazine_10Rnd_338_Bullet_Cam_Mag              = 2.44%
			Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag     = 2.44%
			Exile_Magazine_5Rnd_127x108_APDS_KSVK                = 3.90%
			5Rnd_127x108_APDS_Mag                                = 3.90%
			5Rnd_127x108_Mag                                     = 4.88%
			Exile_Magazine_10Rnd_127x99_m107                     = 4.88%
			Exile_Magazine_5Rnd_127x108_KSVK                     = 4.88%
			7Rnd_408_Mag                                         = 4.88%
			10Rnd_762x54_Mag                                     = 8.29%
			20Rnd_762x51_Mag                                     = 9.27%
			20Rnd_650x39_Cased_Mag_F                             = 10.24%
		*/
		SniperAmmo[] = {"10Rnd_300WM_Magazine", "rhsgref_5Rnd_792x57_kar98k", "20Rnd_762x51_Mag", "rhs_mag_20Rnd_SCAR_762x51_m80_ball", "rhsusf_5Rnd_762x51_m118_special_Mag", "20Rnd_762x51_Mag", "10Rnd_762x54_Mag", "rhs_mag_20Rnd_SCAR_762x51_m80_ball", "Exile_Magazine_10Rnd_127x99_m107", "5Rnd_338LM_Magazine", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "Exile_Magazine_10Rnd_127x99_m107", "rhsusf_20Rnd_762x51_SR25_m118_special_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "5Rnd_127x108_APDS_Mag", "rhsusf_mag_10Rnd_STD_50BMG_M33", "20Rnd_762x51_Mag", "5Rnd_127x108_APDS_Mag", "rhs_10Rnd_762x54mmR_7N1", "rhs_mag_20Rnd_SCAR_762x51_m80_ball", "rhsusf_10Rnd_762x51_m118_special_Mag", "10Rnd_762x54_Mag", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "rhsusf_5Rnd_762x51_m118_special_Mag", "20Rnd_762x51_Mag", "7Rnd_408_Mag", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_10Rnd_127x99_m107", "10Rnd_300WM_Magazine", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "rhsusf_20Rnd_762x51_SR25_m118_special_Mag", "Exile_Magazine_10Rnd_127x99_m107", "20Rnd_762x51_Mag", "5Rnd_127x108_APDS_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag", "Exile_Magazine_10Rnd_127x99_m107", "Exile_Magazine_5Rnd_127x108_KSVK", "rhsusf_20Rnd_762x51_SR25_m118_special_Mag", "10Rnd_762x54_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag", "5Rnd_127x108_APDS_Mag", "7Rnd_408_Mag", "10Rnd_300WM_Magazine", "20Rnd_650x39_Cased_Mag_F", "10Rnd_762x54_Mag", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "5Rnd_APDS_338LM_Magazine", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "rhsusf_20Rnd_762x51_m118_special_Mag", "Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag", "rhs_mag_20Rnd_SCAR_762x51_m80_ball", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "rhs_mag_20Rnd_SCAR_762x51_m80_ball", "Exile_Magazine_10Rnd_127x99_m107", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_5Rnd_127x108_KSVK", "rhsusf_20Rnd_762x51_m118_special_Mag", "Exile_Magazine_10Rnd_127x99_m107", "rhsusf_5Rnd_762x51_m118_special_Mag", "10Rnd_762x54_Mag", "5Rnd_127x108_APDS_Mag", "rhs_mag_20Rnd_SCAR_762x51_m80_ball", "rhsusf_5Rnd_762x51_m118_special_Mag", "7Rnd_408_Mag", "10Rnd_762x54_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_Mag", "20Rnd_762x51_Mag", "10Rnd_762x54_Mag", "5Rnd_127x108_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "5Rnd_127x108_APDS_Mag", "10Rnd_762x54_Mag", "Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "20Rnd_762x51_Mag", "20Rnd_650x39_Cased_Mag_F", "10Rnd_762x54_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "20Rnd_762x51_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "5Rnd_127x108_Mag", "Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "Exile_Magazine_5Rnd_127x108_KSVK", "rhs_5Rnd_338lapua_t5000", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "20Rnd_650x39_Cased_Mag_F", "10Rnd_303_Magazine", "rhsusf_10Rnd_762x51_m118_special_Mag", "5Rnd_338LM_Magazine", "rhsusf_20Rnd_762x51_m118_special_Mag", "20Rnd_650x39_Cased_Mag_F", "7Rnd_408_Mag", "rhsgref_5Rnd_762x54_m38", "5Rnd_127x108_Mag", "20Rnd_650x39_Cased_Mag_F", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_SR25_m118_special_Mag", "20Rnd_650x39_Cased_Mag_F", "10Rnd_762x54_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "Exile_Magazine_10Rnd_127x99_m107", "Exile_Magazine_5Rnd_127x108_KSVK", "rhsusf_5Rnd_300winmag_xm2010", "7Rnd_408_Mag", "10Rnd_303_Magazine", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "20Rnd_762x51_Mag", "rhs_mag_20Rnd_SCAR_762x51_m80_ball", "Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag", "Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag", "20Rnd_650x39_Cased_Mag_F", "5Rnd_338LM_Magazine", "Exile_Magazine_10Rnd_127x99_m107", "Exile_Magazine_5Rnd_127x108_KSVK", "20Rnd_762x51_Mag", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "5Rnd_APDS_338LM_Magazine", "20Rnd_650x39_Cased_Mag_F", "rhsusf_20Rnd_762x51_SR25_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_650x39_Cased_Mag_F", "rhsusf_10Rnd_762x51_m118_special_Mag", "10Rnd_762x54_Mag", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "5Rnd_127x108_Mag", "10Rnd_303_Magazine", "rhs_mag_20Rnd_SCAR_762x51_m80_ball", "5Rnd_APDS_338LM_Magazine", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag", "rhs_10rnd_9x39mm_SP5", "20Rnd_650x39_Cased_Mag_F", "rhsusf_20Rnd_762x51_SR25_m118_special_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag", "rhsusf_5Rnd_762x51_m118_special_Mag", "20Rnd_762x51_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "20Rnd_762x51_Mag", "5Rnd_127x108_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "7Rnd_408_Mag", "10Rnd_762x54_Mag", "rhsusf_20Rnd_762x51_SR25_m118_special_Mag", "5Rnd_127x108_APDS_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "Exile_Magazine_10Rnd_127x99_m107", "rhsusf_10Rnd_762x51_m118_special_Mag", "20Rnd_650x39_Cased_Mag_F", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_SR25_m118_special_Mag", "5Rnd_127x108_Mag", "rhsusf_20Rnd_762x51_SR25_m118_special_Mag", "5Rnd_127x108_APDS_Mag", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "20Rnd_762x51_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhs_mag_20Rnd_SCAR_762x51_m80_ball", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "7Rnd_408_Mag", "5Rnd_127x108_Mag", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "20Rnd_650x39_Cased_Mag_F", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "20Rnd_650x39_Cased_Mag_F", "rhsusf_20Rnd_762x51_SR25_m118_special_Mag", "7Rnd_408_Mag", "rhsusf_10Rnd_762x51_m118_special_Mag", "10Rnd_762x54_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "rhs_20rnd_9x39mm_SP5", "rhs_mag_20Rnd_SCAR_762x51_m80_ball", "rhsusf_10Rnd_762x51_m118_special_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "5Rnd_127x108_Mag"};

		/*
			Percental Item Spawn Chances of SniperAttachments:

			muzzle_snds_B_khk_F = 11.11%
			muzzle_snds_B_snd_F = 11.11%
			muzzle_snds_B       = 11.11%
			optic_LRPS          = 11.11%
			optic_LRPS_ghex_F   = 11.11%
			optic_LRPS_tna_F    = 11.11%
			optic_SOS           = 11.11%
			optic_SOS_khk_F     = 11.11%
			optic_DMS           = 11.11%
		*/
		SniperAttachments[] = {"optic_LRPS", "muzzle_snds_B", "optic_SOS", "muzzle_snds_B_snd_F", "optic_SOS_khk_F", "optic_LRPS_tna_F", "optic_LRPS_ghex_F", "optic_DMS", "muzzle_snds_B_khk_F"};

		/*
			Percental Item Spawn Chances of DLCRifles:

			MMG_01_hex_F             = 4.00%
			MMG_01_tan_F             = 4.00%
			MMG_02_black_F           = 6.00%
			MMG_02_camo_F            = 6.00%
			MMG_02_sand_F            = 6.00%
			srifle_DMR_03_F          = 3.00%
			srifle_DMR_03_khaki_F    = 3.00%
			srifle_DMR_03_tan_F      = 3.00%
			srifle_DMR_03_woodland_F = 3.00%
			srifle_DMR_06_camo_F     = 3.00%
			srifle_DMR_06_olive_F    = 3.00%
			srifle_DMR_02_camo_F     = 6.00%
			srifle_DMR_02_F          = 6.00%
			srifle_DMR_02_sniper_F   = 6.00%
			srifle_DMR_04_F          = 7.00%
			srifle_DMR_04_Tan_F      = 7.00%
			srifle_DMR_05_blk_F      = 8.00%
			srifle_DMR_05_hex_F      = 8.00%
			srifle_DMR_05_tan_F      = 8.00%
		*/
		DLCRifles[] = {"srifle_DMR_02_sniper_F", "srifle_DMR_03_tan_F", "MMG_01_tan_F", "srifle_DMR_05_hex_F", "srifle_DMR_05_hex_F", "srifle_DMR_04_F", "srifle_DMR_04_F", "srifle_DMR_05_blk_F", "srifle_DMR_05_tan_F", "MMG_02_black_F", "srifle_DMR_04_Tan_F", "srifle_DMR_05_hex_F", "srifle_DMR_02_F", "srifle_DMR_03_tan_F", "MMG_02_black_F", "MMG_01_hex_F", "srifle_DMR_05_tan_F", "srifle_DMR_03_F", "srifle_DMR_02_F", "srifle_DMR_04_F", "MMG_01_hex_F", "srifle_DMR_03_F", "MMG_01_tan_F", "MMG_02_black_F", "srifle_DMR_06_olive_F", "srifle_DMR_05_tan_F", "MMG_01_hex_F", "MMG_01_tan_F", "srifle_DMR_04_F", "MMG_02_sand_F", "MMG_02_camo_F", "srifle_DMR_04_Tan_F", "srifle_DMR_05_hex_F", "srifle_DMR_02_camo_F", "srifle_DMR_05_hex_F", "srifle_DMR_02_F", "srifle_DMR_02_sniper_F", "srifle_DMR_02_sniper_F", "srifle_DMR_04_F", "MMG_02_camo_F", "MMG_02_camo_F", "srifle_DMR_02_camo_F", "srifle_DMR_05_blk_F", "srifle_DMR_05_blk_F", "srifle_DMR_06_camo_F", "MMG_01_tan_F", "srifle_DMR_02_camo_F", "srifle_DMR_05_tan_F", "srifle_DMR_02_camo_F", "MMG_02_camo_F", "MMG_02_black_F", "srifle_DMR_03_woodland_F", "srifle_DMR_04_Tan_F", "srifle_DMR_05_hex_F", "srifle_DMR_04_Tan_F", "srifle_DMR_03_tan_F", "srifle_DMR_06_olive_F", "MMG_02_black_F", "MMG_02_sand_F", "srifle_DMR_03_khaki_F", "srifle_DMR_04_F", "srifle_DMR_05_blk_F", "srifle_DMR_05_hex_F", "srifle_DMR_05_blk_F", "srifle_DMR_02_F", "MMG_02_camo_F", "srifle_DMR_05_tan_F", "srifle_DMR_02_sniper_F", "srifle_DMR_05_blk_F", "srifle_DMR_06_camo_F", "srifle_DMR_05_blk_F", "MMG_02_black_F", "srifle_DMR_04_F", "srifle_DMR_04_Tan_F", "MMG_02_sand_F", "srifle_DMR_03_woodland_F", "srifle_DMR_02_sniper_F", "srifle_DMR_05_tan_F", "srifle_DMR_02_camo_F", "srifle_DMR_05_hex_F", "MMG_02_camo_F", "srifle_DMR_03_khaki_F", "MMG_01_hex_F", "srifle_DMR_05_tan_F", "srifle_DMR_05_tan_F", "srifle_DMR_03_khaki_F", "srifle_DMR_04_Tan_F", "MMG_02_sand_F", "srifle_DMR_03_F", "MMG_02_sand_F", "srifle_DMR_06_olive_F", "srifle_DMR_02_F", "MMG_02_sand_F", "srifle_DMR_02_sniper_F", "srifle_DMR_03_woodland_F", "srifle_DMR_04_Tan_F", "srifle_DMR_06_camo_F", "srifle_DMR_05_blk_F", "srifle_DMR_02_F", "srifle_DMR_02_camo_F"};

		/*
			Percental Item Spawn Chances of DLCAmmo:

			150Rnd_93x64_Mag       = 30.77%
			130Rnd_338_Mag         = 30.77%
			10Rnd_127x54_Mag       = 7.69%
			20Rnd_762x51_Mag       = 7.69%
			10Rnd_338_Mag          = 11.54%
			10Rnd_93x64_DMR_05_Mag = 11.54%
		*/
		DLCAmmo[] = {"130Rnd_338_Mag", "130Rnd_338_Mag", "10Rnd_127x54_Mag", "150Rnd_93x64_Mag", "150Rnd_93x64_Mag", "10Rnd_93x64_DMR_05_Mag", "150Rnd_93x64_Mag", "150Rnd_93x64_Mag", "20Rnd_762x51_Mag", "130Rnd_338_Mag", "10Rnd_127x54_Mag", "130Rnd_338_Mag", "10Rnd_338_Mag", "150Rnd_93x64_Mag", "150Rnd_93x64_Mag", "20Rnd_762x51_Mag", "10Rnd_338_Mag", "130Rnd_338_Mag", "10Rnd_338_Mag", "150Rnd_93x64_Mag", "130Rnd_338_Mag", "150Rnd_93x64_Mag", "130Rnd_338_Mag", "130Rnd_338_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_93x64_DMR_05_Mag"};

		/*
			Percental Item Spawn Chances of DLCOptics:

			optic_AMS     = 14.29%
			optic_AMS_khk = 14.29%
			optic_AMS_snd = 14.29%
			optic_KHS_blk = 14.29%
			optic_KHS_hex = 14.29%
			optic_KHS_old = 14.29%
			optic_KHS_tan = 14.29%
		*/
		DLCOptics[] = {"optic_AMS_khk", "optic_KHS_blk", "optic_KHS_old", "optic_KHS_hex", "optic_KHS_tan", "optic_AMS", "optic_AMS_snd"};

		/*
			Percental Item Spawn Chances of DLCSupressor:

			muzzle_snds_338_black = 16.67%
			muzzle_snds_338_green = 16.67%
			muzzle_snds_338_sand  = 16.67%
			muzzle_snds_93mmg     = 16.67%
			muzzle_snds_93mmg_tan = 16.67%
			muzzle_snds_B         = 16.67%
		*/
		DLCSupressor[] = {"muzzle_snds_93mmg", "muzzle_snds_93mmg_tan", "muzzle_snds_338_black", "muzzle_snds_338_green", "muzzle_snds_B", "muzzle_snds_338_sand"};

		/*
			Percental Item Spawn Chances of EpicWeapons:

			rhs_weap_mg42  = 16.67%
			MMG_01_hex_F   = 16.67%
			MMG_01_tan_F   = 16.67%
			MMG_02_black_F = 16.67%
			MMG_02_camo_F  = 16.67%
			MMG_02_sand_F  = 16.67%
		*/
		EpicWeapons[] = {"MMG_02_black_F", "MMG_02_sand_F", "MMG_01_hex_F", "MMG_02_camo_F", "rhs_weap_mg42", "MMG_01_tan_F"};

		/*
			Percental Item Spawn Chances of Launchers:

			rhs_weap_m79           = 28.57%
			rhs_weap_M136          = 14.29%
			rhs_weap_m72a7         = 14.29%
			rhs_weap_m80           = 14.29%
			rhs_weap_panzerfaust60 = 14.29%
			rhs_weap_rpg26         = 14.29%
		*/
		Launchers[] = {"rhs_weap_m79", "rhs_weap_m79", "rhs_weap_M136", "rhs_weap_m80", "rhs_weap_m72a7", "rhs_weap_rpg26", "rhs_weap_panzerfaust60"};

		/*
			Percental Item Spawn Chances of LauncherAmmo:

			rhs_mag_M4009      = 11.11%
			rhs_mag_M661_green = 11.11%
			rhs_mag_M662_red   = 11.11%
			UGL_FlareYellow_F  = 11.11%
			UGL_FlareWhite_F   = 11.11%
			rhs_mag_M441_HE    = 44.44%
		*/
		LauncherAmmo[] = {"UGL_FlareWhite_F", "UGL_FlareYellow_F", "rhs_mag_M662_red", "rhs_mag_M441_HE", "rhs_mag_M4009", "rhs_mag_M661_green", "rhs_mag_M441_HE", "rhs_mag_M441_HE", "rhs_mag_M441_HE"};

		/*
			Percental Item Spawn Chances of Bipods:

			rhsusf_acc_tacsac_blk   = 6.67%
			rhsusf_acc_tacsac_tan   = 6.67%
			rhsusf_acc_tacsac_blue  = 6.67%
			rhsusf_acc_harris_bipod = 6.67%
			rhsusf_acc_grip1        = 6.67%
			rhsusf_acc_tdstubby_tan = 6.67%
			bipod_03_F_oli          = 6.67%
			bipod_03_F_blk          = 6.67%
			bipod_02_F_tan          = 6.67%
			bipod_02_F_hex          = 6.67%
			bipod_02_F_blk          = 6.67%
			bipod_01_F_snd          = 6.67%
			bipod_01_F_mtp          = 6.67%
			bipod_01_F_blk          = 6.67%
			bipod_01_F_khk          = 6.67%
		*/
		Bipods[] = {"bipod_02_F_blk", "bipod_01_F_snd", "rhsusf_acc_tacsac_blue", "bipod_01_F_blk", "bipod_01_F_khk", "rhsusf_acc_tacsac_tan", "rhsusf_acc_harris_bipod", "rhsusf_acc_tacsac_blk", "bipod_03_F_blk", "rhsusf_acc_grip1", "bipod_02_F_tan", "rhsusf_acc_tdstubby_tan", "bipod_02_F_hex", "bipod_03_F_oli", "bipod_01_F_mtp"};

		/*
			Percental Item Spawn Chances of HEGrenades:

			3Rnd_HE_Grenade_shell = 25.00%
			1Rnd_HE_Grenade_shell = 75.00%
		*/
		HEGrenades[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "3Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell"};

		/*
			Percental Item Spawn Chances of UGLFlares:

			rhs_weap_rsp30_white   = 5.26%
			rhs_weap_rsp30_red     = 5.26%
			rhs_weap_rsp30_green   = 5.26%
			3Rnd_UGL_FlareGreen_F  = 5.26%
			3Rnd_UGL_FlareRed_F    = 5.26%
			3Rnd_UGL_FlareWhite_F  = 5.26%
			3Rnd_UGL_FlareYellow_F = 5.26%
			UGL_FlareGreen_F       = 15.79%
			UGL_FlareRed_F         = 15.79%
			UGL_FlareWhite_F       = 15.79%
			UGL_FlareYellow_F      = 15.79%
		*/
		UGLFlares[] = {"UGL_FlareGreen_F", "UGL_FlareYellow_F", "UGL_FlareWhite_F", "UGL_FlareYellow_F", "rhs_weap_rsp30_red", "3Rnd_UGL_FlareRed_F", "rhs_weap_rsp30_white", "UGL_FlareGreen_F", "UGL_FlareRed_F", "rhs_weap_rsp30_green", "3Rnd_UGL_FlareWhite_F", "UGL_FlareWhite_F", "UGL_FlareWhite_F", "UGL_FlareRed_F", "3Rnd_UGL_FlareGreen_F", "UGL_FlareYellow_F", "3Rnd_UGL_FlareYellow_F", "UGL_FlareRed_F", "UGL_FlareGreen_F"};

		/*
			Percental Item Spawn Chances of UGLSmokes:

			3Rnd_Smoke_Grenade_shell       = 3.57%
			3Rnd_SmokeBlue_Grenade_shell   = 3.57%
			3Rnd_SmokeGreen_Grenade_shell  = 3.57%
			3Rnd_SmokeOrange_Grenade_shell = 3.57%
			3Rnd_SmokePurple_Grenade_shell = 3.57%
			3Rnd_SmokeRed_Grenade_shell    = 3.57%
			3Rnd_SmokeYellow_Grenade_shell = 3.57%
			1Rnd_Smoke_Grenade_shell       = 10.71%
			1Rnd_SmokeBlue_Grenade_shell   = 10.71%
			1Rnd_SmokeGreen_Grenade_shell  = 10.71%
			1Rnd_SmokeOrange_Grenade_shell = 10.71%
			1Rnd_SmokePurple_Grenade_shell = 10.71%
			1Rnd_SmokeRed_Grenade_shell    = 10.71%
			1Rnd_SmokeYellow_Grenade_shell = 10.71%
		*/
		UGLSmokes[] = {"1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "3Rnd_SmokeBlue_Grenade_shell", "3Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "3Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "3Rnd_SmokeGreen_Grenade_shell", "3Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "3Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"};

		/*
			Percental Item Spawn Chances of HandGrenades:

			rhs_mag_rgd5                     = 2.94%
			rhs_mag_rgn                      = 2.94%
			rhs_mag_rgo                      = 2.94%
			rhs_mag_fakel                    = 2.94%
			rhs_mag_fakels                   = 2.94%
			rhs_mag_zarya2                   = 2.94%
			rhs_mag_plamyam                  = 2.94%
			rhs_mag_m67                      = 2.94%
			rhs_mag_m69                      = 2.94%
			rhs_mag_mk84                     = 2.94%
			rhs_mag_m7a3_cs                  = 2.94%
			rhs_mag_mk3a2                    = 2.94%
			rhs_mag_f1                       = 2.94%
			rhsgref_mag_rkg3em               = 2.94%
			rhs_grenade_m1939e_mag           = 2.94%
			rhs_grenade_m1939l_mag           = 2.94%
			rhs_grenade_m1939e_f_mag         = 2.94%
			rhs_grenade_m1939l_f_mag         = 2.94%
			rhs_grenade_sthgr24_mag          = 2.94%
			rhs_grenade_sthgr24_heerfrag_mag = 2.94%
			rhs_grenade_sthgr24_SSfrag_mag   = 2.94%
			rhs_grenade_sthgr24_x7bundle_mag = 2.94%
			rhs_grenade_sthgr43_mag          = 2.94%
			rhs_grenade_sthgr43_heerfrag_mag = 2.94%
			rhs_grenade_sthgr43_SSfrag_mag   = 2.94%
			rhs_grenade_mkii_mag             = 2.94%
			rhs_grenade_mkiiia1_mag          = 2.94%
			rhs_grenade_m15_mag              = 2.94%
			rhssaf_mag_br_m75                = 2.94%
			rhssaf_mag_br_m84                = 2.94%
			rhssaf_mag_rshb_p98              = 2.94%
			rhssaf_mag_brk_m79               = 2.94%
			HandGrenade                      = 2.94%
			MiniGrenade                      = 2.94%
		*/
		HandGrenades[] = {"rhs_mag_rgo", "rhs_grenade_sthgr43_heerfrag_mag", "rhs_mag_mk84", "rhssaf_mag_rshb_p98", "rhssaf_mag_brk_m79", "rhs_grenade_m1939e_mag", "rhs_grenade_sthgr24_x7bundle_mag", "rhs_mag_m67", "HandGrenade", "rhs_mag_mk3a2", "rhs_grenade_sthgr43_SSfrag_mag", "rhs_mag_plamyam", "rhs_grenade_m1939e_f_mag", "rhs_grenade_sthgr24_SSfrag_mag", "rhs_grenade_mkiiia1_mag", "rhs_mag_m7a3_cs", "rhs_grenade_m15_mag", "rhs_grenade_mkii_mag", "MiniGrenade", "rhs_grenade_sthgr43_mag", "rhs_grenade_sthgr24_mag", "rhs_mag_m69", "rhs_grenade_m1939l_f_mag", "rhs_mag_fakels", "rhssaf_mag_br_m84", "rhs_grenade_m1939l_mag", "rhs_mag_rgd5", "rhssaf_mag_br_m75", "rhs_mag_fakel", "rhs_mag_rgn", "rhs_grenade_sthgr24_heerfrag_mag", "rhs_mag_f1", "rhsgref_mag_rkg3em", "rhs_mag_zarya2"};

		/*
			Percental Item Spawn Chances of Explosives:

			rhs_mine_pmn2_mag           = 5.56%
			rhs_mine_tm62m_mag          = 5.56%
			rhs_mine_m19_mag            = 5.56%
			APERSBoundingMine_Range_Mag = 16.67%
			APERSMine_Range_Mag         = 16.67%
			APERSTripMine_Wire_Mag      = 16.67%
			IEDLandSmall_Remote_Mag     = 16.67%
			IEDUrbanSmall_Remote_Mag    = 16.67%
		*/
		Explosives[] = {"APERSTripMine_Wire_Mag", "APERSMine_Range_Mag", "rhs_mine_m19_mag", "IEDUrbanSmall_Remote_Mag", "IEDUrbanSmall_Remote_Mag", "APERSBoundingMine_Range_Mag", "APERSMine_Range_Mag", "APERSBoundingMine_Range_Mag", "APERSTripMine_Wire_Mag", "IEDUrbanSmall_Remote_Mag", "rhs_mine_pmn2_mag", "APERSTripMine_Wire_Mag", "IEDLandSmall_Remote_Mag", "APERSBoundingMine_Range_Mag", "rhs_mine_tm62m_mag", "IEDLandSmall_Remote_Mag", "APERSMine_Range_Mag", "IEDLandSmall_Remote_Mag"};

		/*
			Percental Item Spawn Chances of CivilianItems:

			rhs_weap_tr8            = 2.44%
			Exile_Item_MobilePhone  = 2.44%
			Binocular               = 9.76%
			rhsusf_bino_leopold_mk4 = 9.76%
			ItemGPS                 = 9.76%
			ItemRadio               = 14.63%
			ItemWatch               = 14.63%
			ItemMap                 = 17.07%
			Exile_Item_Heatpack     = 19.51%
		*/
		CivilianItems[] = {"Exile_Item_Heatpack", "ItemGPS", "ItemMap", "rhsusf_bino_leopold_mk4", "Binocular", "ItemGPS", "ItemMap", "Exile_Item_Heatpack", "ItemGPS", "ItemWatch", "ItemGPS", "ItemRadio", "ItemMap", "ItemWatch", "ItemMap", "ItemRadio", "ItemRadio", "ItemRadio", "ItemWatch", "Exile_Item_Heatpack", "Binocular", "ItemWatch", "rhsusf_bino_leopold_mk4", "ItemRadio", "Exile_Item_Heatpack", "Binocular", "ItemWatch", "Exile_Item_Heatpack", "Exile_Item_Heatpack", "Exile_Item_Heatpack", "Binocular", "ItemRadio", "Exile_Item_Heatpack", "rhsusf_bino_leopold_mk4", "ItemMap", "ItemMap", "ItemMap", "rhsusf_bino_leopold_mk4", "ItemWatch", "rhs_weap_tr8", "Exile_Item_MobilePhone"};

		/*
			Percental Item Spawn Chances of CivilianClothing:

			U_NikosAgedBody          = 0.58%
			U_NikosBody              = 0.58%
			U_OrestesBody            = 0.58%
			U_C_Man_casual_1_F       = 2.92%
			U_C_Man_casual_2_F       = 2.92%
			U_C_Man_casual_3_F       = 2.92%
			U_C_Man_casual_4_F       = 2.92%
			U_C_Man_casual_5_F       = 2.92%
			U_C_Man_casual_6_F       = 2.92%
			U_C_man_sport_1_F        = 2.92%
			U_C_man_sport_2_F        = 2.92%
			U_C_man_sport_3_F        = 2.92%
			U_I_C_Soldier_Bandit_1_F = 2.92%
			U_I_C_Soldier_Bandit_2_F = 2.92%
			U_I_C_Soldier_Bandit_3_F = 2.92%
			U_I_C_Soldier_Bandit_4_F = 2.92%
			U_I_C_Soldier_Bandit_5_F = 2.92%
			U_C_Poloshirt_blue       = 4.09%
			U_C_Poloshirt_burgundy   = 4.09%
			U_C_Poloshirt_salmon     = 4.09%
			U_C_Poloshirt_stripped   = 4.09%
			U_C_Poloshirt_tricolour  = 4.09%
			U_C_HunterBody_grn       = 5.26%
			U_C_Journalist           = 5.26%
			U_C_Poor_1               = 5.26%
			U_C_Poor_2               = 5.26%
			U_C_Poor_shorts_1        = 5.26%
			U_C_Scientist            = 5.26%
			U_Rangemaster            = 5.26%
		*/
		CivilianClothing[] = {"U_I_C_Soldier_Bandit_1_F", "U_C_Man_casual_1_F", "U_C_Poor_1", "U_C_man_sport_1_F", "U_Rangemaster", "U_I_C_Soldier_Bandit_3_F", "U_C_Poloshirt_stripped", "U_C_Journalist", "U_C_Journalist", "U_C_Poor_shorts_1", "U_C_Journalist", "U_I_C_Soldier_Bandit_2_F", "U_Rangemaster", "U_C_Man_casual_6_F", "U_C_Poloshirt_blue", "U_I_C_Soldier_Bandit_4_F", "U_I_C_Soldier_Bandit_5_F", "U_C_Poloshirt_blue", "U_C_Man_casual_4_F", "U_Rangemaster", "U_C_man_sport_2_F", "U_I_C_Soldier_Bandit_5_F", "U_C_man_sport_3_F", "U_C_Man_casual_3_F", "U_C_Man_casual_4_F", "U_C_Poloshirt_tricolour", "U_C_Man_casual_1_F", "U_C_Poor_2", "U_C_Poor_1", "U_C_Journalist", "U_Rangemaster", "U_C_man_sport_2_F", "U_I_C_Soldier_Bandit_3_F", "U_C_Poloshirt_burgundy", "U_I_C_Soldier_Bandit_2_F", "U_I_C_Soldier_Bandit_3_F", "U_C_Man_casual_3_F", "U_C_Poor_1", "U_C_man_sport_3_F", "U_C_Poloshirt_stripped", "U_I_C_Soldier_Bandit_5_F", "U_C_Scientist", "U_C_man_sport_3_F", "U_C_Poloshirt_blue", "U_I_C_Soldier_Bandit_2_F", "U_C_Poor_1", "U_C_Scientist", "U_I_C_Soldier_Bandit_1_F", "U_C_Journalist", "U_C_Poor_2", "U_C_Poloshirt_salmon", "U_C_man_sport_1_F", "U_C_HunterBody_grn", "U_C_Man_casual_1_F", "U_C_Man_casual_1_F", "U_NikosAgedBody", "U_C_Man_casual_2_F", "U_C_Poloshirt_tricolour", "U_C_Poloshirt_blue", "U_C_man_sport_2_F", "U_I_C_Soldier_Bandit_5_F", "U_C_Poloshirt_burgundy", "U_C_Poor_2", "U_C_Man_casual_2_F", "U_C_Man_casual_5_F", "U_C_Poloshirt_stripped", "U_C_Poor_2", "U_C_HunterBody_grn", "U_C_Poor_2", "U_C_HunterBody_grn", "U_C_Poor_2", "U_C_Journalist", "U_C_Poor_1", "U_C_Man_casual_3_F", "U_C_Poloshirt_salmon", "U_C_HunterBody_grn", "U_C_HunterBody_grn", "U_C_Man_casual_1_F", "U_NikosBody", "U_C_Poor_shorts_1", "U_C_Poloshirt_salmon", "U_C_man_sport_1_F", "U_C_Poloshirt_stripped", "U_C_Poor_shorts_1", "U_C_Man_casual_5_F", "U_C_Poloshirt_burgundy", "U_C_Poloshirt_blue", "U_C_Poloshirt_salmon", "U_C_Poloshirt_tricolour", "U_I_C_Soldier_Bandit_4_F", "U_C_Poloshirt_stripped", "U_C_Scientist", "U_C_Man_casual_2_F", "U_C_Poor_2", "U_C_Man_casual_5_F", "U_I_C_Soldier_Bandit_5_F", "U_C_Poor_shorts_1", "U_C_Scientist", "U_C_Poor_shorts_1", "U_OrestesBody", "U_I_C_Soldier_Bandit_1_F", "U_C_Poloshirt_burgundy", "U_C_Scientist", "U_Rangemaster", "U_C_Poor_2", "U_C_Journalist", "U_Rangemaster", "U_C_Man_casual_5_F", "U_C_Man_casual_2_F", "U_Rangemaster", "U_C_Poloshirt_blue", "U_C_Man_casual_6_F", "U_C_Poloshirt_burgundy", "U_C_Man_casual_4_F", "U_C_Man_casual_4_F", "U_I_C_Soldier_Bandit_1_F", "U_C_Poloshirt_tricolour", "U_I_C_Soldier_Bandit_2_F", "U_C_Man_casual_6_F", "U_C_Poloshirt_salmon", "U_I_C_Soldier_Bandit_4_F", "U_C_Poor_1", "U_I_C_Soldier_Bandit_4_F", "U_I_C_Soldier_Bandit_1_F", "U_C_Poor_1", "U_I_C_Soldier_Bandit_3_F", "U_C_Poor_1", "U_C_Man_casual_6_F", "U_C_Scientist", "U_C_Poor_1", "U_C_Scientist", "U_C_Poor_shorts_1", "U_C_man_sport_3_F", "U_C_Poloshirt_stripped", "U_C_Man_casual_2_F", "U_Rangemaster", "U_C_Scientist", "U_C_Poloshirt_tricolour", "U_C_Poloshirt_salmon", "U_C_Poloshirt_burgundy", "U_C_Poor_shorts_1", "U_I_C_Soldier_Bandit_3_F", "U_Rangemaster", "U_C_man_sport_2_F", "U_C_Man_casual_3_F", "U_C_man_sport_3_F", "U_C_HunterBody_grn", "U_C_Man_casual_6_F", "U_C_Poor_shorts_1", "U_C_Poloshirt_tricolour", "U_C_Scientist", "U_C_Poloshirt_blue", "U_C_man_sport_1_F", "U_C_Poloshirt_tricolour", "U_C_Journalist", "U_C_Poloshirt_salmon", "U_C_Man_casual_5_F", "U_C_HunterBody_grn", "U_C_HunterBody_grn", "U_C_man_sport_2_F", "U_C_Journalist", "U_I_C_Soldier_Bandit_2_F", "U_C_HunterBody_grn", "U_C_man_sport_1_F", "U_C_Man_casual_4_F", "U_C_Poor_2", "U_C_Poloshirt_stripped", "U_C_Poloshirt_burgundy", "U_I_C_Soldier_Bandit_4_F", "U_C_Poor_shorts_1", "U_C_Man_casual_3_F"};

		/*
			Percental Item Spawn Chances of CivilianBackpacks:

			B_Kitbag_cbr        = 6.67%
			B_Kitbag_mcamo      = 6.67%
			B_Kitbag_sgg        = 6.67%
			B_AssaultPack_blk   = 6.67%
			B_AssaultPack_cbr   = 6.67%
			B_AssaultPack_dgtl  = 6.67%
			B_AssaultPack_khk   = 6.67%
			B_AssaultPack_mcamo = 6.67%
			B_AssaultPack_rgr   = 6.67%
			B_AssaultPack_sgg   = 6.67%
			B_AssaultPack_tna_F = 6.67%
			B_HuntingBackpack   = 6.67%
			B_OutdoorPack_blu   = 6.67%
			B_OutdoorPack_tan   = 6.67%
			B_OutdoorPack_blk   = 6.67%
		*/
		CivilianBackpacks[] = {"B_Kitbag_sgg", "B_AssaultPack_khk", "B_OutdoorPack_blk", "B_AssaultPack_dgtl", "B_AssaultPack_cbr", "B_Kitbag_mcamo", "B_AssaultPack_tna_F", "B_AssaultPack_rgr", "B_AssaultPack_blk", "B_AssaultPack_mcamo", "B_OutdoorPack_tan", "B_HuntingBackpack", "B_AssaultPack_sgg", "B_Kitbag_cbr", "B_OutdoorPack_blu"};

		/*
			Percental Item Spawn Chances of CivilianVests:

			V_Press_F            = 25.00%
			V_TacVest_blk_POLICE = 25.00%
			V_Rangemaster_belt   = 50.00%
		*/
		CivilianVests[] = {"V_TacVest_blk_POLICE", "V_Rangemaster_belt", "V_Press_F", "V_Rangemaster_belt"};

		/*
			Percental Item Spawn Chances of CivilianHeadgear:

			H_Bandanna_surfer  = 5.56%
			H_Beret_blk_POLICE = 5.56%
			H_Cap_blk          = 5.56%
			H_Cap_blk_Raven    = 5.56%
			H_Cap_blu          = 5.56%
			H_Cap_grn          = 5.56%
			H_Cap_headphones   = 5.56%
			H_Cap_oli          = 5.56%
			H_Cap_press        = 5.56%
			H_Cap_red          = 5.56%
			H_Cap_tan          = 5.56%
			H_Hat_blue         = 5.56%
			H_Hat_brown        = 5.56%
			H_Hat_checker      = 5.56%
			H_Hat_grey         = 5.56%
			H_Hat_tan          = 5.56%
			H_StrawHat         = 5.56%
			H_StrawHat_dark    = 5.56%
		*/
		CivilianHeadgear[] = {"H_Hat_brown", "H_Cap_tan", "H_Cap_press", "H_StrawHat", "H_Cap_blk", "H_Cap_oli", "H_Beret_blk_POLICE", "H_Cap_headphones", "H_Cap_grn", "H_Hat_blue", "H_Hat_grey", "H_Cap_blu", "H_Hat_checker", "H_Bandanna_surfer", "H_Cap_red", "H_StrawHat_dark", "H_Cap_blk_Raven", "H_Hat_tan"};

		/*
			Percental Item Spawn Chances of GuerillaItems:

			Rangefinder        = 5.26%
			ItemCompass        = 52.63%
			RHS_1PN138         = 5.26%
			rhsusf_ANPVS_14    = 5.26%
			rhsusf_ANPVS_15    = 5.26%
			NVGoggles          = 5.26%
			NVGoggles_tna_F    = 5.26%
			O_NVGoggles_ghex_F = 5.26%
			O_NVGoggles_hex_F  = 5.26%
			O_NVGoggles_urb_F  = 5.26%
		*/
		GuerillaItems[] = {"ItemCompass", "ItemCompass", "ItemCompass", "ItemCompass", "ItemCompass", "RHS_1PN138", "NVGoggles", "O_NVGoggles_urb_F", "rhsusf_ANPVS_14", "ItemCompass", "Rangefinder", "ItemCompass", "O_NVGoggles_ghex_F", "O_NVGoggles_hex_F", "NVGoggles_tna_F", "rhsusf_ANPVS_15", "ItemCompass", "ItemCompass", "ItemCompass"};

		/*
			Percental Item Spawn Chances of GuerillaClothing:

			BSF_Combat_Uniform_1_Arid   = 1.67%
			BSF_Combat_Uniform_1_Tiger  = 1.67%
			BSF_Combat_Uniform_1_Multi2 = 1.67%
			U_I_G_resistanceLeader_F    = 1.67%
			U_I_C_Soldier_Camo_F        = 5.00%
			U_I_C_Soldier_Para_1_F      = 5.00%
			U_I_C_Soldier_Para_2_F      = 5.00%
			U_I_C_Soldier_Para_3_F      = 5.00%
			U_I_C_Soldier_Para_4_F      = 5.00%
			U_I_C_Soldier_Para_5_F      = 5.00%
			U_IG_leader                 = 6.67%
			U_IG_Guerilla3_1            = 8.33%
			U_IG_Guerilla3_2            = 8.33%
			U_IG_Guerilla1_1            = 10.00%
			U_IG_Guerilla2_1            = 10.00%
			U_IG_Guerilla2_2            = 10.00%
			U_IG_Guerilla2_3            = 10.00%
		*/
		GuerillaClothing[] = {"U_IG_Guerilla2_2", "U_IG_Guerilla3_1", "U_I_C_Soldier_Para_1_F", "U_IG_Guerilla2_1", "U_I_C_Soldier_Para_4_F", "U_IG_Guerilla2_2", "U_I_G_resistanceLeader_F", "U_I_C_Soldier_Para_2_F", "U_IG_Guerilla3_2", "U_IG_leader", "U_IG_leader", "U_IG_Guerilla2_3", "U_IG_leader", "U_I_C_Soldier_Para_3_F", "BSF_Combat_Uniform_1_Tiger", "U_IG_Guerilla2_2", "U_IG_Guerilla3_1", "U_I_C_Soldier_Para_5_F", "U_I_C_Soldier_Camo_F", "U_I_C_Soldier_Para_5_F", "U_IG_Guerilla2_1", "U_IG_Guerilla2_2", "U_IG_Guerilla2_3", "U_IG_Guerilla2_1", "U_I_C_Soldier_Para_2_F", "U_IG_Guerilla2_3", "U_I_C_Soldier_Para_3_F", "U_I_C_Soldier_Para_2_F", "U_IG_Guerilla3_1", "U_IG_Guerilla2_2", "U_I_C_Soldier_Para_3_F", "U_IG_Guerilla2_1", "U_IG_Guerilla3_1", "U_IG_Guerilla1_1", "U_I_C_Soldier_Para_1_F", "BSF_Combat_Uniform_1_Arid", "U_IG_Guerilla3_2", "U_IG_Guerilla2_2", "U_IG_Guerilla3_2", "U_IG_Guerilla1_1", "U_I_C_Soldier_Para_4_F", "U_IG_Guerilla2_3", "U_I_C_Soldier_Para_5_F", "U_IG_Guerilla3_2", "U_IG_Guerilla1_1", "U_IG_Guerilla2_3", "U_IG_Guerilla1_1", "U_IG_Guerilla3_2", "U_IG_Guerilla2_1", "U_I_C_Soldier_Para_1_F", "U_IG_leader", "U_IG_Guerilla2_3", "U_IG_Guerilla3_1", "U_I_C_Soldier_Camo_F", "U_I_C_Soldier_Para_4_F", "BSF_Combat_Uniform_1_Multi2", "U_IG_Guerilla2_1", "U_IG_Guerilla1_1", "U_I_C_Soldier_Camo_F", "U_IG_Guerilla1_1"};

		/*
			Percental Item Spawn Chances of GuerillaBackpacks:

			BSF_Caryyall_Winter_F          = 1.63%
			BSF_Caryyall_Black_F           = 2.72%
			BSF_Caryyall_Carbon_F          = 2.72%
			BSF_Caryyall_Arid_F            = 2.72%
			BSF_Caryyall_Multi2_F          = 2.72%
			BSF_Caryyall_Tiger_F           = 2.72%
			BSF_Bergen_Black_F             = 1.09%
			BSF_Bergen_Winter_F            = 0.54%
			BSF_Bergen_Winter2_F           = 0.54%
			BSF_Bergen_BlackDigi_F         = 1.09%
			BSF_Bergen_Carbon_F            = 1.09%
			BSF_Bergen_MossyOak_F          = 1.09%
			BSF_Bergen_Tiger_F             = 1.09%
			BSF_Bergen_WD_F                = 1.09%
			BSF_Bergen_Desert_F            = 1.09%
			BSF_ViperHarness_Black_F       = 0.54%
			BSF_ViperHarness_Winter_F      = 0.54%
			BSF_ViperLightHarness_Black_F  = 0.54%
			BSF_ViperLightHarness_Winter_F = 0.54%
			B_Bergen_blk                   = 0.54%
			B_Bergen_mcamo                 = 0.54%
			B_Bergen_rgr                   = 0.54%
			B_Bergen_sgg                   = 0.54%
			B_FieldPack_ghex_F             = 4.35%
			B_ViperHarness_base_F          = 3.26%
			B_ViperHarness_blk_F           = 3.26%
			B_ViperHarness_ghex_F          = 3.26%
			B_ViperHarness_hex_F           = 3.26%
			B_ViperHarness_khk_F           = 3.26%
			B_ViperHarness_oli_F           = 3.26%
			B_ViperLightHarness_base_F     = 4.35%
			B_ViperLightHarness_blk_F      = 4.35%
			B_ViperLightHarness_ghex_F     = 4.35%
			B_ViperLightHarness_hex_F      = 4.35%
			B_ViperLightHarness_khk_F      = 4.35%
			B_ViperLightHarness_oli_F      = 4.35%
			B_FieldPack_blk                = 5.43%
			B_FieldPack_cbr                = 5.43%
			B_FieldPack_ocamo              = 5.43%
			B_FieldPack_oucamo             = 5.43%
		*/
		GuerillaBackpacks[] = {"B_ViperLightHarness_hex_F", "B_FieldPack_oucamo", "B_ViperLightHarness_khk_F", "B_ViperLightHarness_ghex_F", "B_ViperHarness_blk_F", "B_ViperLightHarness_oli_F", "B_ViperLightHarness_oli_F", "B_ViperHarness_hex_F", "B_FieldPack_oucamo", "B_ViperLightHarness_hex_F", "B_FieldPack_ghex_F", "B_ViperHarness_hex_F", "B_FieldPack_ocamo", "B_ViperLightHarness_base_F", "B_ViperLightHarness_hex_F", "BSF_Caryyall_Multi2_F", "B_FieldPack_ghex_F", "BSF_Bergen_Tiger_F", "BSF_Caryyall_Multi2_F", "B_FieldPack_ghex_F", "B_ViperLightHarness_khk_F", "B_FieldPack_cbr", "B_ViperLightHarness_base_F", "BSF_Bergen_Winter_F", "B_FieldPack_ghex_F", "B_FieldPack_cbr", "B_FieldPack_oucamo", "BSF_Bergen_BlackDigi_F", "BSF_Caryyall_Winter_F", "B_ViperLightHarness_ghex_F", "B_FieldPack_oucamo", "B_ViperLightHarness_blk_F", "B_FieldPack_blk", "B_ViperHarness_blk_F", "B_Bergen_rgr", "BSF_Bergen_MossyOak_F", "B_FieldPack_ghex_F", "B_FieldPack_ocamo", "BSF_Caryyall_Multi2_F", "B_ViperLightHarness_base_F", "BSF_Bergen_WD_F", "B_ViperLightHarness_base_F", "BSF_Bergen_BlackDigi_F", "BSF_Caryyall_Black_F", "B_ViperHarness_blk_F", "BSF_Caryyall_Tiger_F", "BSF_Bergen_WD_F", "B_ViperHarness_oli_F", "B_FieldPack_blk", "B_FieldPack_blk", "B_ViperHarness_hex_F", "B_ViperHarness_ghex_F", "BSF_Caryyall_Tiger_F", "B_ViperLightHarness_khk_F", "B_FieldPack_ocamo", "BSF_Caryyall_Carbon_F", "B_FieldPack_oucamo", "B_ViperHarness_blk_F", "BSF_Bergen_Black_F", "B_ViperLightHarness_hex_F", "B_ViperLightHarness_base_F", "B_ViperLightHarness_khk_F", "BSF_Caryyall_Tiger_F", "B_ViperLightHarness_blk_F", "BSF_Bergen_Tiger_F", "BSF_Caryyall_Tiger_F", "BSF_Bergen_Winter2_F", "B_ViperHarness_ghex_F", "B_ViperHarness_ghex_F", "B_ViperLightHarness_khk_F", "B_FieldPack_blk", "BSF_Caryyall_Black_F", "B_ViperLightHarness_hex_F", "B_ViperHarness_khk_F", "BSF_Bergen_Desert_F", "B_ViperLightHarness_ghex_F", "B_FieldPack_ocamo", "B_FieldPack_oucamo", "B_ViperLightHarness_hex_F", "B_FieldPack_oucamo", "BSF_ViperLightHarness_Winter_F", "B_ViperHarness_ghex_F", "B_FieldPack_blk", "B_FieldPack_cbr", "B_ViperHarness_base_F", "B_ViperLightHarness_oli_F", "B_ViperHarness_oli_F", "B_FieldPack_cbr", "B_FieldPack_cbr", "B_ViperLightHarness_blk_F", "B_ViperLightHarness_khk_F", "B_ViperHarness_khk_F", "B_ViperHarness_base_F", "B_Bergen_mcamo", "B_ViperLightHarness_ghex_F", "BSF_Caryyall_Black_F", "B_ViperLightHarness_oli_F", "B_ViperLightHarness_khk_F", "B_FieldPack_ocamo", "B_FieldPack_oucamo", "B_ViperLightHarness_blk_F", "BSF_ViperHarness_Black_F", "B_ViperLightHarness_khk_F", "B_FieldPack_ghex_F", "B_Bergen_sgg", "B_ViperHarness_ghex_F", "BSF_Caryyall_Arid_F", "B_ViperLightHarness_ghex_F", "BSF_Bergen_Carbon_F", "B_FieldPack_cbr", "B_ViperHarness_hex_F", "BSF_Caryyall_Winter_F", "BSF_Caryyall_Winter_F", "B_FieldPack_ocamo", "B_FieldPack_ocamo", "B_ViperLightHarness_base_F", "BSF_Caryyall_Black_F", "BSF_Caryyall_Carbon_F", "BSF_Caryyall_Arid_F", "B_ViperLightHarness_oli_F", "B_ViperHarness_base_F", "B_ViperHarness_ghex_F", "B_ViperHarness_khk_F", "B_ViperLightHarness_blk_F", "B_ViperLightHarness_hex_F", "B_ViperLightHarness_oli_F", "B_ViperHarness_oli_F", "BSF_Caryyall_Arid_F", "B_ViperHarness_oli_F", "B_ViperLightHarness_ghex_F", "B_Bergen_blk", "BSF_Caryyall_Carbon_F", "BSF_Caryyall_Tiger_F", "B_ViperHarness_base_F", "B_ViperLightHarness_blk_F", "BSF_Caryyall_Multi2_F", "B_ViperLightHarness_blk_F", "B_ViperHarness_base_F", "B_FieldPack_blk", "B_ViperLightHarness_hex_F", "B_ViperLightHarness_ghex_F", "BSF_Caryyall_Carbon_F", "B_ViperHarness_hex_F", "B_FieldPack_ocamo", "B_FieldPack_cbr", "B_FieldPack_oucamo", "B_ViperHarness_khk_F", "B_ViperHarness_blk_F", "B_ViperLightHarness_base_F", "B_FieldPack_ghex_F", "B_ViperLightHarness_oli_F", "BSF_Caryyall_Black_F", "BSF_Bergen_Carbon_F", "B_FieldPack_cbr", "B_ViperHarness_hex_F", "B_FieldPack_blk", "B_ViperHarness_oli_F", "BSF_Bergen_Desert_F", "B_FieldPack_cbr", "B_FieldPack_cbr", "B_ViperHarness_khk_F", "B_FieldPack_blk", "BSF_Caryyall_Arid_F", "B_FieldPack_blk", "B_ViperHarness_blk_F", "B_FieldPack_oucamo", "B_FieldPack_ocamo", "B_ViperLightHarness_base_F", "B_ViperLightHarness_blk_F", "BSF_Bergen_MossyOak_F", "BSF_ViperHarness_Winter_F", "B_FieldPack_ocamo", "BSF_Caryyall_Multi2_F", "B_ViperHarness_base_F", "B_ViperHarness_khk_F", "BSF_Caryyall_Carbon_F", "B_ViperHarness_oli_F", "BSF_ViperLightHarness_Black_F", "BSF_Bergen_Black_F", "B_ViperLightHarness_ghex_F", "B_ViperLightHarness_oli_F", "B_FieldPack_ghex_F", "BSF_Caryyall_Arid_F", "B_FieldPack_blk"};

		/*
			Percental Item Spawn Chances of GuerillaVests:

			BSF_Plate_Carrier_GL_Winter  = 4.65%
			BSF_Plate_Carrier_GL_Multi01 = 4.65%
			BSF_Plate_Carrier_GL_Multi02 = 4.65%
			BSF_Plate_Carrier_GL_Arid    = 4.65%
			BSF_Plate_Carrier_GL_Tiger   = 4.65%
			BSF_Plate_Carrier_GL_Carbon  = 4.65%
			V_I_G_resistanceLeader_F     = 2.33%
			V_BandollierB_blk            = 4.65%
			V_BandollierB_cbr            = 4.65%
			V_BandollierB_khk            = 4.65%
			V_BandollierB_oli            = 4.65%
			V_BandollierB_rgr            = 4.65%
			V_Chestrig_blk               = 4.65%
			V_Chestrig_khk               = 4.65%
			V_Chestrig_oli               = 4.65%
			V_Chestrig_rgr               = 4.65%
			V_HarnessO_brn               = 4.65%
			V_HarnessO_gry               = 4.65%
			V_HarnessOGL_brn             = 4.65%
			V_HarnessOGL_gry             = 4.65%
			V_HarnessOSpec_brn           = 4.65%
			V_HarnessOSpec_gry           = 4.65%
		*/
		GuerillaVests[] = {"V_Chestrig_oli", "V_Chestrig_blk", "V_HarnessOGL_brn", "BSF_Plate_Carrier_GL_Multi02", "V_BandollierB_cbr", "BSF_Plate_Carrier_GL_Multi02", "V_HarnessO_brn", "V_HarnessOGL_brn", "BSF_Plate_Carrier_GL_Multi01", "BSF_Plate_Carrier_GL_Tiger", "V_Chestrig_blk", "BSF_Plate_Carrier_GL_Multi01", "V_HarnessOGL_gry", "V_BandollierB_rgr", "V_I_G_resistanceLeader_F", "V_HarnessOSpec_brn", "V_BandollierB_khk", "V_Chestrig_rgr", "BSF_Plate_Carrier_GL_Arid", "V_HarnessOSpec_brn", "V_Chestrig_khk", "V_Chestrig_oli", "V_BandollierB_khk", "V_BandollierB_blk", "V_HarnessO_brn", "V_BandollierB_oli", "V_BandollierB_oli", "BSF_Plate_Carrier_GL_Arid", "V_BandollierB_rgr", "V_BandollierB_cbr", "BSF_Plate_Carrier_GL_Winter", "V_HarnessOGL_gry", "V_BandollierB_blk", "V_HarnessOSpec_gry", "V_Chestrig_rgr", "V_Chestrig_khk", "V_HarnessO_gry", "BSF_Plate_Carrier_GL_Tiger", "V_HarnessOSpec_gry", "BSF_Plate_Carrier_GL_Carbon", "V_HarnessO_gry", "BSF_Plate_Carrier_GL_Carbon", "BSF_Plate_Carrier_GL_Winter"};

		/*
			Percental Item Spawn Chances of GuerillaHeadgear:

			BSF_Helmet_1_Arid         = 0.75%
			BSF_Helmet_1_Tiger        = 0.75%
			BSF_Helmet_1_Multi2       = 0.75%
			BSF_Helmet_2_Arid         = 0.75%
			BSF_Helmet_2_Multi2       = 0.75%
			BSF_Helmet_2_Tiger        = 0.75%
			BSF_Stealth_Helmet_Carbon = 0.75%
			BSF_Stealth_Helmet_Multi2 = 0.75%
			BSF_Stealth_Helmet_Arid   = 0.75%
			BSF_Stealth_Helmet_Tiger  = 0.75%
			BSF_Stealth_Helmet_Winter = 0.75%
			BSF_Stealth_Helmet_Police = 0.75%
			H_Beret_02                = 0.75%
			H_Beret_blk               = 0.75%
			H_Beret_brn_SF            = 0.75%
			H_Beret_Colonel           = 0.75%
			H_Beret_grn               = 0.75%
			H_Beret_grn_SF            = 0.75%
			H_Beret_ocamo             = 0.75%
			H_Beret_red               = 0.75%
			H_Booniehat_tna_F         = 1.49%
			H_Cap_blk_Syndikat_F      = 1.49%
			H_Cap_grn_Syndikat_F      = 1.49%
			H_Cap_oli_Syndikat_F      = 1.49%
			H_Cap_tan_Syndikat_F      = 1.49%
			H_FakeHeadgear_Syndikat_F = 1.49%
			H_MilCap_gen_F            = 1.49%
			H_MilCap_ghex_F           = 1.49%
			H_MilCap_tna_F            = 1.49%
			H_Shemag_khk              = 1.49%
			H_Shemag_olive            = 1.49%
			H_Shemag_olive_hs         = 1.49%
			H_Shemag_tan              = 1.49%
			H_ShemagOpen_khk          = 1.49%
			H_ShemagOpen_tan          = 1.49%
			H_TurbanO_blk             = 1.49%
			H_Watchcap_camo           = 1.49%
			H_Watchcap_sgg            = 1.49%
			H_Bandanna_camo           = 2.24%
			H_Bandanna_cbr            = 2.24%
			H_Bandanna_gry            = 2.24%
			H_Bandanna_khk            = 2.24%
			H_Bandanna_khk_hs         = 2.24%
			H_Bandanna_mcamo          = 2.24%
			H_Bandanna_sgg            = 2.24%
			H_BandMask_blk            = 2.24%
			H_Cap_brn_SPECOPS         = 2.24%
			H_Cap_khaki_specops_UK    = 2.24%
			H_Cap_tan_specops_US      = 2.24%
			H_Hat_camo                = 2.24%
			H_Watchcap_blk            = 2.24%
			H_Watchcap_khk            = 2.24%
			Exile_Headgear_GasMask    = 2.99%
			H_Booniehat_dgtl          = 2.99%
			H_Booniehat_dirty         = 2.99%
			H_Booniehat_grn           = 2.99%
			H_Booniehat_indp          = 2.99%
			H_Booniehat_khk           = 2.99%
			H_Booniehat_khk_hs        = 2.99%
			H_Booniehat_mcamo         = 2.99%
			H_Booniehat_tan           = 2.99%
		*/
		GuerillaHeadgear[] = {"H_Cap_brn_SPECOPS", "H_Booniehat_khk", "H_Shemag_tan", "H_Cap_grn_Syndikat_F", "H_Bandanna_mcamo", "H_Bandanna_gry", "Exile_Headgear_GasMask", "H_Booniehat_grn", "H_Cap_brn_SPECOPS", "H_Cap_brn_SPECOPS", "H_Booniehat_tna_F", "H_FakeHeadgear_Syndikat_F", "H_Cap_khaki_specops_UK", "H_Beret_grn", "H_Booniehat_dgtl", "H_MilCap_gen_F", "H_Beret_ocamo", "H_Bandanna_khk", "H_TurbanO_blk", "H_ShemagOpen_tan", "H_Bandanna_cbr", "BSF_Stealth_Helmet_Multi2", "H_Booniehat_indp", "H_Cap_oli_Syndikat_F", "H_ShemagOpen_khk", "H_Beret_Colonel", "BSF_Helmet_1_Arid", "H_Bandanna_camo", "H_Watchcap_khk", "H_Shemag_olive_hs", "H_Beret_red", "BSF_Helmet_1_Multi2", "BSF_Helmet_2_Tiger", "H_BandMask_blk", "H_Bandanna_sgg", "H_Booniehat_indp", "H_Booniehat_dgtl", "H_Booniehat_khk", "H_Booniehat_tan", "BSF_Stealth_Helmet_Winter", "H_Bandanna_sgg", "H_Bandanna_camo", "H_Booniehat_mcamo", "H_Shemag_olive_hs", "H_MilCap_gen_F", "H_Watchcap_sgg", "H_TurbanO_blk", "H_Booniehat_indp", "H_Bandanna_camo", "H_Booniehat_khk_hs", "H_Bandanna_mcamo", "H_Beret_blk", "H_Watchcap_blk", "H_Bandanna_khk_hs", "H_Watchcap_camo", "H_Booniehat_dgtl", "H_Booniehat_tan", "H_Bandanna_gry", "H_Cap_blk_Syndikat_F", "H_Watchcap_camo", "H_Booniehat_indp", "H_BandMask_blk", "H_Bandanna_gry", "H_Beret_grn_SF", "Exile_Headgear_GasMask", "H_Booniehat_khk_hs", "H_Watchcap_blk", "H_Booniehat_dirty", "H_Shemag_olive", "H_Booniehat_grn", "H_Watchcap_sgg", "H_MilCap_tna_F", "H_Bandanna_cbr", "H_Bandanna_sgg", "H_Booniehat_tan", "H_Beret_brn_SF", "H_Booniehat_khk", "H_Booniehat_khk", "H_Cap_tan_specops_US", "H_Shemag_khk", "H_Shemag_olive", "BSF_Stealth_Helmet_Carbon", "H_ShemagOpen_khk", "BSF_Helmet_2_Arid", "BSF_Stealth_Helmet_Arid", "BSF_Stealth_Helmet_Tiger", "H_Watchcap_blk", "H_Booniehat_dgtl", "H_Booniehat_grn", "H_Watchcap_khk", "H_Booniehat_grn", "Exile_Headgear_GasMask", "H_Booniehat_mcamo", "H_Cap_khaki_specops_UK", "H_Bandanna_khk_hs", "H_Booniehat_mcamo", "H_Booniehat_khk_hs", "BSF_Helmet_1_Tiger", "H_Cap_khaki_specops_UK", "H_Cap_tan_Syndikat_F", "H_Booniehat_dirty", "H_Booniehat_dirty", "H_Bandanna_khk_hs", "BSF_Helmet_2_Multi2", "H_BandMask_blk", "H_Cap_tan_specops_US", "H_Shemag_khk", "H_FakeHeadgear_Syndikat_F", "H_Cap_blk_Syndikat_F", "H_Cap_tan_Syndikat_F", "BSF_Stealth_Helmet_Police", "H_Cap_oli_Syndikat_F", "H_Booniehat_mcamo", "Exile_Headgear_GasMask", "H_Booniehat_khk_hs", "H_Hat_camo", "H_Booniehat_tna_F", "H_Booniehat_dirty", "H_MilCap_ghex_F", "H_MilCap_tna_F", "H_Cap_tan_specops_US", "H_Bandanna_khk", "H_Hat_camo", "H_MilCap_ghex_F", "H_Hat_camo", "H_Bandanna_khk", "H_Shemag_tan", "H_Cap_grn_Syndikat_F", "H_Watchcap_khk", "H_ShemagOpen_tan", "H_Bandanna_cbr", "H_Bandanna_mcamo", "H_Beret_02", "H_Booniehat_tan"};

		/*
			Percental Item Spawn Chances of MilitaryClothing:

			BSF_Combat_Uniform_1_Arid     = 0.64%
			BSF_Combat_Uniform_1_Tiger    = 0.64%
			BSF_Combat_Uniform_1_Multi2   = 0.64%
			BSF_Viper_Black               = 0.64%
			BSF_Viper_Winter              = 0.64%
			U_B_Wetsuit                   = 1.27%
			U_I_OfficerUniform            = 1.27%
			U_I_Wetsuit                   = 1.27%
			U_O_CombatUniform_ocamo       = 1.27%
			U_O_CombatUniform_oucamo      = 1.27%
			U_O_OfficerUniform_ocamo      = 1.27%
			U_O_SpecopsUniform_blk        = 1.27%
			U_O_SpecopsUniform_ocamo      = 1.27%
			U_O_V_Soldier_Viper_F         = 1.27%
			U_O_V_Soldier_Viper_hex_F     = 1.27%
			U_O_Wetsuit                   = 1.27%
			U_B_SpecopsUniform_sgg        = 1.91%
			U_B_HeliPilotCoveralls        = 2.55%
			U_B_PilotCoveralls            = 2.55%
			U_I_CombatUniform             = 2.55%
			U_I_CombatUniform_shortsleeve = 2.55%
			U_I_CombatUniform_tshirt      = 2.55%
			U_I_HeliPilotCoveralls        = 2.55%
			U_I_pilotCoveralls            = 2.55%
			U_O_PilotCoveralls            = 2.55%
			U_B_CombatUniform_mcam        = 3.18%
			U_B_CombatUniform_mcam_tshirt = 3.18%
			U_B_CombatUniform_mcam_vest   = 3.18%
			U_B_CombatUniform_mcam_worn   = 3.18%
			U_B_CTRG_1                    = 3.18%
			U_B_CTRG_2                    = 3.18%
			U_B_CTRG_3                    = 3.18%
			U_B_CTRG_Soldier_2_F          = 3.18%
			U_B_CTRG_Soldier_3_F          = 3.18%
			U_B_CTRG_Soldier_F            = 3.18%
			U_B_CTRG_Soldier_urb_1_F      = 3.18%
			U_B_CTRG_Soldier_urb_2_F      = 3.18%
			U_B_CTRG_Soldier_urb_3_F      = 3.18%
			U_B_GEN_Commander_F           = 3.18%
			U_B_GEN_Soldier_F             = 3.18%
			U_B_T_Soldier_AR_F            = 3.18%
			U_B_T_Soldier_SL_F            = 3.18%
			U_O_T_Officer_F               = 3.18%
			U_O_T_Soldier_F               = 3.18%
		*/
		MilitaryClothing[] = {"U_B_CTRG_2", "U_O_CombatUniform_oucamo", "U_O_PilotCoveralls", "U_B_CombatUniform_mcam_vest", "U_B_CTRG_Soldier_urb_2_F", "U_B_CTRG_Soldier_urb_2_F", "U_B_GEN_Commander_F", "U_B_PilotCoveralls", "U_O_OfficerUniform_ocamo", "U_I_Wetsuit", "U_B_CTRG_2", "U_B_CTRG_Soldier_urb_3_F", "U_B_CTRG_2", "U_I_Wetsuit", "U_O_V_Soldier_Viper_F", "U_O_SpecopsUniform_blk", "U_B_GEN_Commander_F", "U_O_T_Officer_F", "U_O_PilotCoveralls", "U_B_CTRG_2", "U_B_T_Soldier_AR_F", "U_B_CombatUniform_mcam_worn", "U_I_OfficerUniform", "U_B_CombatUniform_mcam_tshirt", "U_B_T_Soldier_SL_F", "U_B_T_Soldier_SL_F", "U_I_CombatUniform", "U_B_GEN_Soldier_F", "U_B_CombatUniform_mcam", "BSF_Viper_Winter", "U_B_CTRG_Soldier_urb_2_F", "U_B_CTRG_Soldier_2_F", "U_B_CTRG_3", "U_O_T_Officer_F", "U_B_CTRG_Soldier_urb_1_F", "U_B_SpecopsUniform_sgg", "U_B_T_Soldier_SL_F", "U_B_HeliPilotCoveralls", "U_O_CombatUniform_oucamo", "U_O_T_Officer_F", "U_B_CTRG_Soldier_3_F", "U_B_Wetsuit", "U_B_CombatUniform_mcam", "U_B_CombatUniform_mcam_vest", "U_B_GEN_Soldier_F", "U_B_CTRG_Soldier_2_F", "U_B_T_Soldier_SL_F", "BSF_Combat_Uniform_1_Tiger", "U_B_GEN_Soldier_F", "U_I_HeliPilotCoveralls", "U_B_CTRG_3", "U_O_PilotCoveralls", "U_B_CombatUniform_mcam_tshirt", "U_B_CTRG_1", "U_I_HeliPilotCoveralls", "U_I_HeliPilotCoveralls", "U_B_GEN_Commander_F", "U_O_T_Soldier_F", "U_B_CTRG_Soldier_F", "U_B_CTRG_Soldier_urb_3_F", "U_B_CTRG_3", "U_B_HeliPilotCoveralls", "U_B_CTRG_2", "U_B_CombatUniform_mcam_tshirt", "U_I_CombatUniform", "U_I_CombatUniform_tshirt", "U_B_CTRG_Soldier_3_F", "U_B_SpecopsUniform_sgg", "U_B_CTRG_Soldier_urb_1_F", "U_O_SpecopsUniform_ocamo", "U_B_GEN_Commander_F", "U_I_CombatUniform", "U_B_T_Soldier_AR_F", "U_B_T_Soldier_AR_F", "U_B_GEN_Soldier_F", "U_B_CTRG_Soldier_urb_1_F", "U_O_PilotCoveralls", "U_O_Wetsuit", "U_I_CombatUniform_shortsleeve", "U_B_CombatUniform_mcam", "BSF_Combat_Uniform_1_Arid", "U_B_CombatUniform_mcam_tshirt", "U_O_T_Soldier_F", "U_O_V_Soldier_Viper_hex_F", "U_B_CTRG_1", "U_I_HeliPilotCoveralls", "U_B_CTRG_Soldier_F", "U_B_CTRG_Soldier_3_F", "U_B_GEN_Soldier_F", "U_I_CombatUniform_shortsleeve", "U_B_Wetsuit", "U_O_SpecopsUniform_blk", "U_B_CTRG_Soldier_2_F", "U_B_HeliPilotCoveralls", "U_B_CTRG_Soldier_urb_2_F", "U_B_CTRG_Soldier_F", "U_B_CombatUniform_mcam_vest", "U_O_T_Soldier_F", "U_B_PilotCoveralls", "U_B_CombatUniform_mcam_worn", "U_B_CTRG_1", "U_O_Wetsuit", "U_B_CTRG_3", "U_B_PilotCoveralls", "U_O_T_Soldier_F", "U_B_GEN_Commander_F", "U_B_T_Soldier_AR_F", "U_I_CombatUniform", "U_B_T_Soldier_SL_F", "U_I_pilotCoveralls", "U_I_CombatUniform_shortsleeve", "BSF_Combat_Uniform_1_Multi2", "U_I_CombatUniform_shortsleeve", "U_I_CombatUniform_tshirt", "U_B_CTRG_Soldier_urb_1_F", "U_B_CombatUniform_mcam", "U_I_CombatUniform_tshirt", "U_B_CTRG_Soldier_urb_3_F", "U_B_CTRG_Soldier_F", "U_B_CTRG_Soldier_urb_2_F", "U_B_CombatUniform_mcam", "U_O_SpecopsUniform_ocamo", "U_B_CTRG_1", "U_B_CombatUniform_mcam_vest", "U_B_CombatUniform_mcam_worn", "U_B_CombatUniform_mcam_worn", "U_B_CTRG_Soldier_3_F", "U_O_T_Officer_F", "U_I_pilotCoveralls", "U_B_CTRG_Soldier_2_F", "U_O_OfficerUniform_ocamo", "U_O_V_Soldier_Viper_F", "U_I_CombatUniform_tshirt", "U_B_CTRG_Soldier_urb_3_F", "U_B_PilotCoveralls", "U_I_pilotCoveralls", "U_I_pilotCoveralls", "U_I_OfficerUniform", "U_O_V_Soldier_Viper_hex_F", "U_B_CombatUniform_mcam_vest", "U_B_CombatUniform_mcam_worn", "BSF_Viper_Black", "U_B_CombatUniform_mcam_tshirt", "U_B_HeliPilotCoveralls", "U_O_CombatUniform_ocamo", "U_O_T_Officer_F", "U_B_CTRG_Soldier_urb_3_F", "U_B_SpecopsUniform_sgg", "U_B_CTRG_1", "U_O_T_Soldier_F", "U_B_CTRG_Soldier_2_F", "U_B_T_Soldier_AR_F", "U_B_CTRG_3", "U_B_CTRG_Soldier_F", "U_B_CTRG_Soldier_urb_1_F", "U_O_CombatUniform_ocamo", "U_B_CTRG_Soldier_3_F"};

		/*
			Percental Item Spawn Chances of MilitaryBackpacks:

			BSF_Caryyall_Winter_F          = 2.48%
			BSF_Caryyall_Black_F           = 4.13%
			BSF_Caryyall_Carbon_F          = 4.13%
			BSF_Caryyall_Arid_F            = 4.13%
			BSF_Caryyall_Multi2_F          = 4.13%
			BSF_Caryyall_Tiger_F           = 4.13%
			BSF_Bergen_Black_F             = 1.65%
			BSF_Bergen_Winter_F            = 0.83%
			BSF_Bergen_Winter2_F           = 0.83%
			BSF_Bergen_BlackDigi_F         = 1.65%
			BSF_Bergen_Carbon_F            = 1.65%
			BSF_Bergen_MossyOak_F          = 1.65%
			BSF_Bergen_Tiger_F             = 1.65%
			BSF_Bergen_WD_F                = 1.65%
			BSF_Bergen_Desert_F            = 1.65%
			BSF_ViperHarness_Black_F       = 3.31%
			BSF_ViperHarness_Winter_F      = 3.31%
			BSF_ViperLightHarness_Black_F  = 3.31%
			BSF_ViperLightHarness_Winter_F = 3.31%
			B_Bergen_Base_F                = 0.83%
			B_Bergen_dgtl_F                = 0.83%
			B_Bergen_hex_F                 = 0.83%
			B_Bergen_mcamo_F               = 0.83%
			B_Bergen_tna_F                 = 0.83%
			B_Carryall_mcamo               = 6.61%
			B_Carryall_ocamo               = 6.61%
			B_Carryall_oucamo              = 6.61%
			B_Carryall_khk                 = 6.61%
			B_Carryall_oli                 = 6.61%
			B_Carryall_cbr                 = 6.61%
			B_Carryall_ghex_F              = 6.61%
		*/
		MilitaryBackpacks[] = {"BSF_Caryyall_Multi2_F", "B_Carryall_mcamo", "B_Carryall_ghex_F", "BSF_Caryyall_Tiger_F", "BSF_ViperHarness_Black_F", "B_Carryall_oucamo", "BSF_ViperHarness_Black_F", "B_Bergen_hex_F", "B_Carryall_khk", "B_Carryall_ghex_F", "BSF_Bergen_Tiger_F", "B_Carryall_khk", "BSF_Caryyall_Arid_F", "BSF_ViperLightHarness_Winter_F", "B_Carryall_ocamo", "BSF_Bergen_WD_F", "BSF_ViperLightHarness_Black_F", "BSF_Bergen_WD_F", "B_Carryall_khk", "BSF_ViperHarness_Black_F", "B_Carryall_ghex_F", "BSF_ViperHarness_Winter_F", "B_Carryall_cbr", "B_Carryall_mcamo", "B_Carryall_cbr", "BSF_Caryyall_Winter_F", "BSF_Bergen_Black_F", "B_Carryall_ghex_F", "B_Carryall_cbr", "B_Carryall_oucamo", "B_Carryall_khk", "BSF_Caryyall_Tiger_F", "B_Carryall_mcamo", "B_Carryall_ocamo", "BSF_Caryyall_Carbon_F", "BSF_Caryyall_Arid_F", "B_Carryall_cbr", "B_Carryall_ghex_F", "BSF_Bergen_BlackDigi_F", "BSF_Caryyall_Arid_F", "B_Carryall_khk", "BSF_Bergen_Black_F", "BSF_Caryyall_Multi2_F", "BSF_Caryyall_Black_F", "BSF_Bergen_Desert_F", "BSF_Caryyall_Black_F", "B_Carryall_khk", "B_Carryall_cbr", "B_Carryall_ocamo", "B_Carryall_ghex_F", "B_Carryall_oli", "BSF_Bergen_MossyOak_F", "B_Carryall_ocamo", "BSF_Caryyall_Tiger_F", "BSF_ViperLightHarness_Black_F", "BSF_Bergen_MossyOak_F", "B_Carryall_cbr", "B_Carryall_mcamo", "BSF_Caryyall_Black_F", "B_Carryall_oucamo", "BSF_Caryyall_Carbon_F", "B_Carryall_cbr", "B_Carryall_ghex_F", "BSF_ViperLightHarness_Black_F", "B_Carryall_oucamo", "B_Carryall_mcamo", "BSF_Caryyall_Winter_F", "B_Bergen_mcamo_F", "B_Carryall_oli", "BSF_ViperHarness_Winter_F", "BSF_Caryyall_Carbon_F", "B_Carryall_cbr", "B_Carryall_oli", "B_Carryall_mcamo", "B_Carryall_oucamo", "BSF_Bergen_Desert_F", "B_Carryall_ocamo", "B_Carryall_oucamo", "BSF_Caryyall_Carbon_F", "BSF_Caryyall_Winter_F", "BSF_ViperHarness_Winter_F", "BSF_Bergen_Winter_F", "B_Bergen_dgtl_F", "B_Carryall_ocamo", "BSF_Caryyall_Black_F", "B_Carryall_mcamo", "B_Carryall_mcamo", "BSF_Caryyall_Arid_F", "B_Carryall_oucamo", "BSF_ViperHarness_Winter_F", "B_Carryall_ghex_F", "BSF_Bergen_Winter2_F", "B_Carryall_oli", "BSF_Caryyall_Tiger_F", "BSF_Bergen_Carbon_F", "BSF_Bergen_Tiger_F", "BSF_Caryyall_Multi2_F", "B_Bergen_Base_F", "B_Carryall_khk", "BSF_Caryyall_Carbon_F", "BSF_Caryyall_Multi2_F", "BSF_ViperHarness_Black_F", "B_Carryall_oli", "B_Carryall_oli", "BSF_Caryyall_Black_F", "BSF_Bergen_BlackDigi_F", "BSF_ViperLightHarness_Black_F", "B_Carryall_oucamo", "B_Carryall_ocamo", "B_Carryall_oli", "BSF_Caryyall_Tiger_F", "BSF_Bergen_Carbon_F", "BSF_ViperLightHarness_Winter_F", "B_Bergen_tna_F", "B_Carryall_khk", "BSF_ViperLightHarness_Winter_F", "B_Carryall_ocamo", "BSF_Caryyall_Multi2_F", "BSF_ViperLightHarness_Winter_F", "B_Carryall_oli", "BSF_Caryyall_Arid_F"};

		/*
			Percental Item Spawn Chances of MilitaryVests:

			BSF_Plate_Carrier_GL_Winter  = 6.25%
			BSF_Plate_Carrier_GL_Multi01 = 6.25%
			BSF_Plate_Carrier_GL_Multi02 = 6.25%
			BSF_Plate_Carrier_GL_Arid    = 6.25%
			BSF_Plate_Carrier_GL_Tiger   = 6.25%
			BSF_Plate_Carrier_GL_Carbon  = 6.25%
			V_PlateCarrierH_CTRG         = 3.13%
			V_PlateCarrierL_CTRG         = 3.13%
			V_PlateCarrier1_blk          = 6.25%
			V_PlateCarrier1_rgr          = 6.25%
			V_PlateCarrier2_rgr          = 6.25%
			V_PlateCarrier3_rgr          = 6.25%
			V_PlateCarrierGL_rgr         = 6.25%
			V_PlateCarrierIA1_dgtl       = 6.25%
			V_PlateCarrierIA2_dgtl       = 6.25%
			V_PlateCarrierIAGL_dgtl      = 6.25%
			V_PlateCarrierSpec_rgr       = 6.25%
		*/
		MilitaryVests[] = {"V_PlateCarrierGL_rgr", "V_PlateCarrierL_CTRG", "V_PlateCarrierGL_rgr", "V_PlateCarrier3_rgr", "BSF_Plate_Carrier_GL_Multi01", "BSF_Plate_Carrier_GL_Multi02", "V_PlateCarrier1_blk", "V_PlateCarrierSpec_rgr", "V_PlateCarrierH_CTRG", "BSF_Plate_Carrier_GL_Tiger", "V_PlateCarrier2_rgr", "V_PlateCarrierSpec_rgr", "V_PlateCarrier1_blk", "V_PlateCarrierIA2_dgtl", "BSF_Plate_Carrier_GL_Multi01", "V_PlateCarrierIAGL_dgtl", "V_PlateCarrier1_rgr", "V_PlateCarrierIA1_dgtl", "V_PlateCarrierIA2_dgtl", "BSF_Plate_Carrier_GL_Arid", "V_PlateCarrier3_rgr", "BSF_Plate_Carrier_GL_Multi02", "V_PlateCarrier1_rgr", "BSF_Plate_Carrier_GL_Tiger", "V_PlateCarrier2_rgr", "BSF_Plate_Carrier_GL_Winter", "BSF_Plate_Carrier_GL_Winter", "V_PlateCarrierIA1_dgtl", "BSF_Plate_Carrier_GL_Arid", "BSF_Plate_Carrier_GL_Carbon", "V_PlateCarrierIAGL_dgtl", "BSF_Plate_Carrier_GL_Carbon"};

		/*
			Percental Item Spawn Chances of MilitaryHeadgear:

			BSF_Helmet_1_Arid         = 0.72%
			BSF_Helmet_1_Tiger        = 0.72%
			BSF_Helmet_1_Multi2       = 0.72%
			BSF_Helmet_2_Arid         = 0.72%
			BSF_Helmet_2_Multi2       = 0.72%
			BSF_Helmet_2_Tiger        = 0.72%
			BSF_Stealth_Helmet_Carbon = 0.72%
			BSF_Stealth_Helmet_Multi2 = 0.72%
			BSF_Stealth_Helmet_Arid   = 0.72%
			BSF_Stealth_Helmet_Tiger  = 0.72%
			BSF_Stealth_Helmet_Winter = 0.72%
			BSF_Stealth_Helmet_Police = 0.72%
			BSF_Viper_Helmet_black_F  = 0.72%
			BSF_Viper_Helmet_Winter_F = 0.72%
			rhsusf_ihadss             = 0.72%
			H_CrewHelmetHeli_B        = 0.72%
			H_CrewHelmetHeli_I        = 0.72%
			H_CrewHelmetHeli_O        = 0.72%
			H_HelmetB_camo            = 0.72%
			H_HelmetCrew_B            = 0.72%
			H_HelmetCrew_I            = 0.72%
			H_HelmetCrew_O            = 0.72%
			H_HelmetLeaderO_ocamo     = 0.72%
			H_HelmetLeaderO_oucamo    = 0.72%
			H_HelmetO_ghex_F          = 0.72%
			H_HelmetO_ocamo           = 0.72%
			H_HelmetO_oucamo          = 0.72%
			H_HelmetSpecO_blk         = 0.72%
			H_HelmetSpecO_ocamo       = 0.72%
			H_PilotHelmetFighter_B    = 0.72%
			H_PilotHelmetFighter_I    = 0.72%
			H_PilotHelmetFighter_O    = 0.72%
			H_PilotHelmetHeli_B       = 0.72%
			H_PilotHelmetHeli_I       = 0.72%
			H_PilotHelmetHeli_O       = 0.72%
			H_BandMask_demon          = 1.45%
			H_BandMask_khk            = 1.45%
			H_BandMask_reaper         = 1.45%
			H_Beret_gen_F             = 1.45%
			H_Helmet_Skate            = 1.45%
			H_HelmetB_black           = 1.45%
			H_HelmetB_desert          = 1.45%
			H_HelmetB_Enh_tna_F       = 1.45%
			H_HelmetB_grass           = 1.45%
			H_HelmetB_light_black     = 1.45%
			H_HelmetB_light_desert    = 1.45%
			H_HelmetB_light_grass     = 1.45%
			H_HelmetB_light_sand      = 1.45%
			H_HelmetB_light_snakeskin = 1.45%
			H_HelmetB_Light_tna_F     = 1.45%
			H_HelmetB_sand            = 1.45%
			H_HelmetB_snakeskin       = 1.45%
			H_HelmetB_TI_tna_F        = 1.45%
			H_HelmetB_tna_F           = 1.45%
			H_HelmetCrew_O_ghex_F     = 1.45%
			H_HelmetIA_camo           = 1.45%
			H_HelmetIA_net            = 1.45%
			H_HelmetLeaderO_ghex_F    = 1.45%
			H_HelmetSpecO_ghex_F      = 1.45%
			H_HelmetB                 = 2.17%
			H_HelmetB_light           = 2.17%
			H_HelmetB_paint           = 2.17%
			H_HelmetB_plain_blk       = 2.17%
			H_HelmetIA                = 2.17%
			H_HelmetSpecB             = 2.17%
			H_HelmetSpecB_blk         = 2.17%
			H_HelmetSpecB_paint1      = 2.17%
			H_HelmetSpecB_paint2      = 2.17%
			Exile_Headgear_GasMask    = 2.90%
			H_MilCap_blue             = 2.90%
			H_MilCap_dgtl             = 2.90%
			H_MilCap_mcamo            = 2.90%
			H_MilCap_ocamo            = 2.90%
			H_MilCap_oucamo           = 2.90%
			H_MilCap_rucamo           = 2.90%
		*/
		MilitaryHeadgear[] = {"Exile_Headgear_GasMask", "H_HelmetB_light_sand", "BSF_Stealth_Helmet_Multi2", "H_MilCap_blue", "H_MilCap_blue", "H_HelmetB_tna_F", "H_HelmetSpecB_paint2", "H_HelmetB_desert", "BSF_Stealth_Helmet_Winter", "H_BandMask_khk", "H_BandMask_reaper", "H_MilCap_mcamo", "H_PilotHelmetHeli_B", "H_HelmetSpecB", "H_HelmetIA_camo", "H_HelmetB_light_snakeskin", "H_HelmetIA_camo", "H_HelmetCrew_O_ghex_F", "H_Beret_gen_F", "H_HelmetSpecB_blk", "H_HelmetSpecO_ghex_F", "H_HelmetB_TI_tna_F", "H_HelmetB_sand", "H_MilCap_ocamo", "H_HelmetB_light_grass", "H_HelmetB_snakeskin", "H_HelmetB_grass", "H_MilCap_dgtl", "H_PilotHelmetFighter_B", "H_MilCap_rucamo", "H_CrewHelmetHeli_B", "Exile_Headgear_GasMask", "H_HelmetB_light_sand", "H_Helmet_Skate", "H_HelmetLeaderO_oucamo", "BSF_Stealth_Helmet_Police", "BSF_Viper_Helmet_Winter_F", "H_MilCap_blue", "H_HelmetIA", "H_HelmetSpecB", "BSF_Helmet_2_Tiger", "H_HelmetB_grass", "H_HelmetB_TI_tna_F", "BSF_Helmet_1_Tiger", "H_BandMask_reaper", "H_HelmetB_camo", "H_PilotHelmetFighter_I", "H_PilotHelmetHeli_O", "Exile_Headgear_GasMask", "H_HelmetB", "H_HelmetB_light", "H_HelmetB_black", "H_HelmetCrew_O_ghex_F", "H_MilCap_oucamo", "H_HelmetSpecO_ocamo", "H_MilCap_oucamo", "H_HelmetCrew_B", "H_HelmetB_light_grass", "H_MilCap_oucamo", "H_HelmetSpecB_blk", "H_BandMask_demon", "H_HelmetB_light_desert", "BSF_Viper_Helmet_black_F", "H_HelmetLeaderO_ghex_F", "H_BandMask_khk", "H_HelmetB_paint", "H_HelmetLeaderO_ghex_F", "H_HelmetO_ocamo", "H_MilCap_rucamo", "H_HelmetO_oucamo", "H_HelmetB", "H_HelmetB_light", "H_HelmetB_light_desert", "H_MilCap_mcamo", "H_HelmetB_Light_tna_F", "H_MilCap_mcamo", "rhsusf_ihadss", "BSF_Helmet_1_Arid", "H_Helmet_Skate", "H_HelmetIA", "H_Beret_gen_F", "H_HelmetB_plain_blk", "H_MilCap_ocamo", "H_HelmetIA_net", "H_CrewHelmetHeli_I", "BSF_Stealth_Helmet_Tiger", "H_HelmetB_Enh_tna_F", "H_HelmetSpecB_paint2", "H_BandMask_demon", "H_HelmetB_sand", "H_HelmetB_Light_tna_F", "H_MilCap_ocamo", "H_HelmetB_plain_blk", "H_MilCap_dgtl", "H_HelmetSpecB_paint2", "H_HelmetB_plain_blk", "H_PilotHelmetFighter_O", "H_MilCap_dgtl", "Exile_Headgear_GasMask", "H_HelmetB_desert", "H_HelmetSpecO_ghex_F", "H_CrewHelmetHeli_O", "H_HelmetSpecB", "H_HelmetO_ghex_F", "H_HelmetSpecO_blk", "H_MilCap_blue", "H_HelmetSpecB_paint1", "H_MilCap_dgtl", "H_HelmetLeaderO_ocamo", "H_HelmetSpecB_blk", "H_HelmetB_light_black", "BSF_Helmet_2_Multi2", "H_MilCap_oucamo", "H_HelmetB_light", "H_HelmetB_tna_F", "H_HelmetB_paint", "H_HelmetSpecB_paint1", "H_HelmetB_light_snakeskin", "H_PilotHelmetHeli_I", "H_MilCap_mcamo", "H_MilCap_rucamo", "H_HelmetB_light_black", "H_HelmetB_snakeskin", "BSF_Helmet_1_Multi2", "H_HelmetIA_net", "H_HelmetB_Enh_tna_F", "H_HelmetB_black", "H_HelmetIA", "H_MilCap_ocamo", "BSF_Stealth_Helmet_Arid", "H_HelmetSpecB_paint1", "H_HelmetB_paint", "BSF_Stealth_Helmet_Carbon", "H_HelmetB", "H_HelmetCrew_O", "H_HelmetCrew_I", "BSF_Helmet_2_Arid", "H_MilCap_rucamo"};

		/*
			Percental Item Spawn Chances of Ghillies:

			U_B_GhillieSuit = 33.33%
			U_O_GhillieSuit = 33.33%
			U_I_GhillieSuit = 33.33%
		*/
		Ghillies[] = {"U_O_GhillieSuit", "U_I_GhillieSuit", "U_B_GhillieSuit"};

		/*
			Percental Item Spawn Chances of DLCGhillies:

			U_B_FullGhillie_ard     = 2.94%
			U_B_FullGhillie_lsh     = 2.94%
			U_B_FullGhillie_sard    = 2.94%
			U_O_FullGhillie_ard     = 2.94%
			U_O_FullGhillie_lsh     = 2.94%
			U_O_FullGhillie_sard    = 2.94%
			U_I_FullGhillie_ard     = 2.94%
			U_I_FullGhillie_lsh     = 2.94%
			U_I_FullGhillie_sard    = 2.94%
			U_B_T_Sniper_F          = 14.71%
			U_B_T_Soldier_F         = 14.71%
			U_B_T_FullGhillie_tna_F = 14.71%
			U_O_T_Sniper_F          = 14.71%
			U_O_T_FullGhillie_tna_F = 14.71%
		*/
		DLCGhillies[] = {"U_O_T_FullGhillie_tna_F", "U_B_T_Sniper_F", "U_B_T_FullGhillie_tna_F", "U_I_FullGhillie_lsh", "U_O_T_Sniper_F", "U_B_FullGhillie_ard", "U_B_T_Sniper_F", "U_O_FullGhillie_ard", "U_B_T_Soldier_F", "U_B_T_FullGhillie_tna_F", "U_O_T_FullGhillie_tna_F", "U_B_T_Soldier_F", "U_I_FullGhillie_ard", "U_O_T_Sniper_F", "U_O_FullGhillie_sard", "U_B_T_FullGhillie_tna_F", "U_B_T_Sniper_F", "U_B_T_Soldier_F", "U_B_T_Sniper_F", "U_O_T_FullGhillie_tna_F", "U_B_T_FullGhillie_tna_F", "U_O_T_Sniper_F", "U_O_FullGhillie_lsh", "U_I_FullGhillie_sard", "U_B_T_FullGhillie_tna_F", "U_O_T_Sniper_F", "U_B_T_Soldier_F", "U_B_FullGhillie_lsh", "U_O_T_FullGhillie_tna_F", "U_B_T_Soldier_F", "U_O_T_FullGhillie_tna_F", "U_B_T_Sniper_F", "U_O_T_Sniper_F", "U_B_FullGhillie_sard"};

		/*
			Percental Item Spawn Chances of DLCVests:

			V_PlateCarrierGL_blk         = 4.76%
			V_PlateCarrierGL_mtp         = 4.76%
			V_PlateCarrierGL_rgr         = 4.76%
			V_PlateCarrierIAGL_dgtl      = 4.76%
			V_PlateCarrierIAGL_oli       = 4.76%
			V_PlateCarrierSpec_blk       = 4.76%
			V_PlateCarrierSpec_mtp       = 4.76%
			V_PlateCarrierSpec_rgr       = 4.76%
			V_TacChestrig_grn_F          = 4.76%
			V_TacChestrig_oli_F          = 4.76%
			V_TacChestrig_cbr_F          = 4.76%
			V_PlateCarrier1_tna_F        = 4.76%
			V_PlateCarrier2_tna_F        = 4.76%
			V_PlateCarrierSpec_tna_F     = 4.76%
			V_PlateCarrierGL_tna_F       = 4.76%
			V_HarnessO_ghex_F            = 4.76%
			V_HarnessOGL_ghex_F          = 4.76%
			V_BandollierB_ghex_F         = 4.76%
			V_TacVest_gen_F              = 4.76%
			V_PlateCarrier1_rgr_noflag_F = 4.76%
			V_PlateCarrier2_rgr_noflag_F = 4.76%
		*/
		DLCVests[] = {"V_PlateCarrierGL_blk", "V_PlateCarrier1_tna_F", "V_TacChestrig_cbr_F", "V_PlateCarrierSpec_rgr", "V_PlateCarrier2_tna_F", "V_PlateCarrierSpec_tna_F", "V_PlateCarrierGL_tna_F", "V_PlateCarrierSpec_blk", "V_PlateCarrierSpec_mtp", "V_PlateCarrierGL_mtp", "V_BandollierB_ghex_F", "V_TacChestrig_grn_F", "V_TacVest_gen_F", "V_HarnessOGL_ghex_F", "V_PlateCarrierIAGL_oli", "V_PlateCarrierIAGL_dgtl", "V_HarnessO_ghex_F", "V_TacChestrig_oli_F", "V_PlateCarrierGL_rgr", "V_PlateCarrier2_rgr_noflag_F", "V_PlateCarrier1_rgr_noflag_F"};

		/*
			Percental Item Spawn Chances of Rebreathers:

			V_RebreatherB  = 33.33%
			V_RebreatherIR = 33.33%
			V_RebreatherIA = 33.33%
		*/
		Rebreathers[] = {"V_RebreatherIR", "V_RebreatherB", "V_RebreatherIA"};

		/*
			Percental Item Spawn Chances of MedicalItems:

			Exile_Item_BeefParts           = 4.95%
			BSF_WaterPure_Tabs             = 7.92%
			BSF_Item_Injector1             = 1.98%
			BSF_Item_Vitamins1             = 3.96%
			BSF_Item_Pain_Killlers         = 3.96%
			BSF_Item_FirstAid_Kit1         = 5.94%
			BSF_Item_Blood_Bag_KR          = 1.98%
			BSF_Item_Blood_Bag_Clean       = 3.96%
			BSF_Item_Disinfectant_Spray    = 3.96%
			BSF_IV_Bag                     = 4.95%
			BSF_Item_IV_Bag_Used           = 4.95%
			BSF_Antibiotics                = 3.96%
			BSF_Item_Banndage_Used         = 5.94%
			BSF_Item_Poison                = 0.99%
			Exile_Item_Defibrillator       = 0.99%
			rzinfection_antivirus_injector = 2.97%
			rzinfection_antivirus_pills    = 3.96%
			Exile_Item_InstaDoc            = 7.92%
			Exile_Item_Bandage             = 9.90%
			Exile_Item_Vishpirin           = 9.90%
			Exile_Item_Heatpack            = 4.95%
		*/
		MedicalItems[] = {"Exile_Item_InstaDoc", "Exile_Item_InstaDoc", "BSF_Item_IV_Bag_Used", "Exile_Item_Vishpirin", "Exile_Item_InstaDoc", "BSF_Item_Pain_Killlers", "BSF_WaterPure_Tabs", "BSF_IV_Bag", "BSF_Item_Blood_Bag_KR", "Exile_Item_InstaDoc", "BSF_Item_Banndage_Used", "BSF_WaterPure_Tabs", "BSF_Item_Disinfectant_Spray", "Exile_Item_Vishpirin", "BSF_Item_Pain_Killlers", "Exile_Item_Vishpirin", "BSF_IV_Bag", "BSF_Item_Pain_Killlers", "Exile_Item_InstaDoc", "rzinfection_antivirus_injector", "BSF_Item_Blood_Bag_Clean", "Exile_Item_InstaDoc", "Exile_Item_Vishpirin", "Exile_Item_Bandage", "BSF_Item_Disinfectant_Spray", "BSF_Item_FirstAid_Kit1", "BSF_Item_Blood_Bag_Clean", "Exile_Item_BeefParts", "BSF_IV_Bag", "BSF_WaterPure_Tabs", "BSF_Item_Disinfectant_Spray", "rzinfection_antivirus_injector", "BSF_Antibiotics", "Exile_Item_Heatpack", "Exile_Item_Bandage", "BSF_Item_IV_Bag_Used", "BSF_Item_FirstAid_Kit1", "BSF_Item_Vitamins1", "Exile_Item_Heatpack", "BSF_Item_Vitamins1", "Exile_Item_Vishpirin", "Exile_Item_Bandage", "Exile_Item_BeefParts", "rzinfection_antivirus_pills", "rzinfection_antivirus_pills", "Exile_Item_Bandage", "Exile_Item_BeefParts", "BSF_Item_Banndage_Used", "Exile_Item_Bandage", "BSF_Item_Banndage_Used", "Exile_Item_Vishpirin", "BSF_Item_FirstAid_Kit1", "Exile_Item_Vishpirin", "BSF_Item_Blood_Bag_Clean", "BSF_Item_Blood_Bag_KR", "BSF_Item_Banndage_Used", "BSF_Item_FirstAid_Kit1", "BSF_Item_Poison", "Exile_Item_Bandage", "Exile_Item_Bandage", "Exile_Item_Vishpirin", "rzinfection_antivirus_injector", "Exile_Item_Vishpirin", "Exile_Item_InstaDoc", "BSF_WaterPure_Tabs", "BSF_Item_FirstAid_Kit1", "BSF_Item_FirstAid_Kit1", "BSF_Antibiotics", "BSF_IV_Bag", "BSF_Item_IV_Bag_Used", "BSF_Item_Vitamins1", "Exile_Item_BeefParts", "BSF_Antibiotics", "Exile_Item_Bandage", "BSF_Item_Banndage_Used", "BSF_Item_Pain_Killlers", "BSF_WaterPure_Tabs", "Exile_Item_Heatpack", "BSF_Item_Vitamins1", "Exile_Item_Vishpirin", "BSF_WaterPure_Tabs", "BSF_WaterPure_Tabs", "rzinfection_antivirus_pills", "BSF_Item_Blood_Bag_Clean", "Exile_Item_Bandage", "Exile_Item_Bandage", "Exile_Item_Heatpack", "BSF_WaterPure_Tabs", "BSF_Item_Injector1", "Exile_Item_Heatpack", "rzinfection_antivirus_pills", "Exile_Item_BeefParts", "BSF_Item_IV_Bag_Used", "BSF_Item_Disinfectant_Spray", "BSF_Item_IV_Bag_Used", "BSF_Antibiotics", "Exile_Item_Defibrillator", "BSF_Item_Injector1", "BSF_IV_Bag", "Exile_Item_InstaDoc", "BSF_Item_Banndage_Used"};

		/*
			Percental Item Spawn Chances of BaseParts:

			BSF_CastleWall_Basic_kit               = 0.32%
			BSF_CastleWall_Door_C_kit              = 0.32%
			BSF_CastleWall_Door_L_kit              = 0.32%
			BSF_CastleWall_Door_R_kit              = 0.32%
			BSF_CastleWall_Door_Round_kit          = 0.32%
			BSF_CastleWall_Door_Tri_kit            = 0.32%
			BSF_CastleWall_DoorOpening_C_kit       = 0.32%
			BSF_CastleWall_DoorOpening_L_kit       = 0.32%
			BSF_CastleWall_DoorOpening_R_kit       = 0.32%
			BSF_CastleWall_DoorOpening_Round_kit   = 0.32%
			BSF_CastleWall_DoorOpening_Tri_kit     = 0.32%
			BSF_CastleWall_Floor_Half_kit          = 0.32%
			BSF_CastleWall_Floor_Hatch_kit         = 0.32%
			BSF_CastleWall_Floor_Hatchport_kit     = 0.32%
			BSF_CastleWall_Floor_kit               = 0.32%
			BSF_CastleWall_Floor_Quarter_kit       = 0.32%
			BSF_CastleWall_Floor_Round_kit         = 0.32%
			BSF_CastleWall_Floor_Tri_kit           = 0.32%
			BSF_CastleWall_Floorport_Door_kit      = 0.32%
			BSF_CastleWall_Floorport_kit           = 0.32%
			BSF_CastleWall_Gate_1L_kit             = 0.32%
			BSF_CastleWall_Gate_1R_kit             = 0.32%
			BSF_CastleWall_Half_kit                = 0.32%
			BSF_CastleWall_Low_kit                 = 0.32%
			BSF_CastleWall_Roof_Corner_Full_kit    = 0.32%
			BSF_CastleWall_Roof_Corner_kit         = 0.32%
			BSF_CastleWall_Roof_Filler_L_kit       = 0.32%
			BSF_CastleWall_Roof_Filler_R_kit       = 0.32%
			BSF_CastleWall_Roof_Half_kit           = 0.32%
			BSF_CastleWall_Roof_kit                = 0.32%
			BSF_CastleWall_Roof_Round_kit          = 0.32%
			BSF_CastleWall_Roof_Square_kit         = 0.32%
			BSF_CastleWall_Roof_Third_kit          = 0.32%
			BSF_CastleWall_Roof_Tri_kit            = 0.32%
			BSF_CastleWall_Round_kit               = 0.32%
			BSF_CastleWall_Round_Low_kit           = 0.32%
			BSF_CastleWall_Stairport_kit           = 0.32%
			BSF_CastleWall_Stairs_L_kit            = 0.32%
			BSF_CastleWall_Stairs_R_kit            = 0.32%
			BSF_CastleWall_Third_kit               = 0.32%
			BSF_CastleWall_Tri_kit                 = 0.32%
			BSF_CastleWall_Tri_Low_kit             = 0.32%
			BSF_CastleWall_Window_C_kit            = 0.32%
			BSF_CastleWall_Window_L_kit            = 0.32%
			BSF_CastleWall_Window_R_kit            = 0.32%
			BSF_CastleWall_Window_Round_kit        = 0.32%
			BSF_CastleWall_Window_Tri_kit          = 0.32%
			BSF_CastleWall_WindowOpening_C_kit     = 0.32%
			BSF_CastleWall_WindowOpening_L_kit     = 0.32%
			BSF_CastleWall_WindowOpening_R_kit     = 0.32%
			BSF_CastleWall_WindowOpening_Round_kit = 0.32%
			BSF_CastleWall_WindowOpening_Tri_kit   = 0.32%
			BSF_Copper_Roof_Corner_Full_kit        = 0.32%
			BSF_Copper_Roof_Corner_kit             = 0.32%
			BSF_Copper_Roof_Filler_L_kit           = 0.32%
			BSF_Copper_Roof_Filler_R_kit           = 0.32%
			BSF_Copper_Roof_Half_kit               = 0.32%
			BSF_Copper_Roof_kit                    = 0.32%
			BSF_Copper_Roof_Round_kit              = 0.32%
			BSF_Copper_Roof_Square_kit             = 0.32%
			BSF_Copper_Roof_Third_kit              = 0.32%
			BSF_Copper_Roof_Tri_kit                = 0.32%
			BSF_GreenWall_Basic_kit                = 0.32%
			BSF_GreenWall_Door_C_kit               = 0.32%
			BSF_GreenWall_Door_L_kit               = 0.32%
			BSF_GreenWall_Door_R_kit               = 0.32%
			BSF_GreenWall_Door_Round_kit           = 0.32%
			BSF_GreenWall_Door_Tri_kit             = 0.32%
			BSF_GreenWall_DoorOpening_C_kit        = 0.32%
			BSF_GreenWall_DoorOpening_L_kit        = 0.32%
			BSF_GreenWall_DoorOpening_R_kit        = 0.32%
			BSF_GreenWall_DoorOpening_Round_kit    = 0.32%
			BSF_GreenWall_DoorOpening_Tri_kit      = 0.32%
			BSF_GreenWall_Floor_Half_kit           = 0.32%
			BSF_GreenWall_Floor_Hatch_kit          = 0.32%
			BSF_GreenWall_Floor_Hatchport_kit      = 0.32%
			BSF_GreenWall_Floor_kit                = 0.32%
			BSF_GreenWall_Floor_Quarter_kit        = 0.32%
			BSF_GreenWall_Floor_Round_kit          = 0.32%
			BSF_GreenWall_Floor_Tri_kit            = 0.32%
			BSF_GreenWall_Floorport_Door_kit       = 0.32%
			BSF_GreenWall_Floorport_kit            = 0.32%
			BSF_GreenWall_Gate_1L_kit              = 0.32%
			BSF_GreenWall_Gate_1R_kit              = 0.32%
			BSF_GreenWall_Half_kit                 = 0.32%
			BSF_GreenWall_Low_kit                  = 0.32%
			BSF_GreenWall_Post_kit                 = 0.32%
			BSF_GreenWall_Roof_Corner_Full_kit     = 0.32%
			BSF_GreenWall_Roof_Corner_kit          = 0.32%
			BSF_GreenWall_Roof_Filler_L_kit        = 0.32%
			BSF_GreenWall_Roof_Filler_R_kit        = 0.32%
			BSF_GreenWall_Roof_Half_kit            = 0.32%
			BSF_GreenWall_Roof_kit                 = 0.32%
			BSF_GreenWall_Roof_Round_kit           = 0.32%
			BSF_GreenWall_Roof_Square_kit          = 0.32%
			BSF_GreenWall_Roof_Third_kit           = 0.32%
			BSF_GreenWall_Roof_Tri_kit             = 0.32%
			BSF_GreenWall_Round_kit                = 0.32%
			BSF_GreenWall_Round_Low_kit            = 0.32%
			BSF_GreenWall_Round_Topper_kit         = 0.32%
			BSF_GreenWall_Stairport_kit            = 0.32%
			BSF_GreenWall_StairRail_L_kit          = 0.32%
			BSF_GreenWall_StairRail_R_kit          = 0.32%
			BSF_GreenWall_Stairs_2_C_kit           = 0.32%
			BSF_GreenWall_Stairs_2_L_kit           = 0.32%
			BSF_GreenWall_Stairs_2_R_kit           = 0.32%
			BSF_GreenWall_Stairs_Ext_C_kit         = 0.32%
			BSF_GreenWall_Stairs_Ext_L_kit         = 0.32%
			BSF_GreenWall_Stairs_Ext_R_kit         = 0.32%
			BSF_GreenWall_Stairs_RoofTop_kit       = 0.32%
			BSF_GreenWall_Stairs_Spiral_2_L_kit    = 0.32%
			BSF_GreenWall_Stairs_Spiral_2_R_kit    = 0.32%
			BSF_GreenWall_Third_kit                = 0.32%
			BSF_GreenWall_Topper_kit               = 0.32%
			BSF_GreenWall_Tri_kit                  = 0.32%
			BSF_GreenWall_Tri_Low_kit              = 0.32%
			BSF_GreenWall_Tri_Topper_kit           = 0.32%
			BSF_GreenWall_Window_C_kit             = 0.32%
			BSF_GreenWall_Window_L_kit             = 0.32%
			BSF_GreenWall_Window_R_kit             = 0.32%
			BSF_GreenWall_Window_Round_kit         = 0.32%
			BSF_GreenWall_Window_Tri_kit           = 0.32%
			BSF_GreenWall_WindowOpening_C_kit      = 0.32%
			BSF_GreenWall_WindowOpening_L_kit      = 0.32%
			BSF_GreenWall_WindowOpening_R_kit      = 0.32%
			BSF_GreenWall_WindowOpening_Round_kit  = 0.32%
			BSF_GreenWall_WindowOpening_Tri_kit    = 0.32%
			BSF_Helipad_01_kit                     = 0.32%
			BSF_IronWall_2_Basic_kit               = 0.32%
			BSF_IronWall_2_Door_C_kit              = 0.32%
			BSF_IronWall_2_Door_L_kit              = 0.32%
			BSF_IronWall_2_Door_R_kit              = 0.32%
			BSF_IronWall_2_Door_Round_kit          = 0.32%
			BSF_IronWall_2_Door_Tri_kit            = 0.32%
			BSF_IronWall_2_DoorOpening_C_kit       = 0.32%
			BSF_IronWall_2_DoorOpening_L_kit       = 0.32%
			BSF_IronWall_2_DoorOpening_R_kit       = 0.32%
			BSF_IronWall_2_DoorOpening_Round_kit   = 0.32%
			BSF_IronWall_2_DoorOpening_Tri_kit     = 0.32%
			BSF_IronWall_2_Half_kit                = 0.32%
			BSF_IronWall_2_Low_kit                 = 0.32%
			BSF_IronWall_2_Round_kit               = 0.32%
			BSF_IronWall_2_Round_Low_kit           = 0.32%
			BSF_IronWall_2_Third_kit               = 0.32%
			BSF_IronWall_2_Tri_kit                 = 0.32%
			BSF_IronWall_2_Tri_Low_kit             = 0.32%
			BSF_IronWall_2_Window_C_kit            = 0.32%
			BSF_IronWall_2_Window_L_kit            = 0.32%
			BSF_IronWall_2_Window_R_kit            = 0.32%
			BSF_IronWall_2_Window_Round_kit        = 0.32%
			BSF_IronWall_2_Window_Tri_kit          = 0.32%
			BSF_IronWall_2_WindowOpening_C_kit     = 0.32%
			BSF_IronWall_2_WindowOpening_L_kit     = 0.32%
			BSF_IronWall_2_WindowOpening_R_kit     = 0.32%
			BSF_IronWall_2_WindowOpening_Round_kit = 0.32%
			BSF_IronWall_2_WindowOpening_Tri_kit   = 0.32%
			BSF_IronWall_Basic_kit                 = 0.32%
			BSF_IronWall_Door_C_kit                = 0.32%
			BSF_IronWall_Door_L_kit                = 0.32%
			BSF_IronWall_Door_R_kit                = 0.32%
			BSF_IronWall_Door_Round_kit            = 0.32%
			BSF_IronWall_Door_Tri_kit              = 0.32%
			BSF_IronWall_DoorOpening_C_kit         = 0.32%
			BSF_IronWall_DoorOpening_L_kit         = 0.32%
			BSF_IronWall_DoorOpening_R_kit         = 0.32%
			BSF_IronWall_DoorOpening_Round_kit     = 0.32%
			BSF_IronWall_DoorOpening_Tri_kit       = 0.32%
			BSF_IronWall_Floor_Basic_kit           = 0.32%
			BSF_IronWall_Floor_Half_kit            = 0.32%
			BSF_IronWall_Floor_Hatch_kit           = 0.32%
			BSF_IronWall_Floor_Hatchport_kit       = 0.32%
			BSF_IronWall_Floor_Quarter_kit         = 0.32%
			BSF_IronWall_Floor_Round_kit           = 0.32%
			BSF_IronWall_Floor_Tri_kit             = 0.32%
			BSF_IronWall_Floorport_Door_kit        = 0.32%
			BSF_IronWall_Floorport_kit             = 0.32%
			BSF_IronWall_Gate_1L_kit               = 0.32%
			BSF_IronWall_Gate_1R_kit               = 0.32%
			BSF_IronWall_Half_kit                  = 0.32%
			BSF_IronWall_Low_kit                   = 0.32%
			BSF_IronWall_Post_kit                  = 0.32%
			BSF_IronWall_Roof_Corner_Full_kit      = 0.32%
			BSF_IronWall_Roof_Corner_kit           = 0.32%
			BSF_IronWall_Roof_Filler_L_kit         = 0.32%
			BSF_IronWall_Roof_Filler_R_kit         = 0.32%
			BSF_IronWall_Roof_Half_kit             = 0.32%
			BSF_IronWall_Roof_kit                  = 0.32%
			BSF_IronWall_Roof_Round_kit            = 0.32%
			BSF_IronWall_Roof_Square_kit           = 0.32%
			BSF_IronWall_Roof_Third_kit            = 0.32%
			BSF_IronWall_Roof_Tri_kit              = 0.32%
			BSF_IronWall_Round_kit                 = 0.32%
			BSF_IronWall_Round_Low_kit             = 0.32%
			BSF_IronWall_Round_Topper_kit          = 0.32%
			BSF_IronWall_Stairport_kit             = 0.32%
			BSF_IronWall_StairRail_L_kit           = 0.32%
			BSF_IronWall_StairRail_R_kit           = 0.32%
			BSF_IronWall_Stairs_2_C_kit            = 0.32%
			BSF_IronWall_Stairs_2_L_kit            = 0.32%
			BSF_IronWall_Stairs_2_R_kit            = 0.32%
			BSF_IronWall_Stairs_Ext_C_kit          = 0.32%
			BSF_IronWall_Stairs_Ext_L_kit          = 0.32%
			BSF_IronWall_Stairs_Ext_R_kit          = 0.32%
			BSF_IronWall_Stairs_RoofTop_kit        = 0.32%
			BSF_IronWall_Stairs_Spiral_2_L_kit     = 0.32%
			BSF_IronWall_Stairs_Spiral_2_R_kit     = 0.32%
			BSF_IronWall_Third_kit                 = 0.32%
			BSF_IronWall_Topper_kit                = 0.32%
			BSF_IronWall_Tri_kit                   = 0.32%
			BSF_IronWall_Tri_Low_kit               = 0.32%
			BSF_IronWall_Tri_Topper_kit            = 0.32%
			BSF_IronWall_Window_C_kit              = 0.32%
			BSF_IronWall_Window_L_kit              = 0.32%
			BSF_IronWall_Window_R_kit              = 0.32%
			BSF_IronWall_Window_Round_kit          = 0.32%
			BSF_IronWall_Window_Tri_kit            = 0.32%
			BSF_IronWall_WindowOpening_C_kit       = 0.32%
			BSF_IronWall_WindowOpening_L_kit       = 0.32%
			BSF_IronWall_WindowOpening_R_kit       = 0.32%
			BSF_IronWall_WindowOpening_Round_kit   = 0.32%
			BSF_IronWall_WindowOpening_Tri_kit     = 0.32%
			BSF_StoneWall_Basic_kit                = 0.32%
			BSF_StoneWall_Door_C_kit               = 0.32%
			BSF_StoneWall_Door_L_kit               = 0.32%
			BSF_StoneWall_Door_R_kit               = 0.32%
			BSF_StoneWall_Door_Round_kit           = 0.32%
			BSF_StoneWall_Door_Tri_kit             = 0.32%
			BSF_StoneWall_DoorOpening_C_kit        = 0.32%
			BSF_StoneWall_DoorOpening_L_kit        = 0.32%
			BSF_StoneWall_DoorOpening_R_kit        = 0.32%
			BSF_StoneWall_DoorOpening_Round_kit    = 0.32%
			BSF_StoneWall_DoorOpening_Tri_kit      = 0.32%
			BSF_StoneWall_Floor_Half_kit           = 0.32%
			BSF_StoneWall_Floor_Hatch_kit          = 0.32%
			BSF_StoneWall_Floor_Hatchport_kit      = 0.32%
			BSF_StoneWall_Floor_kit                = 0.32%
			BSF_StoneWall_Floor_Quarter_kit        = 0.32%
			BSF_StoneWall_Floor_Round_kit          = 0.32%
			BSF_StoneWall_Floor_Tri_kit            = 0.32%
			BSF_StoneWall_Floorport_Door_kit       = 0.32%
			BSF_StoneWall_Floorport_kit            = 0.32%
			BSF_StoneWall_Half_kit                 = 0.32%
			BSF_StoneWall_Low_kit                  = 0.32%
			BSF_StoneWall_Round_kit                = 0.32%
			BSF_StoneWall_Round_Low_kit            = 0.32%
			BSF_StoneWall_Stairport_kit            = 0.32%
			BSF_StoneWall_Third_kit                = 0.32%
			BSF_StoneWall_Tri_kit                  = 0.32%
			BSF_StoneWall_Tri_Low_kit              = 0.32%
			BSF_StoneWall_Window_C_kit             = 0.32%
			BSF_StoneWall_Window_L_kit             = 0.32%
			BSF_StoneWall_Window_R_kit             = 0.32%
			BSF_StoneWall_Window_Round_kit         = 0.32%
			BSF_StoneWall_Window_Tri_kit           = 0.32%
			BSF_StoneWall_WindowOpening_C_kit      = 0.32%
			BSF_StoneWall_WindowOpening_L_kit      = 0.32%
			BSF_StoneWall_WindowOpening_R_kit      = 0.32%
			BSF_StoneWall_WindowOpening_Round_kit  = 0.32%
			BSF_StoneWall_WindowOpening_Tri_kit    = 0.32%
			BSF_WoodWall_Basic_kit                 = 0.32%
			BSF_WoodWall_Door_C_kit                = 0.32%
			BSF_WoodWall_Door_L_kit                = 0.32%
			BSF_WoodWall_Door_R_kit                = 0.32%
			BSF_WoodWall_Door_Round_kit            = 0.32%
			BSF_WoodWall_Door_Tri_kit              = 0.32%
			BSF_WoodWall_DoorOpening_C_kit         = 0.32%
			BSF_WoodWall_DoorOpening_L_kit         = 0.32%
			BSF_WoodWall_DoorOpening_R_kit         = 0.32%
			BSF_WoodWall_DoorOpening_Round_kit     = 0.32%
			BSF_WoodWall_DoorOpening_Tri_kit       = 0.32%
			BSF_WoodWall_Floor_Half_kit            = 0.32%
			BSF_WoodWall_Floor_Hatch_kit           = 0.32%
			BSF_WoodWall_Floor_Hatchport_kit       = 0.32%
			BSF_WoodWall_Floor_kit                 = 0.32%
			BSF_WoodWall_Floor_Quarter_kit         = 0.32%
			BSF_WoodWall_Floor_Round_kit           = 0.32%
			BSF_WoodWall_Floor_Tri_kit             = 0.32%
			BSF_WoodWall_Floorport_Door_kit        = 0.32%
			BSF_WoodWall_Floorport_kit             = 0.32%
			BSF_WoodWall_Half_kit                  = 0.32%
			BSF_WoodWall_Low_kit                   = 0.32%
			BSF_WoodWall_Post_kit                  = 0.32%
			BSF_WoodWall_Round_kit                 = 0.32%
			BSF_WoodWall_Round_Low_kit             = 0.32%
			BSF_WoodWall_Round_Topper_kit          = 0.32%
			BSF_WoodWall_Stairport_kit             = 0.32%
			BSF_WoodWall_StairRail_L_kit           = 0.32%
			BSF_WoodWall_StairRail_R_kit           = 0.32%
			BSF_WoodWall_Stairs_2_C_kit            = 0.32%
			BSF_WoodWall_Stairs_2_L_kit            = 0.32%
			BSF_WoodWall_Stairs_2_R_kit            = 0.32%
			BSF_WoodWall_Stairs_Ext_C_kit          = 0.32%
			BSF_WoodWall_Stairs_Ext_L_kit          = 0.32%
			BSF_WoodWall_Stairs_Ext_R_kit          = 0.32%
			BSF_WoodWall_Stairs_RoofTop_kit        = 0.32%
			BSF_WoodWall_Stairs_Spiral_1_L_kit     = 0.32%
			BSF_WoodWall_Stairs_Spiral_1_R_kit     = 0.32%
			BSF_WoodWall_Third_kit                 = 0.32%
			BSF_WoodWall_Topper_kit                = 0.32%
			BSF_WoodWall_Tri_kit                   = 0.32%
			BSF_WoodWall_Tri_Low_kit               = 0.32%
			BSF_WoodWall_Tri_Topper_kit            = 0.32%
			BSF_WoodWall_Window_C_kit              = 0.32%
			BSF_WoodWall_Window_L_kit              = 0.32%
			BSF_WoodWall_Window_R_kit              = 0.32%
			BSF_WoodWall_Window_Round_kit          = 0.32%
			BSF_WoodWall_Window_Tri_kit            = 0.32%
			BSF_WoodWall_WindowOpening_C_kit       = 0.32%
			BSF_WoodWall_WindowOpening_L_kit       = 0.32%
			BSF_WoodWall_WindowOpening_R_kit       = 0.32%
			BSF_WoodWall_WindowOpening_Round_kit   = 0.32%
			BSF_WoodWall_WindowOpening_Tri_kit     = 0.32%
		*/
		BaseParts[] = {"BSF_IronWall_Roof_Third_kit", "BSF_CastleWall_Roof_Corner_kit", "BSF_IronWall_Stairs_Ext_R_kit", "BSF_WoodWall_Round_Low_kit", "BSF_CastleWall_Stairs_L_kit", "BSF_CastleWall_Tri_Low_kit", "BSF_StoneWall_Window_L_kit", "BSF_GreenWall_Low_kit", "BSF_IronWall_Roof_Corner_Full_kit", "BSF_WoodWall_DoorOpening_L_kit", "BSF_CastleWall_Door_L_kit", "BSF_GreenWall_Window_Round_kit", "BSF_IronWall_Stairs_Ext_L_kit", "BSF_StoneWall_Door_Round_kit", "BSF_GreenWall_Roof_Corner_kit", "BSF_IronWall_Floorport_Door_kit", "BSF_GreenWall_Stairport_kit", "BSF_IronWall_Stairs_Ext_C_kit", "BSF_CastleWall_Window_L_kit", "BSF_GreenWall_Stairs_Ext_R_kit", "BSF_WoodWall_DoorOpening_Round_kit", "BSF_CastleWall_Floorport_Door_kit", "BSF_CastleWall_WindowOpening_R_kit", "BSF_CastleWall_Floor_Quarter_kit", "BSF_CastleWall_Roof_Tri_kit", "BSF_GreenWall_Roof_Corner_Full_kit", "BSF_GreenWall_Stairs_Ext_L_kit", "BSF_CastleWall_Window_R_kit", "BSF_WoodWall_Third_kit", "BSF_IronWall_2_Door_Tri_kit", "BSF_CastleWall_Roof_kit", "BSF_IronWall_2_WindowOpening_L_kit", "BSF_IronWall_WindowOpening_Tri_kit", "BSF_GreenWall_Window_Tri_kit", "BSF_StoneWall_Door_C_kit", "BSF_IronWall_2_Basic_kit", "BSF_IronWall_DoorOpening_R_kit", "BSF_IronWall_2_Window_R_kit", "BSF_IronWall_Roof_Round_kit", "BSF_IronWall_Roof_Square_kit", "BSF_WoodWall_Door_Round_kit", "BSF_IronWall_Window_R_kit", "BSF_StoneWall_DoorOpening_Tri_kit", "BSF_WoodWall_Window_L_kit", "BSF_IronWall_Floor_Hatch_kit", "BSF_StoneWall_Tri_kit", "BSF_WoodWall_WindowOpening_Tri_kit", "BSF_GreenWall_WindowOpening_R_kit", "BSF_Copper_Roof_Square_kit", "BSF_GreenWall_Roof_Tri_kit", "BSF_CastleWall_Roof_Corner_Full_kit", "BSF_Copper_Roof_Filler_L_kit", "BSF_IronWall_Door_Tri_kit", "BSF_IronWall_2_WindowOpening_R_kit", "BSF_CastleWall_Floor_Round_kit", "BSF_GreenWall_StairRail_L_kit", "BSF_GreenWall_Door_Round_kit", "BSF_StoneWall_Door_Tri_kit", "BSF_IronWall_Stairs_RoofTop_kit", "BSF_StoneWall_Floor_Quarter_kit", "BSF_CastleWall_Round_Low_kit", "BSF_CastleWall_Gate_1R_kit", "BSF_IronWall_Floor_Basic_kit", "BSF_IronWall_2_DoorOpening_C_kit", "BSF_IronWall_2_DoorOpening_L_kit", "BSF_GreenWall_Stairs_Spiral_2_L_kit", "BSF_CastleWall_DoorOpening_L_kit", "BSF_IronWall_Floorport_kit", "BSF_IronWall_2_WindowOpening_Round_kit", "BSF_StoneWall_Floor_Half_kit", "BSF_IronWall_Roof_Half_kit", "BSF_WoodWall_Tri_Low_kit", "BSF_WoodWall_Post_kit", "BSF_GreenWall_Roof_kit", "BSF_GreenWall_DoorOpening_Round_kit", "BSF_IronWall_Window_Tri_kit", "BSF_GreenWall_Floorport_Door_kit", "BSF_IronWall_Floor_Quarter_kit", "BSF_StoneWall_DoorOpening_L_kit", "BSF_WoodWall_Floor_Quarter_kit", "BSF_IronWall_2_Round_kit", "BSF_IronWall_Tri_kit", "BSF_GreenWall_Window_L_kit", "BSF_GreenWall_Door_C_kit", "BSF_StoneWall_DoorOpening_C_kit", "BSF_GreenWall_Floor_Tri_kit", "BSF_StoneWall_WindowOpening_R_kit", "BSF_WoodWall_Stairport_kit", "BSF_IronWall_Floor_Half_kit", "BSF_IronWall_Gate_1L_kit", "BSF_StoneWall_Floorport_Door_kit", "BSF_IronWall_Stairs_Spiral_2_R_kit", "BSF_Helipad_01_kit", "BSF_WoodWall_Window_R_kit", "BSF_Copper_Roof_Round_kit", "BSF_IronWall_Round_Topper_kit", "BSF_GreenWall_Floor_kit", "BSF_GreenWall_Floorport_kit", "BSF_GreenWall_Window_R_kit", "BSF_IronWall_2_DoorOpening_Tri_kit", "BSF_IronWall_Round_kit", "BSF_CastleWall_Gate_1L_kit", "BSF_GreenWall_WindowOpening_L_kit", "BSF_StoneWall_WindowOpening_Round_kit", "BSF_WoodWall_Floor_Hatch_kit", "BSF_IronWall_Post_kit", "BSF_IronWall_DoorOpening_L_kit", "BSF_StoneWall_Half_kit", "BSF_IronWall_2_Door_C_kit", "BSF_WoodWall_Window_Round_kit", "BSF_GreenWall_Stairs_2_L_kit", "BSF_GreenWall_Door_R_kit", "BSF_IronWall_Door_Round_kit", "BSF_IronWall_2_Half_kit", "BSF_CastleWall_Roof_Square_kit", "BSF_StoneWall_Low_kit", "BSF_StoneWall_Floorport_kit", "BSF_IronWall_WindowOpening_C_kit", "BSF_GreenWall_Round_Low_kit", "BSF_IronWall_Stairs_2_L_kit", "BSF_GreenWall_Floor_Hatch_kit", "BSF_WoodWall_Floorport_Door_kit", "BSF_IronWall_Stairs_2_C_kit", "BSF_IronWall_Floor_Round_kit", "BSF_WoodWall_Stairs_Ext_C_kit", "BSF_StoneWall_Door_L_kit", "BSF_CastleWall_Floor_Hatchport_kit", "BSF_GreenWall_Round_Topper_kit", "BSF_GreenWall_Floor_Quarter_kit", "BSF_CastleWall_Roof_Round_kit", "BSF_GreenWall_Stairs_2_R_kit", "BSF_IronWall_2_Third_kit", "BSF_CastleWall_WindowOpening_C_kit", "BSF_IronWall_Half_kit", "BSF_WoodWall_Stairs_Spiral_1_L_kit", "BSF_GreenWall_Basic_kit", "BSF_IronWall_Window_L_kit", "BSF_WoodWall_Stairs_Ext_L_kit", "BSF_Copper_Roof_Filler_R_kit", "BSF_WoodWall_Floorport_kit", "BSF_IronWall_Roof_Filler_L_kit", "BSF_StoneWall_Floor_kit", "BSF_WoodWall_Round_kit", "BSF_StoneWall_Stairport_kit", "BSF_IronWall_2_Door_R_kit", "BSF_WoodWall_Door_L_kit", "BSF_StoneWall_Window_C_kit", "BSF_WoodWall_DoorOpening_Tri_kit", "BSF_CastleWall_Window_C_kit", "BSF_CastleWall_Roof_Third_kit", "BSF_StoneWall_Round_Low_kit", "BSF_GreenWall_Roof_Filler_R_kit", "BSF_StoneWall_DoorOpening_Round_kit", "BSF_GreenWall_Floor_Round_kit", "BSF_StoneWall_Window_R_kit", "BSF_WoodWall_Floor_Hatchport_kit", "BSF_StoneWall_WindowOpening_L_kit", "BSF_IronWall_Round_Low_kit", "BSF_CastleWall_Door_C_kit", "BSF_IronWall_DoorOpening_C_kit", "BSF_IronWall_2_DoorOpening_R_kit", "BSF_CastleWall_Window_Tri_kit", "BSF_IronWall_WindowOpening_Round_kit", "BSF_CastleWall_Roof_Filler_L_kit", "BSF_CastleWall_Third_kit", "BSF_IronWall_2_Low_kit", "BSF_GreenWall_Round_kit", "BSF_WoodWall_DoorOpening_C_kit", "BSF_WoodWall_DoorOpening_R_kit", "BSF_WoodWall_WindowOpening_R_kit", "BSF_GreenWall_DoorOpening_Tri_kit", "BSF_Copper_Roof_Third_kit", "BSF_CastleWall_Tri_kit", "BSF_IronWall_2_DoorOpening_Round_kit", "BSF_GreenWall_Stairs_RoofTop_kit", "BSF_CastleWall_DoorOpening_C_kit", "BSF_Copper_Roof_Corner_Full_kit", "BSF_IronWall_Floor_Hatchport_kit", "BSF_WoodWall_Stairs_RoofTop_kit", "BSF_GreenWall_StairRail_R_kit", "BSF_GreenWall_Stairs_Ext_C_kit", "BSF_IronWall_Tri_Topper_kit", "BSF_CastleWall_Floor_Half_kit", "BSF_WoodWall_Topper_kit", "BSF_WoodWall_Door_Tri_kit", "BSF_CastleWall_DoorOpening_R_kit", "BSF_StoneWall_Window_Tri_kit", "BSF_WoodWall_Floor_kit", "BSF_StoneWall_WindowOpening_C_kit", "BSF_Copper_Roof_Half_kit", "BSF_WoodWall_Tri_Topper_kit", "BSF_GreenWall_Door_Tri_kit", "BSF_StoneWall_Door_R_kit", "BSF_StoneWall_Floor_Hatchport_kit", "BSF_IronWall_WindowOpening_R_kit", "BSF_IronWall_2_Door_L_kit", "BSF_GreenWall_WindowOpening_C_kit", "BSF_CastleWall_Stairport_kit", "BSF_WoodWall_Stairs_2_L_kit", "BSF_WoodWall_Stairs_Ext_R_kit", "BSF_GreenWall_Tri_kit", "BSF_IronWall_Door_L_kit", "BSF_IronWall_Third_kit", "BSF_GreenWall_DoorOpening_R_kit", "BSF_CastleWall_WindowOpening_Round_kit", "BSF_WoodWall_Window_Tri_kit", "BSF_IronWall_2_Door_Round_kit", "BSF_WoodWall_Stairs_Spiral_1_R_kit", "BSF_GreenWall_Roof_Square_kit", "BSF_GreenWall_WindowOpening_Round_kit", "BSF_IronWall_Floor_Tri_kit", "BSF_IronWall_2_Tri_Low_kit", "BSF_IronWall_2_Round_Low_kit", "BSF_Copper_Roof_kit", "BSF_CastleWall_Floor_kit", "BSF_CastleWall_WindowOpening_Tri_kit", "BSF_IronWall_Topper_kit", "BSF_CastleWall_DoorOpening_Tri_kit", "BSF_StoneWall_Window_Round_kit", "BSF_WoodWall_Stairs_2_R_kit", "BSF_GreenWall_Roof_Filler_L_kit", "BSF_CastleWall_Round_kit", "BSF_CastleWall_Half_kit", "BSF_CastleWall_Floorport_kit", "BSF_IronWall_Stairs_Spiral_2_L_kit", "BSF_IronWall_2_WindowOpening_C_kit", "BSF_GreenWall_Half_kit", "BSF_WoodWall_Door_C_kit", "BSF_IronWall_DoorOpening_Tri_kit", "BSF_StoneWall_Floor_Tri_kit", "BSF_IronWall_2_Window_C_kit", "BSF_CastleWall_Roof_Filler_R_kit", "BSF_IronWall_2_Window_Round_kit", "BSF_GreenWall_Floor_Half_kit", "BSF_IronWall_StairRail_R_kit", "BSF_WoodWall_Floor_Tri_kit", "BSF_WoodWall_WindowOpening_Round_kit", "BSF_CastleWall_Door_R_kit", "BSF_CastleWall_Floor_Tri_kit", "BSF_IronWall_Low_kit", "BSF_GreenWall_Post_kit", "BSF_WoodWall_StairRail_L_kit", "BSF_CastleWall_Low_kit", "BSF_GreenWall_DoorOpening_C_kit", "BSF_StoneWall_WindowOpening_Tri_kit", "BSF_StoneWall_DoorOpening_R_kit", "BSF_CastleWall_Door_Tri_kit", "BSF_IronWall_Door_C_kit", "BSF_GreenWall_WindowOpening_Tri_kit", "BSF_CastleWall_Roof_Half_kit", "BSF_IronWall_Roof_kit", "BSF_GreenWall_Door_L_kit", "BSF_WoodWall_Floor_Round_kit", "BSF_IronWall_Roof_Corner_kit", "BSF_StoneWall_Basic_kit", "BSF_GreenWall_Stairs_2_C_kit", "BSF_GreenWall_Topper_kit", "BSF_IronWall_WindowOpening_L_kit", "BSF_WoodWall_Tri_kit", "BSF_WoodWall_Door_R_kit", "BSF_IronWall_Stairs_2_R_kit", "BSF_WoodWall_Stairs_2_C_kit", "BSF_GreenWall_Gate_1R_kit", "BSF_IronWall_2_Tri_kit", "BSF_WoodWall_WindowOpening_L_kit", "BSF_Copper_Roof_Corner_kit", "BSF_IronWall_DoorOpening_Round_kit", "BSF_IronWall_Roof_Filler_R_kit", "BSF_StoneWall_Round_kit", "BSF_IronWall_Basic_kit", "BSF_GreenWall_Roof_Third_kit", "BSF_WoodWall_WindowOpening_C_kit", "BSF_GreenWall_Gate_1L_kit", "BSF_WoodWall_Round_Topper_kit", "BSF_CastleWall_DoorOpening_Round_kit", "BSF_WoodWall_Low_kit", "BSF_IronWall_2_WindowOpening_Tri_kit", "BSF_IronWall_2_Window_Tri_kit", "BSF_WoodWall_Basic_kit", "BSF_WoodWall_StairRail_R_kit", "BSF_WoodWall_Half_kit", "BSF_CastleWall_Stairs_R_kit", "BSF_StoneWall_Tri_Low_kit", "BSF_CastleWall_Floor_Hatch_kit", "BSF_IronWall_Gate_1R_kit", "BSF_IronWall_2_Window_L_kit", "BSF_GreenWall_Roof_Half_kit", "BSF_GreenWall_Floor_Hatchport_kit", "BSF_CastleWall_Basic_kit", "BSF_IronWall_Window_Round_kit", "BSF_GreenWall_DoorOpening_L_kit", "BSF_IronWall_Door_R_kit", "BSF_IronWall_Tri_Low_kit", "BSF_GreenWall_Stairs_Spiral_2_R_kit", "BSF_GreenWall_Tri_Low_kit", "BSF_GreenWall_Tri_Topper_kit", "BSF_IronWall_Stairport_kit", "BSF_IronWall_StairRail_L_kit", "BSF_StoneWall_Third_kit", "BSF_GreenWall_Roof_Round_kit", "BSF_Copper_Roof_Tri_kit", "BSF_CastleWall_Door_Round_kit", "BSF_StoneWall_Floor_Hatch_kit", "BSF_GreenWall_Window_C_kit", "BSF_CastleWall_WindowOpening_L_kit", "BSF_GreenWall_Third_kit", "BSF_StoneWall_Floor_Round_kit", "BSF_IronWall_Roof_Tri_kit", "BSF_WoodWall_Window_C_kit", "BSF_WoodWall_Floor_Half_kit", "BSF_CastleWall_Window_Round_kit", "BSF_IronWall_Window_C_kit"};

		/*
			Percental Item Spawn Chances of IndustrialItems:

			BSF_Item_Copper_Plates          = 1.95%
			BSF_Tarp_Blue                   = 0.39%
			BSF_Tarp_White                  = 0.39%
			BSF_Tarp_Yellow                 = 0.39%
			BSF_Tarp_Brown                  = 0.39%
			BSF_Tarp_Green                  = 0.39%
			BSF_Tarp_D                      = 0.39%
			BSF_Tarp_WD                     = 0.78%
			BSF_Welding_Gas                 = 1.17%
			BSF_Paintbrush                  = 3.11%
			BSF_Paint_Bucket_Black          = 2.33%
			BSF_Paint_Bucket_Red            = 2.33%
			BSF_Paint_Bucket_Green          = 3.11%
			BSF_Paint_Bucket_White          = 2.33%
			BSF_Paint_Bucket_yellow         = 2.33%
			Exile_Item_CodeLock             = 0.39%
			Land_CanisterPlastic_F          = 0.78%
			Exile_Item_Knife                = 0.78%
			Exile_Item_FloodLightKit        = 1.17%
			Exile_Item_PortableGeneratorKit = 1.17%
			Exile_Item_MetalPole            = 1.17%
			Exile_Item_Foolbox              = 1.17%
			Exile_Item_MetalWire            = 1.56%
			Exile_Item_Rope                 = 1.56%
			Exile_Item_CamoTentKit          = 0.39%
			BSF_SolarTentBlue_Kit           = 0.39%
			BSF_SolarTentOlive_Kit          = 0.39%
			BSF_SolarTentRed_Kit            = 0.39%
			BSF_SolarTentSand_Kit           = 0.39%
			Exile_Item_MetalBoard           = 1.56%
			Exile_Item_SleepingMat          = 1.56%
			Exile_Item_FireExtinguisher     = 1.56%
			Exile_Item_CordlessScrewdriver  = 1.56%
			Exile_Item_Hammer               = 1.56%
			Exile_Item_BurlapSack           = 1.95%
			Exile_Item_WeaponParts          = 1.95%
			Exile_Item_Cement               = 1.95%
			Exile_Item_Sand                 = 2.33%
			Exile_Item_Grinder              = 2.33%
			Exile_Item_MetalScrews          = 3.11%
			Exile_Melee_SledgeHammer        = 1.95%
			Exile_Item_ExtensionCord        = 3.11%
			Exile_Item_LightBulb            = 3.50%
			Exile_Item_WaterCanisterEmpty   = 3.89%
			Exile_Item_JunkMetal            = 4.28%
			Exile_Item_Shovel               = 4.67%
			Exile_Item_Handsaw              = 5.06%
			Exile_Item_Pliers               = 5.06%
			Exile_Item_ScrewDriver          = 5.06%
			Exile_Melee_Axe                 = 8.56%
		*/
		IndustrialItems[] = {"Exile_Item_Pliers", "BSF_Paint_Bucket_Black", "Exile_Item_MetalPole", "Exile_Item_Handsaw", "Exile_Melee_Axe", "BSF_Paint_Bucket_Green", "Exile_Item_MetalPole", "Exile_Item_BurlapSack", "Exile_Item_LightBulb", "BSF_Paint_Bucket_White", "BSF_Paint_Bucket_White", "BSF_Paintbrush", "Exile_Item_Foolbox", "Exile_Item_Shovel", "Exile_Item_LightBulb", "Exile_Item_BurlapSack", "Exile_Item_WeaponParts", "BSF_Welding_Gas", "Exile_Item_Shovel", "Exile_Item_LightBulb", "Exile_Item_WaterCanisterEmpty", "Exile_Item_JunkMetal", "Exile_Item_WeaponParts", "Exile_Item_Shovel", "BSF_Tarp_White", "BSF_Paint_Bucket_yellow", "Exile_Melee_SledgeHammer", "Exile_Item_SleepingMat", "Exile_Item_Pliers", "Exile_Item_ScrewDriver", "Exile_Item_WaterCanisterEmpty", "Exile_Item_Shovel", "BSF_Paint_Bucket_Green", "Exile_Item_MetalWire", "Exile_Item_MetalWire", "BSF_Paintbrush", "Exile_Item_JunkMetal", "Exile_Item_CordlessScrewdriver", "Exile_Item_ScrewDriver", "Exile_Item_Sand", "Exile_Item_Shovel", "Exile_Item_Rope", "Exile_Item_MetalScrews", "BSF_Paint_Bucket_White", "Exile_Item_JunkMetal", "BSF_Paint_Bucket_Red", "Exile_Item_Pliers", "Exile_Item_LightBulb", "Exile_Item_ExtensionCord", "Exile_Item_FloodLightKit", "Exile_Item_Sand", "Exile_Item_ScrewDriver", "Exile_Item_LightBulb", "BSF_Paint_Bucket_Green", "Exile_Item_Handsaw", "Exile_Item_Grinder", "Exile_Item_MetalScrews", "BSF_Paint_Bucket_Red", "Exile_Item_Knife", "Exile_Melee_Axe", "Exile_Item_Pliers", "Exile_Item_Grinder", "Exile_Item_JunkMetal", "Exile_Item_FloodLightKit", "Exile_Melee_Axe", "Exile_Item_Pliers", "BSF_Paint_Bucket_yellow", "BSF_Paint_Bucket_yellow", "Exile_Melee_Axe", "Exile_Item_Rope", "Exile_Item_Foolbox", "Exile_Item_Rope", "Exile_Melee_Axe", "Exile_Item_Cement", "Exile_Item_CodeLock", "Exile_Item_JunkMetal", "Exile_Item_CordlessScrewdriver", "BSF_SolarTentSand_Kit", "Exile_Item_LightBulb", "BSF_Paint_Bucket_Red", "Exile_Item_Sand", "BSF_Paintbrush", "Exile_Item_Handsaw", "Exile_Melee_Axe", "BSF_Paint_Bucket_Red", "Exile_Item_Sand", "Exile_Item_ScrewDriver", "BSF_Paint_Bucket_yellow", "Exile_Melee_Axe", "Exile_Item_WaterCanisterEmpty", "Exile_Item_WeaponParts", "BSF_Paint_Bucket_yellow", "Exile_Item_Sand", "Exile_Item_Grinder", "Exile_Item_Grinder", "Exile_Item_ExtensionCord", "BSF_Tarp_D", "BSF_Paint_Bucket_Black", "Exile_Item_Cement", "Exile_Item_Handsaw", "Exile_Item_WaterCanisterEmpty", "BSF_Paint_Bucket_Black", "Land_CanisterPlastic_F", "BSF_Paintbrush", "Exile_Item_WaterCanisterEmpty", "Exile_Item_WaterCanisterEmpty", "Exile_Item_MetalScrews", "Exile_Item_CordlessScrewdriver", "Exile_Melee_Axe", "BSF_SolarTentRed_Kit", "Exile_Item_MetalWire", "Exile_Item_Shovel", "BSF_Paintbrush", "BSF_Tarp_Yellow", "Exile_Item_Cement", "BSF_Paintbrush", "Exile_Melee_Axe", "Exile_Item_LightBulb", "Exile_Melee_Axe", "BSF_Tarp_Brown", "Exile_Item_WaterCanisterEmpty", "Exile_Item_BurlapSack", "Exile_Item_ScrewDriver", "Exile_Item_ExtensionCord", "BSF_SolarTentBlue_Kit", "BSF_Welding_Gas", "Exile_Item_Pliers", "Exile_Item_WaterCanisterEmpty", "Exile_Item_LightBulb", "Exile_Item_Handsaw", "Exile_Item_MetalPole", "BSF_Tarp_Blue", "Exile_Item_Pliers", "Exile_Item_Cement", "Exile_Item_Handsaw", "Exile_Melee_Axe", "Exile_Item_Handsaw", "BSF_Paint_Bucket_White", "Exile_Item_PortableGeneratorKit", "Exile_Item_MetalBoard", "BSF_Item_Copper_Plates", "Exile_Melee_Axe", "Exile_Item_WaterCanisterEmpty", "Exile_Item_ScrewDriver", "Exile_Item_Shovel", "Exile_Item_BurlapSack", "Exile_Item_FireExtinguisher", "Exile_Item_Hammer", "Exile_Item_Handsaw", "BSF_Paint_Bucket_yellow", "BSF_Tarp_WD", "Exile_Item_FireExtinguisher", "BSF_Paint_Bucket_White", "BSF_Welding_Gas", "Exile_Item_MetalScrews", "Exile_Item_ScrewDriver", "Exile_Item_Foolbox", "BSF_Item_Copper_Plates", "Exile_Item_CamoTentKit", "Exile_Melee_Axe", "BSF_Paint_Bucket_Red", "BSF_Paint_Bucket_Green", "Land_CanisterPlastic_F", "Exile_Item_MetalScrews", "Exile_Melee_Axe", "Exile_Item_LightBulb", "Exile_Item_JunkMetal", "Exile_Item_MetalScrews", "Exile_Item_Shovel", "Exile_Item_MetalWire", "Exile_Item_MetalBoard", "Exile_Item_ScrewDriver", "Exile_Item_Pliers", "Exile_Item_Pliers", "BSF_Paint_Bucket_Black", "Exile_Item_ScrewDriver", "Exile_Item_MetalBoard", "Exile_Item_FireExtinguisher", "Exile_Item_Rope", "BSF_Paint_Bucket_Red", "Exile_Item_Shovel", "Exile_Item_Handsaw", "Exile_Item_WeaponParts", "Exile_Item_Grinder", "Exile_Item_Shovel", "BSF_Paintbrush", "Exile_Item_Handsaw", "Exile_Item_WaterCanisterEmpty", "Exile_Item_ScrewDriver", "BSF_Paint_Bucket_White", "Exile_Item_Sand", "Exile_Item_Shovel", "Exile_Item_Pliers", "Exile_Item_ScrewDriver", "BSF_Paint_Bucket_Green", "Exile_Melee_Axe", "Exile_Item_Knife", "BSF_Item_Copper_Plates", "Exile_Item_PortableGeneratorKit", "Exile_Melee_SledgeHammer", "Exile_Melee_Axe", "Exile_Item_PortableGeneratorKit", "Exile_Item_Pliers", "BSF_Tarp_WD", "BSF_Tarp_Green", "BSF_Item_Copper_Plates", "Exile_Melee_Axe", "Exile_Item_FloodLightKit", "Exile_Item_Pliers", "Exile_Item_Cement", "Exile_Item_Pliers", "Exile_Melee_Axe", "BSF_Item_Copper_Plates", "Exile_Item_Hammer", "Exile_Item_ExtensionCord", "Exile_Item_ScrewDriver", "Exile_Item_CordlessScrewdriver", "Exile_Item_ScrewDriver", "Exile_Melee_Axe", "Exile_Item_Handsaw", "Exile_Melee_SledgeHammer", "Exile_Item_JunkMetal", "BSF_Paint_Bucket_Black", "Exile_Item_BurlapSack", "Exile_Item_WeaponParts", "Exile_Item_Grinder", "Exile_Melee_SledgeHammer", "Exile_Melee_Axe", "Exile_Item_Handsaw", "BSF_Paint_Bucket_Green", "Exile_Item_FireExtinguisher", "BSF_SolarTentOlive_Kit", "Exile_Item_ExtensionCord", "Exile_Item_Hammer", "Exile_Item_ExtensionCord", "Exile_Item_SleepingMat", "Exile_Item_Hammer", "BSF_Paintbrush", "Exile_Item_MetalBoard", "Exile_Item_Shovel", "Exile_Melee_Axe", "Exile_Item_ExtensionCord", "Exile_Item_JunkMetal", "Exile_Item_Handsaw", "Exile_Item_JunkMetal", "BSF_Paint_Bucket_Green", "Exile_Item_MetalScrews", "Exile_Item_ExtensionCord", "Exile_Item_MetalScrews", "BSF_Paint_Bucket_Black", "Exile_Item_SleepingMat", "Exile_Item_JunkMetal", "Exile_Item_SleepingMat", "Exile_Melee_Axe", "BSF_Paint_Bucket_Green", "Exile_Melee_SledgeHammer", "Exile_Item_JunkMetal"};

		/*
			Percental Item Spawn Chances of Vehicle:

			Exile_Item_Carwheel          = 5.56%
			Exile_Item_Wrench            = 5.56%
			Exile_Item_OilCanister       = 5.56%
			Exile_Item_FuelCanisterFull  = 22.22%
			Exile_Item_DuctTape          = 27.78%
			Exile_Item_FuelCanisterEmpty = 27.78%
			Exile_Item_Foolbox           = 5.56%
		*/
		Vehicle[] = {"Exile_Item_DuctTape", "Exile_Item_FuelCanisterEmpty", "Exile_Item_FuelCanisterFull", "Exile_Item_FuelCanisterFull", "Exile_Item_DuctTape", "Exile_Item_FuelCanisterEmpty", "Exile_Item_Carwheel", "Exile_Item_FuelCanisterFull", "Exile_Item_DuctTape", "Exile_Item_DuctTape", "Exile_Item_Wrench", "Exile_Item_FuelCanisterEmpty", "Exile_Item_DuctTape", "Exile_Item_FuelCanisterFull", "Exile_Item_Foolbox", "Exile_Item_FuelCanisterEmpty", "Exile_Item_OilCanister", "Exile_Item_FuelCanisterEmpty"};

		/*
			Percental Item Spawn Chances of Chemlights:

			Chemlight_blue   = 25.00%
			Chemlight_green  = 25.00%
			Chemlight_red    = 25.00%
			Chemlight_yellow = 25.00%
		*/
		Chemlights[] = {"Chemlight_green", "Chemlight_yellow", "Chemlight_red", "Chemlight_blue"};

		/*
			Percental Item Spawn Chances of RoadFlares:

			FlareGreen_F         = 14.29%
			FlareRed_F           = 14.29%
			FlareWhite_F         = 14.29%
			FlareYellow_F        = 14.29%
			rhs_weap_rsp30_white = 14.29%
			rhs_weap_rsp30_red   = 14.29%
			rhs_weap_rsp30_green = 14.29%
		*/
		RoadFlares[] = {"rhs_weap_rsp30_white", "FlareGreen_F", "rhs_weap_rsp30_red", "rhs_weap_rsp30_green", "FlareRed_F", "FlareWhite_F", "FlareYellow_F"};

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
		SmokeGrenades[] = {"SmokeShellYellow", "SmokeShellRed", "SmokeShell", "SmokeShellOrange", "SmokeShellPurple", "SmokeShellBlue", "SmokeShellGreen"};

		/*
			Percental Item Spawn Chances of Restraints:

			Exile_Item_ZipTie = 100.00%
		*/
		Restraints[] = {"Exile_Item_ZipTie"};

		/*
			Percental Item Spawn Chances of Electronics:

			Exile_Item_Laptop        = 20.00%
			Exile_Item_BaseCameraKit = 20.00%
			Exile_Item_CodeLock      = 60.00%
		*/
		Electronics[] = {"Exile_Item_CodeLock", "Exile_Item_CodeLock", "Exile_Item_CodeLock", "Exile_Item_BaseCameraKit", "Exile_Item_Laptop"};

		/*
			Percental Item Spawn Chances of Trash:

			BSF_Item_IV_Bag_Used          = 4.17%
			BSF_Fishing_Net               = 4.17%
			rhs_weap_panzerfaust60_used   = 4.17%
			rhs_weap_rsp30_white_used     = 4.17%
			rhs_weap_rsp30_red_used       = 4.17%
			rhs_weap_rsp30_green_used     = 4.17%
			rhs_weap_rpg26_used           = 4.17%
			rhs_weap_rpg75_used           = 4.17%
			Exile_Item_Magazine01         = 4.17%
			Exile_Item_Magazine02         = 4.17%
			Exile_Item_Magazine03         = 4.17%
			Exile_Item_Magazine04         = 4.17%
			Exile_Item_Can_Empty          = 16.67%
			Exile_Item_PlasticBottleEmpty = 16.67%
			Exile_Item_ToiletPaper        = 16.67%
		*/
		Trash[] = {"Exile_Item_ToiletPaper", "Exile_Item_Can_Empty", "Exile_Item_Can_Empty", "Exile_Item_ToiletPaper", "Exile_Item_PlasticBottleEmpty", "rhs_weap_rpg26_used", "rhs_weap_rpg75_used", "rhs_weap_rsp30_green_used", "Exile_Item_PlasticBottleEmpty", "Exile_Item_Magazine02", "BSF_Item_IV_Bag_Used", "Exile_Item_ToiletPaper", "Exile_Item_PlasticBottleEmpty", "rhs_weap_rsp30_red_used", "Exile_Item_Can_Empty", "Exile_Item_Magazine03", "Exile_Item_Can_Empty", "Exile_Item_Magazine01", "Exile_Item_PlasticBottleEmpty", "rhs_weap_panzerfaust60_used", "BSF_Fishing_Net", "Exile_Item_Magazine04", "Exile_Item_ToiletPaper", "rhs_weap_rsp30_white_used"};

		/*
			Percental Item Spawn Chances of Unused:

		*/
		Unused[] = {};
	};
};