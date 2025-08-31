/*
* BSF_Client_NumberToCommaSeparatedString
* BSF_Client\code\BSF_Client_NumberToCommaSeparatedString.sqf
*
* BS-Free Game Servers
* www.bs-free.com
* © 2023 Troy - BS-Free
*
* This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
* To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/

params ["_number"];
private ["_string", "_array", "_newString"];

_number = _this select 0;

_string = reverse(_number toFixed 0);
_array = [];
for "_i" from 0 to count _string - 1 step 3 do {
    _array pushBack (_string select [_i, 3]);
};
_newString = reverse(_array joinString ",");

_newString


/*

params ["_number"];
private ["_string", "_stringLen", "_iterations", "_leftOver", "_array"];

// _number = 58976504;
_string = [_number,100] call BIS_fnc_numberText;
_stringLen = count _string;
_iterations = floor (_stringLen / 3);
_leftOver = _stringLen - (_iterations * 3);
_array = [];

for "_i" from 1 to _iterations do {

	_sel = _string select [(_stringLen - 3), 3];
	_string = _string trim [_sel , 2];
	_stringLen = _stringLen - 3;
	_array pushBack _sel;
	};

_array pushBack _string;
reverse _array;
_string = _array joinString ",";

_string

*/

