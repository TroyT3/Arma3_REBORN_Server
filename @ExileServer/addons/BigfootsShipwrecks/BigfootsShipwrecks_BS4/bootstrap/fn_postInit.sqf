/*
 * This file is subject to the terms and conditions defined in
 * file 'APL-SA LICENSE.txt', which is part of this source code package.
 */

"PostInit started..." call ExileServer_BS4_util_log;

call compile preprocessFileLineNumbers "BigfootsShipwrecks_BS4\config.sqf";

[] call ExileServer_BS4_initialize;

"PostInit finished" call ExileServer_BS4_util_log;