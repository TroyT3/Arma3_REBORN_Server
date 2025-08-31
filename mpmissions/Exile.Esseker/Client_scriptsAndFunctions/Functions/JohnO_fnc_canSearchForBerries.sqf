// JohnO_fnc_canSearchForBerries.sqf

private ["_scavengeModels","_scavArray","_isValidObj","_find","_object"];

_scavengeModels = ["b_ficus","b_ner","b_caloc","b_cest","b_canina",
					"b_corylus",
					"b_corylus2s",
					"b_sambuscus",
					"b_craet1",
					"betula2w_summer"
					];
_scavArray = [];
_isValidObj = false;

_object = ([getModelInfo cursorObject, typeOf cursorObject] select 0 select 0);
if !(isNil "_object") then
{	
	{
		_find = _object find _x; 
		if (_find >= 0) then
		{
			_scavArray pushBack _find;
		};	
	} forEach _scavengeModels;

	if ((count _scavArray > 0) && (player distance cursorObject <3)) then
	{
		_isValidObj = true;
	};
};	
_isValidObj	