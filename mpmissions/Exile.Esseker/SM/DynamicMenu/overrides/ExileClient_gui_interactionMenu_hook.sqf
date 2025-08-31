// ExileClient_gui_interactionMenu_hook.sqf

private ["_object", "_menus", "_i", "_menu", "_targetType", "_target", "_showMenu", "_menuItems", "_n", "_menuItem", "_showMenuItem"];
_object = _this;
_menus = missionConfigFile >> "CfgInteractionMenus";
ExileClientInteractionObject = _object;
ExileClientInteractionLastHookTime = time;

for "_i" from 0 to count(_menus) - 1 do 
{
	_menu = _menus select _i;
	_targetType = getNumber(_menu >> "targetType");
	_target = getText(_menu >> "target");
	_showMenu = false;

	// 🔁 Handle all target types
	switch (_targetType) do {
		case 1: {
			// [format["Hook 1: %1 : %2", _object, _target]] call BSF_Client_Util_Debug;

			// Proximity + bounding box
			if ([_object, _target] call ExileClient_util_model_isInteraction) then {
				_showMenu = true;
			};
		};

		case 2: {
			// [format["Hook 2: %1 : %2", _object, _target]] call BSF_Client_Util_Debug;
			// Raycast hit
			if (_object isKindOf _target) then {
				_showMenu = true;
				if (_target isEqualTo "Exile_Animal_Abstract") then {
					_object = player;
				};
			};
		};


		// case 3:
		// {
		// 	// 👻 Custom corpse logic

		// 	// First check if the current object is dead and of the right type
		// 	if (!alive _object && {_object isKindOf _target} && {player distance _object < 3}) then {
		// 		_corpse = _object;
		// 	} else {
		// 		// Scan for any nearby corpses of type "Man"
		// 		private _nearby = player nearEntities ["Man", 3];
		// 		{
		// 			if (!alive _x && {_x isKindOf _target}) exitWith {
		// 				_corpse = _x;
		// 			};
		// 		} forEach _nearby;
		// 	};

		// 	if (!isNull _corpse) then {
		// 		_object = _corpse;
		// 		_showMenu = true;
		// 	};
		// };

		case 3: {
			// [format["Hook 3: %1 : %2", _object, _target]] call BSF_Client_Util_Debug;
			// 👻 Custom corpse logic
			if (!alive _object && {_object isKindOf _target} && {player distance _object < 3}) then {
				_showMenu = true;
			}
			else {
				// 🔁 Try to find a corpse nearby if cursor is not on one
				private _nearbyCorpses = (player nearEntities ["Man", 3]) select {!alive _x};
				if (_nearbyCorpses isNotEqualTo []) then {
					_object = _nearbyCorpses select 0;
					_showMenu = true;
				};
			};
		};
	};

	if (_showMenu) then
	{
		_menuItems = _menu >> "Actions";
		for "_n" from 0 to count(_menuItems) - 1 do 
		{
			_menuItem = _menuItems select _n;
			_showMenuItem = call compile (getText (_menuItem >> "condition"));
			if (_showMenuItem) then
			{
				private _icon = getText(_menuItem >> "icon");
				if (_icon == "") then { _icon = "\exile_assets\texture\ui\snap_blue_ca.paa"; };
				private _actionData = [getText(_menuItem >> "title"), getText(_menuItem >> "action"), _icon];
				if !(_actionData in ExileClientInteractionHandlesMenu) then
				{
					ExileClientInteractionHandlesMenu pushBack _actionData;
				};
				ExileClientInteractionHandles pushBack (_object addAction 
				[
					getText(_menuItem >> "title"), 
					getText(_menuItem >> "action"), 
					nil, 
					getNumber(_menuItem >> "priority"), 
					getNumber(_menuItem >> "showWindow") isEqualTo 1 
				]);
			};
		};
	};
};
