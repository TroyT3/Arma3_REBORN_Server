// BSF_Client_AmmoCraft_CanCraftMag.sqf

params ["_MagData","_inventory"];

_canCraft = false;

_MagCaliber = (_MagData select 2);
_BulletCost = (_MagData select 3);
_BrassCost = (_MagData select 3);
_PowderCost = (_MagData select 4) * _BrassCost;

if ( (_BulletCost <= (_inventory select 0 select 2)) and (_BrassCost <= (_inventory select 1 select 2)) and (_PowderCost <= (_inventory select 2 select 2)) ) then 
	{
		_canCraft = true;
	};
_canCraft