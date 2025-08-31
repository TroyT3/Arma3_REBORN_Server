////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.98
//https://mikero.bytex.digital/Downloads
//'now' is Wed Jul 09 20:02:18 2025 : 'file' last modified on Mon Jun 19 18:35:00 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class BSF_Buildings
	{
		requiredVersion = 0.1;
		requiredAddons[] = {"BSF_Misc","exile_assets","exile_client","a3_structures_f","a3_structures_f_enoch","a3_props_f_enoch","BSF_Misc_Consumable","A3_Data_F","A3_Supplies_F_Heli_Fuel"};
		units[] = {"BSF_CargoPlatform_Green","BSF_CargoPlatform_Green_Preview","BSF_CargoPlatform_Brown","BSF_CargoPlatform_Brown_Preview","BSF_CargoPlatform_Jungle","BSF_CargoPlatform_Jungle_Preview","BSF_CargoPlatform_Rusty","BSF_CargoPlatform_Rusty_Preview","BSF_GuardBox","BSF_GuardBox_Preview","BSF_Radar1","BSF_Radar1_Preview","BSF_DearStand2","BSF_DearStand2_Preview","BSF_DearStand1","BSF_DearStand1_Preview","BSF_GuardTowerSmall","BSF_GuardTowerSmall_Preview","BSF_GuardTowerBig","BSF_GuardTowerBig_Preview","BSF_Bunker2_Double","BSF_Bunker2_Double_Preview","BSF_Bunker2_Left","BSF_Bunker2_Left_Preview","BSF_Bunker2_Right","BSF_Bunker2_Right_Preview","BSF_Bunker2_Mossy_Double","BSF_Bunker2_Mossy_Double_Preview","BSF_Bunker2_Mossy_Left","BSF_Bunker2_Mossy_Left_Preview","BSF_Bunker2_Mossy_Right","BSF_Bunker2_Mossy_Right_Preview","BSF_PillBoxBig","BSF_PillBoxRect","BSF_PillBoxHex","BSF_PillBoxWall1_Sharp","BSF_PillBoxWall3_Sharp","BSF_PillBoxWall1_Blunt","BSF_PillBoxWall3_Blunt","BSF_ModularBunkerBig","BSF_ModularBunkerHQ","BSF_ModularBunkerSmall","BSF_ModularBunkerTall","BSF_ModularBunker1Block","BSF_ModularBunker3Block","BSF_ConcreteRamp1","BSF_Bridge1_A","BSF_Bridge1_B","BSF_Bridge1_C","BSF_Bridge1_D","BSF_Bridge1_E","BSF_Bridge1_F","BSF_Bridge1_Pillar","BSF_ArmorLocker","BSF_ArmorLocker_Optics","BSF_ArmorLocker_Storage","BSF_ArmorLocker_Tools","BSF_ArmorLocker_Attachments","BSF_ArmorLocker_Rifles","BSF_ArmorLocker_Food","BSF_ArmorLocker_Pistols","BSF_ArmorLocker_Armor","BSF_ArmorLocker_Ammo","BSF_ArmorLocker_ComChest","BSF_ArmorLocker_Explosives","BSF_ArmorLocker_HMG","BSF_ArmorLocker_Junk","BSF_ArmorLocker_Launchers","BSF_ArmorLocker_LMG","BSF_ArmorLocker_Materials","BSF_ArmorLocker_Medical","BSF_ArmorLocker_Packs","BSF_ArmorLocker_Rifles_127","BSF_ArmorLocker_Rifles_338","BSF_ArmorLocker_Rifles_545","BSF_ArmorLocker_Rifles_556","BSF_ArmorLocker_Rifles_65","BSF_ArmorLocker_Rifles_762","BSF_ArmorLocker_Rifles_Misc","BSF_ArmorLocker_Rifles_Sniper","BSF_ArmorLocker_Shotguns","BSF_ArmorLocker_SMG","BSF_ArmorLocker_ToSell","BSF_ArmorLocker_ToSort","BSF_ArmorLocker_UAV","BSF_ArmorLocker_Uniforms"};
		weapons[] = {};
		magazines[] = {"BSF_ArmorLocker_Base_Kit","BSF_ArmorLocker_Kit","BSF_ArmorLocker_Storage_Kit","BSF_ArmorLocker_Tools_Kit","BSF_ArmorLocker_Attachments_Kit","BSF_ArmorLocker_Rifles_Kit","BSF_ArmorLocker_Food_Kit","BSF_ArmorLocker_Pistols_Kit","BSF_ArmorLocker_Armor_Kit","BSF_ArmorLocker_Ammo_Kit","BSF_ArmorLocker_ComChest_Kit","BSF_ArmorLocker_Explosives_Kit","BSF_ArmorLocker_HMG_Kit","BSF_ArmorLocker_Junk_Kit","BSF_ArmorLocker_Launchers_Kit","BSF_ArmorLocker_LMG_Kit","BSF_ArmorLocker_Materials_Kit","BSF_ArmorLocker_Medical_Kit","BSF_ArmorLocker_Optics_Kit","BSF_ArmorLocker_Packs_Kit","BSF_ArmorLocker_Rifles_127_Kit","BSF_ArmorLocker_Rifles_338_Kit","BSF_ArmorLocker_Rifles_545_Kit","BSF_ArmorLocker_Rifles_556_Kit","BSF_ArmorLocker_Rifles_65_Kit","BSF_ArmorLocker_Rifles_762_Kit","BSF_ArmorLocker_Rifles_Misc_Kit","BSF_ArmorLocker_Rifles_Sniper_Kit","BSF_ArmorLocker_Shotguns_Kit","BSF_ArmorLocker_SMG_Kit","BSF_ArmorLocker_ToSell_Kit","BSF_ArmorLocker_ToSort_Kit","BSF_ArmorLocker_UAV_Kit","BSF_ArmorLocker_Uniforms_Kit","BSF_CargoPlatform_Green_Kit","BSF_CargoPlatform_Brown_Kit","BSF_CargoPlatform_Jungle_Kit","BSF_CargoPlatform_Rusty_Kit","BSF_GuardBox_Kit","BSF_Radar1_Kit","BSF_DearStand2_Kit","BSF_DearStand1_Kit","BSF_GuardTowerSmall_Kit","BSF_GuardTowerBig_Kit","BSF_Bunker2_Double_Kit","BSF_Bunker2_Left_Kit","BSF_Bunker2_Right_Kit","BSF_Bunker2_Mossy_Double_Kit","BSF_Bunker2_Mossy_Left_Kit","BSF_Bunker2_Mossy_Right_Kit","BSF_PillBoxBig_Kit","BSF_PillBoxRect_Kit","BSF_PillBoxHex_Kit","BSF_PillBoxWall1_Sharp_Kit","BSF_PillBoxWall3_Sharp_Kit","BSF_PillBoxWall1_Blunt_Kit","BSF_PillBoxWall3_Blunt_Kit","BSF_ModularBunkerBig_Kit","BSF_ModularBunkerHQ_Kit","BSF_ModularBunkerSmall_Kit","BSF_ModularBunkerTall_Kit","BSF_ModularBunker1Block_Kit","BSF_ModularBunker3Block_Kit","BSF_ConcreteRamp1_Kit"};
		ammo[] = {};
	};
};
class AbstractConstruction;
class CfgConstruction
{
	class AbstractFloor: AbstractConstruction
	{
		class SnapPositions
		{
			BSF_AF_ArmorLoacker_01[] = {-2.15,2.5,0.125};
			BSF_AF_ArmorLoacker_02[] = {0,2.5,0.125};
			BSF_AF_ArmorLoacker_03[] = {2.15,2.5,0.125};
			BSF_AF_ArmorLoacker_04[] = {-2.15,-2.5,0.125};
			BSF_AF_ArmorLoacker_05[] = {0,-2.5,0.125};
			BSF_AF_ArmorLoacker_06[] = {2.15,-2.5,0.125};
			BSF_AF_ArmorLoacker_07[] = {-2.5,2.15,0.125};
			BSF_AF_ArmorLoacker_08[] = {-2.5,0,0.125};
			BSF_AF_ArmorLoacker_09[] = {-2.5,-2.15,0.125};
			BSF_AF_ArmorLoacker_10[] = {2.5,2.15,0.125};
			BSF_AF_ArmorLoacker_11[] = {2.5,0,0.125};
			BSF_AF_ArmorLoacker_12[] = {2.5,-2.15,0.125};
		};
		class SnapObjects{};
	};
	class AbstractWall: AbstractConstruction
	{
		class SnapPositions{};
		class SnapObjects{};
	};
	class AbstractArmoLoacker: AbstractConstruction
	{
		class SnapPositions
		{
			ArmorLoackerLeft[] = {-1.2,0,-0.625};
			ArmorLoackerRight[] = {1.2,0,-0.625};
			ArmorLoackerTop[] = {0,0,0.625};
		};
		class SnapObjects
		{
			class BSF_IronWall_Floor_Basic
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_IronWall_Floor_Round
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_IronWall_Floor_Tri
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_IronWall_Floor_Half
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_IronWall_Floor_Quarter
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_IronWall_Floor_Hatchport
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_IronWall_Floor_Hatch
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_IronWall_Floorport
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_IronWall_Floorport_Door
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_IronWall_Stairport
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_CastleWall_Floor
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_CastleWall_Floor_Round
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_CastleWall_Floor_Tri
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_CastleWall_Floor_Hatchport
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_CastleWall_Floor_Hatch
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_CastleWall_Floorport
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_CastleWall_Floorport_Door
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_CastleWall_Stairport
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_GreenWall_Floor
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_GreenWall_Floor_Round
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_GreenWall_Floor_Tri
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_GreenWall_Floor_Hatchport
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_GreenWall_Floor_Hatch
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_GreenWall_Floorport
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_GreenWall_Floorport_Door
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_GreenWall_Stairport
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_StoneWall_Floor
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_StoneWall_Floor_Round
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_StoneWall_Floor_Tri
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_StoneWall_Floor_Hatchport
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_StoneWall_Floor_Hatch
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_StoneWall_Floorport
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_StoneWall_Floorport_Door
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_StoneWall_Stairport
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_WoodWall_Floor
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_WoodWall_Floor_Round
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_WoodWall_Floor_Tri
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_WoodWall_Floor_Hatchport
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_WoodWall_Floor_Hatch
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_WoodWall_Floorport
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_WoodWall_Floorport_Door
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_WoodWall_Stairport
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class EBM_Brickwall_floor
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class EBM_Brickwall_floorport
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class EBM_Brickwall_floorport_door
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class EBM_Metalwall_floor
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class EBM_Metalwall_floorport
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class EBM_Metalwall_floorport_door
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class Exile_Construction_WoodFloor_Static
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class Exile_Construction_WoodFloor_Reinforced_Static
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class Exile_Construction_WoodFloorPortSmall_Static
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class Exile_Construction_WoodFloorPortSmall_Reinforced_Static
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class Exile_Construction_WoodFloorPort_Static
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class Exile_Construction_WoodFloorPort_Reinforced_Static
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class Exile_Construction_ConcreteFloor_Static
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class Exile_Construction_ConcreteFloorPort_Static
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class Exile_Construction_ConcreteFloorHatch_Static
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class Exile_Construction_ConcreteFloorPortSmall_Static
			{
				positions[] = {"BSF_AF_ArmorLoacker_01","BSF_AF_ArmorLoacker_02","BSF_AF_ArmorLoacker_03","BSF_AF_ArmorLoacker_04","BSF_AF_ArmorLoacker_05","BSF_AF_ArmorLoacker_06","BSF_AF_ArmorLoacker_07","BSF_AF_ArmorLoacker_08","BSF_AF_ArmorLoacker_09","BSF_AF_ArmorLoacker_10","BSF_AF_ArmorLoacker_11","BSF_AF_ArmorLoacker_12"};
			};
			class BSF_ArmorLocker
			{
				positions[] = {"ArmorLoackerLeft","ArmorLoackerRight","ArmorLoackerTop"};
			};
			class BSF_ArmorLocker_Storage
			{
				positions[] = {"ArmorLoackerLeft","ArmorLoackerRight","ArmorLoackerTop"};
			};
			class BSF_ArmorLocker_Tools
			{
				positions[] = {"ArmorLoackerLeft","ArmorLoackerRight","ArmorLoackerTop"};
			};
			class BSF_ArmorLocker_Attachments
			{
				positions[] = {"ArmorLoackerLeft","ArmorLoackerRight","ArmorLoackerTop"};
			};
			class BSF_ArmorLocker_Rifles
			{
				positions[] = {"ArmorLoackerLeft","ArmorLoackerRight","ArmorLoackerTop"};
			};
			class BSF_ArmorLocker_Food
			{
				positions[] = {"ArmorLoackerLeft","ArmorLoackerRight","ArmorLoackerTop"};
			};
			class BSF_ArmorLocker_Pistols
			{
				positions[] = {"ArmorLoackerLeft","ArmorLoackerRight","ArmorLoackerTop"};
			};
			class BSF_ArmorLocker_Armor
			{
				positions[] = {"ArmorLoackerLeft","ArmorLoackerRight","ArmorLoackerTop"};
			};
			class BSF_ArmorLocker_Ammo
			{
				positions[] = {"ArmorLoackerLeft","ArmorLoackerRight","ArmorLoackerTop"};
			};
			class BSF_ArmorLocker_ComChest
			{
				positions[] = {"ArmorLoackerLeft","ArmorLoackerRight","ArmorLoackerTop"};
			};
			class BSF_ArmorLocker_Explosives
			{
				positions[] = {"ArmorLoackerLeft","ArmorLoackerRight","ArmorLoackerTop"};
			};
			class BSF_ArmorLocker_HMG
			{
				positions[] = {"ArmorLoackerLeft","ArmorLoackerRight","ArmorLoackerTop"};
			};
			class BSF_ArmorLocker_Junk
			{
				positions[] = {"ArmorLoackerLeft","ArmorLoackerRight","ArmorLoackerTop"};
			};
			class BSF_ArmorLocker_Launchers
			{
				positions[] = {"ArmorLoackerLeft","ArmorLoackerRight","ArmorLoackerTop"};
			};
			class BSF_ArmorLocker_LMG
			{
				positions[] = {"ArmorLoackerLeft","ArmorLoackerRight","ArmorLoackerTop"};
			};
			class BSF_ArmorLocker_Materials
			{
				positions[] = {"ArmorLoackerLeft","ArmorLoackerRight","ArmorLoackerTop"};
			};
			class BSF_ArmorLocker_Medical
			{
				positions[] = {"ArmorLoackerLeft","ArmorLoackerRight","ArmorLoackerTop"};
			};
			class BSF_ArmorLocker_Packs
			{
				positions[] = {"ArmorLoackerLeft","ArmorLoackerRight","ArmorLoackerTop"};
			};
			class BSF_ArmorLocker_Rifles_127
			{
				positions[] = {"ArmorLoackerLeft","ArmorLoackerRight","ArmorLoackerTop"};
			};
			class BSF_ArmorLocker_Rifles_338
			{
				positions[] = {"ArmorLoackerLeft","ArmorLoackerRight","ArmorLoackerTop"};
			};
			class BSF_ArmorLocker_Rifles_545
			{
				positions[] = {"ArmorLoackerLeft","ArmorLoackerRight","ArmorLoackerTop"};
			};
			class BSF_ArmorLocker_Rifles_556
			{
				positions[] = {"ArmorLoackerLeft","ArmorLoackerRight","ArmorLoackerTop"};
			};
			class BSF_ArmorLocker_Rifles_65
			{
				positions[] = {"ArmorLoackerLeft","ArmorLoackerRight","ArmorLoackerTop"};
			};
			class BSF_ArmorLocker_Rifles_762
			{
				positions[] = {"ArmorLoackerLeft","ArmorLoackerRight","ArmorLoackerTop"};
			};
			class BSF_ArmorLocker_Rifles_Misc
			{
				positions[] = {"ArmorLoackerLeft","ArmorLoackerRight","ArmorLoackerTop"};
			};
			class BSF_ArmorLocker_Shotgun
			{
				positions[] = {"ArmorLoackerLeft","ArmorLoackerRight","ArmorLoackerTop"};
			};
			class BSF_ArmorLocker_Rifles_Snipers
			{
				positions[] = {"ArmorLoackerLeft","ArmorLoackerRight","ArmorLoackerTop"};
			};
			class BSF_ArmorLocker_SMG
			{
				positions[] = {"ArmorLoackerLeft","ArmorLoackerRight","ArmorLoackerTop"};
			};
			class BSF_ArmorLocker_ToSell
			{
				positions[] = {"ArmorLoackerLeft","ArmorLoackerRight","ArmorLoackerTop"};
			};
			class BSF_ArmorLocker_ToSort
			{
				positions[] = {"ArmorLoackerLeft","ArmorLoackerRight","ArmorLoackerTop"};
			};
			class BSF_ArmorLocker_UAV
			{
				positions[] = {"ArmorLoackerLeft","ArmorLoackerRight","ArmorLoackerTop"};
			};
			class BSF_ArmorLocker_Uniforms
			{
				positions[] = {"ArmorLoackerLeft","ArmorLoackerRight","ArmorLoackerTop"};
			};
		};
	};
	class BSF_ArmorLocker_Construction: AbstractArmoLoacker
	{
		scope = 0;
		staticObject = "BSF_ArmorLocker";
		previewObject = "BSF_ArmorLocker_Preview";
		kitMagazine = "BSF_ArmorLocker_Kit";
		refundObjects[] = {"BSF_ArmorLocker_Kit"};
		materialType = 10;
	};
	class BSF_ArmorLocker_Storage_Construction: AbstractArmoLoacker
	{
		scope = 0;
		staticObject = "BSF_ArmorLocker_Storage";
		previewObject = "BSF_ArmorLocker_Storage_Preview";
		kitMagazine = "BSF_ArmorLocker_Storage_Kit";
		refundObjects[] = {"BSF_ArmorLocker_Storage_Kit"};
		materialType = 10;
	};
	class BSF_ArmorLocker_Tools_Construction: AbstractArmoLoacker
	{
		scope = 0;
		staticObject = "BSF_ArmorLocker_Tools";
		previewObject = "BSF_ArmorLocker_Tools_Preview";
		kitMagazine = "BSF_ArmorLocker_Tools_Kit";
		refundObjects[] = {"BSF_ArmorLocker_Tools_Kit"};
		materialType = 10;
	};
	class BSF_ArmorLocker_Attachments_Construction: AbstractArmoLoacker
	{
		scope = 0;
		staticObject = "BSF_ArmorLocker_Attachments";
		previewObject = "BSF_ArmorLocker_Attachments_Preview";
		kitMagazine = "BSF_ArmorLocker_Attachments_Kit";
		refundObjects[] = {"BSF_ArmorLocker_Attachments_Kit"};
		materialType = 10;
	};
	class BSF_ArmorLocker_Rifles_Construction: AbstractArmoLoacker
	{
		scope = 0;
		staticObject = "BSF_ArmorLocker_Rifles";
		previewObject = "BSF_ArmorLocker_Rifles_Preview";
		kitMagazine = "BSF_ArmorLocker_Rifles_Kit";
		refundObjects[] = {"BSF_ArmorLocker_Rifles_Kit"};
		materialType = 10;
	};
	class BSF_ArmorLocker_Food_Construction: AbstractArmoLoacker
	{
		scope = 0;
		staticObject = "BSF_ArmorLocker_Food";
		previewObject = "BSF_ArmorLocker_Food_Preview";
		kitMagazine = "BSF_ArmorLocker_Food_Kit";
		refundObjects[] = {"BSF_ArmorLocker_Food_Kit"};
		materialType = 10;
	};
	class BSF_ArmorLocker_Pistols_Construction: AbstractArmoLoacker
	{
		scope = 0;
		staticObject = "BSF_ArmorLocker_Pistols";
		previewObject = "BSF_ArmorLocker_Pistols_Preview";
		kitMagazine = "BSF_ArmorLocker_Pistols_Kit";
		refundObjects[] = {"BSF_ArmorLocker_Pistols_Kit"};
		materialType = 10;
	};
	class BSF_ArmorLocker_Armor_Construction: AbstractArmoLoacker
	{
		scope = 0;
		staticObject = "BSF_ArmorLocker_Armor";
		previewObject = "BSF_ArmorLocker_Armor_Preview";
		kitMagazine = "BSF_ArmorLocker_Armor_Kit";
		refundObjects[] = {"BSF_ArmorLocker_Armor_Kit"};
		materialType = 10;
	};
	class BSF_ArmorLocker_Ammo_Construction: AbstractArmoLoacker
	{
		scope = 0;
		staticObject = "BSF_ArmorLocker_Ammo";
		previewObject = "BSF_ArmorLocker_Ammo_Preview";
		kitMagazine = "BSF_ArmorLocker_Ammo_Kit";
		refundObjects[] = {"BSF_ArmorLocker_Ammo_Kit"};
		materialType = 10;
	};
	class BSF_ArmorLocker_ComChest_Construction: AbstractArmoLoacker
	{
		scope = 0;
		staticObject = "BSF_ArmorLocker_ComChest";
		previewObject = "BSF_ArmorLocker_ComChest_Preview";
		kitMagazine = "BSF_ArmorLocker_ComChest_Kit";
		refundObjects[] = {"BSF_ArmorLocker_ComChest_Kit"};
		materialType = 10;
	};
	class BSF_ArmorLocker_Explosives_Construction: AbstractArmoLoacker
	{
		scope = 0;
		staticObject = "BSF_ArmorLocker_Explosives";
		previewObject = "BSF_ArmorLocker_Explosives_Preview";
		kitMagazine = "BSF_ArmorLocker_Explosives_Kit";
		refundObjects[] = {"BSF_ArmorLocker_Explosives_Kit"};
		materialType = 10;
	};
	class BSF_ArmorLocker_HMG_Construction: AbstractArmoLoacker
	{
		scope = 0;
		staticObject = "BSF_ArmorLocker_HMG";
		previewObject = "BSF_ArmorLocker_HMG_Preview";
		kitMagazine = "BSF_ArmorLocker_HMG_Kit";
		refundObjects[] = {"BSF_ArmorLocker_HMG_Kit"};
		materialType = 10;
	};
	class BSF_ArmorLocker_Junk_Construction: AbstractArmoLoacker
	{
		scope = 0;
		staticObject = "BSF_ArmorLocker_Junk";
		previewObject = "BSF_ArmorLocker_Junk_Preview";
		kitMagazine = "BSF_ArmorLocker_Junk_Kit";
		refundObjects[] = {"BSF_ArmorLocker_Junk_Kit"};
		materialType = 10;
	};
	class BSF_ArmorLocker_Launchers_Construction: AbstractArmoLoacker
	{
		scope = 0;
		staticObject = "BSF_ArmorLocker_Launchers";
		previewObject = "BSF_ArmorLocker_Launchers_Preview";
		kitMagazine = "BSF_ArmorLocker_Launchers_Kit";
		refundObjects[] = {"BSF_ArmorLocker_Launchers_Kit"};
		materialType = 10;
	};
	class BSF_ArmorLocker_LMG_Construction: AbstractArmoLoacker
	{
		scope = 0;
		staticObject = "BSF_ArmorLocker_LMG";
		previewObject = "BSF_ArmorLocker_LMG_Preview";
		kitMagazine = "BSF_ArmorLocker_LMG_Kit";
		refundObjects[] = {"BSF_ArmorLocker_LMG_Kit"};
		materialType = 10;
	};
	class BSF_ArmorLocker_Materials_Construction: AbstractArmoLoacker
	{
		scope = 0;
		staticObject = "BSF_ArmorLocker_Materials";
		previewObject = "BSF_ArmorLocker_Materials_Preview";
		kitMagazine = "BSF_ArmorLocker_Materials_Kit";
		refundObjects[] = {"BSF_ArmorLocker_Materials_Kit"};
		materialType = 10;
	};
	class BSF_ArmorLocker_Medical_Construction: AbstractArmoLoacker
	{
		scope = 0;
		staticObject = "BSF_ArmorLocker_Medical";
		previewObject = "BSF_ArmorLocker_Medical_Preview";
		kitMagazine = "BSF_ArmorLocker_Medical_Kit";
		refundObjects[] = {"BSF_ArmorLocker_Medical_Kit"};
		materialType = 10;
	};
	class BSF_ArmorLocker_Optics_Construction: AbstractArmoLoacker
	{
		scope = 0;
		staticObject = "BSF_ArmorLocker_Optics";
		previewObject = "BSF_ArmorLocker_Optics_Preview";
		kitMagazine = "BSF_ArmorLocker_Optics_Kit";
		refundObjects[] = {"BSF_ArmorLocker_Optics_Kit"};
		materialType = 10;
	};
	class BSF_ArmorLocker_Packs_Construction: AbstractArmoLoacker
	{
		scope = 0;
		staticObject = "BSF_ArmorLocker_Packs";
		previewObject = "BSF_ArmorLocker_Packs_Preview";
		kitMagazine = "BSF_ArmorLocker_Packs_Kit";
		refundObjects[] = {"BSF_ArmorLocker_Packs_Kit"};
		materialType = 10;
	};
	class BSF_ArmorLocker_Rifles_127_Construction: AbstractArmoLoacker
	{
		scope = 0;
		staticObject = "BSF_ArmorLocker_Rifles_127";
		previewObject = "BSF_ArmorLocker_Rifles_127_Preview";
		kitMagazine = "BSF_ArmorLocker_Rifles_127_Kit";
		refundObjects[] = {"BSF_ArmorLocker_Rifles_127_Kit"};
		materialType = 10;
	};
	class BSF_ArmorLocker_Rifles_338_Construction: AbstractArmoLoacker
	{
		scope = 0;
		staticObject = "BSF_ArmorLocker_Rifles_338";
		previewObject = "BSF_ArmorLocker_Rifles_338_Preview";
		kitMagazine = "BSF_ArmorLocker_Rifles_338_Kit";
		refundObjects[] = {"BSF_ArmorLocker_Rifles_338_Kit"};
		materialType = 10;
	};
	class BSF_ArmorLocker_Rifles_545_Construction: AbstractArmoLoacker
	{
		scope = 0;
		staticObject = "BSF_ArmorLocker_Rifles_545";
		previewObject = "BSF_ArmorLocker_Rifles_545_Preview";
		kitMagazine = "BSF_ArmorLocker_Rifles_545_Kit";
		refundObjects[] = {"BSF_ArmorLocker_Rifles_545_Kit"};
		materialType = 10;
	};
	class BSF_ArmorLocker_Rifles_556_Construction: AbstractArmoLoacker
	{
		scope = 0;
		staticObject = "BSF_ArmorLocker_Rifles_556";
		previewObject = "BSF_ArmorLocker_Rifles_556_Preview";
		kitMagazine = "BSF_ArmorLocker_Rifles_556_Kit";
		refundObjects[] = {"BSF_ArmorLocker_Rifles_556_Kit"};
		materialType = 10;
	};
	class BSF_ArmorLocker_Rifles_65_Construction: AbstractArmoLoacker
	{
		scope = 0;
		staticObject = "BSF_ArmorLocker_Rifles_65";
		previewObject = "BSF_ArmorLocker_Rifles_65_Preview";
		kitMagazine = "BSF_ArmorLocker_Rifles_65_Kit";
		refundObjects[] = {"BSF_ArmorLocker_Rifles_65_Kit"};
		materialType = 10;
	};
	class BSF_ArmorLocker_Rifles_762_Construction: AbstractArmoLoacker
	{
		scope = 0;
		staticObject = "BSF_ArmorLocker_Rifles_762";
		previewObject = "BSF_ArmorLocker_Rifles_762_Preview";
		kitMagazine = "BSF_ArmorLocker_Rifles_762_Kit";
		refundObjects[] = {"BSF_ArmorLocker_Rifles_762_Kit"};
		materialType = 10;
	};
	class BSF_ArmorLocker_Rifles_Misc_Construction: AbstractArmoLoacker
	{
		scope = 0;
		staticObject = "BSF_ArmorLocker_Rifles_Misc";
		previewObject = "BSF_ArmorLocker_Rifles_Misc_Preview";
		kitMagazine = "BSF_ArmorLocker_Rifles_Misc_Kit";
		refundObjects[] = {"BSF_ArmorLocker_Rifles_Misc_Kit"};
		materialType = 10;
	};
	class BSF_ArmorLocker_Rifles_Sniper_Construction: AbstractArmoLoacker
	{
		scope = 0;
		staticObject = "BSF_ArmorLocker_Rifles_Sniper";
		previewObject = "BSF_ArmorLocker_Rifles_Sniper_Preview";
		kitMagazine = "BSF_ArmorLocker_Rifles_Sniper_Kit";
		refundObjects[] = {"BSF_ArmorLocker_Rifles_Sniper_Kit"};
		materialType = 10;
	};
	class BSF_ArmorLocker_Shotguns_Construction: AbstractArmoLoacker
	{
		scope = 0;
		staticObject = "BSF_ArmorLocker_Shotguns";
		previewObject = "BSF_ArmorLocker_Shotguns_Preview";
		kitMagazine = "BSF_ArmorLocker_Shotguns_Kit";
		refundObjects[] = {"BSF_ArmorLocker_Shotguns_Kit"};
		materialType = 10;
	};
	class BSF_ArmorLocker_SMG_Construction: AbstractArmoLoacker
	{
		scope = 0;
		staticObject = "BSF_ArmorLocker_SMG";
		previewObject = "BSF_ArmorLocker_SMG_Preview";
		kitMagazine = "BSF_ArmorLocker_SMG_Kit";
		refundObjects[] = {"BSF_ArmorLocker_SMG_Kit"};
		materialType = 10;
	};
	class BSF_ArmorLocker_ToSell_Construction: AbstractArmoLoacker
	{
		scope = 0;
		staticObject = "BSF_ArmorLocker_ToSell";
		previewObject = "BSF_ArmorLocker_ToSell_Preview";
		kitMagazine = "BSF_ArmorLocker_ToSell_Kit";
		refundObjects[] = {"BSF_ArmorLocker_ToSell_Kit"};
		materialType = 10;
	};
	class BSF_ArmorLocker_ToSort_Construction: AbstractArmoLoacker
	{
		scope = 0;
		staticObject = "BSF_ArmorLocker_ToSort";
		previewObject = "BSF_ArmorLocker_ToSort_Preview";
		kitMagazine = "BSF_ArmorLocker_ToSort_Kit";
		refundObjects[] = {"BSF_ArmorLocker_ToSort_Kit"};
		materialType = 10;
	};
	class BSF_ArmorLocker_UAV_Construction: AbstractArmoLoacker
	{
		scope = 0;
		staticObject = "BSF_ArmorLocker_UAV";
		previewObject = "BSF_ArmorLocker_UAV_Preview";
		kitMagazine = "BSF_ArmorLocker_UAV_Kit";
		refundObjects[] = {"BSF_ArmorLocker_UAV_Kit"};
		materialType = 10;
	};
	class BSF_ArmorLocker_Uniforms_Construction: AbstractArmoLoacker
	{
		scope = 0;
		staticObject = "BSF_ArmorLocker_Uniforms";
		previewObject = "BSF_ArmorLocker_Uniforms_Preview";
		kitMagazine = "BSF_ArmorLocker_Uniforms_Kit";
		refundObjects[] = {"BSF_ArmorLocker_Uniforms_Kit"};
		materialType = 10;
	};
	class BSF_ConcreteRamp1_Construction: AbstractConstruction
	{
		staticObject = "BSF_ConcreteRamp1";
		previewObject = "BSF_ConcreteRamp1_Preview";
		kitMagazine = "BSF_ConcreteRamp1_Kit";
		refundObjects[] = {"BSF_ConcreteRamp1_Kit"};
		materialType = 10;
	};
	class BSF_ModularBunkerBig_Construction: AbstractConstruction
	{
		staticObject = "BSF_ModularBunkerBig";
		previewObject = "BSF_ModularBunkerBig_Preview";
		kitMagazine = "BSF_ModularBunkerBig_Kit";
		refundObjects[] = {"BSF_ModularBunkerBig_Kit"};
		materialType = 10;
	};
	class BSF_ModularBunkerHQ_Construction: AbstractConstruction
	{
		staticObject = "BSF_ModularBunkerHQ";
		previewObject = "BSF_ModularBunkerHQ_Preview";
		kitMagazine = "BSF_ModularBunkerHQ_Kit";
		refundObjects[] = {"BSF_ModularBunkerHQ_Kit"};
		materialType = 10;
	};
	class BSF_ModularBunkerSmall_Construction: AbstractConstruction
	{
		staticObject = "BSF_ModularBunkerSmall";
		previewObject = "BSF_ModularBunkerSmall_Preview";
		kitMagazine = "BSF_ModularBunkerSmall_Kit";
		refundObjects[] = {"BSF_ModularBunkerSmall_Kit"};
		materialType = 10;
	};
	class BSF_ModularBunkerTall_Construction: AbstractConstruction
	{
		staticObject = "BSF_ModularBunkerTall";
		previewObject = "BSF_ModularBunkerTall_Preview";
		kitMagazine = "BSF_ModularBunkerTall_Kit";
		refundObjects[] = {"BSF_ModularBunkerTall_Kit"};
		materialType = 10;
	};
	class BSF_ModularBunker1Block_Construction: AbstractConstruction
	{
		staticObject = "BSF_ModularBunker1Block";
		previewObject = "BSF_ModularBunker1Block_Preview";
		kitMagazine = "BSF_ModularBunker1Block_Kit";
		refundObjects[] = {"BSF_ModularBunker1Block_Kit"};
		materialType = 10;
	};
	class BSF_ModularBunker3Block_Construction: AbstractConstruction
	{
		staticObject = "BSF_ModularBunker3Block";
		previewObject = "BSF_ModularBunker3Block_Preview";
		kitMagazine = "BSF_ModularBunker3Block_Kit";
		refundObjects[] = {"BSF_ModularBunker3Block_Kit"};
		materialType = 10;
	};
	class BSF_PillBoxBig_Construction: AbstractConstruction
	{
		staticObject = "BSF_PillBoxBig";
		previewObject = "BSF_PillBoxBig_Preview";
		kitMagazine = "BSF_PillBoxBig_Kit";
		refundObjects[] = {"BSF_PillBoxBig_Kit"};
		materialType = 10;
	};
	class BSF_PillBoxRect_Construction: AbstractConstruction
	{
		staticObject = "BSF_PillBoxRect";
		previewObject = "BSF_PillBoxRect_Preview";
		kitMagazine = "BSF_PillBoxRect_Kit";
		refundObjects[] = {"BSF_PillBoxRect_Kit"};
		materialType = 10;
	};
	class BSF_PillBoxHex_Construction: AbstractConstruction
	{
		staticObject = "BSF_PillBoxHex";
		previewObject = "BSF_PillBoxHex_Preview";
		kitMagazine = "BSF_PillBoxHex_Kit";
		refundObjects[] = {"BSF_PillBoxHex_Kit"};
		materialType = 10;
	};
	class BSF_PillBoxWall1_Sharp_Construction: AbstractConstruction
	{
		staticObject = "BSF_PillBoxWall1_Sharp";
		previewObject = "BSF_PillBoxWall1_Sharp_Preview";
		kitMagazine = "BSF_PillBoxWall1_Sharp_Kit";
		refundObjects[] = {"BSF_PillBoxWall1_Sharp_Kit"};
		materialType = 10;
	};
	class BSF_PillBoxWall3_Sharp_Construction: AbstractConstruction
	{
		staticObject = "BSF_PillBoxWall3_Sharp";
		previewObject = "BSF_PillBoxWall3_Sharp_Preview";
		kitMagazine = "BSF_PillBoxWall3_Sharp_Kit";
		refundObjects[] = {"BSF_PillBoxWall3_Sharp_Kit"};
		materialType = 10;
	};
	class BSF_PillBoxWall1_Blunt_Construction: AbstractConstruction
	{
		staticObject = "BSF_PillBoxWall1_Blunt";
		previewObject = "BSF_PillBoxWall1_Blunt_Preview";
		kitMagazine = "BSF_PillBoxWall1_Blunt_Kit";
		refundObjects[] = {"BSF_PillBoxWall1_Blunt_Kit"};
		materialType = 10;
	};
	class BSF_PillBoxWall3_Blunt_Construction: AbstractConstruction
	{
		staticObject = "BSF_PillBoxWall3_Blunt";
		previewObject = "BSF_PillBoxWall3_Blunt_Preview";
		kitMagazine = "BSF_PillBoxWall3_Blunt_Kit";
		refundObjects[] = {"BSF_PillBoxWall3_Blunt_Kit"};
		materialType = 10;
	};
	class BSF_Bunker2_Double_Construction: AbstractConstruction
	{
		staticObject = "BSF_Bunker2_Double";
		previewObject = "BSF_Bunker2_Double_Preview";
		kitMagazine = "BSF_Bunker2_Double_Kit";
		refundObjects[] = {"BSF_Bunker2_Double_Kit"};
		materialType = 10;
	};
	class BSF_Bunker2_Left_Construction: AbstractConstruction
	{
		staticObject = "BSF_Bunker2_Left";
		previewObject = "BSF_Bunker2_Left_Preview";
		kitMagazine = "BSF_Bunker2_Left_Kit";
		refundObjects[] = {"BSF_Bunker2_Left_Kit"};
		materialType = 10;
	};
	class BSF_Bunker2_Right_Construction: AbstractConstruction
	{
		staticObject = "BSF_Bunker2_Right";
		previewObject = "BSF_Bunker2_Right_Preview";
		kitMagazine = "BSF_Bunker2_Right_Kit";
		refundObjects[] = {"BSF_Bunker2_Right_Kit"};
		materialType = 10;
	};
	class BSF_Bunker2_Mossy_Double_Construction: AbstractConstruction
	{
		staticObject = "BSF_Bunker2_Mossy_Double";
		previewObject = "BSF_Bunker2_Mossy_Double_Preview";
		kitMagazine = "BSF_Bunker2_Mossy_Double_Kit";
		refundObjects[] = {"BSF_Bunker2_Mossy_Double_Kit"};
		materialType = 10;
	};
	class BSF_Bunker2_Mossy_Left_Construction: AbstractConstruction
	{
		staticObject = "BSF_Bunker2_Mossy_Left";
		previewObject = "BSF_Bunker2_Mossy_Left_Preview";
		kitMagazine = "BSF_Bunker2_Mossy_Left_Kit";
		refundObjects[] = {"BSF_Bunker2_Mossy_Left_Kit"};
		materialType = 10;
	};
	class BSF_Bunker2_Mossy_Right_Construction: AbstractConstruction
	{
		staticObject = "BSF_Bunker2_Mossy_Right";
		previewObject = "BSF_Bunker2_Mossy_Right_Preview";
		kitMagazine = "BSF_Bunker2_Mossy_Right_Kit";
		refundObjects[] = {"BSF_Bunker2_Mossy_Right_Kit"};
		materialType = 10;
	};
	class BSF_GuardTowerBig_Construction: AbstractConstruction
	{
		staticObject = "BSF_GuardTowerBig";
		previewObject = "BSF_GuardTowerBig_Preview";
		kitMagazine = "BSF_GuardTowerBig_Kit";
		refundObjects[] = {"BSF_GuardTowerBig_Kit"};
		materialType = 10;
	};
	class BSF_GuardTowerSmall_Construction: AbstractConstruction
	{
		staticObject = "BSF_GuardTowerSmall";
		previewObject = "BSF_GuardTowerSmall_Preview";
		kitMagazine = "BSF_GuardTowerSmall_Kit";
		refundObjects[] = {"BSF_GuardTowerSmall_Kit"};
		materialType = 10;
	};
	class BSF_Radar1_Construction: AbstractConstruction
	{
		staticObject = "BSF_Radar1";
		previewObject = "BSF_Radar1_Preview";
		kitMagazine = "BSF_Radar1_Kit";
		refundObjects[] = {"BSF_Radar1_Kit"};
		materialType = 10;
	};
	class BSF_DearStand2_Construction: AbstractConstruction
	{
		staticObject = "BSF_DearStand2";
		previewObject = "BSF_DearStand2_Preview";
		kitMagazine = "BSF_DearStand2_Kit";
		refundObjects[] = {"BSF_DearStand2_Kit"};
		materialType = 10;
	};
	class BSF_DearStand1_Construction: AbstractConstruction
	{
		staticObject = "BSF_DearStand1";
		previewObject = "BSF_DearStand1_Preview";
		kitMagazine = "BSF_DearStand1_Kit";
		refundObjects[] = {"BSF_DearStand1_Kit"};
		materialType = 10;
	};
	class BSF_GuardBox_Construction: AbstractConstruction
	{
		staticObject = "BSF_GuardBox";
		previewObject = "BSF_GuardBox_Preview";
		kitMagazine = "BSF_GuardBox_Kit";
		refundObjects[] = {"BSF_GuardBox_Kit"};
		materialType = 10;
	};
	class BSF_CargoPlatform_Green_Construction: AbstractConstruction
	{
		staticObject = "BSF_CargoPlatform_Green";
		previewObject = "BSF_CargoPlatform_Green_Preview";
		kitMagazine = "BSF_CargoPlatform_Green_Kit";
		refundObjects[] = {"BSF_CargoPlatform_Green_Kit"};
		materialType = 10;
	};
	class BSF_CargoPlatform_Brown_Construction: AbstractConstruction
	{
		staticObject = "BSF_CargoPlatform_Brown";
		previewObject = "BSF_CargoPlatform_Brown_Preview";
		kitMagazine = "BSF_CargoPlatform_Brown_Kit";
		refundObjects[] = {"BSF_CargoPlatform_Brown_Kit"};
		materialType = 10;
	};
	class BSF_CargoPlatform_Jungle_Construction: AbstractConstruction
	{
		staticObject = "BSF_CargoPlatform_Jungle";
		previewObject = "BSF_CargoPlatform_Jungle_Preview";
		kitMagazine = "BSF_CargoPlatform_Jungle_Kit";
		refundObjects[] = {"BSF_CargoPlatform_Jungle_Kit"};
		materialType = 10;
	};
	class BSF_CargoPlatform_Rusty_Construction: AbstractConstruction
	{
		staticObject = "BSF_CargoPlatform_Rusty";
		previewObject = "BSF_CargoPlatform_Rusty_Preview";
		kitMagazine = "BSF_CargoPlatform_Rusty_Kit";
		refundObjects[] = {"BSF_CargoPlatform_Rusty_Kit"};
		materialType = 10;
	};
};
class CfgMagazines
{
	class Exile_AbstractItem_Interaction_Constructing;
	class Exile_AbstractItem;
	class BSF_ArmorLocker_Base_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 50;
		model = "\BSF_Community_Addon\addons\bsf_buildings\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\UI\icon_BSF_ArmorLocker_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_ArmorLocker_Kit: BSF_ArmorLocker_Base_Kit
	{
		scope = 2;
		displayName = "Armor Locker";
		descriptionShort = "A secure place to stash your shit!";
		picture = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\UI\icon_BSF_ArmorLocker_CA.paa";
	};
	class BSF_ArmorLocker_Storage_Kit: BSF_ArmorLocker_Base_Kit
	{
		scope = 2;
		displayName = "Armor Locker - Storage";
		descriptionShort = "A secure place to stash your accessories!";
		picture = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\UI\icon_BSF_ArmorLocker_Storage_CA.paa";
	};
	class BSF_ArmorLocker_Tools_Kit: BSF_ArmorLocker_Base_Kit
	{
		scope = 2;
		displayName = "Armor Locker - Tools";
		descriptionShort = "A secure place to stash your accessories!";
		picture = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\UI\icon_BSF_ArmorLocker_Tools_CA.paa";
	};
	class BSF_ArmorLocker_Attachments_Kit: BSF_ArmorLocker_Base_Kit
	{
		scope = 2;
		displayName = "Armor Locker - Attachments";
		descriptionShort = "A secure place to stash your accessories!";
		picture = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\UI\icon_BSF_ArmorLocker_Attachments_CA.paa";
	};
	class BSF_ArmorLocker_Rifles_Kit: BSF_ArmorLocker_Base_Kit
	{
		scope = 2;
		displayName = "Armor Locker - Rifles";
		descriptionShort = "A secure place to stash your rifles!";
		picture = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\UI\icon_BSF_ArmorLocker_Rifles_CA.paa";
	};
	class BSF_ArmorLocker_Food_Kit: BSF_ArmorLocker_Base_Kit
	{
		scope = 2;
		displayName = "Armor Locker - Food";
		descriptionShort = "A secure place to stash your grub!";
		picture = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\UI\icon_BSF_ArmorLocker_Food_CA.paa";
	};
	class BSF_ArmorLocker_Pistols_Kit: BSF_ArmorLocker_Base_Kit
	{
		scope = 2;
		displayName = "Armor Locker - Pistols";
		descriptionShort = "A secure place to stash your gatt!";
		picture = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\UI\icon_BSF_ArmorLocker_Pistols_CA.paa";
	};
	class BSF_ArmorLocker_Armor_Kit: BSF_ArmorLocker_Base_Kit
	{
		scope = 2;
		displayName = "Armor Locker - Armor";
		descriptionShort = "A secure place to stash your armor!";
		picture = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\UI\icon_BSF_ArmorLocker_Armor_CA.paa";
	};
	class BSF_ArmorLocker_Ammo_Kit: BSF_ArmorLocker_Base_Kit
	{
		scope = 2;
		displayName = "Armor Locker - Ammo";
		descriptionShort = "A secure place to stash your ammo!";
		picture = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\UI\icon_BSF_ArmorLocker_Ammo_CA.paa";
	};
	class BSF_ArmorLocker_ComChest_Kit: BSF_ArmorLocker_Base_Kit
	{
		scope = 2;
		displayName = "Armor Locker - Community Chest";
		descriptionShort = "A little charity goes a long way...";
		picture = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\UI\icon_BSF_ArmorLocker_Community_CA.paa";
	};
	class BSF_ArmorLocker_Explosives_Kit: BSF_ArmorLocker_Base_Kit
	{
		scope = 2;
		displayName = "Armor Locker - Explosives";
		descriptionShort = "A secure place to stash your explosives!";
		picture = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\UI\icon_BSF_ArmorLocker_Explosives_CA.paa";
	};
	class BSF_ArmorLocker_HMG_Kit: BSF_ArmorLocker_Base_Kit
	{
		scope = 2;
		displayName = "Armor Locker - Mounted Weapons";
		descriptionShort = "A secure place to stash your mounted weapons!";
		picture = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\UI\icon_BSF_ArmorLocker_HMG_CA.paa";
	};
	class BSF_ArmorLocker_Junk_Kit: BSF_ArmorLocker_Base_Kit
	{
		scope = 2;
		displayName = "Armor Locker - Junk";
		descriptionShort = "OK hoarder, time to get rid of this crap!";
		picture = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\UI\icon_BSF_ArmorLocker_Junk_CA.paa";
	};
	class BSF_ArmorLocker_Launchers_Kit: BSF_ArmorLocker_Base_Kit
	{
		scope = 2;
		displayName = "Armor Locker - Launchers";
		descriptionShort = "A secure place to stash your launchers!";
		picture = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\UI\icon_BSF_ArmorLocker_Launchers_CA.paa";
	};
	class BSF_ArmorLocker_LMG_Kit: BSF_ArmorLocker_Base_Kit
	{
		scope = 2;
		displayName = "Armor Locker - LMG";
		descriptionShort = "A secure place to stash your LMG!";
		picture = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\UI\icon_BSF_ArmorLocker_LMG_CA.paa";
	};
	class BSF_ArmorLocker_Materials_Kit: BSF_ArmorLocker_Base_Kit
	{
		scope = 2;
		displayName = "Armor Locker - Materials";
		descriptionShort = "A secure place to stash your building materials!";
		picture = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\UI\icon_BSF_ArmorLocker_Materials_CA.paa";
	};
	class BSF_ArmorLocker_Medical_Kit: BSF_ArmorLocker_Base_Kit
	{
		scope = 2;
		displayName = "Armor Locker - Medical";
		descriptionShort = "A secure place to stash your medical supplies!";
		picture = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\UI\icon_BSF_ArmorLocker_Medical_CA.paa";
	};
	class BSF_ArmorLocker_Optics_Kit: BSF_ArmorLocker_Base_Kit
	{
		scope = 2;
		displayName = "Armor Locker - Optics";
		descriptionShort = "A secure place to stash your optics!";
		picture = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\UI\icon_BSF_ArmorLocker_Optics_CA.paa";
	};
	class BSF_ArmorLocker_Packs_Kit: BSF_ArmorLocker_Base_Kit
	{
		scope = 2;
		displayName = "Armor Locker - Packs";
		descriptionShort = "A secure place to stash your packs!";
		picture = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\UI\icon_BSF_ArmorLocker_Packs_CA.paa";
	};
	class BSF_ArmorLocker_Rifles_127_Kit: BSF_ArmorLocker_Base_Kit
	{
		scope = 2;
		displayName = "Armor Locker - 12.7mm Rifles";
		descriptionShort = "A secure place to stash your 12.7mm rifles!";
		picture = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\UI\icon_BSF_ArmorLocker_Rifles_127_CA.paa";
	};
	class BSF_ArmorLocker_Rifles_338_Kit: BSF_ArmorLocker_Base_Kit
	{
		scope = 2;
		displayName = "Armor Locker - .338 Rifles";
		descriptionShort = "A secure place to stash your .338 rifles!";
		picture = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\UI\icon_BSF_ArmorLocker_Rifles_338_CA.paa";
	};
	class BSF_ArmorLocker_Rifles_545_Kit: BSF_ArmorLocker_Base_Kit
	{
		scope = 2;
		displayName = "Armor Locker - 5.45mm Rifles";
		descriptionShort = "A secure place to stash your 5.45mm rifles!";
		picture = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\UI\icon_BSF_ArmorLocker_Rifles_545_CA.paa";
	};
	class BSF_ArmorLocker_Rifles_556_Kit: BSF_ArmorLocker_Base_Kit
	{
		scope = 2;
		displayName = "Armor Locker - 5.56mm Rifles";
		descriptionShort = "A secure place to stash your 5.56mm rifles!";
		picture = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\UI\icon_BSF_ArmorLocker_Rifles_556_CA.paa";
	};
	class BSF_ArmorLocker_Rifles_65_Kit: BSF_ArmorLocker_Base_Kit
	{
		scope = 2;
		displayName = "Armor Locker - 6.5mm Rifles";
		descriptionShort = "A secure place to stash your 6.5mm rifles!";
		picture = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\UI\icon_BSF_ArmorLocker_Rifles_65_CA.paa";
	};
	class BSF_ArmorLocker_Rifles_762_Kit: BSF_ArmorLocker_Base_Kit
	{
		scope = 2;
		displayName = "Armor Locker - 7.62mm Rifles ";
		descriptionShort = "A secure place to stash your 7.62 rifles!";
		picture = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\UI\icon_BSF_ArmorLocker_Rifles_762_CA.paa";
	};
	class BSF_ArmorLocker_Rifles_Misc_Kit: BSF_ArmorLocker_Base_Kit
	{
		scope = 2;
		displayName = "Armor Locker - Misc Rifles";
		descriptionShort = "A secure place to stash your misc. rifles!";
		picture = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\UI\icon_BSF_ArmorLocker_Rifles_Misc_CA.paa";
	};
	class BSF_ArmorLocker_Rifles_Sniper_Kit: BSF_ArmorLocker_Base_Kit
	{
		scope = 2;
		displayName = "Armor Locker - Sniper Rifles";
		descriptionShort = "A secure place to stash your sniper rifles!";
		picture = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\UI\icon_BSF_ArmorLocker_Rifles_Sniper_CA.paa";
	};
	class BSF_ArmorLocker_Shotguns_Kit: BSF_ArmorLocker_Base_Kit
	{
		scope = 2;
		displayName = "Armor Locker - Shotguns";
		descriptionShort = "A secure place to stash your Shotguns!";
		picture = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\UI\icon_BSF_ArmorLocker_Shotguns_CA.paa";
	};
	class BSF_ArmorLocker_SMG_Kit: BSF_ArmorLocker_Base_Kit
	{
		scope = 2;
		displayName = "Armor Locker - SMG";
		descriptionShort = "A secure place to stash your SMG!";
		picture = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\UI\icon_BSF_ArmorLocker_SMG_CA.paa";
	};
	class BSF_ArmorLocker_ToSell_Kit: BSF_ArmorLocker_Base_Kit
	{
		scope = 2;
		displayName = "Armor Locker - To Sell";
		descriptionShort = "A secure place to stash your GOOD crap!";
		picture = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\UI\icon_BSF_ArmorLocker_ToSell_CA.paa";
	};
	class BSF_ArmorLocker_ToSort_Kit: BSF_ArmorLocker_Base_Kit
	{
		scope = 2;
		displayName = "Armor Locker - To Sort";
		descriptionShort = "A secure place to stash your crap!";
		picture = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\UI\icon_BSF_ArmorLocker_ToSort_CA.paa";
	};
	class BSF_ArmorLocker_UAV_Kit: BSF_ArmorLocker_Base_Kit
	{
		scope = 2;
		displayName = "Armor Locker - UAV";
		descriptionShort = "A secure place to stash your UAV!";
		picture = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\UI\icon_BSF_ArmorLocker_UAV_CA.paa";
	};
	class BSF_ArmorLocker_Uniforms_Kit: BSF_ArmorLocker_Base_Kit
	{
		scope = 2;
		displayName = "Armor Locker - Uniforms";
		descriptionShort = "A secure place to stash your Uniforms!";
		picture = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\UI\icon_BSF_ArmorLocker_Uniforms_CA.paa";
	};
	class BSF_CargoPlatform_Green_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Cargo Platform, Green";
		descriptionShort = "Why not?";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_CargoPlatform_Green_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_CargoPlatform_Brown_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Cargo Platform, Brown";
		descriptionShort = "Why not?";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_CargoPlatform_Brown_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_CargoPlatform_Jungle_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Cargo Platform, Jungle";
		descriptionShort = "Why not?";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_CargoPlatform_Jungle_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_CargoPlatform_Rusty_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Cargo Platform, Rusty";
		descriptionShort = "Why not?";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_CargoPlatform_Rusty_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_GuardBox_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Guard Box";
		descriptionShort = "A good place to stand around looking bored.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_GuardBox_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_Radar1_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Radar Tower v1";
		descriptionShort = "Beep Beep Blip...";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_Radar1_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_DearStand2_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Deer Stand v2";
		descriptionShort = "Oh dear, watch out.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_DeerStand2_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_DearStand1_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Deer Stand v1";
		descriptionShort = "Oh dear, watch out.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_DeerStand1_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_GuardTowerSmall_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Guard Tower, Small";
		descriptionShort = "For when you only want to be a little high.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_GuardTowerSmall_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_GuardTowerBig_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Guard Tower, Big";
		descriptionShort = "An alternative way  to get really high.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_GuardTowerBig_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_Bunker2_Double_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Old Concrete Bunker, Double";
		descriptionShort = "Bunker down, buddy.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_Bunker2_Light_Double_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_Bunker2_Left_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Old Concrete Bunker, Left";
		descriptionShort = "Bunker down, buddy.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_Bunker2_Light_Left_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_Bunker2_Right_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Old Concrete Bunker, Right";
		descriptionShort = "Bunker down, buddy.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_Bunker2_Light_Right_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_Bunker2_Mossy_Double_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Old Mossy Concrete Bunker, Double";
		descriptionShort = "Bunker down, buddy.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_Bunker2_Mossy_Double_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_Bunker2_Mossy_Left_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Old Mossy Concrete Bunker, Left";
		descriptionShort = "Bunker down, buddy.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_Bunker2_Mossy_Left_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_Bunker2_Mossy_Right_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Old Mossy Concrete Bunker, Right";
		descriptionShort = "Bunker down, buddy.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_Bunker2_Mossy_Right_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_PillBoxBig_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Pillbox, Big";
		descriptionShort = "You can put your pills in here.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_PillBox_Big_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_PillBoxRect_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Pillbox, Rectangle";
		descriptionShort = "You can put your pills in here.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_PillBox_Rect_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_PillBoxHex_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Pillbox, Hexagonal";
		descriptionShort = "You can put your pills in here.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_PillBox_Hex_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_PillBoxWall1_Sharp_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Pillbox Wall, 3m Sharp";
		descriptionShort = "YOu can put your pills in here.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_PillBox_W1_Sharp_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_PillBoxWall3_Sharp_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Pillbox Wall, 6m Sharp";
		descriptionShort = "YOu can put your pills in here.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_PillBox_W3_Sharp_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_PillBoxWall1_Blunt_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Pillbox Wall, 3m Blunt";
		descriptionShort = "YOu can put your pills in here.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_PillBox_W1_Blunt_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_PillBoxWall3_Blunt_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Pillbox Wall, 6m Blunt";
		descriptionShort = "YOu can put your pills in here.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_PillBox_W3_Blunt_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_ModularBunkerBig_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Modular Bunker, Big";
		descriptionShort = "For those that are really afraid of getting shot.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_ModularBunkerBig_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_ModularBunkerHQ_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Modular Bunker, HQ";
		descriptionShort = "If you  had minion, you could command them from here.  You don't.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_ModularBunkerHQ_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_ModularBunkerSmall_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Modular Bunker, Small";
		descriptionShort = "A wee little bunker to cower in.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_ModularBunkerSmall_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_ModularBunkerTall_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Modular Bunker, Tall";
		descriptionShort = "You can see your house from up here.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_ModularBunkerTall_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_ModularBunker1Block_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Modular Bunker Wall, 1 Block";
		descriptionShort = "For those that are really afraid of getting shot.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_ModularBunker1Block_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_ModularBunker3Block_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Modular Bunker Wall, 3 Blocks";
		descriptionShort = "For those that are really afraid of getting shot.";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_ModularBunker3Block_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class BSF_ConcreteRamp1_Kit: Exile_AbstractItem
	{
		scope = 2;
		mass = 10;
		displayName = "Conccrete Ramp";
		descriptionShort = "A large flat concrete ramp";
		model = "\BSF_Community_Addon\addons\bsf_misc\BSF_Crate\BSF_Crate.p3d";
		picture = "\BSF_Community_Addon\addons\BSF_Misc\Items\data\ui\icon_BSF_ConcreteRamp1_CA.paa";
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
};
class CfgEditorCategories
{
	class BSF_Storage
	{
		displayName = "BSF Storage";
	};
	class BSF_Constructions
	{
		displayName = "BSF Constructions";
	};
};
class CfgEditorSubcategories
{
	class BSF_Armor_Locker
	{
		displayName = "Armor Lockers";
	};
	class BSF_Bridges
	{
		displayName = "Bridges";
	};
};
class CfgVehicleClasses
{
	class ExileConstructions
	{
		displayName = "Exile Constructions";
	};
	class ExileContainers
	{
		displayName = "Exile Containers";
	};
};
class CfgVehicles
{
	class Exile_Construction_Abstract_Physics;
	class Exile_Construction_Abstract_Static;
	class Exile_Container_Abstract;
	class BSF_CargoPlatform_Base: Exile_Construction_Abstract_Static
	{
		author = "BSF";
		scope = 1;
		displayName = "Cargo Tower";
		model = "\a3\Structures_F_Enoch\Military\Camps\CargoPlatform_01_F.p3d";
		editorCategory = "BSF_Constructions";
		editorSubcategory = "BSF_Mil";
		hiddenSelections[] = {"Camo_1"};
		hiddenSelectionsMaterials[] = {"a3\Structures_F_Enoch\Military\Camps\data\Cargo_Platform_V1_multi.rvmat"};
		class AnimationSources
		{
			class Leg_1_Move_Source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Leg_2_Move_Source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Leg_3_Move_Source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Leg_4_Move_Source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Panel_1_Rotate_Source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Panel_2_Rotate_Source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Panel_3_Rotate_Source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Panel_4_Rotate_Source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Panel_1_Hide_Source
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class Panel_2_Hide_Source
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class Panel_3_Hide_Source
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class Panel_4_Hide_Source
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
		class Attributes
		{
			class Leg_1_move_source
			{
				displayName = "$STR_A3_C_CfgVehicles_CargoPlatform_01_base_F_Attributes_Leg_1_move_source0";
				property = "Leg_1_move";
				control = "Slider";
				defaultValue = 0;
				expression = "_this animateSource ['%s',_value*6.541,true]";
			};
			class Leg_2_move_source: Leg_1_move_source
			{
				displayName = "$STR_A3_C_CfgVehicles_CargoPlatform_01_base_F_Attributes_Leg_2_move_source0";
				property = "Leg_2_move";
			};
			class Leg_3_move_source: Leg_2_move_source
			{
				displayName = "$STR_A3_C_CfgVehicles_CargoPlatform_01_base_F_Attributes_Leg_3_move_source0";
				property = "Leg_3_move";
			};
			class Leg_4_move_source: Leg_2_move_source
			{
				displayName = "$STR_A3_C_CfgVehicles_CargoPlatform_01_base_F_Attributes_Leg_4_move_source0";
				property = "Leg_4_move";
			};
			class Panel_1_rotate_source
			{
				displayName = "$STR_A3_C_CfgVehicles_CargoPlatform_01_base_F_Attributes_Panel_1_rotate_source0";
				property = "Panel_1_rotate";
				control = "Slider";
				defaultValue = 0;
				expression = "_this animateSource ['%s',rad(_value*180),true]";
			};
			class Panel_2_rotate_source: Panel_1_rotate_source
			{
				displayName = "$STR_A3_C_CfgVehicles_CargoPlatform_01_base_F_Attributes_Panel_2_rotate_source0";
				property = "Panel_2_rotate";
			};
			class Panel_3_rotate_source: Panel_2_rotate_source
			{
				displayName = "$STR_A3_C_CfgVehicles_CargoPlatform_01_base_F_Attributes_Panel_3_rotate_source0";
				property = "Panel_3_rotate";
			};
			class Panel_4_rotate_source: Panel_2_rotate_source
			{
				displayName = "$STR_A3_C_CfgVehicles_CargoPlatform_01_base_F_Attributes_Panel_4_rotate_source0";
				property = "Panel_4_rotate";
			};
			class Panel_1_hide_source
			{
				displayName = "$STR_A3_C_CfgVehicles_CargoPlatform_01_base_F_Attributes_Panel_1_hide_source0";
				property = "Panel_1_hide";
				control = "CheckboxNumber";
				defaultValue = 0;
				expression = "_this animateSource ['%s',_value,true]";
			};
			class Panel_2_hide_source: Panel_1_hide_source
			{
				displayName = "$STR_A3_C_CfgVehicles_CargoPlatform_01_base_F_Attributes_Panel_2_hide_source0";
				property = "Panel_2_hide";
			};
			class Panel_3_hide_source: Panel_2_hide_source
			{
				displayName = "$STR_A3_C_CfgVehicles_CargoPlatform_01_base_F_Attributes_Panel_3_hide_source0";
				property = "Panel_3_hide";
			};
			class Panel_4_hide_source: Panel_2_hide_source
			{
				displayName = "$STR_A3_C_CfgVehicles_CargoPlatform_01_base_F_Attributes_Panel_4_hide_source0";
				property = "Panel_4_hide";
			};
		};
	};
	class BSF_CargoPlatform_Base_Preview: Exile_Construction_Abstract_Physics
	{
		author = "BSF";
		scope = 1;
		displayName = "Cargo Tower";
		model = "\a3\Structures_F_Enoch\Military\Camps\CargoPlatform_01_F.p3d";
		hiddenSelections[] = {"Camo_1"};
		hiddenSelectionsMaterials[] = {"a3\Structures_F_Enoch\Military\Camps\data\Cargo_Platform_V1_multi.rvmat"};
		class AnimationSources
		{
			class Leg_1_Move_Source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Leg_2_Move_Source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Leg_3_Move_Source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Leg_4_Move_Source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Panel_1_Rotate_Source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Panel_2_Rotate_Source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Panel_3_Rotate_Source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Panel_4_Rotate_Source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Panel_1_Hide_Source
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class Panel_2_Hide_Source
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class Panel_3_Hide_Source
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class Panel_4_Hide_Source
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
	};
	class BSF_CargoPlatform_Green: BSF_CargoPlatform_Base
	{
		scope = 2;
		hiddenSelectionsMaterials[] = {"a3\Structures_F_Enoch\Military\Camps\data\Cargo_Platform_V1_multi.rvmat"};
	};
	class BSF_CargoPlatform_Green_Preview: BSF_CargoPlatform_Base_Preview
	{
		scope = 2;
		hiddenSelectionsMaterials[] = {"a3\Structures_F_Enoch\Military\Camps\data\Cargo_Platform_V1_multi.rvmat"};
	};
	class BSF_CargoPlatform_Brown: BSF_CargoPlatform_Base
	{
		scope = 2;
		hiddenSelectionsMaterials[] = {"a3\Structures_F_Enoch\Military\Camps\data\Cargo_Platform_V2_multi.rvmat"};
	};
	class BSF_CargoPlatform_Brown_Preview: BSF_CargoPlatform_Base_Preview
	{
		scope = 2;
		hiddenSelectionsMaterials[] = {"a3\Structures_F_Enoch\Military\Camps\data\Cargo_Platform_V2_multi.rvmat"};
	};
	class BSF_CargoPlatform_Jungle: BSF_CargoPlatform_Base
	{
		scope = 2;
		hiddenSelectionsMaterials[] = {"a3\Structures_F_Enoch\Military\Camps\data\Cargo_Platform_V3_multi.rvmat"};
	};
	class BSF_CargoPlatform_Jungle_Preview: BSF_CargoPlatform_Base_Preview
	{
		scope = 2;
		hiddenSelectionsMaterials[] = {"a3\Structures_F_Enoch\Military\Camps\data\Cargo_Platform_V3_multi.rvmat"};
	};
	class BSF_CargoPlatform_Rusty: BSF_CargoPlatform_Base
	{
		scope = 2;
		hiddenSelectionsMaterials[] = {"a3\Structures_F_Enoch\Military\Camps\data\Cargo_Platform_V4_multi.rvmat"};
	};
	class BSF_CargoPlatform_Rusty_Preview: BSF_CargoPlatform_Base_Preview
	{
		scope = 2;
		hiddenSelectionsMaterials[] = {"a3\Structures_F_Enoch\Military\Camps\data\Cargo_Platform_V4_multi.rvmat"};
	};
	class BSF_GuardBox: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Guard Box";
		editorCategory = "BSF_Constructions";
		editorSubcategory = "BSF_Mil";
		model = "a3\structures_f_enoch\military\barracks\guardbox_01_green_f.p3d";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_GuardBox_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		displayName = "Guard Box";
		model = "a3\structures_f_enoch\military\barracks\guardbox_01_green_f.p3d";
	};
	class BSF_Radar1: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Radar Tower v1";
		editorCategory = "BSF_Constructions";
		editorSubcategory = "BSF_Mil";
		model = "a3\structures_f_enoch\military\radar\mobileradar_01_radar_f.p3d";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_Radar1_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		displayName = "Radar Tower v1";
		model = "a3\structures_f_enoch\military\radar\mobileradar_01_radar_f.p3d";
	};
	class BSF_DearStand2: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Dear Stand v2";
		editorCategory = "BSF_Constructions";
		editorSubcategory = "BSF_Mil";
		model = "a3\props_f_enoch\civilian\forest\deerstand_02_f.p3d";
		simulation = "house";
		ladders[] = {{"ladder_1_start","ladder_1_end",2.5,"ladder_1_action"}};
		exileRequiresSimulation = 1;
	};
	class BSF_DearStand2_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		displayName = "Dear Stand v2";
		model = "a3\props_f_enoch\civilian\forest\deerstand_02_f.p3d";
	};
	class BSF_DearStand1: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Dear Stand v1";
		editorCategory = "BSF_Constructions";
		editorSubcategory = "BSF_Mil";
		model = "a3\props_f_enoch\civilian\forest\deerstand_01_f.p3d";
		simulation = "house";
		ladders[] = {{"ladder_1_start","ladder_1_end",2.5,"ladder_1_action"}};
		exileRequiresSimulation = 1;
	};
	class BSF_DearStand1_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		displayName = "Dear Stand v1";
		model = "a3\props_f_enoch\civilian\forest\deerstand_01_f.p3d";
	};
	class BSF_GuardTowerSmall: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Guard Tower, Small";
		editorCategory = "BSF_Constructions";
		editorSubcategory = "BSF_Mil";
		model = "a3\structures_f_enoch\military\barracks\guardtower_02_f.p3d";
		simulation = "house";
		ladders[] = {{"ladder_1_start","ladder_1_end",2.5,"ladder_1_action"}};
		exileRequiresSimulation = 1;
	};
	class BSF_GuardTowerSmall_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		displayName = "Guard Tower, Small";
		model = "a3\structures_f_enoch\military\barracks\guardtower_02_f.p3d";
	};
	class BSF_GuardTowerBig: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Guard Tower, Big";
		editorCategory = "BSF_Constructions";
		editorSubcategory = "BSF_Mil";
		model = "a3\structures_f_enoch\military\barracks\guardtower_01_f.p3d";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_GuardTowerBig_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		displayName = "Guard Tower, Big";
		model = "a3\structures_f_enoch\military\barracks\guardtower_01_f.p3d";
	};
	class BSF_Bunker2_Double: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Old Concrete Bunker, Double";
		editorCategory = "BSF_Constructions";
		editorSubcategory = "BSF_Mil";
		model = "a3\structures_f_enoch\military\bunkers\bunker_02_light_double_f.p3d";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_Bunker2_Double_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		displayName = "Old Concrete Bunker, Double";
		model = "a3\structures_f_enoch\military\bunkers\bunker_02_light_double_f.p3d";
	};
	class BSF_Bunker2_Left: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Old Concrete Bunker, Left";
		editorCategory = "BSF_Constructions";
		editorSubcategory = "BSF_Mil";
		model = "a3\structures_f_enoch\military\bunkers\bunker_02_light_left_f.p3d";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_Bunker2_Left_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		displayName = "Old Concrete Bunker, Left";
		model = "a3\structures_f_enoch\military\bunkers\bunker_02_light_left_f.p3d";
	};
	class BSF_Bunker2_Right: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Old Concrete Bunker, Right";
		editorCategory = "BSF_Constructions";
		editorSubcategory = "BSF_Mil";
		model = "a3\structures_f_enoch\military\bunkers\bunker_02_light_right_f.p3d";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_Bunker2_Right_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		displayName = "Old Concrete Bunker, Right";
		model = "a3\structures_f_enoch\military\bunkers\bunker_02_light_right_f.p3d";
	};
	class BSF_Bunker2_Mossy_Double: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Old Mossy Concrete Bunker, Double";
		editorCategory = "BSF_Constructions";
		editorSubcategory = "BSF_Mil";
		model = "a3\structures_f_enoch\military\bunkers\bunker_02_double_f.p3d";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_Bunker2_Mossy_Double_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		displayName = "Old Mossy Concrete Bunker, Double";
		model = "a3\structures_f_enoch\military\bunkers\bunker_02_double_f.p3d";
	};
	class BSF_Bunker2_Mossy_Left: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Old Mossy Concrete Bunker, Left";
		editorCategory = "BSF_Constructions";
		editorSubcategory = "BSF_Mil";
		model = "a3\structures_f_enoch\military\bunkers\bunker_02_left_f.p3d";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_Bunker2_Mossy_Left_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		displayName = "Old Mossy Concrete Bunker, Left";
		model = "a3\structures_f_enoch\military\bunkers\bunker_02_left_f.p3d";
	};
	class BSF_Bunker2_Mossy_Right: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Old Mossy Concrete Bunker, Right";
		editorCategory = "BSF_Constructions";
		editorSubcategory = "BSF_Mil";
		model = "a3\structures_f_enoch\military\bunkers\bunker_02_right_f.p3d";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_Bunker2_Mossy_Right_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		displayName = "Old Mossy Concrete Bunker, Right";
		model = "a3\structures_f_enoch\military\bunkers\bunker_02_right_f.p3d";
	};
	class BSF_PillBoxBig: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Pillbox, Big";
		editorCategory = "BSF_Constructions";
		editorSubcategory = "BSF_Mil";
		model = "a3\structures_f_exp\military\pillboxes\pillboxbunker_01_big_f.p3d";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_PillBoxBig_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 1;
		displayName = "Pillbox, Big";
		model = "a3\structures_f_exp\military\pillboxes\pillboxbunker_01_big_f.p3d";
	};
	class BSF_PillBoxRect: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Pillbox, Rectangle";
		editorCategory = "BSF_Constructions";
		editorSubcategory = "BSF_Mil";
		model = "a3\structures_f_exp\military\pillboxes\pillboxbunker_01_rectangle_f.p3d";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_PillBoxRect_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 1;
		displayName = "Pillbox, Rectangle";
		model = "a3\structures_f_exp\military\pillboxes\pillboxbunker_01_rectangle_f.p3d";
	};
	class BSF_PillBoxHex: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Pillbox, Hex";
		editorCategory = "BSF_Constructions";
		editorSubcategory = "BSF_Mil";
		model = "a3\structures_f_exp\military\pillboxes\pillboxbunker_01_hex_f.p3d";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_PillBoxHex_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 1;
		displayName = "Pillbox, Hex";
		model = "a3\structures_f_exp\military\pillboxes\pillboxbunker_01_hex_f.p3d";
	};
	class BSF_PillBoxWall1_Sharp: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Pillbox Wall, 3m Sharp";
		editorCategory = "BSF_Constructions";
		editorSubcategory = "BSF_Mil";
		model = "a3\structures_f_exp\military\pillboxes\pillboxwall_01_3m_f.p3d";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_PillBoxWall1_Sharp_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 1;
		displayName = "Pillbox Wall, 3m Sharp";
		model = "a3\structures_f_exp\military\pillboxes\pillboxwall_01_3m_f.p3d";
	};
	class BSF_PillBoxWall3_Sharp: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Pillbox Wall, 6m Sharp";
		editorCategory = "BSF_Constructions";
		editorSubcategory = "BSF_Mil";
		model = "a3\structures_f_exp\military\pillboxes\pillboxwall_01_6m_f.p3d";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_PillBoxWall3_Sharp_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 1;
		displayName = "Pillbox Wall, 6m Sharp";
		model = "a3\structures_f_exp\military\pillboxes\pillboxwall_01_6m_f.p3d";
	};
	class BSF_PillBoxWall1_Blunt: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Pillbox Wall, 3m Blunt";
		editorCategory = "BSF_Constructions";
		editorSubcategory = "BSF_Mil";
		model = "a3\structures_f_exp\military\pillboxes\pillboxwall_01_3m_round_f.p3d";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_PillBoxWall1_Blunt_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 1;
		displayName = "Pillbox Wall, 3m Blunt";
		model = "a3\structures_f_exp\military\pillboxes\pillboxwall_01_3m_round_f.p3d";
	};
	class BSF_PillBoxWall3_Blunt: Exile_Construction_Abstract_Static
	{
		scope = 2;
		displayName = "Pillbox Wall, 6m Blunt";
		editorCategory = "BSF_Constructions";
		editorSubcategory = "BSF_Mil";
		model = "a3\structures_f_exp\military\pillboxes\pillboxwall_01_6m_round_f.p3d";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_PillBoxWall3_Blunt_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 1;
		displayName = "Pillbox Wall, 6m Blunt";
		model = "a3\structures_f_exp\military\pillboxes\pillboxwall_01_6m_round_f.p3d";
	};
	class BSF_ModularBunkerBig: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "a3\structures_f_argo\military\bunkers\bunker_01_big_f.p3d";
		editorCategory = "BSF_Constructions";
		editorSubcategory = "BSF_Mil";
		displayName = "Modular Bunker, Big";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_ModularBunkerBig_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 1;
		displayName = "Modular Bunker, Big";
		model = "a3\structures_f_argo\military\bunkers\bunker_01_big_f.p3d";
	};
	class BSF_ModularBunkerHQ: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "a3\structures_f_argo\military\bunkers\bunker_01_hq_f.p3d";
		editorCategory = "BSF_Constructions";
		editorSubcategory = "BSF_Mil";
		displayName = "Modular Bunker, HQ";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_ModularBunkerHQ_Preview: Exile_Construction_Abstract_Physics
	{
		displayName = "Modular Bunker, HQ";
		model = "a3\structures_f_argo\military\bunkers\bunker_01_hq_f.p3d";
	};
	class BSF_ModularBunkerSmall: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "a3\structures_f_argo\military\bunkers\bunker_01_small_f.p3d";
		editorCategory = "BSF_Constructions";
		editorSubcategory = "BSF_Mil";
		displayName = "Modular Bunker, Small";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_ModularBunkerSmall_Preview: Exile_Construction_Abstract_Physics
	{
		displayName = "Modular Bunker, Small";
		model = "a3\structures_f_argo\military\bunkers\bunker_01_small_f.p3d";
	};
	class BSF_ModularBunkerTall: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "a3\structures_f_argo\military\bunkers\bunker_01_tall_f.p3d";
		editorCategory = "BSF_Constructions";
		editorSubcategory = "BSF_Mil";
		displayName = "Modular Bunker, Tall";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_ModularBunkerTall_Preview: Exile_Construction_Abstract_Physics
	{
		displayName = "Modular Bunker, Tall";
		model = "a3\structures_f_argo\military\bunkers\bunker_01_tall_f.p3d";
	};
	class BSF_ModularBunker1Block: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "a3\structures_f_argo\military\bunkers\bunker_01_blocks_1_f.p3d";
		editorCategory = "BSF_Constructions";
		editorSubcategory = "BSF_Mil";
		displayName = "Modular Bunker, 1 Block";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_ModularBunker1Block_Preview: Exile_Construction_Abstract_Physics
	{
		displayName = "Modular Bunker, 1 Block";
		model = "a3\structures_f_argo\military\bunkers\bunker_01_blocks_1_f.p3d";
	};
	class BSF_ModularBunker3Block: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "a3\structures_f_argo\military\bunkers\bunker_01_blocks_3_f.p3d";
		editorCategory = "BSF_Constructions";
		editorSubcategory = "BSF_Mil";
		displayName = "Modular Bunker, 3 Blocks";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_ModularBunker3Block_Preview: Exile_Construction_Abstract_Physics
	{
		displayName = "Modular Bunker, 3 Blocks";
		model = "a3\structures_f_argo\military\bunkers\bunker_01_blocks_3_f.p3d";
	};
	class BSF_ConcreteRamp1: Exile_Construction_Abstract_Static
	{
		scope = 2;
		model = "a3\structures_f_enoch\infrastructure\railways\rail_concreteramp_f.p3d";
		editorCategory = "BSF_Constructions";
		editorSubcategory = "BSF_Mil";
		displayName = "Concrete Ramp";
		simulation = "house";
		exileRequiresSimulation = 1;
	};
	class BSF_ConcreteRamp1_Preview: Exile_Construction_Abstract_Physics
	{
		displayName = "Concrete Ramp";
		model = "a3\structures_f_enoch\infrastructure\railways\rail_concreteramp_f.p3d";
	};
	class Building;
	class BSF_Bridge1_A: Building
	{
		scope = 2;
		model = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Bridges\BSF_Bridge1_A.p3d";
		displayName = "BSF Bridge 1, Section A";
		armor = 10000;
		editorCategory = "BSF_Constructions";
		editorSubcategory = "BSF_Bridges";
	};
	class BSF_Bridge1_B: Building
	{
		scope = 2;
		model = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Bridges\BSF_Bridge1_B.p3d";
		displayName = "BSF Bridge 1, Section B";
		armor = 10000;
		editorCategory = "BSF_Constructions";
		editorSubcategory = "BSF_Bridges";
	};
	class BSF_Bridge1_C: Building
	{
		scope = 2;
		model = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Bridges\BSF_Bridge1_C.p3d";
		displayName = "BSF Bridge 1, Section C";
		armor = 10000;
		editorCategory = "BSF_Constructions";
		editorSubcategory = "BSF_Bridges";
	};
	class BSF_Bridge1_D: Building
	{
		scope = 2;
		model = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Bridges\BSF_Bridge1_D.p3d";
		displayName = "BSF Bridge 1, Section D";
		armor = 10000;
		editorCategory = "BSF_Constructions";
		editorSubcategory = "BSF_Bridges";
	};
	class BSF_Bridge1_E: Building
	{
		scope = 2;
		model = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Bridges\BSF_Bridge1_E.p3d";
		displayName = "BSF Bridge 1, Section E";
		armor = 10000;
		editorCategory = "BSF_Constructions";
		editorSubcategory = "BSF_Bridges";
	};
	class BSF_Bridge1_F: Building
	{
		scope = 2;
		model = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Bridges\BSF_Bridge1_F.p3d";
		displayName = "BSF Bridge 1, Section F";
		armor = 10000;
		editorCategory = "BSF_Constructions";
		editorSubcategory = "BSF_Bridges";
	};
	class BSF_Bridge1_Pillar: Building
	{
		scope = 2;
		model = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Bridges\BSF_Bridge1_Pillar.p3d";
		displayName = "BSF Bridge 1, Pillar";
		armor = 10000;
		editorCategory = "BSF_Constructions";
		editorSubcategory = "BSF_Bridges";
	};
	class BSF_ArmorLocker_Preview_Base: Exile_Construction_Abstract_Physics
	{
		model = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\BSF_Armor_Locker.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_CO.paa"};
	};
	class BSF_ArmorLocker_Base: Exile_Container_Abstract
	{
		author = "Troy - BS-Free";
		scope = 0;
		model = "\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\BSF_Armor_Locker.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_CO.paa"};
		maximumLoad = 15000;
		armor = 5000;
		simulation = "house";
		exileIsLockable = 1;
		exileRequiresSimulation = 1;
		editorCategory = "BSF_Storage";
		editorSubcategory = "BSF_Armor_Locker";
	};
	class BSF_ArmorLocker_Preview: BSF_ArmorLocker_Preview_Base
	{
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_CO.paa"};
	};
	class BSF_ArmorLocker: BSF_ArmorLocker_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_CO.paa"};
		displayName = "Armor Locker";
	};
	class BSF_ArmorLocker_Optics_Preview: BSF_ArmorLocker_Preview_Base
	{
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Optics_CO.paa"};
	};
	class BSF_ArmorLocker_Optics: BSF_ArmorLocker_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Optics_CO.paa"};
		displayName = "Armor Locker - Optics";
	};
	class BSF_ArmorLocker_Storage_Preview: BSF_ArmorLocker_Preview_Base
	{
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Storage_CO.paa"};
	};
	class BSF_ArmorLocker_Storage: BSF_ArmorLocker_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Storage_CO.paa"};
		displayName = "Armor Locker - Storage";
	};
	class BSF_ArmorLocker_Tools_Preview: BSF_ArmorLocker_Preview_Base
	{
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Tools_CO.paa"};
	};
	class BSF_ArmorLocker_Tools: BSF_ArmorLocker_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Tools_CO.paa"};
		displayName = "Armor Locker - Tools";
	};
	class BSF_ArmorLocker_Attachments_Preview: BSF_ArmorLocker_Preview_Base
	{
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Attachments_CO.paa"};
	};
	class BSF_ArmorLocker_Attachments: BSF_ArmorLocker_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Attachments_CO.paa"};
		displayName = "Armor Locker - Attachments";
	};
	class BSF_ArmorLocker_Rifles_Preview: BSF_ArmorLocker_Preview_Base
	{
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Rifles_CO.paa"};
	};
	class BSF_ArmorLocker_Rifles: BSF_ArmorLocker_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Rifles_CO.paa"};
		displayName = "Armor Locker - Rifles";
	};
	class BSF_ArmorLocker_Food_Preview: BSF_ArmorLocker_Preview_Base
	{
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Food_CO.paa"};
	};
	class BSF_ArmorLocker_Food: BSF_ArmorLocker_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Food_CO.paa"};
		displayName = "Armor Locker - Food";
	};
	class BSF_ArmorLocker_Pistols_Preview: BSF_ArmorLocker_Preview_Base
	{
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Pistols_CO.paa"};
	};
	class BSF_ArmorLocker_Pistols: BSF_ArmorLocker_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Pistols_CO.paa"};
		displayName = "Armor Locker - Pistols";
	};
	class BSF_ArmorLocker_Armor_Preview: BSF_ArmorLocker_Preview_Base
	{
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Armor_CO.paa"};
	};
	class BSF_ArmorLocker_Armor: BSF_ArmorLocker_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Armor_CO.paa"};
		displayName = "Armor Locker - Armor";
	};
	class BSF_ArmorLocker_Ammo_Preview: BSF_ArmorLocker_Preview_Base
	{
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Ammo_CO.paa"};
	};
	class BSF_ArmorLocker_Ammo: BSF_ArmorLocker_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Ammo_CO.paa"};
		displayName = "Armor Locker - Ammo";
	};
	class BSF_ArmorLocker_ComChest_Preview: BSF_ArmorLocker_Preview_Base
	{
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_ComChest_CO.paa"};
	};
	class BSF_ArmorLocker_ComChest: BSF_ArmorLocker_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_ComChest_CO.paa"};
		displayName = "Armor Locker - Community Chest";
	};
	class BSF_ArmorLocker_Explosives_Preview: BSF_ArmorLocker_Preview_Base
	{
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Explosives_CO.paa"};
	};
	class BSF_ArmorLocker_Explosives: BSF_ArmorLocker_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Explosives_CO.paa"};
		displayName = "Armor Locker - Explosives";
	};
	class BSF_ArmorLocker_HMG_Preview: BSF_ArmorLocker_Preview_Base
	{
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_HMG_CO.paa"};
	};
	class BSF_ArmorLocker_HMG: BSF_ArmorLocker_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_HMG_CO.paa"};
		displayName = "Armor Locker - HMG";
	};
	class BSF_ArmorLocker_Junk_Preview: BSF_ArmorLocker_Preview_Base
	{
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Junk_CO.paa"};
	};
	class BSF_ArmorLocker_Junk: BSF_ArmorLocker_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Junk_CO.paa"};
		displayName = "Armor Locker - Junk";
	};
	class BSF_ArmorLocker_Launchers_Preview: BSF_ArmorLocker_Preview_Base
	{
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Launchers_CO.paa"};
	};
	class BSF_ArmorLocker_Launchers: BSF_ArmorLocker_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Launchers_CO.paa"};
		displayName = "Armor Locker - Launchers";
	};
	class BSF_ArmorLocker_LMG_Preview: BSF_ArmorLocker_Preview_Base
	{
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_LMG_CO.paa"};
	};
	class BSF_ArmorLocker_LMG: BSF_ArmorLocker_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_LMG_CO.paa"};
		displayName = "Armor Locker - LMG";
	};
	class BSF_ArmorLocker_Materials_Preview: BSF_ArmorLocker_Preview_Base
	{
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Materials_CO.paa"};
	};
	class BSF_ArmorLocker_Materials: BSF_ArmorLocker_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Materials_CO.paa"};
		displayName = "Armor Locker - Materials";
	};
	class BSF_ArmorLocker_Medical_Preview: BSF_ArmorLocker_Preview_Base
	{
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Medical_CO.paa"};
	};
	class BSF_ArmorLocker_Medical: BSF_ArmorLocker_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Medical_CO.paa"};
		displayName = "Armor Locker - Medical";
	};
	class BSF_ArmorLocker_Packs_Preview: BSF_ArmorLocker_Preview_Base
	{
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Packs_CO.paa"};
	};
	class BSF_ArmorLocker_Packs: BSF_ArmorLocker_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Packs_CO.paa"};
		displayName = "Armor Locker - Packs";
	};
	class BSF_ArmorLocker_Rifles_127_Preview: BSF_ArmorLocker_Preview_Base
	{
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Rifles_127_CO.paa"};
	};
	class BSF_ArmorLocker_Rifles_127: BSF_ArmorLocker_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Rifles_127_CO.paa"};
		displayName = "Armor Locker - Rifles_127";
	};
	class BSF_ArmorLocker_Rifles_338_Preview: BSF_ArmorLocker_Preview_Base
	{
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Rifles_338_CO.paa"};
	};
	class BSF_ArmorLocker_Rifles_338: BSF_ArmorLocker_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Rifles_338_CO.paa"};
		displayName = "Armor Locker - Rifles_338";
	};
	class BSF_ArmorLocker_Rifles_545_Preview: BSF_ArmorLocker_Preview_Base
	{
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Rifles_545_CO.paa"};
	};
	class BSF_ArmorLocker_Rifles_545: BSF_ArmorLocker_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Rifles_545_CO.paa"};
		displayName = "Armor Locker - Rifles_545";
	};
	class BSF_ArmorLocker_Rifles_556_Preview: BSF_ArmorLocker_Preview_Base
	{
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Rifles_556_CO.paa"};
	};
	class BSF_ArmorLocker_Rifles_556: BSF_ArmorLocker_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Rifles_556_CO.paa"};
		displayName = "Armor Locker - Rifles_556";
	};
	class BSF_ArmorLocker_Rifles_65_Preview: BSF_ArmorLocker_Preview_Base
	{
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Rifles_65_CO.paa"};
	};
	class BSF_ArmorLocker_Rifles_65: BSF_ArmorLocker_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Rifles_65_CO.paa"};
		displayName = "Armor Locker - Rifles_65";
	};
	class BSF_ArmorLocker_Rifles_762_Preview: BSF_ArmorLocker_Preview_Base
	{
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Rifles_762_CO.paa"};
	};
	class BSF_ArmorLocker_Rifles_762: BSF_ArmorLocker_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Rifles_762_CO.paa"};
		displayName = "Armor Locker - Rifles_762";
	};
	class BSF_ArmorLocker_Rifles_Misc_Preview: BSF_ArmorLocker_Preview_Base
	{
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Rifles_Misc_CO.paa"};
	};
	class BSF_ArmorLocker_Rifles_Misc: BSF_ArmorLocker_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Rifles_Misc_CO.paa"};
		displayName = "Armor Locker - Rifles_Misc";
	};
	class BSF_ArmorLocker_Rifles_Sniper_Preview: BSF_ArmorLocker_Preview_Base
	{
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Rifles_Sniper_CO.paa"};
	};
	class BSF_ArmorLocker_Rifles_Sniper: BSF_ArmorLocker_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Rifles_Sniper_CO.paa"};
		displayName = "Armor Locker - Rifles_Sniper";
	};
	class BSF_ArmorLocker_Shotguns_Preview: BSF_ArmorLocker_Preview_Base
	{
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Shotguns_CO.paa"};
	};
	class BSF_ArmorLocker_Shotguns: BSF_ArmorLocker_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Shotguns_CO.paa"};
		displayName = "Armor Locker - Shotguns";
	};
	class BSF_ArmorLocker_SMG_Preview: BSF_ArmorLocker_Preview_Base
	{
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_SMG_CO.paa"};
	};
	class BSF_ArmorLocker_SMG: BSF_ArmorLocker_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_SMG_CO.paa"};
		displayName = "Armor Locker - SMG";
	};
	class BSF_ArmorLocker_ToSell_Preview: BSF_ArmorLocker_Preview_Base
	{
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_ToSell_CO.paa"};
	};
	class BSF_ArmorLocker_ToSell: BSF_ArmorLocker_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_ToSell_CO.paa"};
		displayName = "Armor Locker - ToSell";
	};
	class BSF_ArmorLocker_ToSort_Preview: BSF_ArmorLocker_Preview_Base
	{
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_ToSort_CO.paa"};
	};
	class BSF_ArmorLocker_ToSort: BSF_ArmorLocker_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_ToSort_CO.paa"};
		displayName = "Armor Locker - ToSort";
	};
	class BSF_ArmorLocker_UAV_Preview: BSF_ArmorLocker_Preview_Base
	{
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_UAV_CO.paa"};
	};
	class BSF_ArmorLocker_UAV: BSF_ArmorLocker_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_UAV_CO.paa"};
		displayName = "Armor Locker - UAV";
	};
	class BSF_ArmorLocker_Uniforms_Preview: BSF_ArmorLocker_Preview_Base
	{
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Uniforms_CO.paa"};
	};
	class BSF_ArmorLocker_Uniforms: BSF_ArmorLocker_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\BSF_Community_Addon\addons\BSF_Buildings\BSF_Armor_Locker\data\BSF_Armor_Locker_Uniforms_CO.paa"};
		displayName = "Armor Locker - Uniforms";
	};
};
