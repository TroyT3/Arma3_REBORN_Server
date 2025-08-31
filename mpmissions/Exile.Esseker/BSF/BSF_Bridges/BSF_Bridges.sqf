GKB_fnc_drawToMap = compile preprocessFile "BSF\BSF_Bridges\functions\GKB_fnc_drawToMap.sqf";
GKB_fnc_writeToMap = compile preprocessFile "BSF\BSF_Bridges\functions\GKB_fnc_writeToMap.sqf";
GKB_fnc_arrowToMap = compile preprocessFile "BSF\BSF_Bridges\functions\GKB_fnc_arrowToMap.sqf";
GKB_fnc_writeToMapFont = compile preprocessFile "BSF\BSF_Bridges\functions\GKB_fnc_writeToMapFont.sqf";

BRIDGE_1_enabled = true;
BRIDGE_2_enabled = false;

if (BRIDGE_1_enabled) then {
//	GKB_fnc_drawToMap
		[[						//Line end positions:
			[10388.9,5016.48],
			[10441.4,5378.76]
		],
		8,						//Line Width
		["ColorWhite", 1]		//Line color (string) and alpha (number)
//		["ColorOrange", 1]		//Line color (string) and alpha (number)
//		[1,0.51,0.253,0.888]
		] call GKB_fnc_drawToMap;

//GKB_fnc_writeToMap:
		[
		[3300,7890],			//Position of the text
		[30, 1.8],				//Rotation and the size of the text. Negative rotation rotates the text clockwise
		["", "ColorBlack", 0.9]	//Text (string), text color (string) and alpha (number)
		] call GKB_fnc_writeToMap;
	};


if (BRIDGE_2_enabled) then {
//	GKB_fnc_drawToMap
		[[						//Line end positions:
			[18206.3,7987.32],
			[18414.3,8094.49]
		],
		4,	 					 //Line Width
		["ColorWhite", 1]		//Line color (string) and alpha (number)
		] call GKB_fnc_drawToMap;

//GKB_fnc_writeToMap:
		[
		[7725.77,4198.82],		//Position of the text
		[-8, 1.8],				//Rotation and the size of the text. Negative rotation rotates the text clockwise
		["", "ColorBlack", 0.9]	//Text (string), text color (string) and alpha (number)
		] call GKB_fnc_writeToMap;
	};
