/*
* ExileServer_BSF_network_BambiVehicleDeployRequest
* BSF_Server\code\
*
* BS-Free Game Servers
* www.bs-free.com
* © 2023 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/

params ["_sessionID", "_parameters"];
_parameters params  ["_vehicleClass"];

_player = _sessionID call ExileServer_system_session_getPlayerObject;
_vehicleObject = objNull;

if(_vehicleClass find "UAV" > -1)then
	{
		if(_vehicleClass isKindOf "Air")then
		{
			_position = AGLToASL (_player modelToWorld [0,0,350]);
		};
		_vehicleObject = createVehicle [_vehicleClass, _position, [], 0, "FLY"];
	}
else
	{
		_vehicleObject = _vehicleClass createVehicle (_player modelToWorld [0,2,0]);
		_vehicleObject setVelocity [0,0,0];
	};

clearBackpackCargoGlobal _vehicleObject;
clearItemCargoGlobal _vehicleObject;
clearMagazineCargoGlobal _vehicleObject;
clearWeaponCargoGlobal _vehicleObject;

_vehicleObject setVariable ["ExileOwnerUID", getPlayerUID _player, true];
_vehicleObject lock 0;
_vehicleObject addEventHandler ["GetIn", {_this call ExileServer_object_vehicle_event_onGetIn}];
_vehicleObject call ExileServer_system_simulationMonitor_addVehicle;

_displayName = getText(configFile >> "CfgVehicles" >> _vehicleClass >> "displayName");
_title = format["<img size='1'image='\exile_assets\texture\ui\xm8_app_settings_ca.paa'/> <t color='#0096ff'>Delete %1</t>",_displayName];
[_vehicleObject, 
	[
		_title,
		{
			_vehicleObject = _this select 0;
			if(local _vehicleObject)then
			{
				_vehicleObject removeAction _actionId;
				deleteVehicle _vehicleObject;
			}
			else
			{
				['ErrorTitleAndText', ['Delete Vehicle', 'Please get in the driver seat first!']] spawn ExileClient_gui_toaster_addTemplateToast;
			};
		},
		"",
		1,
		true,
		true,
		"",
		"player distance _target < 8"
	]
] remoteExec ["addAction"];

[_sessionID, "toastRequest", ["SuccessTitleAndText", ["BSF Deploy", format["Deployed: %1",_displayName]]]] call ExileServer_system_network_send_to;

[_sessionID, "CreateBambiVehicleMarkerResponse", [[getPosATL _vehicleObject, _displayName]]] call ExileServer_system_network_send_to;

