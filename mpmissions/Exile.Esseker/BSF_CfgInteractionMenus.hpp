/**
 * BSF_CfgInteractionMenu.hpp
 * Sort this by probability of occurence to speed things up a bit
 */

class CfgInteractionMenus
{
#include "EBM\menus.hpp"
#include "BSF\BSF_InteractionMenus.hpp"

	class SM_VirtualGarage
	{
		targetType = 2;
		target = "Exile_Trader_Vehicle";
		class actions
		{
			class openVirtualGarage: ExileAbstractAction
			{
				title = "<img image='\exile_assets\texture\ui\xm8_app_virtual_garage_ca.paa' size='1' shadow='false' />Access Virtual Garage";
				condition = "true";
				action = "call SM_fnc_openVirtualGarage";
			};
		};
	};

	class SM_VirtualGarage_Aircraft
	{
		targetType = 2;
		target = "Exile_Trader_Aircraft";
		class actions
		{
			class openVirtualGarage: ExileAbstractAction
			{
				title = "<img image='\exile_assets\texture\ui\xm8_app_virtual_garage_ca.paa' size='1' shadow='false' />Access Virtual Garage";
				condition = "true";
				action = "call SM_fnc_openVirtualGarage";
			};
		};
	};

	class SM_VirtualGarage_Boat
	{
		targetType = 2;
		target = "Exile_Trader_Boat";
		class actions
		{
			class openVirtualGarage: ExileAbstractAction
			{
				title = "<img image='\exile_assets\texture\ui\xm8_app_virtual_garage_ca.paa' size='1' shadow='false' />Access Virtual Garage";
				condition = "true";
				action = "call SM_fnc_openVirtualGarage";
			};
		};
	};

	class SM_VirtualGarage_CC
	{
		targetType = 2;
		target = "Exile_Trader_CommunityCustoms10";
		class actions
		{
			class openVirtualGarage: ExileAbstractAction
			{
				title = "<img image='\exile_assets\texture\ui\xm8_app_virtual_garage_ca.paa' size='1' shadow='false' />Access Virtual Garage";
				condition = "true";
				action = "call SM_fnc_openVirtualGarage";
			};
		};
	};

	class SM_VirtualGarage_Sign
	{
		targetType = 2;
		target = "BSF_VG_NoticeBoard1";
		class actions
		{
			class openVirtualGarage: ExileAbstractAction
			{
				title = "<img image='\exile_assets\texture\ui\xm8_app_virtual_garage_ca.paa' size='1' shadow='false' />Access Virtual Garage";
				condition = "true";
				action = "call SM_fnc_openVirtualGarage";
			};
		};
	};

	class SM_LoadoutTrader
	{
		targetType = 2;
		target = "Exile_Trader_Equipment";
		class actions
		{
			class LoadoutTrader: ExileAbstractAction
			{
				title = "<img image='\exile_assets\texture\arsenal\backpack_ca.paa' size='1' shadow='false' />Access Loadout Trader";
				condition = "true";
				action = "[] call SM_LoadoutTrader_show";
			};
		};
	};

	class Car
	{
		targetType = 2;
		target = "Car";

		class Actions
		{
		// Loot Vehicle
		class Loot: ExileAbstractAction
            {
				title = "<t color='#ff0000'>Loot Vehicle</t>";
                condition = "(!(alive (ExileClientInteractionObject)))";
                action = "_this spawn ExileClient_object_container_pack";
            };
		// Salvage a vehicle
         class GADDSalvage: ExileAbstractAction
        {
			title = "<t color='#ff0000'>Salvage Vehicle</t>";
			condition = "(!(alive (ExileClientInteractionObject)))";
			action = "_this call GADD_SalvageVehicle";
		};
/*			class ScanLock: ExileAbstractAction
		{
			title = "Scan Lock";
			condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !ExilePlayerInSafezone && ((locked ExileClientInteractionObject) != 1)";
			action = "_this call ExileClient_object_lock_scan";
			icon = "SM\DynamicMenu\icons\red_ring_scanlock_ca.paa";
		};
*/
		// Locks a vehicle
		class Lock: ExileAbstractAction
		{
			title = "Lock";
			condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
			action = "true spawn ExileClient_object_lock_toggle";
			icon = "SM\DynamicMenu\icons\red_ring_lockCar_ca.paa";
		};

