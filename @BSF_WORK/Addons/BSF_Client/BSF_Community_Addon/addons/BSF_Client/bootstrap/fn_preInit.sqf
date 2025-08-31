private ['_code', '_function', '_file'];

{
    _code = '';
    _function = _x select 0;
    _file = _x select 1;

    _code = compileFinal (preprocessFileLineNumbers _file);                    

    missionNamespace setVariable [_function, _code];
}
forEach 
[
	['fnc_BSF_Fishing','BSF_Community_Addon\addons\BSF_Client\code\fnc_BSF_Fishing.sqf'],
	['fnc_BSF_UseInstadoc','BSF_Community_Addon\addons\BSF_Client\code\fnc_BSF_UseInstadoc.sqf'],
	['fnc_BSF_ShowScanner','BSF_Community_Addon\addons\BSF_Client\code\fnc_BSF_ShowScanner.sqf'],
	['fnc_BSF_Server_Test','BSF_Community_Addon\addons\BSF_Client\code\fnc_BSF_Server_Test.sqf'],
	['ExileClient_BSF_network_BSFclientTestRequest','BSF_Community_Addon\addons\BSF_Client\code\ExileClient_BSF_network_BSFclientTestRequest.sqf']
];

call fnc_BSF_Server_Test;
		
true
