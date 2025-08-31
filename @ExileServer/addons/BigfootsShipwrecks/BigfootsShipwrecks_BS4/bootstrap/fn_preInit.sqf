private["_code"];

{
    _code = compileFinal (preprocessFileLineNumbers (_x select 1));
    missionNamespace setVariable [(_x select 0), _code];
}
forEach
[
    ['ExileServer_BS4_loadCrate', 'BigfootsShipwrecks_BS4\code\ExileServer_BS4_loadCrate.sqf'],
    ['ExileServer_BS4_tabsToCrate', 'BigfootsShipwrecks_BS4\code\ExileServer_BS4_tabsToCrate.sqf'],
    ['ExileServer_BS4_createMarkers', 'BigfootsShipwrecks_BS4\code\ExileServer_BS4_createMarkers.sqf'],
    ['ExileServer_BS4_getWreckId', 'BigfootsShipwrecks_BS4\code\ExileServer_BS4_getWreckId.sqf'],
    ['ExileServer_BS4_initialize', 'BigfootsShipwrecks_BS4\code\ExileServer_BS4_initialize.sqf'],
    ['ExileServer_BS4_maintainWrecks', 'BigfootsShipwrecks_BS4\code\ExileServer_BS4_maintainWrecks.sqf'],
    ['ExileServer_BS4_sendClientNotification', 'BigfootsShipwrecks_BS4\code\ExileServer_BS4_sendClientNotification.sqf'],
    ['ExileServer_BS4_setupCrate', 'BigfootsShipwrecks_BS4\code\ExileServer_BS4_setupCrate.sqf'],
    ['ExileServer_BS4_spawnWrecks', 'BigfootsShipwrecks_BS4\code\ExileServer_BS4_spawnWrecks.sqf'],
    ['ExileServer_BS4_util_log', 'BigfootsShipwrecks_BS4\code\ExileServer_BS4_util_log.sqf']
];

"PreInit finished" call ExileServer_BS4_util_log;