		// Unlocks a vehicle
		class Unlock: ExileAbstractAction
		{
			title = "Unlock";
			condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
			action = "false spawn ExileClient_object_lock_toggle";
			icon = "SM\DynamicMenu\icons\red_ring_unlockCar_ca.paa";
		};

			// Repairs a vehicle to 100%. Requires Duckttape
	/*
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
				icon = "SM\DynamicMenu\icons\red_ring_repair_ca.paa";
			};
				*/
				// Advanced repair
				class RepairInfoLand: ExileAbstractAction
				{
					title = "REPAIR INFO";
					condition = "true";
					action = "_this call JohnO_fnc_displayVehicleRepairInfo";
				};
				class ReplaceWheels: ExileAbstractAction
				{
					title = "Replace wheel";
					condition = "true";
					action = "_this call JohnO_fnc_repairWheels";
				};
				class RepairWheels: ExileAbstractAction
				{
					title = "Repair wheel";
					condition = "true";
					action = "_this call JohnO_fnc_repairSingleWheel";
				};
				class ScavengeWheels: ExileAbstractAction
				{
					title = "Scavenge wheel";
					condition = "true";
					action = "_this call JohnO_fnc_scavengeWheel";
				};
				class RepairBody: ExileAbstractAction
				{
					title = "Repair body";
					condition = "true";
					action = "_this call JohnO_fnc_vehicleRepairCar";
				};

/*
		// Hot-wires a vehicle
		class Hotwire: ExileAbstractAction
		{
			title = "Hotwire";
			condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
			action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			icon = "SM\DynamicMenu\icons\red_ring_hotwire_ca.paa";
		};
*/
		// Flips a vehicle so the player doesnt have to call an admin
		// Check if vector up is fucked
		class Flip: ExileAbstractAction
		{
			title = "Flip";
			condition = "call ExileClient_object_vehicle_interaction_show";
			action = "_this call ExileClient_object_vehicle_flip";
			icon = "SM\DynamicMenu\icons\red_ring_flip_ca.paa";
		};

		// Fills fuel from a can into a car
		class Refuel: ExileAbstractAction
		{
			title = "Refuel";
			condition = "call ExileClient_object_vehicle_interaction_show";
			action = "_this call ExileClient_object_vehicle_refuel";
			icon = "SM\DynamicMenu\icons\red_ring_refuel_ca.paa";
		};

		// Drains fuel from a car into an empty jerry can
		class DrainFuel: ExileAbstractAction
		{
			title = "Drain Fuel";
			condition = "call ExileClient_object_vehicle_interaction_show";
			action = "_this call ExileClient_object_vehicle_drain";
			icon = "SM\DynamicMenu\icons\red_ring_drainfuel_ca.paa";
		};

		class ClaimVehicle: ExileAbstractAction
		{
			title = "Claim Ownership";
			condition = "true";
			action = "call BSF_Client_ClaimVehicle";
			icon = "SM\DynamicMenu\icons\red_ring_key_ca.paa";
		};
	};
};

