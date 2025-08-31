// ExileServer_BS3_maintainWrecks.sqf

if (!isServer) exitWith {};

private["_coords", "_countWrecks", "_crateClaimMessageRadius", "_i", "_isPlayerInRange", "_markerId", "_markerPosition", "_message", "_showCrateClaimMessage"];

_countWrecks = _this select 0;
_crateClaimMessageRadius = _this select 1;
_showCrateClaimMessage = _this select 2;

for "_i" from 1 to _countWrecks do
{
	_markerId = _i call ExileServer_BS3_getWreckId;
	_markerPosition = getMarkerPos _markerId;

	if(!isNil "_markerPosition") then
	{
		_isPlayerInRange = [_markerPosition, _crateClaimMessageRadius] call ExileClient_util_world_isAlivePlayerInRange;

		if (_isPlayerInRange) then
		{
			format["Crate found by players at [%1].", _markerPosition] call ExileServer_BS3_util_log;

			deleteMarker _markerId;

			if (BS3_Wrecks_To_BSF_Events isEqualTo true) then {
				BSF_Event_Positions deleteAt _markerId;
			};

			if (_showCrateClaimMessage) then
			{
			_coords = mapGridPosition _markerPosition;
			_message = format ["A player found a crate at coordinates %1!", _coords];
			["toastRequest", ["InfoTitleAndText", ["SHIPWRECK FOUND!", format["%1", _message]]]] call ExileServer_system_network_send_broadcast;
	
//				["Info", "Shipwreck crate found!", _message] call ExileServer_BS3_sendClientNotification;
//				["systemChatRequest", [_message]] call ExileServer_system_network_send_broadcast;
			};
		};
	};
};