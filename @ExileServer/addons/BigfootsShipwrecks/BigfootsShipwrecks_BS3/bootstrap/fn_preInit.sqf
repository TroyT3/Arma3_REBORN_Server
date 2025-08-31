private["_code"];

{
    _code = compileFinal (preprocessFileLineNumbers (_x select 1));
    missionNamespace setVariable [(_x select 0), _code];
}
forEach
[
    ['ExileServer_BS3_loadCrate', 'BigfootsShipwrecks_BS3\code\ExileServer_BS3_loadCrate.sqf'],
    ['ExileServer_BS3_tabsToCrate', 'BigfootsShipwrecks_BS3\code\ExileServer_BS3_tabsToCrate.sqf'],
    ['ExileServer_BS3_createMarkers', 'BigfootsShipwrecks_BS3\code\ExileServer_BS3_createMarkers.sqf'],
    ['ExileServer_BS3_getWreckId', 'BigfootsShipwrecks_BS3\code\ExileServer_BS3_getWreckId.sqf'],
    ['ExileServer_BS3_initialize', 'BigfootsShipwrecks_BS3\code\ExileServer_BS3_initialize.sqf'],
    ['ExileServer_BS3_maintainWrecks', 'BigfootsShipwrecks_BS3\code\ExileServer_BS3_maintainWrecks.sqf'],
    ['ExileServer_BS3_sendClientNotification', 'BigfootsShipwrecks_BS3\code\ExileServer_BS3_sendClientNotification.sqf'],
    ['ExileServer_BS3_setupCrate', 'BigfootsShipwrecks_BS3\code\ExileServer_BS3_setupCrate.sqf'],
    ['ExileServer_BS3_spawnWrecks', 'BigfootsShipwrecks_BS3\code\ExileServer_BS3_spawnWrecks.sqf'],
    ['ExileServer_BS3_util_log', 'BigfootsShipwrecks_BS3\code\ExileServer_BS3_util_log.sqf']
];

"PreInit finished" call ExileServer_BS3_util_log;
