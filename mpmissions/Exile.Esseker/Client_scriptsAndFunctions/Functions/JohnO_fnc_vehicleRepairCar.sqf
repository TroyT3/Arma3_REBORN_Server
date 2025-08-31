/**
 * ExileClient_object_vehicle_repair (rewritten)
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */

private [
    "_vehicle","_availableHitpoints","_equippedMagazines",
    "_hasDamage","_req","_missing",
    "_animation","_keyDownHandle","_mouseButtonDownHandle",
    "_startTime","_duration","_sleepDuration","_progress",
    "_display","_label","_progressBarBackground","_progressBarMaxSize",
    "_progressBar","_progressBarColor"
];

if (ExileClientActionDelayShown) exitWith { false };
ExileClientActionDelayShown = true;
ExileClientActionDelayAbort = false;

_vehicle = _this select 0;

if (vehicle player isEqualTo _vehicle) exitWith {
    ["InfoTitleAndText", ["Repair Info", "Are you serious?"]] call ExileClient_gui_toaster_addTemplateToast;
    ExileClientActionDelayShown = false;
    ExileClientActionDelayAbort = false;
    false
};

// Anything at all damaged?
_availableHitpoints = (getAllHitPointsDamage _vehicle) select 0;
_hasDamage = (_availableHitpoints findIf { (_vehicle getHitPointDamage _x) > 0 }) != -1;

if (!_hasDamage) exitWith {
    ["InfoTitleAndText", ["Repair Info", "This vehicle is already fully repaired"]] call ExileClient_gui_toaster_addTemplateToast;
    ExileClientActionDelayShown = false;
    ExileClientActionDelayAbort = false;
    false
};

// Require locality (driver seat trick)
if (!local _vehicle) then {
    ["InfoTitleAndText", ["Repair Info", "Get in driver seat first"]] call ExileClient_gui_toaster_addTemplateToast;
} else {

	// Item checks (toolbox, wrench, duct tape, junk metal)
	_equippedMagazines = magazines player;
	_req     = ["Exile_Item_Foolbox","Exile_Item_Wrench","Exile_Item_DuctTape","Exile_Item_JunkMetal"];
	_missing = _req select { !(_x in _equippedMagazines) };

	// human names (hard-coded)
	if (isNil "BSF_ItemNameMap") then {
		BSF_ItemNameMap = createHashMapFromArray [
			["Exile_Item_Foolbox",  "Toolbox"],
			["Exile_Item_Wrench",   "Wrench"],
			["Exile_Item_DuctTape", "Duct Tape"],
			["Exile_Item_JunkMetal","Junk Metal"]
		];
	};

	if (_missing isNotEqualTo []) then {
		private _missingPretty = _missing apply { BSF_ItemNameMap getOrDefault [_x, _x] };
		["InfoTitleAndText", ["Repair Info", format ["Missing: %1", _missingPretty joinString ", "]]] call ExileClient_gui_toaster_addTemplateToast;
	} else {
        _animation = "Exile_Acts_RepairVehicle01_Animation01";
        disableSerialization;
        ("ExileActionProgressLayer" call BIS_fnc_rscLayer) cutRsc ["RscExileActionProgress", "PLAIN", 1, false];

        _keyDownHandle = (findDisplay 46) displayAddEventHandler ["KeyDown","_this call ExileClient_action_event_onKeyDown"];
        _mouseButtonDownHandle = (findDisplay 46) displayAddEventHandler ["MouseButtonDown","_this call ExileClient_action_event_onMouseButtonDown"];

        player switchMove _animation;
        ["switchMoveRequest", [netId player, _animation]] call ExileClient_system_network_send;

        _startTime = diag_tickTime;
        _duration = 20;                            // keep vanilla duration; adjust if desired
        _sleepDuration = _duration / 100;
        _progress = 0;

        _display = uiNamespace getVariable "RscExileActionProgress";
        _label = _display displayCtrl 4002;
        _label ctrlSetText "0%";
        _progressBarBackground = _display displayCtrl 4001;
        _progressBarMaxSize = ctrlPosition _progressBarBackground;
        _progressBar = _display displayCtrl 4000;
        _progressBar ctrlSetPosition [_progressBarMaxSize select 0, _progressBarMaxSize select 1, 0, _progressBarMaxSize select 3];
        _progressBar ctrlSetBackgroundColor [0, 0.78, 0.93, 1];
        _progressBar ctrlCommit 0;
        _progressBar ctrlSetPosition _progressBarMaxSize;
        _progressBar ctrlCommit _duration;

        try {
            while {_progress < 1} do {
                if (ExileClientActionDelayAbort) then { throw 1; };
                uiSleep _sleepDuration;
                _progress = ((diag_tickTime - _startTime) / _duration) min 1;
                _label ctrlSetText format["%1%2", round (_progress * 100), "%"];
            };
            throw 0;
        }
        catch {
            _progressBarColor = [];
            switch (_exception) do {
                case 0: {
                    _progressBarColor = [0.7, 0.93, 0, 1];

                    // --- SUCCESS: repair body/glass/engine; keep wheels & fuel unchanged
                    // snapshot what we want to preserve
                    private _fuelBefore = fuel _vehicle;

                    // wheel hitpoints (spares included) + their damage
                    private _wheelHPs = [_vehicle] call BSF_Client_GetVehicleWheels;
                    private _wheelSnapshot = _wheelHPs apply { [_x, _vehicle getHitPointDamage _x] };

                    // repair everything
                    _vehicle setDamage 0;

                    // restore ONLY wheels
                    {
                        _vehicle setHitPointDamage [_x#0, _x#1];
                    } forEach _wheelSnapshot;

                    // restore fuel level
                    _vehicle setFuel _fuelBefore;

                    // consume items & notify
                    player removeItem "Exile_Item_DuctTape";
                    player removeItem "Exile_Item_JunkMetal";
                    ["InfoTitleAndText", ["Repair Info", "You have repaired the body, glass, and engine"]] call ExileClient_gui_toaster_addTemplateToast;
                };
                case 1: {
                    ["InfoTitleAndText", ["Repair Info", "Do not move during repair"]] call ExileClient_gui_toaster_addTemplateToast;
                    _progressBarColor = [0.82, 0.82, 0.82, 1];
                };
            };

            // Cleanup animation + progress UI
            player switchMove "";
            ["switchMoveRequest", [netId player, ""]] call ExileClient_system_network_send;
            _progressBar ctrlSetBackgroundColor _progressBarColor;
            _progressBar ctrlSetPosition _progressBarMaxSize;
            _progressBar ctrlCommit 0;
        };

        ("ExileActionProgressLayer" call BIS_fnc_rscLayer) cutFadeOut 2;
        (findDisplay 46) displayRemoveEventHandler ["KeyDown", _keyDownHandle];
        (findDisplay 46) displayRemoveEventHandler ["MouseButtonDown", _mouseButtonDownHandle];
    };
};

ExileClientActionDelayShown = false;
ExileClientActionDelayAbort = false;
true
