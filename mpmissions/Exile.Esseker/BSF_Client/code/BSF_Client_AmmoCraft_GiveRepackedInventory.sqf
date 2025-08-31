/*
* BSF_Client_AmmoCraft_GiveRepackedInventory
* BSF\AmmoCrafting\functions\BSF_Client_AmmoCraft_GiveRepackedInventory.sqf
* [_magCaliber,_inventory,_itemsToRefund,_magClassName] call BSF_Client_AmmoCraft_GiveRepackedInventory;
* BS-Free Game Servers
* www.bs-free.com
* © 2023 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/

params ["_magCaliber", "_inventory", "_itemsToRefund","_magClassName"];
private ["_magCapacity", "_partsToRefund", "_bulletInvType", "_bulletInvToRefund", "_brassInvType", "_brassInvToRefund", "_powderPerRound", "_powderInvToRefund"];
		_magCapacity = 250;
		_partsToRefund = _itemsToRefund;
		_bulletInvType =	_inventory select 0 select 0;
		_bulletInvToRefund = 	_inventory select 0 select 2;
		_brassInvType = 	_inventory select 1 select 0;
		_brassInvToRefund = 	_inventory select 1 select 2;
		_powderPerRound =	AmmoMap get _magClassName select 4;
		_powderInvToRefund = 	_inventory select 2 select 2;

		_bulletInvToRefund = 	[_bulletInvType, (_bulletInvToRefund + _itemsToRefund)];
		_brassInvToRefund = 	[_brassInvType, (_brassInvToRefund + _itemsToRefund)];
		_powderInvToRefund = 	["BSF_GunPowder_Box", (_powderInvToRefund + (_itemsToRefund * _powderPerRound))];

		{player removeMagazines _x;
		} forEach [_bulletInvType,_brassInvType,"BSF_GunPowder_Box"];
		
		{
			_iterations = 0;
			if (((_x select 1) / _MagCapacity) < 1) then 
				{_iterations = 1} 
				else
				{_iterations = floor ((_x select 1) / _MagCapacity)};

			for "_i" from 1 to _iterations do
			{
				player addMagazine [(_x select 0),(_x select 1)];
			};

			if ((_x select 1) - (_MagCapacity * _iterations) > 0) then {
			    player addMagazine [(_x select 0), floor ((_x select 1) - (_MagCapacity * _iterations))];
			};

		} forEach [_bulletInvToRefund, _brassInvToRefund, _powderInvToRefund];