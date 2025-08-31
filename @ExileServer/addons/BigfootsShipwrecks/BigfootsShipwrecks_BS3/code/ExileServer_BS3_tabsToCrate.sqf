// ExileServer_BS3_tabsToCrate.sqf

if (!isServer) exitWith {};

private ["_countPoptabs", "_crate", "_enableCrateFillDebug", "_randomDistributionSeed", "_wreckId"];

_wreckId = _this select 0;
_crate = _this select 1;
_randomDistributionSeed = _this select 2;
_enableCrateFillDebug = _this select 3;

_depthModifier = (getPosASL _crate select 2) * -0.01;
_countPoptabs = (floor(random _randomDistributionSeed))*_depthModifier;
_crate setVariable ["ExileMoney", _countPoptabs, true];

if (_enableCrateFillDebug) then
{
    format["Added [%1] poptabs to crate [%2].", _countPoptabs, _wreckId] call ExileServer_BS3_util_log;
};