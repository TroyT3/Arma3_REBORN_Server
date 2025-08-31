	class BSF_AmmoBench
	{
		targetType = 2;
		target = "Land_BSF_AmmoBench_Static";
		class actions
		{
			class openAmmoCrafting: ExileAbstractAction
			{
				title = "<img image='\exile_assets\texture\arsenal\magazine.paa' size='1' shadow='false' />Craft Ammo";
				condition = "true";
				action = "createDialog 'BSF_AmmoCraft_Dialog'";
			};
		};
	};

	class Container
	{
		targetType = 2;
		target = "Exile_Container_Abstract";

		class Actions
		{
			class Pack
			{
				title = "Pack";
				condition = "!((typeOf ExileClientInteractionObject) isEqualTo 'Exile_Container_SupplyBox')";
				action = "_this spawn ExileClient_object_container_pack";
				icon = "SM\DynamicMenu\icons\red_ring_pack_ca.paa";
			};
			class Move: ExileAbstractAction
			{
				title = "Move";
				condition = "(getNumber(configFile >> 'CfgVehicles' >> typeOf ExileClientInteractionObject >> 'exileIsLockable') isEqualTo 0) || ((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_construction_move";
				icon = "SM\DynamicMenu\icons\red_ring_move_ca.paa";
			};
		};
	};

	class SupplyBox
	{
		targetType = 2;
		target = "Exile_Container_SupplyBox";

		class Actions
		{
			// class Mount: ExileAbstractAction
			// {
				// title = "Mount";
				// condition = "(isNull (attachedTo ExileClientInteractionObject)) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				// action = "_this call ExileClient_object_supplyBox_mount";
				// icon = "SM\DynamicMenu\icons\red_ring_mount_ca.paa";
			// };

			class Install: ExileAbstractAction
			{
				title = "Install";
				condition = "isNull (attachedTo ExileClientInteractionObject) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_install";
				icon = "SM\DynamicMenu\icons\red_ring_install_ca.paa";
			};

			// class Unmount: ExileAbstractAction
			// {
				// title = "Unmount";
				// condition = "!(isNull (attachedTo ExileClientInteractionObject)) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				// action = "_this call ExileClient_object_supplyBox_unmount";
				// icon = "SM\DynamicMenu\icons\red_ring_unmount_ca.paa";
			// };
		};
	};

	class BSFSupplyCrate_Orange
	{
		targetType = 2;
		target = "BSF_SupplyBox_Orange";

		class Actions
		{
			// class Mount: ExileAbstractAction
			// {
				// title = "Mount";
				// condition = "(isNull (attachedTo ExileClientInteractionObject)) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				// action = "_this call ExileClient_object_supplyBox_mount";
				// icon = "SM\DynamicMenu\icons\red_ring_mount_ca.paa";
			// };

			class Install: ExileAbstractAction
			{
				title = "Install";
				condition = "isNull (attachedTo ExileClientInteractionObject) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_install";
				icon = "SM\DynamicMenu\icons\red_ring_install_ca.paa";
			};

			// class Unmount: ExileAbstractAction
			// {
				// title = "Unmount";
				// condition = "!(isNull (attachedTo ExileClientInteractionObject)) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				// action = "_this call ExileClient_object_supplyBox_unmount";
				// icon = "SM\DynamicMenu\icons\red_ring_unmount_ca.paa";
			// };
		};
	};	

	class BSFSupplyCrate_Green
	{
		targetType = 2;
		target = "BSF_SupplyBox_Green";

		class Actions
		{
			// class Mount: ExileAbstractAction
			// {
				// title = "Mount";
				// condition = "(isNull (attachedTo ExileClientInteractionObject)) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				// action = "_this call ExileClient_object_supplyBox_mount";
				// icon = "SM\DynamicMenu\icons\red_ring_mount_ca.paa";
			// };

			class Install: ExileAbstractAction
			{
				title = "Install";
				condition = "isNull (attachedTo ExileClientInteractionObject) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_install";
				icon = "SM\DynamicMenu\icons\red_ring_install_ca.paa";
			};

			// class Unmount: ExileAbstractAction
			// {
				// title = "Unmount";
				// condition = "!(isNull (attachedTo ExileClientInteractionObject)) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				// action = "_this call ExileClient_object_supplyBox_unmount";
				// icon = "SM\DynamicMenu\icons\red_ring_unmount_ca.paa";
			// };
		};
	};

	class BSF_ArmorLocker {
		targetType = 2;
		target = "BSF_ArmorLocker";
		class Actions
		{
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
			class SetPinCode : ExileAbstractAction
			{
				title = "Set PIN";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_lock_setPin";
				icon = "SM\DynamicMenu\icons\red_ring_pincode_ca.paa";
			};
		};
	};

	class BSF_ArmorLocker_Storage: BSF_ArmorLocker {
		target = "BSF_ArmorLocker_Storage";
		};

	class BSF_ArmorLocker_Tools: BSF_ArmorLocker {
		target = "BSF_ArmorLocker_Tools";
		};

	class BSF_ArmorLocker_Attachments: BSF_ArmorLocker {
		target = "BSF_ArmorLocker_Attachments";
		};

	class BSF_ArmorLocker_Rifles: BSF_ArmorLocker {
		target = "BSF_ArmorLocker_Rifles";
		};

	class BSF_ArmorLocker_Food: BSF_ArmorLocker {
		target = "BSF_ArmorLocker_Food";
		};

	class BSF_ArmorLocker_Pistols: BSF_ArmorLocker {
		target = "BSF_ArmorLocker_Pistols";
		};

	class BSF_ArmorLocker_Armor: BSF_ArmorLocker {
		target = "BSF_ArmorLocker_Armor";
		};

	class BSF_ArmorLocker_Ammo: BSF_ArmorLocker {
		target = "BSF_ArmorLocker_Ammo";
		};

	class BSF_ArmorLocker_ComChest: BSF_ArmorLocker {
		target = "BSF_ArmorLocker_ComChest";
		};

	class BSF_ArmorLocker_Explosives: BSF_ArmorLocker {
		target = "BSF_ArmorLocker_Explosives";
		};

	class BSF_ArmorLocker_HMG: BSF_ArmorLocker {
		target = "BSF_ArmorLocker_HMG";
		};

	class BSF_ArmorLocker_Junk: BSF_ArmorLocker {
		target = "BSF_ArmorLocker_Junk";
		};

	class BSF_ArmorLocker_Launchers: BSF_ArmorLocker {
		target = "BSF_ArmorLocker_Launchers";
		};

	class BSF_ArmorLocker_LMG: BSF_ArmorLocker {
		target = "BSF_ArmorLocker_LMG";
		};

	class BSF_ArmorLocker_Materials: BSF_ArmorLocker {
		target = "BSF_ArmorLocker_Materials";
		};

	class BSF_ArmorLocker_Medical: BSF_ArmorLocker {
		target = "BSF_ArmorLocker_Medical";
		};

	class BSF_ArmorLocker_Optics: BSF_ArmorLocker {
		target = "BSF_ArmorLocker_Optics";
		};

	class BSF_ArmorLocker_Packs: BSF_ArmorLocker {
		target = "BSF_ArmorLocker_Packs";
		};

	class BSF_ArmorLocker_Rifles_127: BSF_ArmorLocker {
		target = "BSF_ArmorLocker_Rifles_127";
		};

	class BSF_ArmorLocker_Rifles_338: BSF_ArmorLocker {
		target = "BSF_ArmorLocker_Rifles_338";
		};

	class BSF_ArmorLocker_Rifles_545: BSF_ArmorLocker {
		target = "BSF_ArmorLocker_Rifles_545";
		};

	class BSF_ArmorLocker_Rifles_556: BSF_ArmorLocker {
		target = "BSF_ArmorLocker_Rifles_556";
		};

	class BSF_ArmorLocker_Rifles_65: BSF_ArmorLocker {
		target = "BSF_ArmorLocker_Rifles_65";
		};

	class BSF_ArmorLocker_Rifles_762: BSF_ArmorLocker {
		target = "BSF_ArmorLocker_Rifles_762";
		};

	class BSF_ArmorLocker_Rifles_Misc: BSF_ArmorLocker {
		target = "BSF_ArmorLocker_Rifles_Misc";
		};

	class BSF_ArmorLocker_Rifles_Sniper: BSF_ArmorLocker {
		target = "BSF_ArmorLocker_Rifles_Sniper";
		};

	class BSF_ArmorLocker_Shotguns: BSF_ArmorLocker {
		target = "BSF_ArmorLocker_Shotguns";
		};

	class BSF_ArmorLocker_SMG: BSF_ArmorLocker {
		target = "BSF_ArmorLocker_SMG";
		};

	class BSF_ArmorLocker_ToSell: BSF_ArmorLocker {
		target = "BSF_ArmorLocker_ToSell";
		};

	class BSF_ArmorLocker_ToSort: BSF_ArmorLocker {
		target = "BSF_ArmorLocker_ToSort";
		};

	class BSF_ArmorLocker_UAV: BSF_ArmorLocker {
		target = "BSF_ArmorLocker_UAV";
		};

	class BSF_ArmorLocker_Uniforms: BSF_ArmorLocker {
		target = "BSF_ArmorLocker_Uniforms";
		};
