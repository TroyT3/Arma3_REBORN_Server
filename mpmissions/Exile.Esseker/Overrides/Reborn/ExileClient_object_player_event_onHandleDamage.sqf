/**
 * ExileClient_object_player_event_onHandleDamage.sqf
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
params ["_unit","_selectionName","_amountOfDamage","_sourceOfDamage","_typeOfProjectile"];

if (_typeOfProjectile isEqualTo "") exitWith {};

if (_unit != player) exitWith {};

if (isNil "ExileReborn_lastHitFX") then { ExileReborn_lastHitFX = 0; };
if (isNil "ExileReborn_hitFXCooldown") then { ExileReborn_hitFXCooldown = 1.5; };

_unit setBleedingRemaining 90;
_unit setVariable ["JohnO_lastSourceOfDamage", _sourceOfDamage, true];
_unit setVariable ["BSF_Reborn_WoundsTreated", false, true];

if !(ExileRebornClient_CustomHit_soundIsPlaying) then {
	ExileRebornClient_CustomHit_soundIsPlaying = true;
	[] spawn JohnO_fnc_playCustomHitSound;
};

if (time - ExileReborn_lastHitFX >= ExileReborn_hitFXCooldown) then {
	titleText ["","WHITE OUT",0.2];
	titleText ["","WHITE IN",0.2];
	ExileReborn_lastHitFX = time;
};
