/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

private _zombiesToPass = [];

{
	private _zombie = agent _x;
	private _runningID = _zombie getVariable ["SM_AlreadyRunning", ""];
	if (_zombie isKindOf "SM_Zombz_Base" && {_runningID == "" || {isNull (objectFromNetId _runningID)}}) then
	{
		private _nearPlayer = objNull;
		private _distance = 1000;
		{
			private _player = _x;
			if (((_zombie distance _player) < _distance) && {alive _player}) then
			{
				_distance = _zombie distance _player;
				_nearPlayer = _player;
			};
		} forEach (allPlayers - entities "HeadlessClient_F");

		if (isNull _nearPlayer) exitWith { deleteVehicle _zombie };

		private "_ret";
		isNil {_ret = _zombie setOwner (owner _player); true}; // Because this works better unschedule
		if (isNil "_ret" || {!_ret}) then
		{
			[_zombie, _nearPlayer] spawn SM_TransferLocality;
		};
	};
} forEach agents;

true