   class Tank
	{
	targetType=2;
	target="Tank";
	class Actions {
	// Loot Vehicle
		class Loot: ExileAbstractAction
            {
				title = "<t color='#ff0000'>Loot Vehicle</t>";
                condition = "(!(alive (ExileClientInteractionObject)))";
                action = "_this spawn ExileClient_object_container_pack";
            };
	// Salvage a vehicle
         class GADDSalvage: ExileAbstractAction
        {
			title = "<t color='#ff0000'>Salvage Vehicle</t>";
			condition = "(!(alive (ExileClientInteractionObject)))";
			action = "_this call GADD_SalvageVehicle";
		};
		class Lock: ExileAbstractAction
		{
			title="Lock";
			condition="((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
			action="true spawn ExileClient_object_lock_toggle";
			icon = "SM\DynamicMenu\icons\red_ring_lockCar_ca.paa";
		};
		class Unlock: ExileAbstractAction
		{
			title="Unlock";
			condition="((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
			action="false spawn ExileClient_object_lock_toggle";
			icon = "SM\DynamicMenu\icons\red_ring_unlockCar_ca.paa";
		};
		class Repair: ExileAbstractAction
		{
			title = "Repair";
			condition = "true";
			action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			icon = "SM\DynamicMenu\icons\red_ring_repair_ca.paa";
		};
		class Flip: ExileAbstractAction
		{
			title="Flip";
			condition="call ExileClient_object_vehicle_interaction_show";
			action="_this call Exileclient_object_vehicle_flip";
			icon = "SM\DynamicMenu\icons\red_ring_flip_ca.paa";
		};
		class Refuel: ExileAbstractAction
		{
			title="Refuel";
			condition="call ExileClient_object_vehicle_interaction_show";
			action="_this call ExileClient_object_vehicle_refuel";
			icon = "SM\DynamicMenu\icons\red_ring_refuel_ca.paa";
		};
		class DrainFuel: ExileAbstractAction
		{
			title="Drain Fuel";
			condition="call ExileClient_object_vehicle_interaction_show";
			action="_this call ExileClient_object_vehicle_drain";
			icon = "SM\DynamicMenu\icons\red_ring_drainfuel_ca.paa";
		};
      class ClaimVehicle: ExileAbstractAction
      {
         title = "Claim Ownership";
         condition = "true";
         action = "call BSF_Client_ClaimVehicle";
      };
	};
};

	class Air
	{
		target = "Air";
		targetType = 2;

		class Actions
		{
			// Loot Vehicle
			class Loot: ExileAbstractAction
            {
				title = "<t color='#ff0000'>Loot Vehicle</t>";
                condition = "(!(alive (ExileClientInteractionObject)))";
                action = "_this spawn ExileClient_object_container_pack";
            };
			// Salvage a vehicle
			 class GADDSalvage: ExileAbstractAction
			{
				title = "<t color='#ff0000'>Salvage Vehicle</t>";
				condition = "(!(alive (ExileClientInteractionObject)))";
				action = "_this call GADD_SalvageVehicle";
			};
/*			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && ((locked ExileClientInteractionObject) != 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
				icon = "SM\DynamicMenu\icons\red_ring_scanlock_ca.paa";
			};
*/
			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
				icon = "SM\DynamicMenu\icons\red_ring_lockCar_ca.paa";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
				icon = "SM\DynamicMenu\icons\red_ring_unlockCar_ca.paa";
			};

/*			// Hot-wires a vehicle
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
				icon = "SM\DynamicMenu\icons\red_ring_hotwire_ca.paa";
			};
*/
			// Repairs a vehicle to 100%. Requires Duckttape
			/*
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
				icon = "SM\DynamicMenu\icons\red_ring_repair_ca.paa";
			};
			*/
			// Advanced repair
			class RepairInfoChopper: ExileAbstractAction
			{
				title = "REPAIR INFO";
				condition = "true";
				action = "_this call JohnO_fnc_displayVehicleRepairInfo";
				icon = "SM\DynamicMenu\icons\red_ring_repair_ca.paa";
			};
			class RepairMinor: ExileAbstractAction
			{
				title = "Minor repair";
				condition = "true";
				action = "_this call JohnO_fnc_repairchopperhalf";
				icon = "SM\DynamicMenu\icons\red_ring_repair_ca.paa";
			};
			class RepairFull: ExileAbstractAction
			{
				title = "Full repair";
				condition = "true";
				action = "_this call JohnO_fnc_repairchopper";
				icon = "SM\DynamicMenu\icons\red_ring_repair_ca.paa";
			};
			// Flips a vehicle so the player doesnt have to call an admin
			// Check if vector up is fucked
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
				icon = "SM\DynamicMenu\icons\red_ring_flip_ca.paa";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
				icon = "SM\DynamicMenu\icons\red_ring_refuel_ca.paa";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
				icon = "SM\DynamicMenu\icons\red_ring_drainfuel_ca.paa";
			};

