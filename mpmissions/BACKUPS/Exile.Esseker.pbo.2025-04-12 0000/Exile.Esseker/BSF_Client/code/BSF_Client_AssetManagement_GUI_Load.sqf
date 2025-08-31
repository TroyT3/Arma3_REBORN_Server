/*
* BSF_Client_AssetManagement_GUI_Load
* BSF_Client\code\
* 
* (findDisplay 46) createDisplay "BSF_AssetManagement_Dialog";
*
* BS-Free Game Servers
* www.bs-free.com
* © 2023 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/

// private ["_option", "_display", "_territoryListSelection", "_playerUID", "_playerObject", "_playerName", "_donorStatus"];
disableSerialization;
params ["_option","_territoryListSelection"];
_display = uiNamespace getVariable ["BSF_AssetManagement_Dialog",displayNull];

_playerUID = getPlayerUID player;
_playerObject = _playerUID call ExileClient_util_player_objectFromPlayerUid;
_playerName = _playerObject getVariable ["ExileName", ""];
_donorStatus = _playerObject getVariable ["BSF_Donor",["No"]];

AM_Inst_Active = false;
if (isNil "AM_Active") then {AM_Active = false;};
if (AM_Active == false) then {
	AM_Active = true;
	[] spawn {
		waitUntil{!isNil "AM_Active"};
		_display = findDisplay 25301;
		while {(AM_Active == true)} do {
			(_display displayCtrl 20002) ctrlShow true; // Green LED
			uiSleep 2;
			(_display displayCtrl 20002) ctrlShow false;
			uiSleep 1.25;
		};
	};
	[] spawn {
		waitUntil{!isNil "AM_Active"};
		_display = findDisplay 25301;
		while {(AM_Active == true)} do {
			(_display displayCtrl 20003) ctrlShow true; // Orange LED
			uiSleep (random [0.25, 0.4, 1]);
			(_display displayCtrl 20003) ctrlShow false;
			uiSleep (random [0.25, 0.4, 1]);
			(_display displayCtrl 20003) ctrlShow true;
			uiSleep (random [0.15, 0.3, .75]);
			(_display displayCtrl 20003) ctrlShow false;
			uiSleep (random [0.25, 0.4, .75]);	
		};
	};
};

fnc_AM_initState = {
	disableSerialization;
	_display = uiNamespace getVariable ["BSF_AssetManagement_Dialog",displayNull];
	_flagObject = _this select 0;

	// DELETE TERRITORY BUTTONS
	_storedVehiclesCount = count (_flagObject getVariable ["ExileTerritoryStoredVehicles", []]);
	_territoryPartsCount = _flagObject getVariable ["TerritoryPartsCount",0];
	if ( (_storedVehiclesCount > 0) || (_territoryPartsCount > 0) || !(PlayerInSelectedTerritory) ) then {
			(_display displayCtrl 20501) ctrlShow false;	// DeleteTerritory_Btn
			(_display displayCtrl 20502) ctrlShow true;		// DeleteTerritory_BtnDisabled
		} else {
			(_display displayCtrl 20501) ctrlShow true;		// DeleteTerritory_Btn
			(_display displayCtrl 20502) ctrlShow false;	// DeleteTerritory_BtnDisabled
	};

	// SHOW TERRITORY RADIUS BUTTONS
	if (_flagObject getVariable "ExileRadiusShown") then {
			(_display displayCtrl 20282) ctrlShow true;		// Radius_BtnOFF
			(_display displayCtrl 20281) ctrlShow false;	// Radius_BtnON
		} else {
			(_display displayCtrl 20282) ctrlShow false;	// Radius_BtnOFF
			(_display displayCtrl 20281) ctrlShow true;		// Radius_BtnON
	};

	// ALL MAP MARKERS BUTTONS
	if (!isNil "ShowMapMarkersON") then {
			(_display displayCtrl 20202) ctrlShow false;	// ShowMapMarkers_BtnON
			(_display displayCtrl 20203) ctrlShow true;		// ShowMapMarkers_BtnOFF
		} else {
			(_display displayCtrl 20202) ctrlShow true;		// ShowMapMarkers_BtnON
			(_display displayCtrl 20203) ctrlShow false;	// ShowMapMarkers_BtnOFF
	};

	// ALL FLAG MARKERS BUTTONS
	if (!isNil "PlayerFlagsON") then {
			(_display displayCtrl 20205) ctrlShow false;	// PlayerFlags_BtnON
			(_display displayCtrl 20206) ctrlShow true;		// PlayerFlags_BtnOFF
		} else {
			(_display displayCtrl 20205) ctrlShow true;		// PlayerFlags_BtnON
			(_display displayCtrl 20206) ctrlShow false;	// PlayerFlags_BtnOFF
	};

	//////////////////////////   BEGIN LOJACK
	_ctrlVehiclesContainer = (_display displayCtrl 30201);
	_vehicleID = _ctrlVehiclesContainer lnbData [lnbCurSelRow _ctrlVehiclesContainer,0];
	_thisVehicle = BSF_PlayerVehicles get (parseNumber _vehicleID);
	_thisVehicle params ["_vehID","_ownerUID","_vehClass","_vehName","_territoryID","_territoryName","_isLocked","_fuel","_damage","_pin_code","_position_x","_position_y","_position_z","_cargo_items","_cargo_magazines","_cargo_weapons","_cargo_container","_money","_hitPoints","_clanID","_clanName","_ownerName","_vehObject"];

	_vehMarkerState = _vehObject getVariable ["BSF_MarkerOn",0];
	if !(_territoryID isEqualTo "") then {_vehMarkerState = 2};

	//////////// INDIVIDUAL VEHICLE MARKERS
	switch (_vehMarkerState) do 
	{
		case 0 : { // Off
			(_display displayCtrl 30110) ctrlShow true;
			(_display displayCtrl 30111) ctrlShow false;
			(_display displayCtrl 30112) ctrlShow false;
		};
		case 1 : { // On
			(_display displayCtrl 30110) ctrlShow false;
			(_display displayCtrl 30111) ctrlShow true;
			(_display displayCtrl 30112) ctrlShow false;
		};
		case 2 : { // Disabled
			(_display displayCtrl 30110) ctrlShow false;
			(_display displayCtrl 30111) ctrlShow false;
			(_display displayCtrl 30112) ctrlShow true;
		};
		default {};
	};

	//////////// ALL VEHICLE MARKERS
	_vehicleCount = 0;
	{
		_terID = BSF_PlayerVehicles get _x select 4;
		if (_terID isEqualTo "") then {_vehicleCount = _vehicleCount + 1};
	} forEach BSF_PlayerVehicles;

	switch true do 
	{
		case (count VehicleMarkers == 0) : {				// All Off
			(_display displayCtrl 30115) ctrlShow true;
			(_display displayCtrl 30116) ctrlShow false;
			(_display displayCtrl 30117) ctrlShow false;
			};
		case (count VehicleMarkers == _vehicleCount) : {	// All On
			(_display displayCtrl 30115) ctrlShow false;
			(_display displayCtrl 30116) ctrlShow true;
			(_display displayCtrl 30117) ctrlShow false;
			};
		case !(count VehicleMarkers == _vehicleCount) : {	// Mixed
			(_display displayCtrl 30115) ctrlShow false;
			(_display displayCtrl 30116) ctrlShow false;
			(_display displayCtrl 30117) ctrlShow true;
		};
		default {
			(_display displayCtrl 30115) ctrlShow true;
			(_display displayCtrl 30116) ctrlShow false;
			(_display displayCtrl 30117) ctrlShow false;
		};
	};

	//////////// VEHICLE HP BARS
	if(!isNil'VEHICLE_HP_BARS_ID') then {
			(_display displayCtrl 30108) ctrlShow false;
			(_display displayCtrl 30109) ctrlShow true;
		} else {
			(_display displayCtrl 30108) ctrlShow true;
			(_display displayCtrl 30109) ctrlShow false;
	};
};

fnc_SetDueDate = {
	disableSerialization;
	_display = uiNamespace getVariable ["BSF_AssetManagement_Dialog",displayNull];
	private _territoryPayDayInfo = (_display displayCtrl 20239);
	_flagObject = _this select 0;

	private _nextProtectionMoneyDueDate = _flagObject getVariable ["ExileTerritoryMaintenanceDue", [0, 0, 0, 0, 0]];
	private _month = _nextProtectionMoneyDueDate select 1;
	private _monthStr = "";
	switch (_month) do 
	{
		case 1 : { _monthStr = "Jan"; };
		case 2 : { _monthStr = "Feb"; };
		case 3 : { _monthStr = "Mar"; };
		case 4 : { _monthStr = "Apr"; };
		case 5 : { _monthStr = "May"; };
		case 6 : { _monthStr = "Jun"; };
		case 7 : { _monthStr = "Jul"; };
		case 8 : { _monthStr = "Aug"; };
		case 9 : { _monthStr = "Sep"; };
		case 10 : { _monthStr = "Oct"; };
		case 11 : { _monthStr = "Nov"; };
		case 12 : { _monthStr = "Dec"; };
		default { _monthStr = ""};
	};

	private _dateTimeString = format 
	[
		"%1 %2, %3 @ %4:%5 PST",
		_monthStr,
		_nextProtectionMoneyDueDate select 2, // Day
		_nextProtectionMoneyDueDate select 0, // Year
		_nextProtectionMoneyDueDate select 3, // Hour
		_nextProtectionMoneyDueDate select 4  // Min
	];

	if ((_flagObject getVariable ["ExileFlagStolen", 0]) isEqualTo 1) then 
	{
		_territoryPayDayInfo ctrlSetTextColor [0.91, 0, 0, 1];
		_territoryPayDayInfo ctrlSetText "FLAG HAS BEEN STOLEN!!!";
	}
	else 
	{
		if (_donorStatus == "Active") then
		{
			_territoryPayDayInfo ctrlSetTextColor [0.09,0.83,0.29, 1];
			_territoryPayDayInfo ctrlSetText (format ["BSF Donors don't pay protection. Thanks %1!",_playerName]);
		}
		else
		{
			_territoryPayDayInfo ctrlSetTextColor [1, 1, 1, 1];
			_territoryPayDayInfo ctrlSetText (format ["Protection Money Due Date: %1", _dateTimeString]);
		};
	};
};

fnc_event_onPromoteButtonClick = {
	true call fnc_event_handleModeration;
	true
};

fnc_event_onDemoteButtonClick = {
	false call fnc_event_handleModeration;
	true
};

fnc_event_onKickButtonClick = {
	// ExileClient_gui_xm8_slide_territory_event_onKickButtonClick
	private["_display", "_MemberListBox", "_index", "_playerName", "_memberUID", "_territoryDropDown", "_flagNetID", "_selTerritoryID", "_selectedFlagData", "_flagObject", "_territoryList"];
	disableSerialization;
	_display = uiNamespace getVariable ["BSF_AssetManagement_Dialog",displayNull];
	_MemberListBox = _display displayCtrl 20260; // 4131
	_territoryList = (_display displayCtrl 20231); // 4132
	_index = lbCurSel _MemberListBox;
	_memberUID = _MemberListBox lbData _index;
	_playerName = _MemberListBox lbText _index;
	_selTerritoryID = parseNumber (_territoryList lbData (lbCurSel _territoryList));
	_selectedFlagData = ThisPlayersFlags get _selTerritoryID;
	_flagObject = (_selectedFlagData select 9) select 0;
	_flagNetID = netId _flagObject;

	[format ["Kick %1?", _playerName], "Kick", "Don't kick"] call fnc_BSF_AM_showConfirm;
	waitUntil { !(isNil "BSF_kickConfirmResult") };
	if (BSF_kickConfirmResult isEqualTo true) then
	{
		[format ["%1 was removed from your territory!", _playerName], "Okay"] call fnc_BSF_AM_showMessage;
		["removeFromTerritoryRequest", [_flagNetID, _memberUID]] call ExileClient_system_network_send;
		_MemberListBox lbDelete _index;
	};
};

fnc_BSF_AM_showConfirm = {
	// ExileClient_gui_xm8_showConfirm
	private["_question", "_yesButtonCaption", "_noButtonCaption", "_display", "_yesButton", "_noButton", "_questionLine", "_popup"];
	disableSerialization;
	_question = _this select 0;
	_yesButtonCaption = _this select 1;
	_noButtonCaption = _this select 2;
	_display = uiNamespace getVariable ["BSF_AssetManagement_Dialog",displayNull];
	_yesButton = _display displayCtrl 24022; // 4022
	_yesButton ctrlSetText _yesButtonCaption;
	_noButton = _display displayCtrl 24023; // 4023
	_noButton ctrlSetText _noButtonCaption;
	_questionLine = _display displayCtrl 24021; // 4021
	_questionLine ctrlSetStructuredText (parseText format ["<t align='center'><t color='#00b2cd'>Confirm</t><br/><t color='#fcfdff' size='1.4'>%1</t></t>", _question]);
	_popup = _display displayCtrl 24020; // 4020
	_popup ctrlSetFade 0;
	_popup ctrlShow true;
	_popup ctrlCommit 0;	
	ctrlSetFocus _popup;
	BSF_kickConfirmResult = nil;
	BSF_IsKickConfirmVisible = true;
};

fnc_BSF_AM_hideConfirm  = {
 	// ExileClient_gui_xm8_hideConfirm
	private["_display", "_popup"];
	disableSerialization;
	_display = uiNamespace getVariable ["BSF_AssetManagement_Dialog",displayNull];
	_popup = _display displayCtrl 24020; // 4020
	_popup ctrlSetFade 1;
	_popup ctrlShow false;
	_popup ctrlCommit 0;	
	BSF_kickConfirmResult = _this;
	BSF_IsKickConfirmVisible = false;
};

fnc_BSF_AM_showMessage  = {
	// ExileClient_gui_xm8_showMessage 
	private["_message", "_buttonCaption", "_display", "_button", "_messageLine", "_popup"];
	disableSerialization;
	_message = _this select 0;
	_buttonCaption = _this select 1;
	_display = uiNamespace getVariable ["BSF_AssetManagement_Dialog",displayNull];
	_button = _display displayCtrl 24011; // 4011
	_button ctrlSetText _buttonCaption;
	_messageLine = _display displayCtrl 24012; // 4012
	_messageLine ctrlSetStructuredText (parseText format ["<t align='center'><t color='#a0df3b'>Yay!</t><br/><t color='#fcfdff' size='1.4'>%1</t></t>", _message]);
	_popup = _display displayCtrl 24010; // 4010
	_popup ctrlSetFade 0;
	_popup ctrlShow true;
	_popup ctrlCommit 0;	
	ctrlSetFocus _popup;
	BSF_IsMessageVisible = true;
};

fnc_BSF_AM_hideMessage = {
	//ExileClient_gui_xm8_hideMessage
	private["_display", "_popup"];
	disableSerialization;
	_display = uiNamespace getVariable ["BSF_AssetManagement_Dialog",displayNull];
	_popup = _display displayCtrl 24010;  // 4010
	_popup ctrlSetFade 1;
	_popup ctrlShow false;
	_popup ctrlCommit 0;	
	BSF_IsMessageVisible = false;
};

fnc_BSF_AM_onMemberListBoxSelectionChanged = {
	// ExileClient_gui_xm8_slide_territory_event_onPlayerListBoxSelectionChanged
 	private["_MemberListBox", "_index", "_display", "_memberUID", "_kickButton", "_territoryDropDown", "_promoteButton", "_demoteButton", "_flagObject", "_myRights", "_dudesRights", "_selTerritoryID", "_selectedFlagData"];
	disableSerialization;
	_MemberListBox = _this select 0;
	_index = _this select 1;
	_display = uiNamespace getVariable ["BSF_AssetManagement_Dialog",displayNull];
	_memberUID = _MemberListBox lbData _index;
	_kickButton = _display displayCtrl 24134;
	_kickButton ctrlEnable !(_memberUID isEqualTo (getPlayerUID player));
	_territoryDropDown = _display displayCtrl 24132;
	_promoteButton = _display displayCtrl 24136;
	_demoteButton = _display displayCtrl 24137;
	_selTerritoryID = parseNumber (_territoryList lbData (lbCurSel _territoryList));
	_selectedFlagData = ThisPlayersFlags get _selTerritoryID;
	_flagObject = (_selectedFlagData select 9) select 0;
	_myRights = [_flagObject,getPlayerUID player] call ExileClient_util_territory_getAccessLevel;
	_dudesRights = [_flagObject,_memberUID] call ExileClient_util_territory_getAccessLevel;
	if (_memberUID isEqualTo (getPlayerUID player)) then 
	{
		_promoteButton ctrlEnable false;
		_demoteButton ctrlEnable false;
	}
	else 
	{
		switch (_myRights select 0) do 
		{ 
			case 3: 
			{  
				if((_dudesRights select 0) isEqualTo 2)then
				{
					_promoteButton ctrlEnable false;
					_demoteButton ctrlEnable true;
				}
				else
				{
					_promoteButton ctrlEnable true;
					_demoteButton ctrlEnable false;
				};
			}; 
			default 
			{
				_promoteButton ctrlEnable false;
				_demoteButton ctrlEnable false;
			};
		};
	};
};

fnc_event_handleModeration = {
	// ExileClient_gui_xm8_slide_territory_event_handleModeration
	private["_display", "_territoryList", "_territorySelected", "_territoryList", "_MemberListBox", "_index", "_memberUID", "_flagNetID", "_selTerritoryID", "_selectedFlagData", "_flagObject"];
	disableSerialization;
	_display = uiNamespace getVariable ["BSF_AssetManagement_Dialog",displayNull];
	_territoryList = (_display displayCtrl 20231);
	_territorySelected = lbCurSel _territoryList;
	_MemberListBox = _display displayCtrl 20260; // 4131
	_index = lbCurSel _MemberListBox;
	_memberUID = _MemberListBox lbData _index;
	_selTerritoryID = parseNumber (_territoryList lbData (lbCurSel _territoryList));
	_selectedFlagData = ThisPlayersFlags get _selTerritoryID;
	_flagObject = (_selectedFlagData select 9) select 0;
	_flagNetID = netId _flagObject;
	["moderationTerritoryRequest", [_flagNetID,_memberUID,_this]] call ExileClient_system_network_send;
	true
};

fnc_MemberListBox = {
	private["_display", "_text", "_MemberListBox", "_buildRights", "_memberUID", "_memberObject", "_playerTerritoryAccess", "_flagObject"];
	disableSerialization;
	_display = uiNamespace getVariable ["BSF_AssetManagement_Dialog",displayNull];
	_MemberListBox = _display displayCtrl 20260;
	lbClear _MemberListBox;

	_flagObject = _this select 0;
	_buildRights = _flagObject getVariable ["ExileTerritoryBuildRights", []];

	{
		_memberUID = _x;
		_memberObject = _memberUID call ExileClient_util_player_objectFromPlayerUid;
		_text = "";
		if (isNull _memberObject) then
		{
			_text = format ["~OFFLINE~ (%1)", _memberUID];
		}
		else
		{
			_text = format ["%1 (%2)", name _memberObject, _memberUID];
		};
		_playerTerritoryAccess = [_flagObject, _memberUID] call ExileClient_util_territory_getAccessLevel;

		_MemberListBox lbAdd _text;
		_MemberListBox lbSetTooltip [_forEachIndex, (_playerTerritoryAccess select 1)];
		_MemberListBox lbSetData [_forEachIndex, _memberUID];
		if (_memberUID isEqualTo (getPlayerUID player)) then
		{
			_MemberListBox lbSetColor [_forEachIndex, [0/255, 178/255, 205/255, 1]];
		};
		switch (_playerTerritoryAccess select 0) do
		{
			case 3:		
			{
				_MemberListBox lbSetPicture [_forEachIndex, "\a3\ui_f\data\gui\cfg\Ranks\sergeant_gs.paa"];
			};
			case 2:
			{
				_MemberListBox lbSetPicture [_forEachIndex, "\a3\ui_f\data\gui\cfg\Ranks\corporal_gs.paa"];
			};
			default
			{
				_MemberListBox lbSetPicture [_forEachIndex, "\a3\ui_f\data\gui\cfg\Ranks\private_gs.paa"];
			};
		};
	} 
	forEach _buildRights;
};

fnc_deleteAllVehMarkers = {
	{
		deleteMarkerLocal _y;
		deleteMarkerLocal format["%1_2",_y];
		deleteMarkerLocal format["%1_3",_y];
	} forEach VehicleMarkers;
	
	VehicleMarkers = createHashMap;

	{
		_thisVehicle = BSF_PlayerVehicles get _x;
		_thisVehicle params ["_vehID","_ownerUID","_vehClass","_vehName","_territoryID","_territoryName","_isLocked","_fuel","_damage","_pin_code","_position_x","_position_y","_position_z","_cargo_items","_cargo_magazines","_cargo_weapons","_cargo_container","_money","_hitPoints","_clanID","_clanName","_ownerName","_vehObject"];
		_vehObject setVariable ["BSF_MarkerOn", 0];
	} forEach BSF_PlayerVehicles;

	AllVehicleMarkersOn = 0;
	[] call fnc_AM_initState;
};

fnc_updateMarkerNames = { 
		disableSerialization;
		PlayerFlagsON = nil;
		{deleteMarkerLocal _x;} forEach ThisPlayersFlagMarkers;
		waitUntil {isNil "PlayerFlagsON"};
		[] spawn BSF_Client_AssetManagement_FlagMarkersOn;
};

switch (_option) do
{
	case ("Load") : {
		["BSF_Client_AssetManagement_GUI_Load Load - Top"] call BSF_Client_Util_Debug;

		// private ["_display", "_owner", "_texture", "_size", "_level", "_buildRights", "_moderators", "_flagObj", "_territoryList", "_selTerritoryID", "_selectedFlagData", "_flagObject", "_territoryPic", "_territoryName", "_territorySize", "_territoryLevel", "_territoryPos", "_territoryLevelConfigs", "_configIndex", "_currentConfig", "_maxParts", "_parts", "_territorysize"];
		disableSerialization;
		_display = uiNamespace getVariable ["BSF_AssetManagement_Dialog",displayNull];
		
		if (isNil "PlayerInSelectedTerritory") then { PlayerInSelectedTerritory = false;};	
		if (isNil "AllVehicleMarkersOn") then { AllVehicleMarkersOn = 0;};	
		if (isNil "VehicleMarkers") then {VehicleMarkers = createHashMap;};
		if (isNil "PlayerInTerritory") then {PlayerInTerritory = false;};
		[] call BSF_Client_AssetManagement_LoadVehicles;

		(_display displayCtrl 20501) ctrlSetTooltip "All constructions must be removed before a flag can be deleted";
		(_display displayCtrl 20502) ctrlSetTooltip "All constructions must be removed before a flag can be deleted";
		(_display displayCtrl 30112) ctrlSetTooltip "Stored vehicles cannot be marked";

		{(_display displayCtrl _x) ctrlShow false;
		} forEach [20503,20504,20505,20506,20510,20511,20512,20513];

		{(_display displayCtrl _x) ctrlShow true;
		} forEach [20201, 20204, 20207, 20208, 20210, 20211, 20280, 20230, 20231, 20232, 20233, 20234, 20235, 20236, 20237, 20238, 20239, 20250, 20251, 20260, 20261, 20262, 20263, 20264, 30107, 30113, 30114, 30003, 30004, 30005, 30006, 30201, 30008, 30009, 30010, 30202, 30011, 30012, 30013, 20500, 20240, 20241];

		//////////// LOAD TERRITORY LIST:
		// TerritoryNameChanged = nil;

		if (isNil "ThisPlayersFlags") then {
			ThisPlayersFlags = createHashMap;
			{
				private _pos = position _x;
				private _owner = _x getVariable ["ExileOwnerUID",""];
				private _name = _x getVariable ["ExileTerritoryName",""];
				private _id = _x getVariable ["ExileDatabaseID",""];
				private _texture = _x getVariable ["ExileFlagTexture",""];
				private _size =_x getVariable ["ExileTerritorySize",""];
				private _level =_x getVariable ["ExileTerritoryLevel",""];
				private _buildRights =_x getVariable ["ExileTerritoryBuildRights",""];
				private _moderators =_x getVariable ["ExileTerritoryModerators",""];
				private _flagObj = [_x];
				if (_owner isEqualTo _playerUID or _playerUID in _buildRights or _playerUID in _moderators) then {
					ThisPlayersFlags set [_id ,[_id, _pos, _size, _level, _owner, _name, _texture, _buildRights, _moderators, _flagObj]];
				};
			} forEach ExileLocations;
		};

		_territoryList = (_display displayCtrl 20231);
		lbClear _territoryList;

		if (count ThisPlayersFlags < 1) then {
			_name = "You have no territory";
			_territoryList lbAdd _name;
			(_display displayCtrl 20232) ctrlSetText "BSF_Client\images\BSF_AM_NoTerritory.paa";

			{(_display displayCtrl _x) ctrlShow false;
			} forEach [20233,20234,20235,20236,20237,20238];

			{(_display displayCtrl _x) ctrlEnable false;
			} forEach [20205,20206,20251,20501,20281];
		}
		else
		{
			// In order to populate LB by distance to flag:
			_flags = [];
			{
				_flagObj = (ThisPlayersFlags get _x) select 9 select 0;
				_flagID = _x;
				_name = (ThisPlayersFlags get _x) select 5;	
				_dist = round(_flagObj distance player);
				_flags pushBack [_dist, _flagID, _name];
			} foreach ThisPlayersFlags;
			_flags sort true;
			{
				_name = _x select 2;
				_id = _x select 1;
				_territoryList lbAdd _name;
				_territoryList lbSetData [_forEachIndex,str _id];	
			} foreach _flags;

			_territoryList lbSetCurSel _territoryListSelection;
			_selTerritoryID = parseNumber (_territoryList lbData (lbCurSel _territoryList));

			_selectedFlagData = ThisPlayersFlags get _selTerritoryID;
			_selectedFlagData params ["_id","_territoryPos","_territorySize","_territoryLevel","_owner","_territoryName","_territoryPic","_buildRights","_moderators","_flagObj"];
			_flagObject = _flagObj select 0;
			_territoryPic = flagTexture _flagObject;
			_territoryName = _flagObject getVariable ["ExileTerritoryName",""];
			_territoryLevelConfigs = getArray (missionConfigFile >> "CfgTerritories" >> "prices");
			_configIndex = _territoryLevel - 1;
			_currentConfig = _territoryLevelConfigs select _configIndex;
			_maxParts = _currentConfig select 2;
			_parts = count (_territoryPos nearObjects ["Exile_Construction_Abstract_Static", _territorySize]);
			_flagObject setVariable ["TerritoryPartsCount", _parts];

			_storedVehiclesCount = count (_flagObject getVariable ["ExileTerritoryStoredVehicles", []]);
			(_display displayCtrl 20241) ctrlSetText str _storedVehiclesCount;

			(_display displayCtrl 20232) ctrlSetText _territoryPic;
			(_display displayCtrl 20236) ctrlSetText str _territoryLevel;
			(_display displayCtrl 20237) ctrlSetText format["%1 Meters",str _territorysize];
			(_display displayCtrl 20238) ctrlSetText format["%1 of %2",str _parts ,str _maxParts];
			{
				(_display displayCtrl _x) ctrlShow true;
			} forEach [20233,20234,20235,20236,20237,20238];
			//////////// LOAD TERRITORY LIST ^^^^^

			[_flagObject] call fnc_AM_initState;
			[_flagObject] call fnc_SetDueDate;
			[_flagObject] call fnc_MemberListBox;

		};
		["BSF_Client_AssetManagement_GUI_Load Load - End"] call BSF_Client_Util_Debug;
	}; // End case "Load"

	case ("ShowMapMarkersON") : {
		private ["_display", "_index", "_markerName", "_markertype", "_markerPos", "_size", "_typeToInclude", "_markerColor", "_marker", "_maximumTerritoryRadius"];
		disableSerialization;
		_display = uiNamespace getVariable ["BSF_AssetManagement_Dialog",displayNull];

		(_display displayCtrl 20202) ctrlShow false;
		(_display displayCtrl 20203) ctrlShow true;
		ShowMapMarkersON = true;

		MapMarkers = createHashMap;
		_index = 0;
		{
			_markerName = format["MapMarker_%1",str _index];
			_markertype = getMarkerType _x;
			_markerPos = getMarkerPos _x;
			_size = (getMarkerSize _x) select 0;
			_typeToInclude = ["ExileNonConstructionZone", "ExileSpawnZone", "ExileTraderZone"];

			if (_markertype in _typeToInclude) then {
				_markerColor = "ColorBlack";
				switch _markertype do {
						case "ExileNonConstructionZone" : {_markerColor = "ColorBlue";};
						case "ExileSpawnZone" : {_markerColor = "ColorYellow";};
						case "ExileTraderZone" : {_markerColor = "ColorRed";};
						default {_markerColor = "ColorOrange";};
						};

				_marker = createMarkerLocal [_markerName, _markerPos];
				_marker setMarkerShapeLocal "ELLIPSE";
				_marker setMarkerColorLocal _markerColor;
				_marker setMarkerSizeLocal [_size, _size];
				_marker setMarkerAlphaLocal 0.5;
				_marker setMarkerBrushLocal "SolidFull";

				MapMarkers set [_markerName,_markerPos];
				_index = _index + 1;
			};
		} forEach allMapMarkers;

		FlagMarkers = createHashMap;
		{
			_id = _x getVariable ["ExileDatabaseID",""];
			_markerPos = position _x;
			_markerName = format["PlayerFlag_%1",str _id];
			_markerColor = "ColorRed";
			_marker = createMarkerLocal [_markerName, _markerPos];
			_marker setMarkerShapeLocal "ELLIPSE";
			_marker setMarkerColorLocal _markerColor;
			_marker setMarkerSizeLocal [_maximumTerritoryRadius, _maximumTerritoryRadius];
			_marker setMarkerAlphaLocal 0.5;
			_marker setMarkerBrushLocal "SolidFull";

			FlagMarkers set [_markerName,_markerPos];
		} forEach ExileLocations;
	}; // End case "ShowMapMarkersON"

	case ("ShowMapMarkersOFF") : {
		private ["_display", "_markerName"];
		disableSerialization;
		_display = uiNamespace getVariable ["BSF_AssetManagement_Dialog",displayNull];

		{
			_markerName = _x;
			deleteMarkerLocal _markerName;
		} forEach MapMarkers;

		{
			_markerName = _x;
			deleteMarkerLocal _markerName;
		} forEach FlagMarkers;

		ShowMapMarkersON = nil;
		(_display displayCtrl 20202) ctrlShow true;			// ShowMapMarkers_BtnON
		(_display displayCtrl 20203) ctrlShow false;		// ShowMapMarkers_BtnOFF
	}; // End case "ShowMapMarkersOFF"

	case ("PlayerFlagsON") : {
		private ["_display", "_size", "_marker1Name", "_marker", "_marker2Name", "_marker2", "_marker3Name", "_marker3"];
		disableSerialization;
		_display = uiNamespace getVariable ["BSF_AssetManagement_Dialog",displayNull];
		(_display displayCtrl 20205) ctrlShow false;
		(_display displayCtrl 20206) ctrlShow true;
		PlayerFlagsON = true;

		[] spawn BSF_Client_AssetManagement_FlagMarkersOn;

		["fnc_markerOn: END"] call BSF_Client_Util_Debug;
	}; // End case "PlayerFlagsON"

	case ("PlayerFlagsOFF") : {
		private ["_display"];
		disableSerialization;
		_display = uiNamespace getVariable ["BSF_AssetManagement_Dialog",displayNull];
		(_display displayCtrl 20205) ctrlShow true;
		(_display displayCtrl 20206) ctrlShow false;
		PlayerFlagsON = nil;
		{deleteMarkerLocal _x;} forEach ThisPlayersFlagMarkers;
		ThisPlayersFlagMarkers = [];
		["ErrorTitleOnly",["Base Markers toggled off."]] call ExileClient_gui_toaster_addTemplateToast;
	}; // End case "PlayerFlagsOFF"

	case ("FlagTest") : {
		private ["_display", "_canbuild", "_maximumTerritoryRadius", "_maximumNumberOfTerritoriesPerPlayer", "_numberOfTerritories", "_minimumDistanceToTraderZones", "_minimumDistanceToSpawnZones", "_minimumDistanceToOtherTerritories"];
		disableSerialization;
		_display = uiNamespace getVariable ["BSF_AssetManagement_Dialog",displayNull];

		_canbuild = true;
		_maximumTerritoryRadius = getNumber (missionConfigFile >> "CfgTerritories" >> "maximumRadius");
		_maximumNumberOfTerritoriesPerPlayer = getNumber (missionConfigFile >> "CfgTerritories" >> "maximumNumberOfTerritoriesPerPlayer");
		_numberOfTerritories = player call ExileClient_util_territory_getNumberOfTerritories;
		if (_numberOfTerritories >= _maximumNumberOfTerritoriesPerPlayer) exitWith {
				["You can't build any more territories!"] spawn ExileClient_gui_baguette_show;
				_canbuild = false;
			};
		_minimumDistanceToTraderZones = getNumber (missionConfigFile >> "CfgTerritories" >> "minimumDistanceToTraderZones");
		if ([player, _minimumDistanceToTraderZones + _maximumTerritoryRadius] call ExileClient_util_world_isTraderZoneInRange) then {
				["You are too close to a Trader!"] spawn ExileClient_gui_baguette_show;
				_canbuild = false;
			};
		_minimumDistanceToSpawnZones = getNumber (missionConfigFile >> "CfgTerritories" >> "minimumDistanceToSpawnZones");
		if ([player, _minimumDistanceToSpawnZones + _maximumTerritoryRadius] call ExileClient_util_world_isSpawnZoneInRange) then {
				["You are too close to a Spawn Zone!"] spawn ExileClient_gui_baguette_show;
				_canbuild = false;
			};
		_minimumDistanceToOtherTerritories = getNumber (missionConfigFile >> "CfgTerritories" >> "minimumDistanceToOtherTerritories");

		if ([player, _minimumDistanceToOtherTerritories + _maximumTerritoryRadius] call ExileClient_util_world_isTerritoryInRange) then {
				["You are too close to another flag!"] spawn ExileClient_gui_baguette_show;
				_canbuild = false;
			};
		if (player call ExileClient_util_world_isInNonConstructionZone) then {
					["Building is disallowed here!"] spawn ExileClient_gui_baguette_show;
				_canbuild = false;
			};
		if (player call ExileClient_util_world_isInConcreteMixerZone) then {
					["You are too close to a concrete mixer!"] spawn ExileClient_gui_baguette_show;
				_canbuild = false;
			};
		if (player call ExileClient_util_world_isInRadiatedZone) then {
					["You can't build in radiation zones!"] spawn ExileClient_gui_baguette_show;
				_canbuild = false;
			};
		if (_canbuild) then {
				["You can build here!!"] spawn ExileClient_gui_baguette_show;
			};
	}; // End case "FlagTest"

	case ("TerritorySelect") : {
		private ["_display", "_selTerritoryIndex", "_territoryList", "_selTerritoryID", "_selectedFlagData", "_flagObject", "_territorySize", "_territoryLevel", "_territoryPic", "_territoryPos", "_territoryLevelConfigs", "_configIndex", "_currentConfig", "_maxParts", "_parts", "_territorysize"];
        ["BSF_Client_AssetManagement_GUI_Load TerritorySelect - Top"] call BSF_Client_Util_Debug;

		disableSerialization;
		_display = uiNamespace getVariable ["BSF_AssetManagement_Dialog",displayNull];

		_selTerritoryIndex = _this select 1;
		_territoryList = (_display displayCtrl 20231);
		_selTerritoryID = parseNumber (_territoryList lbData (lbCurSel _territoryList));
		_selectedFlagData = ThisPlayersFlags get _selTerritoryID;

		_flagObject = (_selectedFlagData select 9) select 0;
		_territorySize = ThisPlayersFlags get _selTerritoryID select 2;
		_territoryLevel = ThisPlayersFlags get _selTerritoryID select 3;
		_territoryPic = flagTexture _flagObject;
		_territoryPos = ThisPlayersFlags get _selTerritoryID select 1;
		_territoryLevelConfigs = getArray (missionConfigFile >> "CfgTerritories" >> "prices");
		_configIndex = _territoryLevel - 1;
		_currentConfig = _territoryLevelConfigs select _configIndex;
		_maxParts = _currentConfig select 2;
		_parts = count (_territoryPos nearObjects ["Exile_Construction_Abstract_Static", _territorySize]);
		_flagObject setVariable ["TerritoryPartsCount", _parts];
		_storedVehiclesCount = count (_flagObject getVariable ["ExileTerritoryStoredVehicles", []]);

		if (((position player) distance _flagObject) < 15) then {
		  PlayerInSelectedTerritory = true;
		} else {
		  PlayerInSelectedTerritory = false;
		};

		(_display displayCtrl 20241) ctrlSetText str _storedVehiclesCount;
		(_display displayCtrl 20232) ctrlSetText _territoryPic;
		(_display displayCtrl 20236) ctrlSetText str _territoryLevel;
		(_display displayCtrl 20237) ctrlSetText format["%1 Meters",str _territorysize];
		(_display displayCtrl 20238) ctrlSetText format["%1 of %2",str _parts ,str _maxParts];

		[_flagObject] call fnc_AM_initState;
		[_flagObject] call fnc_SetDueDate;
		[_flagObject] call fnc_MemberListBox;

        ["BSF_Client_AssetManagement_GUI_Load TerritorySelect - End"] call BSF_Client_Util_Debug;

	}; // End case "TerritorySelect"

	case ("DeleteTerritoryConfirmation1") : {
		private ["_display", "_territoryList", "_selTerritoryID", "_selectedFlagData", "_flagObject"];
		disableSerialization;
		_display = uiNamespace getVariable ["BSF_AssetManagement_Dialog",displayNull];
		_territoryList = (_display displayCtrl 20231);
		_selTerritoryID = parseNumber (_territoryList lbData (lbCurSel _territoryList));
		_selectedFlagData = ThisPlayersFlags get _selTerritoryID;
		_flagObject = (_selectedFlagData select 9) select 0;

		if ((_flagObject getVariable ["TerritoryPartsCount", 0]) > 0) then 
		{
			["ErrorTitleOnly",["You need to remove all items before deleting flag!"]] call ExileClient_gui_toaster_addTemplateToast;
			["Load"] call BSF_Client_AssetManagement_GUI_Load;
		}
		else
		{
			{(_display displayCtrl _x) ctrlShow false;
			} forEach [20201, 20204, 20207, 20208, 20210, 20211, 20230, 20231, 20232, 20233, 20234, 20235, 20236, 20237, 20238, 20239, 20250, 20251, 20260, 20261, 20262, 20263, 20264, 30107, 30113, 30114, 30003, 30004, 30005, 30006, 30201, 30008, 30009, 30010, 30202, 30011, 30012, 30013, 20500, 20202, 20203, 20205, 20206, 30108, 30109, 30110, 30111, 30112, 30115, 30116, 30117, 20501, 20502, 20280, 20281, 20282, 20240, 20241];

			{(_display displayCtrl _x) ctrlShow true;
			} forEach [20503,20505,20506,20510,20511];
		};
	}; // End case "DeleteTerritoryConfirmation1"

	case ("DeleteTerritoryConfirmation2") : {
		private ["_display"];
		disableSerialization;
		_display = uiNamespace getVariable ["BSF_AssetManagement_Dialog",displayNull];

		{(_display displayCtrl _x) ctrlShow false;
		} forEach [20503,20510,20511];

		{(_display displayCtrl _x) ctrlShow true;
		} forEach [20504,20505,20506,20512,20513];
	}; // End case "DeleteTerritoryConfirmation2"

	case ("DeleteTerritory") : {
		private ["_display", "_territoryList", "_selTerritoryID", "_selectedFlagData", "_flagObject", "_holder"];
		disableSerialization;
		_display = uiNamespace getVariable ["BSF_AssetManagement_Dialog",displayNull];

		_territoryList = (_display displayCtrl 20231);
		_selTerritoryID = parseNumber (_territoryList lbData (lbCurSel _territoryList));
		_selectedFlagData = ThisPlayersFlags get _selTerritoryID;
		_flagObject = (_selectedFlagData select 9) select 0;
		_pos = _selectedFlagData select 1;

		lbClear _territoryList;
		(_display displayCtrl 20232) ctrlSetText "";

		_holder = createVehicle ['groundWeaponHolder', _pos, [], 0, 'CAN_COLLIDE'];
		_pos set[2,(_pos select 2)+0.1];
		_holder setPosATL _pos;
		_holder addItemCargoGlobal ['Exile_Item_Flag',1];
		["ErrorTitleOnly",["Deleting flag!"]] call ExileClient_gui_toaster_addTemplateToast;

		private _objects = _flagObject getVariable ["ExileRadiusObjects", []];
		{deleteVehicle _x;} forEach _objects;

		['DeleteFlagRequest', [_selTerritoryID, _flagObject]] call ExileClient_system_network_send;
		ThisPlayersFlags deleteAt _selTerritoryID;
		if !(isNil "ThisPlayersFlagMarkers") then {[] spawn fnc_updateMarkerNames;};
	
		// if (PlayerFlagsON) then {[] spawn fnc_updateMarkerNames;};
		["Load", 0] call BSF_Client_AssetManagement_GUI_Load;
	}; // End case "DeleteTerritory"

	case ("ChangeFlag") : {
		// private ["_display", "_displaySetupTerritory", "_territoryList", "_territoryListSelection", "_flagObject", "_flagID", "_ExileTerritoryName", "_ExistingFlagTexture", "_newTerritoryName", "_alphabet", "_forbiddenCharacter", "_listBox", "_newFlagTexture", "_timeOut1", "_timeOut2", "_flagTexture"];
		disableSerialization;
		_display = uiNamespace getVariable ["BSF_AssetManagement_Dialog",displayNull];
        ["ChangeFlag - Top"] call BSF_Client_Util_Debug;

		fnc_displayFlagSetup_OK = {
			_displaySetupTerritory = uiNameSpace getVariable ["BSF_ChangeTerritory_Dialog", displayNull];
			_display = uiNamespace getVariable ["BSF_AssetManagement_Dialog",displayNull];
			_newTerritoryName = ctrlText (_displaySetupTerritory displayCtrl 4000);

			_alphabet = getText (missionConfigFile >> "CfgClans" >> "clanNameAlphabet");
			_forbiddenCharacter = [_newTerritoryName, _alphabet] call ExileClient_util_string_containsForbiddenCharacter;
			if !(_forbiddenCharacter isEqualTo -1) exitWith 
			{
				["ErrorTitleAndText", ["infiSTAR TM", "Forbidden Character"]] call ExileClient_gui_toaster_addTemplateToast;
				false
			};

			_listBox = _displaySetupTerritory displayCtrl 4001;
			_newFlagTexture = _listBox lbData (lbCurSel _listBox);

			if (!isNil"BSF_btn_NameChange_thread") then 
			{
				terminate BSF_btn_NameChange_thread;
				BSF_btn_NameChange_thread=nil;
			};
			BSF_btn_NameChange_thread = [_newTerritoryName, _newFlagTexture] spawn {
				params ["_newTerritoryName", "_newFlagTexture"];
				disableSerialization;
				_displaySetupTerritory = uiNameSpace getVariable ["BSF_ChangeTerritory_Dialog", displayNull];
				_display = uiNamespace getVariable ["BSF_AssetManagement_Dialog",displayNull];

				_flagObject = (BSF_FlagToChange select 9) select 0;
				_flagID = BSF_FlagToChange select 0;
				_ExileTerritoryName = _flagObject getVariable ["ExileTerritoryName",""];
				_ExistingFlagTexture = flagTexture _flagObject;
					
				if(!(_ExileTerritoryName isEqualTo _newTerritoryName) || !(_ExistingFlagTexture isEqualTo _newFlagTexture))then
				{
					['ChangeTerritoryRequest', [_flagID,_newTerritoryName,_newFlagTexture,_flagObject,clientOwner]] call ExileClient_system_network_send;
				};

				if!(_ExileTerritoryName isEqualTo _newTerritoryName)then
				{
					_timeOut1 = time + 10;
					waitUntil { _flagObject getVariable ["ExileTerritoryName",""] isEqualTo _newTerritoryName || time > _timeOut1 };
					["SuccessTitleAndText", ["Success", format["%1 is now named %2.",_ExileTerritoryName,_newTerritoryName]]] call ExileClient_gui_toaster_addTemplateToast;
				};
				
				if!((flagTexture _flagObject) isEqualTo _newFlagTexture)then
				{
					_timeOut2 = time + 10;
					waitUntil { (flagTexture _flagObject) isEqualTo _newFlagTexture || time > _timeOut2};
					["SuccessTitleAndText", ["Success", "Flag image changed!"]] call ExileClient_gui_toaster_addTemplateToast;
				};

				ThisPlayersFlags deleteAt _flagID;
				_id = _flagID;
				_pos = position _flagObject;
				_size = _flagObject getVariable ["ExileTerritorySize",""];
				_level = _flagObject getVariable ["ExileTerritoryLevel",""];
				_owner = _flagObject getVariable ["ExileOwnerUID",""];
				_name = _newTerritoryName;
				_texture = _newFlagTexture;
				_buildRights = _flagObject getVariable ["ExileTerritoryBuildRights",""];
				_moderators = _flagObject getVariable ["ExileTerritoryModerators",""];
				ThisPlayersFlags set [_id ,[_id, _pos, _size, _level, _owner, _name, _texture, _buildRights, _moderators, [_flagObject]]];

				if !(isNil "ThisPlayersFlagMarkers") then {[] spawn fnc_updateMarkerNames;};
			};

			closeDialog 1;
		};

		fnc_displayFlagSetup = {
			_flagObject = (BSF_FlagToChange select 9) select 0;

			if(isNull(uiNameSpace getVariable ["BSF_ChangeTerritory_Dialog", displayNull]))then{createDialog ["BSF_ChangeTerritory_Dialog", true];};
			_displaySetupTerritory = uiNameSpace getVariable ["BSF_ChangeTerritory_Dialog", displayNull];

			_ExileTerritoryName = _flagObject getVariable ["ExileTerritoryName",""];
			(_displaySetupTerritory displayCtrl 4000) ctrlSetText _ExileTerritoryName;

			_flagTexture = flagTexture _flagObject;

			_listBox = _displaySetupTerritory displayCtrl 4001;
			lbClear _listBox;
			_lbId = _listBox lbAdd "-- Current FlagTexture";
			_listBox lbSetData [_lbId,_flagTexture];
			_listBox lbSetPicture [_lbId,_flagTexture];
			_listBox lbSetCurSel _territoryListSelection;

			_myUID = getPlayerUID player;
			_flags = [];

			if(isClass (missionConfigFile >> "CfgFlags"))then
			{
				_flags = _flags + ("true" configClasses (missionConfigFile >> "CfgFlags"));
			};
			_flags = _flags + ("true" configClasses (configFile >> "CfgFlagsNative"));
			{
				_restrictToUID = getArray (_x >> "uids");
				if ((_myUID in _restrictToUID) || (_restrictToUID isEqualTo [])) then
				{
					_xTexture = getText (_x >> "texture");
					_lbId = _listBox lbAdd (getText (_x >> "name"));
					_listBox lbSetData [_lbId,_xTexture];
					_listBox lbSetPicture [_lbId,_xTexture];
				};
			}
			forEach _flags;

	        ["fnc_displayFlagSetup - End"] call BSF_Client_Util_Debug;

		};

		_territoryList = (_display displayCtrl 20231);
		format['*******_territoryList : %1 - %2', _territoryList, typeName _territoryList] call BSF_Client_Util_Debug;

		_selTerritoryID = parseNumber (_territoryList lbData (lbCurSel _territoryList));
		BSF_FlagToChange = nil;
		BSF_FlagToChange = ThisPlayersFlags get _selTerritoryID;

		format['CHANGE FLAG 1 BSF_FlagToChange: %1', BSF_FlagToChange] call BSF_Client_Util_Debug;

		[] call fnc_displayFlagSetup;
	}; // End case "ChangeFlag"

	case ("RadiusShow") : {
		private ["_display", "_territoryList", "_selTerritoryID", "_selectedFlagData", "_flagObject", "_radius", "_flagPos", "_objects", "_location", "_i", "_object"];
		disableSerialization;
		_display = uiNamespace getVariable ["BSF_AssetManagement_Dialog",displayNull];
		_territoryList = (_display displayCtrl 20231);
		_selTerritoryID = parseNumber (_territoryList lbData (lbCurSel _territoryList));
		_selectedFlagData = ThisPlayersFlags get _selTerritoryID;
		_flagObject = (_selectedFlagData select 9) select 0;

////////////////////////////////////////

		// _maximumSearchRadius = (getNumber (missionConfigFile >> "CfgTerritories" >> "maximumRadius")) * 2;


		// _maximumSearchRadius = 1500;
		// _nearbyNonConZones = allMapMarkers select { player distance getMarkerPos _x < _maximumSearchRadius  && markerType _x == "ExileNonConstructionZone"};
		// _nearbySpawnZones = allMapMarkers select { player distance getMarkerPos _x < _maximumSearchRadius  && markerType _x == "ExileSpawnZone"};
		// _nearbyTraderZones = allMapMarkers select { player distance getMarkerPos _x < _maximumSearchRadius  && markerType _x == "ExileTraderZone"};
		// _markerArray = [];
		// {
		// 	_size = markerSize _x;
		// 	_pos = markerPos _x;
		// 	_markerArray pushBack [_x, _pos, _size select 0];
		// } forEach (_nearbyNonConZones + _nearbySpawnZones + _nearbyTraderZones);

		// _radius = 50;
		// _flagPos = getPos player;
		// _objects = [];

		// _deg = 360 / ((6.28 * _radius) / 8);
		// ["InfoTitleAndText", ["PlayerInSelectedTerritory", format["_deg: %1", _deg]]] call ExileClient_gui_toaster_addTemplateToast;

		// for "_i" from 0 to 360 step _deg do 
		// {
		// 	_location = [(_flagPos select 0) + ((cos _i) * _radius), (_flagPos select 1) + ((sin _i) * _radius), 0];
		// 	_prohibited = false;
		// 	{
		// 	_pos = _x select 1;
		// 	_size = _x select 2;
		// 	if ((_location distance _pos) < _size) then {_prohibited = true;};
		// 	} forEach _markerArray;

		// 	if (_prohibited) then {
		// 		_object = createVehicle ["Sign_Arrow_F", _location, [], 0, "CAN_COLLIDE"];
		// 	} else {
		// 		_object = createVehicle ["Sign_Arrow_Green_F", _location, [], 0, "CAN_COLLIDE"];
		// 	};		
		// 	_objects pushBack _object;
		// 	_i = _i +1;
		// };


////////////////////

		_maximumSearchRadius = 1500;
		_nearbyNonConZones = allMapMarkers select { player distance getMarkerPos _x < _maximumSearchRadius  && markerType _x == "ExileNonConstructionZone"};
		_nearbySpawnZones = allMapMarkers select { player distance getMarkerPos _x < _maximumSearchRadius  && markerType _x == "ExileSpawnZone"};
		_nearbyTraderZones = allMapMarkers select { player distance getMarkerPos _x < _maximumSearchRadius  && markerType _x == "ExileTraderZone"};
		_markerArray = [];
		{
			_size = markerSize _x;
			_pos = markerPos _x;
			_markerArray pushBack [_x, _pos, _size select 0];
		} forEach (_nearbyNonConZones + _nearbySpawnZones + _nearbyTraderZones);

		_radius = _flagObject getVariable ["ExileTerritorySize", -1];
		_flagPos = getPos _flagObject;
		_objects = [];

		_deg = 360 / ((6.28 * _radius) / 8);
		for "_i" from 0 to 360 step _deg do 
		{
			_location = [(_flagPos select 0) + ((cos _i) * _radius), (_flagPos select 1) + ((sin _i) * _radius), 0];
			_prohibited = false;
			{
			_pos = _x select 1;
			_size = _x select 2;
			if ((_location distance _pos) < _size) then {_prohibited = true;};
			} forEach _markerArray;

			if (_prohibited) then {
				_object = createVehicle ["Sign_Arrow_F", _location, [], 0, "CAN_COLLIDE"];
			} else {
				_object = createVehicle ["Sign_Arrow_Green_F", _location, [], 0, "CAN_COLLIDE"];
			};		
			_objects pushBack _object;
			_i = _i +1;
		};

		_flagObject setVariable ["ExileRadiusObjects",_objects];
		_flagObject setVariable ["ExileRadiusShown", true];
		[_flagObject] call fnc_AM_initState;
	}; // End case "RadiusShow"

	case ("RadiusHide") : {
		private ["_display", "_territoryList", "_selTerritoryID", "_selectedFlagData", "_flagObject", "_objects"];
		disableSerialization;
		_display = uiNamespace getVariable ["BSF_AssetManagement_Dialog",displayNull];
		_territoryList = (_display displayCtrl 20231);
		_selTerritoryID = parseNumber (_territoryList lbData (lbCurSel _territoryList));
		_selectedFlagData = ThisPlayersFlags get _selTerritoryID;
		_flagObject = (_selectedFlagData select 9) select 0;

		private _objects = _flagObject getVariable ["ExileRadiusObjects", []];
		{
			deleteVehicle _x;
		} forEach _objects;
		_flagObject setVariable ["ExileRadiusShown", false];
		[_flagObject] call fnc_AM_initState;
	}; // End case "RadiusHide"

	////////////////// BEGIN LOJACK
	case ("VehHP_ON") : {
		// private ["_display", "_obj", "_start", "_end", "_lineIntersectsWith", "_lineintersectsobjs", "_health", "_z", "_clr", "_xSize", "_ySize", "_hitPointsDamage", "_hitpointsNamesArray", "_selectionsNamesArray", "_damageValuesArray", "_hitPoint", "_selection", "_selectionpos", "_damage"];
		_display = uiNamespace getVariable ["BSF_AssetManagement_Dialog",displayNull];

		VEHICLE_HP_BARS_ID = addMissionEventHandler ['Draw3D',{
			{
				_obj = _x;
				if(!isNull _obj)then
				{
					_start = eyePos player;
					_end = eyePos _obj;

					if(lineIntersects [_start, _end, player, _obj])exitWith{true};

					_lineIntersectsWith = lineIntersectsWith [_start, _end, player, _obj];
					if(count _lineIntersectsWith > 0)exitWith{true};

					_lineintersectsobjs = lineintersectsobjs [_start, _end,objnull,_obj,false,16];
					if(count _lineintersectsobjs > 0)exitWith{true};

					_health = round((1-(damage _obj))*100);
					_z = (sizeOf (typeOf _obj))/8;
					_clr = [0,0,0,1];
					if(alive _obj)then
					{
						_clr = _health call {
							if(_this < 5)exitWith{[1,0.25,0,1]};
							if(_this < 15)exitWith{[1,0.45,0,1]};
							if(_this < 25)exitWith{[1,0.55,0,1]};
							if(_this < 35)exitWith{[1,0.65,0,1]};
							if(_this < 45)exitWith{[1,0.75,0,1]};
							if(_this < 55)exitWith{[1,0.85,0,1]};
							if(_this < 65)exitWith{[1,0.85,0,1]};
							if(_this < 75)exitWith{[0.9,0.85,0,1]};
							if(_this < 85)exitWith{[0.8,0.95,0,1]};
							if(_this < 95)exitWith{[0.6,0.95,0,1]};
							[0,1,0,1]
						};
					};
					_xSize = 0.4+(_health/15);
					_ySize = 0.4;
					drawIcon3D ['\A3\ui_f\data\map\Markers\Military\box_CA.paa',_clr,_obj modelToWorldVisual [0,0,_z], _xSize, _ySize, 0,'', 1, 0.025, 'PuristaMedium'];

					if!(_obj isEqualTo cursorObject)exitWith{true};

					_hitPointsDamage = getAllHitPointsDamage _obj;
					if(_hitPointsDamage isEqualTo [])exitWith{true};

					_hitpointsNamesArray = _hitPointsDamage select 0;
					_selectionsNamesArray = _hitPointsDamage select 1;
					_damageValuesArray = _hitPointsDamage select 2;

					{
						_hitPoint = _x;
						if!(_hitPoint isEqualTo '')then
						{
							_hitPoint = _hitPoint select [3,count _hitPoint];
							_selection = _selectionsNamesArray select _forEachIndex;
							if!(_selection isEqualTo '')then
							{
								_selectionpos = _obj selectionPosition _selection;
								_pos = _obj modelToWorldVisual _selectionpos;

								_damage = _damageValuesArray select _forEachIndex;
								_health = round((1-(_damage))*100);
								_z = (sizeOf (typeOf _obj))/8;
								_clr = [0,0,0,1];
								if(alive _obj)then
								{
									_clr = _health call {
										if(_this < 5)exitWith{[1,0.25,0,1]};
										if(_this < 15)exitWith{[1,0.45,0,1]};
										if(_this < 25)exitWith{[1,0.55,0,1]};
										if(_this < 35)exitWith{[1,0.65,0,1]};
										if(_this < 45)exitWith{[1,0.75,0,1]};
										if(_this < 55)exitWith{[1,0.85,0,1]};
										if(_this < 65)exitWith{[1,0.85,0,1]};
										if(_this < 75)exitWith{[0.9,0.85,0,1]};
										if(_this < 85)exitWith{[0.8,0.95,0,1]};
										if(_this < 95)exitWith{[0.6,0.95,0,1]};
										[0,1,0,1]
									};
								};
								_xSize = 0.2+(_health/25);
								_ySize = 0.2;
								drawIcon3D ['\A3\ui_f\data\map\Markers\Military\box_CA.paa',_clr ,_pos, _xSize, _ySize, 0, _hitPoint, 1, 0.025, 'PuristaMedium'];
							};
						};
					} forEach _hitpointsNamesArray;
				};
			} forEach (cameraOn nearEntities[['LandVehicle', 'Ship', 'Air'], 100]);
		}];

		[] call fnc_AM_initState;

		['SuccessTitleOnly', ['Added Vehicle HP Bars.']] call ExileClient_gui_toaster_addTemplateToast;
	}; // End case "VehHP_ON"	

	case ("VehHP_OFF") : {
		private ["_display"];
		_display = uiNamespace getVariable ["BSF_AssetManagement_Dialog",displayNull];
		removeMissionEventHandler ['Draw3D',VEHICLE_HP_BARS_ID];
		VEHICLE_HP_BARS_ID=nil;
		[] call fnc_AM_initState;
		['ErrorTitleOnly', ['Removed Vehicle HP Bars.']] call ExileClient_gui_toaster_addTemplateToast;
	}; // End case "VehHP_OFF"

	case ("ToggleMarker") : {
		private ["_display", "_ctrlVehiclesContainer", "_vehicleID", "_thisVehicle", "_thisMarkerOn", "_markerName", "_markerPos", "_markerDir", "_marker1", "_marker2", "_marker3", "_markedColor", "_markerName2"];
		_display = uiNamespace getVariable ["BSF_AssetManagement_Dialog",displayNull];
    	_ctrlVehiclesContainer = (_display displayCtrl 30201);
		_vehicleID = _ctrlVehiclesContainer lnbData [lnbCurSelRow _ctrlVehiclesContainer,0];
		_thisVehicle = BSF_PlayerVehicles get (parseNumber _vehicleID);
		_thisVehicle params ["_vehID","_ownerUID","_vehClass","_vehName","_territoryID","_territoryName","_isLocked","_fuel","_damage","_pin_code","_position_x","_position_y","_position_z","_cargo_items","_cargo_magazines","_cargo_weapons","_cargo_container","_money","_hitPoints","_clanID","_clanName","_ownerName","_vehObject"];

		if (AllVehicleMarkersOn == 0) then {AllVehicleMarkersOn = 2;}; 

		_thisMarkerOn = _vehObject getVariable "BSF_MarkerOn";
		switch (_thisMarkerOn) do 
		{
			case 0 : { // Create Marker
				_markerName = format["%1_%2", _vehID, _vehClass];
				_markerPos = position _vehObject;
				_markerDir = direction _vehObject;
				_marker1 = createMarkerLocal [format["%1_2",_markerName] , _markerPos];
				_marker1 setMarkerShapeLocal "ELLIPSE";
				_marker1 setMarkerColorLocal "ColorBlack";
				_marker1 setMarkerSizeLocal [300,300];
				_marker1 setMarkerAlphaLocal 1;
				_marker1 setMarkerBrushLocal "Border";

				_marker2 = createMarkerLocal [format["%1_3",_markerName] , _markerPos];
				_marker2 setMarkerShapeLocal "ELLIPSE";
				_marker2 setMarkerColorLocal "ColorOrange";
				_marker2 setMarkerSizeLocal [300,300];
				_marker2 setMarkerAlphaLocal 0.5;
				_marker2 setMarkerBrushLocal "SolidFull";

				_marker3 = createMarkerLocal [_markerName, _markerPos];
				_marker3 setMarkerDirLocal _markerDir;
				_marker3 setMarkerTextLocal _vehName;
				_marker3 setMarkerTypeLocal "mil_dot";
				_marker3 setMarkerColorLocal "ColorBlack";

				_markedColor = [15 / 255, 207 / 255, 15 / 255, 1];	// Green
				_ctrlVehiclesContainer lnbSetColor [[(lbCurSel _ctrlVehiclesContainer), 5], _markedColor];
				_ctrlVehiclesContainer lnbSetData [[(lbCurSel _ctrlVehiclesContainer),5], "YES"];
				_ctrlVehiclesContainer lnbSetData [[(lbCurSel _ctrlVehiclesContainer),4], _markerName];

				VehicleMarkers set [_vehID, _markerName];
				_vehObject setVariable ["BSF_MarkerOn", 1];
				[] call fnc_AM_initState;	
			};
			case 1 : { // Delete Marker
				_markerName = format["%1_%2", _vehID, _vehClass];

				_markedColor = [207 / 255, 23 / 255, 10 / 255, 1];	// Red
				_ctrlVehiclesContainer lnbSetColor [[(lbCurSel _ctrlVehiclesContainer), 5], _markedColor];
				_ctrlVehiclesContainer lnbSetData [[(lbCurSel _ctrlVehiclesContainer),5], "NO"];
				_vehID = parseNumber (_ctrlVehiclesContainer lnbData [lnbCurSelRow _ctrlVehiclesContainer,0]);

				deleteMarkerLocal _markerName;
				deleteMarkerLocal format["%1_2",_markerName];
				deleteMarkerLocal format["%1_3",_markerName];

				VehicleMarkers deleteAt _vehID;
				_vehObject setVariable ["BSF_MarkerOn", 0];
				[] call fnc_AM_initState;
			};
			default {};
		};
	}; // End case "Marker"

	case ("ToggleMarkerAll") : {
		private ["_ctrlVehiclesContainer", "_markerName", "_markerPos", "_markerDir", "_marker2", "_marker3", "_marker"];
		_display = uiNamespace getVariable ["BSF_AssetManagement_Dialog",displayNull];
    	_ctrlVehiclesContainer = (_display displayCtrl 30201);

    	switch (AllVehicleMarkersOn) do {
    		case 0 : { // Create Markers
				
				[] call fnc_deleteAllVehMarkers;

				{
					_thisVehicle = BSF_PlayerVehicles get _x;
					_thisVehicle params ["_vehID","_ownerUID","_vehClass","_vehName","_territoryID","_territoryName","_isLocked","_fuel","_damage","_pin_code","_position_x","_position_y","_position_z","_cargo_items","_cargo_magazines","_cargo_weapons","_cargo_container","_money","_hitPoints","_clanID","_clanName","_ownerName","_vehObject"];

					if (_territoryID isEqualTo "") then {
						_markerName = format["%1_%2", _vehID, _vehClass];
						_markerPos = position _vehObject;
						_markerDir = direction _vehObject;

						_marker2 = createMarkerLocal [format["%1_2",_markerName] , _markerPos];
						_marker2 setMarkerShapeLocal "ELLIPSE";
						_marker2 setMarkerColorLocal "ColorBlack";
						_marker2 setMarkerSizeLocal [300,300];
						_marker2 setMarkerAlphaLocal 1;
						_marker2 setMarkerBrushLocal "Border";

						_marker3 = createMarkerLocal [format["%1_3",_markerName] , _markerPos];
						_marker3 setMarkerShapeLocal "ELLIPSE";
						_marker3 setMarkerColorLocal "ColorOrange";
						_marker3 setMarkerSizeLocal [300,300];
						_marker3 setMarkerAlphaLocal 0.5;
						_marker3 setMarkerBrushLocal "SolidFull";

						_marker = createMarkerLocal [_markerName, _markerPos];
						_marker setMarkerDirLocal _markerDir;
						_marker setMarkerTextLocal _vehName;
						_marker setMarkerTypeLocal "mil_dot";
						_marker setMarkerColorLocal "ColorBlack";

						VehicleMarkers set [_vehID, _markerName];
						_vehObject setVariable ["BSF_MarkerOn", 1];
					};
				} forEach BSF_PlayerVehicles;

				AllVehicleMarkersOn = 1;
				[] call fnc_AM_initState;
    		};

    		case 1 : { // Delete Markers
				[] call fnc_deleteAllVehMarkers;
    		};

    		case 2 : { // Mixed Markers
				[] call fnc_deleteAllVehMarkers;
    		};

			default {AllVehicleMarkersOn = 0;};
    	};

	}; // End case "ToggleMarkerAll"

	case ("Inventory") : {
		private ["_display", "_ctrlVehiclesContainer", "_ctrlVehicleInvContainer", "_vehicleID", "_thisVehicle", "_inventoryIndex", "_itemClass", "_configName", "_itemCount", "_itemDisplayName", "_itemPic", "_ctrlVehicleDetailCaptionsText", "_ctrlVehicleDetailText", "_maximumLoad", "_armor", "_fuelCapacity", "_maxSpeed", "_quality", "_PurchasePrice", "_PurchasePriceStr", "_sellPriceFactor", "_sellPrice", "_sellPriceStr", "_details", "_ctrlTxt"];
		["BSF_Client_AssetManagement_GUI_Load: INVENTORY START ###############"] call BSF_Client_Util_Debug;

		_display = uiNamespace getVariable ["BSF_AssetManagement_Dialog",displayNull];
    	_ctrlVehiclesContainer = (_display displayCtrl 30201);
    	_ctrlVehicleInvContainer = (_display displayCtrl 30202);

		lbClear _ctrlVehicleInvContainer;

		_vehicleID = _ctrlVehiclesContainer lnbData [lnbCurSelRow _ctrlVehiclesContainer,0];
		_thisVehicle = BSF_PlayerVehicles get (parseNumber _vehicleID);
		_thisVehicle params ["_vehID","_ownerUID","_vehClass","_vehName","_territoryID","_territoryName","_isLocked","_fuel","_damage","_pin_code","_position_x","_position_y","_position_z","_cargo_items","_cargo_magazines","_cargo_weapons","_cargo_container","_money","_hitPoints","_clanID","_clanName","_ownerName","_vehObject"];

		[_vehicleID] call BSF_Client_AssetManagement_GetVehicleInventory;
        ["BSF_Client_AssetManagement_GUI_Load: INVENTORY RETURN ###############"] call BSF_Client_Util_Debug;

		(_display displayCtrl 30201) ctrlSetText format["%1 Tabs", VehicleInventory get "tabs"];

		_inventoryIndex = 0;
		{
			_itemClass = _x;
			_configName = _x call ExileClient_util_gear_getConfigNameByClassName;
			_itemCount = VehicleInventory get _x;
			_itemDisplayName = getText(configFile >> _configName >> _x >> "displayName");
			_itemPic = getText(configFile >> _configName >> _x >> "picture");

			_ctrlVehicleInvContainer lnbAddRow [_itemDisplayName, str _itemCount];
			_ctrlVehicleInvContainer lnbSetPicture [[_inventoryIndex, 0], _itemPic];
			_ctrlVehicleInvContainer lnbSetData [[_inventoryIndex,0], _itemClass];
			_ctrlVehicleInvContainer lnbSetData [[_inventoryIndex,1], _itemDisplayName];
			_inventoryIndex = _inventoryIndex + 1;

		} forEach VehicleInventory;

		if (VehicleTabs > 0) then 
		{
			_ctrlVehicleInvContainer lnbAddRow ["PopTabs", str VehicleTabs];
			_ctrlVehicleInvContainer lnbSetPicture [[_inventoryIndex, 0], "\exile_assets\texture\ui\poptab_inline_ca.paa"];
			_ctrlVehicleInvContainer lnbSetData [[_inventoryIndex,1], "PopTabs"];
		};

		_ctrlVehicleInvContainer lnbSort [1, true];

		/////// DETAILS:
    	_ctrlVehicleDetailCaptionsText = (_display displayCtrl 30012);
    	_ctrlVehicleDetailText = (_display displayCtrl 30013);

		_maximumLoad = [getNumber(configFile >> "CfgVehicles" >> _vehClass >> "maximumLoad")] call BSF_Client_NumberToCommaSeparatedString;
		_armor = [getNumber(configFile >> "CfgVehicles" >> _vehClass >> "armor")] call BSF_Client_NumberToCommaSeparatedString;
		_fuelCapacity = getNumber(configFile >> "CfgVehicles" >> _vehClass >> "fuelCapacity");
		_maxSpeed = getNumber(configFile >> "CfgVehicles" >> _vehClass >> "maxSpeed");
		_quality = getNumber(missionConfigFile >> 'CfgExileArsenal' >> _vehClass >> 'quality');
		_PurchasePrice = getNumber(missionConfigFile >> 'CfgExileArsenal' >> _vehClass >> 'price');
		_PurchasePriceStr = [_PurchasePrice] call BSF_Client_NumberToCommaSeparatedString;
		_sellPriceFactor = getNumber(missionConfigFile >> 'CfgTrading' >> 'sellPriceFactor');
		_sellPrice = _PurchasePrice * _sellPriceFactor;
		_sellPriceStr = [_sellPrice] call BSF_Client_NumberToCommaSeparatedString;

		_details = (_maximumLoad+'<br/>'+_armor+'<br/>'+str _fuelCapacity+'<br/>'+str _maxSpeed+'<br/>'+_PurchasePriceStr+'<br/>'+_sellPriceStr+'<br/>'+str _quality);
		_ctrlTxt = "<t align='left'>"+_details+"</t>";
		_ctrlVehicleDetailText ctrlSetStructuredText parseText _ctrlTxt;

        ["BSF_Client_AssetManagement_GUI_Load: INVENTORY END ###############"] call BSF_Client_Util_Debug;

		[] call fnc_AM_initState;
	}; // End case "Inventory"

	case "Instructions" : {
		private ["_displayInst"];
		disableSerialization;
		createDialog "BSF_AssetManagement_Instructions_Dialog";
		_displayInst = uiNamespace getVariable ["BSF_AssetManagement_Instructions_Dialog",displayNull];
			// onMouseButtonDown = "createDialog 'BSF_AssetManagement_Instructions_Dialog'";
		// {ctrlShow [_x, true];
		// } forEach [20600, 20601, 20602];
		// {ctrlShow [_x, false];
		// } forEach [];

		// {ctrlEnable [_x, false];
		// } forEach [20202, 20203, 20205, 20206, 20208, 20250, 20261, 20262, 20263, 20264, 20501, 30108, 30109, 30110, 30111, 30112, 30115, 30116, 30117];

		if (isNil "AM_Inst_Active") then {AM_Inst_Active = false;};
		if (AM_Inst_Active == false) then {
			AM_Inst_Active = true;
			[] spawn {
				waitUntil{!isNil "AM_Inst_Active"};
				_displayInst = findDisplay 25303;
				while {(AM_Inst_Active == true)} do {
					(_displayInst displayCtrl 20002) ctrlShow true; // Green LED
					uiSleep 2;
					(_displayInst displayCtrl 20002) ctrlShow false;
					uiSleep 1.25;
				};
			};
			[] spawn {
				waitUntil{!isNil "AM_Inst_Active"};
				_displayInst = findDisplay 25303;
				while {(AM_Inst_Active == true)} do {
					(_displayInst displayCtrl 20003) ctrlShow true; // Orange LED
					uiSleep (random [0.25, 0.4, 1]);
					(_displayInst displayCtrl 20003) ctrlShow false;
					uiSleep (random [0.25, 0.4, 1]);
					(_displayInst displayCtrl 20003) ctrlShow true;
					uiSleep (random [0.15, 0.3, .75]);
					(_displayInst displayCtrl 20003) ctrlShow false;
					uiSleep (random [0.25, 0.4, .75]);	
				};
			};
		};

		// (_displayInst displayCtrl 20900) ctrlEnable true;
		_ctrlContent = (_displayInst displayCtrl 20102);
		_ctrlContent ctrlSetStructuredText parseText "";

		_content = "
			<img size='2' align='center' image='BSF_Client\images\BSF_Logo_Dirty_1024x256.paa' />
			<br />
			<br />
			<t font='PuristaBold'>ALL MAP MARKERS</t> will place markers on the map of MOST restricted building site.  NOTE: all BS-Free rules still apply regarding allowed base locations.  If we missed a marker location that does not mean that it's OK to go against the rules.  If you place your flag right next to a restricted area you will not be able to place objects restricted area. <br />
			<t font='PuristaBold'>MY FLAGS MARKERS</t> will place markers on the map at your territoy locations. <br />
			<t font='PuristaBold'>TERRITORY RADIUS</t> will spawn the floating arrows that show the border of the selected territory. Red arrows indicate that part of your territory overlaps a restricted area. <br />
			<t font='PuristaBold'>FLAG TEST</t> will let you know if building is allowed at your current position. See the note above regarding rules. <br />
			<t font='PuristaBold'>CHANGE FLAG</t> will allow you to change the name and/or flag of the selected territory. <br />
			<t font='PuristaBold'>DELETE FLAG</t> will allow you to remove the flag and completely delete the territory. To enable deletion of the selected territory you must be near the flag, have all vehicles out of VG for that base, and have no constructions placed on that base.
			<t font='PuristaBold'>LEAVE, KICK, PROMOTE, DEMOTE</t> allows you tom oderate building and moderation rights to the selected territory. <br />

			The <t font='PuristaBold'>VEHICLES IN INVENTORY</t> box shows all vehicles that are registered to your UID including their current grid location and virtual garage status. <br />
			RED <t font='PuristaBold' color = '#cf170a'>VG</t> = not stored in VG, GREEN <t font='PuristaBold' color = '#0fcf0f'>VG</t> = Stored in standard VG, BLUE <t font='PuristaBold' color = '#030bfc'>VG</t> = stored in the single-use VG. <br />
			<t font='PuristaBold'>VEHICLE HP BARS</t> will turn on the health indicators for all vehicles. <br />
			<t font='PuristaBold'>THIS VEHICLE MARKER</t> will place a map marker the the selected vehicle's location. <br />
			<t font='PuristaBold'>ALL VEH. MARKERS</t> will toggle map markers for all of your vehicles.  NOTE: Vehicles stored in VG cannot be marked on map. <br />
			<br />
			Press <t font='PuristaBold'>ESC</t> to go back
			";
  		 _ctrlContent ctrlSetStructuredText parseText _content;
	}; // End case "Instructions"

/*
			Most magazines can be broken down into 3 parts... bullets, casings, and powder. 
			There are currently 5 classes of ammo components.  Those are:
			<br />
			     <t font='PuristaSemibold'>Handgun</t> - 1 bullet, 1 case, and 1 powder returned per round.<br />
			     <t font='PuristaSemibold'>Rifle</t> - 1 bullet, 1 case, and 2 powder returned per round. <br />
			     <t font='PuristaSemibold'>Large Caliber</t> - 1 bullet, 1 case, and 3 powder returned per round. <br />
			     <t font='PuristaSemibold'>Shotgun Pellets</t> - 1 unit of pellets, 1 case, and 2 powder returned per round.<br />
			     <t font='PuristaSemibold'>Shotgun Slugs</t> - 1 slug, 1 case, and 2 powder returned per round. <br />
			<br />
			The <t font='PuristaBold'>MAGS IN IVENTORY</t> panel lists every mag type currently in inventory, how many you have, and what the component return count will be if recycled. 
			Clicking on <t font='PuristaBold'>DISASSEMBLE SELECTED</t> will recycle every mag of that type in inventory and deposit the returned parts to inventory.
			<t size='1.1'> </t>
			<br />
			<br />
			<t font='PuristaSemibold'>There are 2 ways to craft magazines:</t> 
			<br />
			<t font='PuristaBold'>1 -</t> Select a weapon in the <t font='PuristaBold'>WEAPONS IN IVENTORY</t> panel. 
			All craftable mags for that weapon will appear in the panel below. Select one of these mags.  If you have the required components, click <t font='PuristaBold'>CRAFT SELECTED</t>.
			<br />
			<t font='PuristaBold'>2 -</t> Select category and recipe from the appropriate dropdown menus. Again, if you have the required components, click <t font='PuristaBold'>CRAFT SELECTED</t>.
			<br />

*/




	case "Back" : {
		private ["_display"];
		disableSerialization;
		_display = uiNamespace getVariable ["BSF_AssetManagement_Dialog",displayNull];

		{ctrlShow [_x, false];
		} forEach [20600, 20601, 20602];
		{ctrlShow [_x, true];
		} forEach [];
		// {ctrlEnable [_x, true];
		// } forEach [20202, 20203, 20205, 20206, 20208, 20250, 20261, 20262, 20263, 20264, 20501, 30108, 30109, 30110, 30111, 30112, 30115, 30116, 30117];

	}; // End case "Instructions"

	case ("X2") : {
		private ["_display"];
		disableSerialization;
		_display = uiNamespace getVariable ["BSF_AssetManagement_Dialog",displayNull];
	}; // End case "X2"

	case ("UnLoad") : {
		private ["_display"];
		disableSerialization;
		_display = uiNamespace getVariable ["BSF_AssetManagement_Dialog",displayNull];
		AM_Active = false;
		// closeDialog 0;
	}; // End case "UnLoad"
};

