/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

if (isServer) then
{
	params["_zombie"];

	private _zombieOwner = owner _zombie;

	private _oldOwnerID = _zombie getVariable ["SM_ZombieOwner", ""];
	if (_oldOwnerID != "") then
	{
		private _oldOwner = objectFromNetId _oldOwnerID;
		if (isNull _oldOwner) exitWith { true };

		private _targetData = _oldOwner getVariable ["SM_CurrentZombies", [0, []]];
		_targetData params ["_count","_array"];
		_count = (_count - 1) max 0;
		_array = _array - [(netId _zombie)];
		if (_count != (count _array)) then
		{
			_count = 0;
			{
				private _zombie = objectFromNetId _x;
				if (!isNull _zombie && {alive _zombie}) then
				{
					_count = _count + 1;
				};
			} forEach _zombieArray;
		};
		_oldOwner setVariable ["SM_CurrentZombies", [_count, _array]];
	};

	private _newOwner = [_zombie] call SM_GetZombieOwner;
	if !(isNull _newOwner) then
	{
		private _targetData = _newOwner getVariable ["SM_CurrentZombies", [0, []]];
		_targetData params ["_count","_array"];
		_count = _count + 1;
		_array pushBackUnique (netId _zombie);
		if (_count != (count _array)) then
		{
			_count = 0;
			{
				private _zombie = objectFromNetId _x;
				if (!isNull _zombie && {alive _zombie}) then
				{
					_count = _count + 1;
				};
			} forEach _zombieArray;
		};
		_newOwner setVariable ["SM_CurrentZombies", [_count, _array]];
		_zombie setVariable ["SM_ZombieOwner", netId _newOwner];
	};
}
else
{
	params ["_zombie","_isLocal"];

	format["Zombie %1 locality changed to: %2", _zombie, _isLocal] call SM_Util_log;

	private _netID = netId _zombie;
	if (!_isLocal && {(SM_IdleZombies find _netID) != -1}) exitWith
	{
		SM_IdleZombies = SM_IdleZombies - [_netID];
		true
	};

	_this call SM_DisableAI;

	SM_IdleZombies pushBack _netID;
	if ((isNil "SM_FSMHandle" || {completedFSM SM_FSMHandle}) && {!SM_IdleFSMIsStarting}) then
	{
		SM_IdleFSMIsStarting = true;
		[] spawn //Execute this whenever possible.. arma may not know how to comprehend it without this spawn...
		{
			SM_FSMHandle = execFSM SM_FSM_ManagerPath;
			SM_IdleFSMIsStarting = false;
			true
		};
		
	};
};
true