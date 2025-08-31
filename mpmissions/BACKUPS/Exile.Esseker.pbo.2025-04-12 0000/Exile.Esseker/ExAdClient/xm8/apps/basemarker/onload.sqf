params["_display","_slide","_idc"];
private ["_baseMarker","_backbtn","_basePic","_Instruction","_OffBtn","_OnBtn","_newParent"];
disableSerialization;

_slideClass = "BaseMarker";

_GRID_W = 0.025;
_GRID_H = 0.04;

_newParent = [_display,_slide,([_slideClass,"ctrlGrp"] call ExAd_fnc_getNextIDC),[0, -0.03, 34 * _pW, 0.76]] call ExAd_fnc_createCtrlGrp;
_newParent ctrlEnable true;

_OnBtn = _display ctrlCreate ["RscButtonMenu", 19001,_newParent];
_OnBtn ctrlSetPosition [21 * _GRID_W, 6 * _GRID_H, 6 * _GRID_W, 1 * _GRID_H];
_OnBtn ctrlCommit 0;
_OnBtn ctrlSetText "On";
_OnBtn ctrlSetEventHandler ["ButtonClick", "call fnc_markerOn"];
 
_OffBtn = _display ctrlCreate ["RscButtonMenu", 19002,_newParent];
_OffBtn ctrlSetPosition [21 * _GRID_W, 8 * _GRID_H, 6 * _GRID_W, 1 * _GRID_H];
_OffBtn ctrlCommit 0;
_OffBtn ctrlSetText "Off";
_OffBtn ctrlSetEventHandler ["ButtonClick", "call fnc_markerOff"];

_backbtn = _display ctrlCreate ["RscButtonMenu", 19003,_newParent];
_backbtn ctrlSetPosition [21 * _GRID_W, 10 * _GRID_H, 6 * _GRID_W, 1 * _GRID_H];
_backbtn ctrlCommit 0;
_backbtn ctrlSetText "Go Back";
_backbtn ctrlSetEventHandler ["ButtonClick", "['extraApps', 1] call ExileClient_gui_xm8_slide"];

_Instruction = _display ctrlCreate ["RscStructuredText", 19004,_newParent];
_Instruction ctrlSetPosition [-1 * _GRID_W, 16 * _GRID_H, 7.2 * (0.12), 3.75 * (0.02)];
_Instruction ctrlCommit 0;
_Instruction ctrlSetStructuredText parseText "<t size='1.2' align='center'>Toggles a base location marker with radius for each territory</t>";

_Image = _display ctrlCreate ["RscPictureKeepAspect", 19005,_newParent];
_Image ctrlSetPosition [1 * _GRID_W, 2 * _GRID_H, 20 * _GRID_W, 12.5 * _GRID_H];
_Image ctrlCommit 0;
_Image ctrlSetText "ExAdClient\xm8\apps\basemarker\basemarkerImage.paa";
_Image ctrlSetEventHandler ["ButtonClick", "call fnc_markerOff"];

fnc_markerOn = {
        _playerUID = getPlayerUID player;
        {
            _flag = _x;
            _buildRights = _flag getVariable ["ExileTerritoryBuildRights", []];
            if (_playerUID in _buildRights) then
            {
            _name = _flag getVariable ["ExileTerritoryName", ""];
            _pos = getPos _flag;
            _marker = createMarkerLocal [_name, _pos];
            _marker setMarkerTextLocal _name;
            _marker setMarkerTypeLocal "BSF_Marker_mil_flag";
            _marker setMarkerColorLocal "ColorBlue";

            _nameR = format["%1Radius",_name];
            _size = _flag getVariable ["ExileTerritorySize",15];
            _marker2 = createMarkerLocal [_nameR, _pos];
            _marker2 setMarkerTextLocal _nameR;
            _marker2 setMarkerShapeLocal "ELLIPSE";
            _marker2 setMarkerColorLocal "ColorBlue";
            _marker2 setMarkerSizeLocal [_size,_size];
            _marker2 setMarkerColorLocal "ColorRed";
            _marker2 setMarkerBrushLocal "Border";
            _marker2 setMarkerAlphaLocal 1;

            _nameR2 = format["%1Radius2",_name];
            _marker3 = createMarkerLocal [_nameR2, _pos];
            _marker3 setMarkerTextLocal _nameR2;
            _marker3 setMarkerShapeLocal "ELLIPSE";
            _marker3 setMarkerColorLocal "ColorBlue";
            _marker3 setMarkerSizeLocal [_size - 1 ,_size - 1];
            _marker3 setMarkerColorLocal "ColorRed";
            _marker3 setMarkerBrushLocal "Border";
            _marker3 setMarkerAlphaLocal 1;

            ["SuccessTitleOnly",format["<t size='23' font='PuristaLight'>Marker turned on for:<br/>%1<br/>Radius: %2</t>", _name, _size]] call ExileClient_gui_toaster_addTemplateToast;
            };
        }
        forEach (allMissionObjects "Exile_Construction_Flag_Static");
};


fnc_markerOff = {
   
        _playerUID = getPlayerUID player;
        {
            _flag = _x;
            _buildRights = _flag getVariable ["ExileTerritoryBuildRights", []];
            if (_playerUID in _buildRights) then
            {
            _name = _flag getVariable ["ExileTerritoryName", ""];
            _nameR = format["%1Radius",_name];
            _nameR2 = format["%1Radius2",_name];

            _pos = getPos _flag;
            deleteMarkerLocal _name;
            deleteMarkerLocal _nameR;
            deleteMarkerLocal _nameR2;
            };
        }
        forEach (allMissionObjects "Exile_Construction_Flag_Static");
    ["ErrorTitleOnly",["Base Markers toggled off."]] call ExileClient_gui_toaster_addTemplateToast;
};
