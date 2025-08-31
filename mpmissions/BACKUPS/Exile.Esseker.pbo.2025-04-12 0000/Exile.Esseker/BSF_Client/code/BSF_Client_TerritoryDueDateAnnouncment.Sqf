// BSF_Client_TerritoryDueDateAnnouncment.sqf

waitUntil {!isNull findDisplay 46 && !isNil 'ExileClientLoadedIn' && getPlayerUID player != ''};

uiSleep 30;

_playerUID = getPlayerUID player;
{
    _flag = _x;
    _buildRights = _flag getVariable ["ExileTerritoryBuildRights", []];
    if (_playerUID in _buildRights) then
    {
		_exemptStatus = _flag getVariable ["ExileFlagDonorExempt", ""];
		_nextDueDate = _flag getVariable ["ExileTerritoryMaintenanceDue", [0, 0, 0, 0, 0]];
		_name = _flag getVariable ["ExileTerritoryName", ""];
		_dueDate = format 
		[
			"%3/%2/%1",
			_nextDueDate select 0,
			_nextDueDate select 1,
			_nextDueDate select 2
		];

	if (_exemptStatus isEqualTo "Yes" ) then
		{
			["InfoTitleAndText", ["<t size='27' font='puristaMedium'>Territory Information</t>",format["<t size='23' color='#32a852' font='PuristaLight'>NO PAYMENT DUE for:<br/></t> <t color='#E48A36' size='23' font='PuristaLight'>%1</t><br/><t size='23' font='PuristaLight'>Thank you for your continued support!</t>",_name]]] call ExileClient_gui_toaster_addTemplateToast;
		}
		else
		{
			["InfoTitleAndText", ["<t size='27' font='puristaMedium'>Territory Information</t>", format["<t size='23' color='#ff0000' font='PuristaLight'>PAYMENT DUE for:<br/></t> <t color='#E48A36' size='23' font='PuristaLight'>%2</t><br/><t size='23' font='PuristaLight'>Date Due:<br/></t> <t color='#E48A36' size='24'>%1</t><br/><t size='23' font='PuristaLight'>Make your protection payment at Office Trader!</t>",_dueDate,_name]]] call ExileClient_gui_toaster_addTemplateToast;
		};

	};
}
forEach (allMissionObjects "Exile_Construction_Flag_Static");
