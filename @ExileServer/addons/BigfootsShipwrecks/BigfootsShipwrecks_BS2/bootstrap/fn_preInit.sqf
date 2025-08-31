private["_code"];

{
    _code = compileFinal (preprocessFileLineNumbers (_x select 1));
    missionNamespace setVariable [(_x select 0), _code];
}
forEach
[
    ['ExileServer_BS2_loadCrate', 'BigfootsShipwrecks_BS2\code\ExileServer_BS2_loadCrate.sqf'],
    ['ExileServer_BS2_tabsToCrate', 'BigfootsShipwrecks_BS2\code\ExileServer_BS2_tabsToCrate.sqf'],
    ['ExileServer_BS2_createMarkers', 'BigfootsShipwrecks_BS2\code\ExileServer_BS2_createMarkers.sqf'],
    ['ExileServer_BS2_getWreckId', 'BigfootsShipwrecks_BS2\code\ExileServer_BS2_getWreckId.sqf'],
    ['ExileServer_BS2_initialize', 'BigfootsShipwrecks_BS2\code\ExileServer_BS2_initialize.sqf'],
    ['ExileServer_BS2_maintainWrecks', 'BigfootsShipwrecks_BS2\code\ExileServer_BS2_maintainWrecks.sqf'],
    ['ExileServer_BS2_sendClientNotification', 'BigfootsShipwrecks_BS2\code\ExileServer_BS2_sendClientNotification.sqf'],
    ['ExileServer_BS2_setupCrate', 'BigfootsShipwrecks_BS2\code\ExileServer_BS2_setupCrate.sqf'],
    ['ExileServer_BS2_spawnWrecks', 'BigfootsShipwrecks_BS2\code\ExileServer_BS2_spawnWrecks.sqf'],
    ['ExileServer_BS2_util_log', 'BigfootsShipwrecks_BS2\code\ExileServer_BS2_util_log.sqf']
];

"PreInit finished" call ExileServer_BS2_util_log;
