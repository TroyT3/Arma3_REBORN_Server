private["_code"];

{
    _code = compileFinal (preprocessFileLineNumbers (_x select 1));
    missionNamespace setVariable [(_x select 0), _code];
}
forEach
[
    ['ExileServer_BS1_loadCrate', 'BigfootsShipwrecks_BS1\code\ExileServer_BS1_loadCrate.sqf'],
    ['ExileServer_BS1_tabsToCrate', 'BigfootsShipwrecks_BS1\code\ExileServer_BS1_tabsToCrate.sqf'],
    ['ExileServer_BS1_createMarkers', 'BigfootsShipwrecks_BS1\code\ExileServer_BS1_createMarkers.sqf'],
    ['ExileServer_BS1_getWreckId', 'BigfootsShipwrecks_BS1\code\ExileServer_BS1_getWreckId.sqf'],
    ['ExileServer_BS1_initialize', 'BigfootsShipwrecks_BS1\code\ExileServer_BS1_initialize.sqf'],
    ['ExileServer_BS1_maintainWrecks', 'BigfootsShipwrecks_BS1\code\ExileServer_BS1_maintainWrecks.sqf'],
    ['ExileServer_BS1_sendClientNotification', 'BigfootsShipwrecks_BS1\code\ExileServer_BS1_sendClientNotification.sqf'],
    ['ExileServer_BS1_setupCrate', 'BigfootsShipwrecks_BS1\code\ExileServer_BS1_setupCrate.sqf'],
    ['ExileServer_BS1_spawnWrecks', 'BigfootsShipwrecks_BS1\code\ExileServer_BS1_spawnWrecks.sqf'],
    ['ExileServer_BS1_util_log', 'BigfootsShipwrecks_BS1\code\ExileServer_BS1_util_log.sqf']
];

"PreInit finished" call ExileServer_BS1_util_log;
