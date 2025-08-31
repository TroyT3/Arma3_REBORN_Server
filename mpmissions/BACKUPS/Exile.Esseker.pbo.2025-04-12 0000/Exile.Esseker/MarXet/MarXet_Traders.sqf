/*
*
*  MarXet_Traders.sqf
*  Author: WolfkillArcadia
*  © 2016 Arcas Industries
*  This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
*  To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
*/
private["_traders","_trader","_signs","_sign"];
_traders = [];
switch (toLower worldName) do {

	case "altis": {};

	case "malden": {};

	case "tanoa": {};

	case "esseker":
	    {
		_trader =
	       [
		    "Exile_Cutscene_Prisoner01",
				"",
		    "GreekHead_A3_01",
		    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
		    [8024.87,5676.46,1.02559],
		    262.425
			]
		call ExileClient_object_trader_create;
			_traders pushBack _trader;

		_trader =	// Petlov Grad Church
	       [
		    "Exile_Cutscene_Prisoner01",
				"",
		    "GreekHead_A3_01",
		    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
		    [4301.05,3683.84,0.792114],
		    237
			]
		call ExileClient_object_trader_create;
			_traders pushBack _trader;

		_trader =	// Chokory
	       [
		    "Exile_Cutscene_Prisoner01",
				"",
		    "GreekHead_A3_01",
		    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
			[4731.98,8563.77,0.152954],
		    267
			]
		call ExileClient_object_trader_create;
			_traders pushBack _trader;

	    };

	case "lythium": {};

	case "ChernarusRedux": {};

};
{
	_x forceAddUniform "U_BG_Guerilla2_1";
	_x addVest "Exile_Vest_Snow";
	_x addHeadgear "H_Watchcap_blk";
	_x addGoggles "G_Bandanna_aviator";
	_x addWeapon "srifle_DMR_04_F";
	_x addPrimaryWeaponItem "optic_LRPS";
	_x addWeapon "hgun_ACPC2_F";
	_x addAction ["<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Access MarXet","createDialog 'RscMarXetDialog'","",1,false,true,"","((position player) distance _target) <= 4"];
} forEach _traders;
[format["MarXet Traders have been placed. Trader count: %1. Map: %2",(count(_traders)),worldName],"Client Traders"] call ExileClient_MarXet_util_log;