			class RotateLeft: ExileAbstractAction
			{
				title = "Rotate Left";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,-15] call ExileClient_object_vehicle_rotate";
				icon = "SM\DynamicMenu\icons\red_ring_rotateleft_ca.paa";
			};

			class RotateRight: ExileAbstractAction
			{
				title = "Rotate Right";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,15] call ExileClient_object_vehicle_rotate";
				icon = "SM\DynamicMenu\icons\red_ring_rotateright_ca.paa";
			};

			class ClaimVehicle: ExileAbstractAction
			{
			    title = "Claim Ownership";
			    condition = "true";
			    action = "call BSF_Client_ClaimVehicle";
				icon = "SM\DynamicMenu\icons\red_ring_key_ca.paa";
			};

		};
	};

	class Safe
	{
		targetType = 2;
		target = "Exile_Container_Safe";

		class Actions
		{
/*			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
				icon = "SM\DynamicMenu\icons\red_ring_scanlock_ca.paa";
			};
*/
			// Locks a vehicle
			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
				icon = "SM\DynamicMenu\icons\red_ring_lock_ca.paa";
			};

			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
				icon = "SM\DynamicMenu\icons\red_ring_unlock_ca.paa";
			};

			class Pack : ExileAbstractAction
			{
				title = "Pack";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_container_pack";
				icon = "SM\DynamicMenu\icons\red_ring_pack_ca.paa";
			};

			class SetPinCode : ExileAbstractAction
			{
				title = "Set PIN";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_lock_setPin";
				icon = "SM\DynamicMenu\icons\red_ring_pincode_ca.paa";
			};
		};
	};

	class Laptop
	{
		targetType = 2;
		target = "Exile_Construction_Laptop_Static";

		class Actions
		{
			class CameraSystem: ExileAbstractAction
			{
				title = "CCTV Access";
				condition = "((ExileClientInteractionObject animationPhase 'LaptopLidRotation') >= 0.5)";
				action = "_this call ExileClient_gui_baseCamera_show";
				icon = "SM\DynamicMenu\icons\red_ring_camerasystem_ca.paa";
			};
		};
	};

	class Drawbridge
	{
		targetType = 2;
		target = "Exile_Construction_Abstract_DrawBridge";

		class Actions
		{
			class Lower: ExileAbstractAction
			{
				title = "Lower";
				condition = "ExileClientInteractionObject call ExileClient_object_construction_openBridgeShow";
				action = "ExileClientInteractionObject animateSource ['DrawBridge_Source', 0];";
				icon = "SM\DynamicMenu\icons\red_ring_movedown_ca.paa";
			};

			class Raise: ExileAbstractAction
			{
				title = "Raise";
				condition = "((ExileClientInteractionObject animationSourcePhase 'DrawBridge_Source') < 0.5)";
				action = "ExileClientInteractionObject animateSource ['DrawBridge_Source', 2]";
				icon = "SM\DynamicMenu\icons\red_ring_moveup_ca.paa";
			};
		};
	};

	class Construction
	{
		targetType = 2;
		target = "Exile_Construction_Abstract_Static";

		class Actions
		{
/*			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_lock_scan";
				icon = "SM\DynamicMenu\icons\red_ring_scanlock_ca.paa";
			};
*/
			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
				icon = "SM\DynamicMenu\icons\red_ring_unlock_ca.paa";
			};

			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
				icon = "SM\DynamicMenu\icons\red_ring_lock_ca.paa";
			};

			// Picks up the construction so you can move it
			class Move: ExileAbstractAction
			{
				title = "Move";
				condition = "call ExileClient_util_world_isInOwnTerritory";
				action = "_this spawn ExileClient_object_construction_move";
				icon = "SM\DynamicMenu\icons\red_ring_move_ca.paa";
			};

			// Removes the construction.
			class Deconstruct: ExileAbstractAction
			{
				title = "Remove";
				condition = "call ExileClient_util_world_isInOwnTerritory";
				action = "_this spawn ExileClient_object_construction_deconstruct";
				icon = "SM\DynamicMenu\icons\red_ring_deconstruct_ca.paa";
			};

			class AddALock : ExileAbstractAction
			{
				title = "Add a Lock";
				condition = "call ExileClient_object_construction_lockAddShow";
				action = "_this spawn ExileClient_object_construction_lockAdd";
				icon = "SM\DynamicMenu\icons\red_ring_addlock_ca.paa";
			};

			class Upgrade : ExileAbstractAction
			{
				title = "Upgrade";
				condition = "call ExileClient_object_construction_upgradeShow";
				action = "_this call ExileClient_object_construction_upgrade";
				icon = "SM\DynamicMenu\icons\red_ring_upgrade_ca.paa";
			};

			class MakeBoom : ExileAbstractAction
			{
				title = "Plant charge";
				condition = "call ExileClient_system_breaching_condition";
				action = "_this call ExileClient_system_breaching_action";
				icon = "SM\DynamicMenu\icons\red_ring_boom_ca.paa";
			};

			class Repair : ExileAbstractAction
			{
				title = "Repair";
				condition = "(!((ExileClientInteractionObject getVariable ['ExileConstructionDamage',0]) isEqualTo 0)) && (call ExileClient_util_world_isInOwnTerritory)";
				action = "_this call ExileClient_object_construction_repair";
				icon = "SM\DynamicMenu\icons\red_ring_repair_ca.paa";
			};

			class GrindLock : ExileAbstractAction
			{
				title = "Grind Lock";
				condition = "(getNumber(missionConfigFile >> 'CfgGrinding' >> 'enableGrinding') isEqualTo 1) && ('Exile_Item_Grinder' in (magazines player)) && ('Exile_Magazine_Battery' in (magazines player)) && ((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1) && ((ExileClientInteractionObject animationPhase 'DoorRotation') < 0.5)";
				action = "['GrindLock', _this select 0] call ExileClient_action_execute";
			};
		};
	};
	class Resting
	{
		targetType = 2;
		target = "Exile_Construction_CampFire_Static";
		class Actions
		{
			// Sleeping mat
	        class rest : ExileAbstractAction
	        {
	            title = "Rest by fire";
	            condition = "true";
	            action = "[] spawn JohnO_fnc_restAtFire";
				icon = "SM\DynamicMenu\icons\red_ring_heal_ca.paa";
	        };
	        // Light crude fre
	         class attemptLight : ExileAbstractAction
	        {
	            title = "Attempt to light";
	            condition = "!(inflamed _this)";
	            action = "_this spawn JohnO_fnc_crudeLightFire";
				icon = "SM\DynamicMenu\icons\red_ring_flame_ca.paa";
	        };
	    };
    };

	class Flag
	{
		targetType = 2;
		target = "Exile_Construction_Flag_Static";

		class Actions
		{
/*
			class Manage : ExileAbstractAction
			{
				title = "Manage";
				condition = "true";
				action = "_this call ExileClient_gui_baseManagement_event_show";
			};
			class StealFlag: ExileAbstractAction
			{
				title = "Steal Flag";
				condition = "((ExileClientInteractionObject getvariable ['ExileFlagStolen',1]) isEqualTo 0) && !(player call ExileClient_util_world_isInOwnTerritory)";
				action = "['StealFlag', _this select 0] call ExileClient_action_execute";
				icon = "SM\DynamicMenu\icons\red_ring_stealflag_ca.paa";
			};

			class RestoreFlag: ExileAbstractAction
			{
				title = "Restore Flag";
				condition = "((ExileClientInteractionObject getvariable ['ExileFlagStolen',0]) isEqualTo 1) && (player call ExileClient_util_world_isInOwnTerritory)";
				action = "['restoreFlagRequest', [netID ExileClientInteractionObject]] call ExileClient_system_network_send";
				icon = "SM\DynamicMenu\icons\red_ring_restoreflag_ca.paa";
			};
 */
		};
	};

	class Boat
	{
		targetType = 2;
		target = "Ship";

		class Actions
		{
			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
				icon = "SM\DynamicMenu\icons\red_ring_lockCar_ca.paa";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
				icon = "SM\DynamicMenu\icons\red_ring_unlockCar_ca.paa";
			};

			// Hot-wires a vehicle
/*			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
				icon = "SM\DynamicMenu\icons\red_ring_hotwire_ca.paa";
			};
*/
			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
				icon = "SM\DynamicMenu\icons\red_ring_repair_ca.paa";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
				icon = "SM\DynamicMenu\icons\red_ring_refuel_ca.paa";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
				icon = "SM\DynamicMenu\icons\red_ring_drainfuel_ca.paa";
			};

			// Pushes a boat into look direction to move into water
			class Push: ExileAbstractAction
			{
				title = "Push Boat";
				condition = "((crew ExileClientInteractionObject) isEqualTo [])";
				action = "_this call ExileClient_object_vehicle_push";
				icon = "SM\DynamicMenu\icons\red_ring_push_ca.paa";
			};

        	class ClaimVehicle: ExileAbstractAction
        	{
            title = "Claim Ownership";
            condition = "true";
            action = "call BSF_Client_ClaimVehicle";
        	};
		};
	};

	class Bikes
	{
		targetType = 2;
		target = "Bicycle";

		class Actions
		{
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "true";
				action = "_this call ExileClient_object_vehicle_flip";
				icon = "SM\DynamicMenu\icons\red_ring_flip_ca.paa";
			};
		};
	};

	class Player
	{
		targetType = 2;
		target = "Exile_Unit_Player";

		class Actions
		{
			class Free: ExileAbstractAction
			{
				title = "Free";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !ExileClientIsHandcuffed";
				action = "_this call ExileClient_object_handcuffs_free";
				icon = "SM\DynamicMenu\icons\red_ring_free_ca.paa";
			};

			class Search: ExileAbstractAction
			{
				title = "Search Gear";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !ExileClientIsHandcuffed";
				action = "_this call ExileClient_object_handcuffs_searchGear";
				icon = "SM\DynamicMenu\icons\red_ring_search_ca.paa";
			};

			class Identify: ExileAbstractAction
			{
				title = "Identify Body";
				condition = "!(alive ExileClientInteractionObject)";
				action = "_this call ExileClient_object_player_identifyBody";
				icon = "SM\DynamicMenu\icons\red_ring_identify_ca.paa";
			};

			////////////// ENIGMA REVIVE/////////////////
			class Revive: ExileAbstractAction
			{
				title = "Perform CPR";
				condition = "(!(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['EnigmaRevivePermitted', true]) && (magazines player find 'Exile_Item_Defibrillator' >= 0))";
				action = "_this spawn Enigma_RevivePlyr";
				icon = "SM\DynamicMenu\icons\red_ring_heal_ca.paa";
			};

			class HideCorpse: ExileAbstractAction
			{
				title = "Hide Body";
				condition = "!(alive ExileClientInteractionObject) && ('Exile_Melee_Shovel' isEqualTo (currentWeapon player))";
				action = "['HideBody', (_this select 0)] call ExileClient_action_execute";
				icon = "SM\DynamicMenu\icons\red_ring_hidecorpse_ca.paa";
			};
	class Animal
	{
		targetType = 2;
		target = "Exile_Animal_Abstract";

		class Actions
		{
			class Gut: ExileAbstractAction
			{
				title = "Gut Animal";
				condition = "!(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['CanBeGutted', false])";
				action = "['GutAnimal', ExileClientInteractionObject] call ExileClient_action_execute";
				icon = "SM\DynamicMenu\icons\red_ring_gut_ca.paa";
			};
		};
	};
/*			
			class Pressure: ExileAbstractAction
			{
				title = "Apply Pressure";
				condition = "((alive ExileClientInteractionObject) && (isBleeding ExileClientInteractionObject) && (ExileClientInteractionObject distance player < 3))";
				action = "_this call JohnO_fnc_applyPressureToWound";
				icon = "SM\DynamicMenu\icons\red_ring_heal_ca.paa";
			};
			class Bandage: ExileAbstractAction
			{
				title = "Apply Bandage";
				condition = "((alive ExileClientInteractionObject) && (isBleeding ExileClientInteractionObject) && ('Exile_Item_Bandage' in (magazines player)) && (ExileClientInteractionObject distance player < 3))";
				action = "_this call JohnO_fnc_applyBandageToPlayer";
				icon = "SM\DynamicMenu\icons\red_ring_heal_ca.paa";
			};
			class InstaDoc: ExileAbstractAction
			{
				title = "Apply InstaDoc";
				condition = "((alive ExileClientInteractionObject) && ('Exile_Item_InstaDoc' in (magazines player)) && (ExileClientInteractionObject distance player < 3))";
				action = "_this call JohnO_fnc_applyInstaDocToPlayer";
				icon = "SM\DynamicMenu\icons\red_ring_heal_ca.paa";
			};
*/
		};
	};

	class Man 
	{
		targetType = 3;
			// 1: Uses proximity and model bounds - MUCH more forgiving
			// 2: Must point directly at the object (raycast)
			// 3: Custom mode for corpses as modified in "ExileClient_gui_interactionMenu_hook"
		target = "Man";

		class Actions
		{
			class StudyCorpse: ExileAbstractAction
			{
				title = "Study and hide corpse";
				// condition = "(!(alive ExileClientInteractionObject) && ((ExileClientInteractionObject getVariable ['ExileReborn_disableInventory',-1]) isEqualTo -1) && (player distance ExileClientInteractionObject < 2))";
				condition = "(!(alive cursorObject) && (cursorObject isKindOf 'Man') && (player distance cursorObject < 3))";
				action = "_this call BSF_Client_StudyCorpse";
				icon = "SM\DynamicMenu\icons\red_ring_hidecorpse_ca.paa";
			};
			class Bribe: ExileAbstractAction
			{
				title = "Bribe survivor";
				condition = "((alive ExileClientInteractionObject) && ((ExileClientInteractionObject getVariable ['ExileReborn_survivor',false]) isEqualTo true) && (player distance ExileClientInteractionObject < 2))";
				action = "_this call JohnO_fnc_bribeSurvivor";
				icon = "SM\DynamicMenu\icons\red_ring_speak_ca.paa";
			};
			class Follow: ExileAbstractAction
			{
				title = "Come with me?";
				condition = "((alive ExileClientInteractionObject) && ((ExileClientInteractionObject getVariable ['ExileReborn_survivor_isFollowing',-1]) isEqualTo -1) && ((ExileClientInteractionObject getVariable ['ExileReborn_survivor',false]) isEqualTo true) && (player distance ExileClientInteractionObject < 2))";
				action = "_this call JohnO_fnc_survivorFollowMe";
				icon = "SM\DynamicMenu\icons\red_ring_speak_ca.paa";
			};
			class Leave: ExileAbstractAction
			{
				title = "Leave me alone!";
				condition = "((alive ExileClientInteractionObject) && !((ExileClientInteractionObject getVariable ['ExileReborn_survivor_isFollowing',-1]) isEqualTo -1) && ((ExileClientInteractionObject getVariable ['ExileReborn_survivor',false]) isEqualTo true) && ((player getVariable ['ExileReborn_survivor_isFollowingMe',false]) isEqualTo true) && (player distance ExileClientInteractionObject < 2))";
				action = "_this call JohnO_fnc_survivorLeave";
				icon = "SM\DynamicMenu\icons\red_ring_speak_ca.paa";
			};
		};
	};
};
