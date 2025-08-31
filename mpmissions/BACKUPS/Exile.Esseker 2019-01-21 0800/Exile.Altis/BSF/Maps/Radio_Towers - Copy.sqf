/**
 * Created with Exile Mod 3DEN Plugin
 * www.exilemod.com
 */

ExileRouletteChairs = [];
ExileRouletteChairPositions = [];

// 6 Vehicles
private _vehicles = [
["Land_TTowerBig_1_F", [2649.43, 1344.94, 465.459], [0, 1, 0], [0, 0, 1], true],
["Land_Pier_Box_F", [2650.16, 1343.74, 422.501], [0, 1, 0], [0, 0, 1], true],
["Land_TTowerBig_2_F", [9956.11, 1001.39, 308.473], [0.0209697, -0.99978, 0], [0, 0, 1], true],
["Land_Pier_Box_F", [9957.14, 1001.2, 261.798], [0.99958, 0.0289777, 0], [0, 0, 1], true],
["Land_Pier_Box_F", [9466.76, 11601.4, 136.997], [0.779153, 0.626833, 0], [0, 0, 1], true],
["Land_TTowerBig_2_F", [9465.82, 11601, 183.727], [0.620572, -0.78415, 0], [0, 0, 1], true]
];

{
    private _vehicle = (_x select 0) createVehicle (_x select 1);
    _vehicle allowDamage false;
    _vehicle setPosWorld (_x select 1);
    _vehicle setVectorDirAndUp [_x select 2, _x select 3];
    _vehicle enableSimulationGlobal (_x select 4);
    _vehicle setVariable ["ExileIsLocked", -1, true];
    
    if (_vehicle isKindOf "Exile_RussianRouletteChair") then
    {
        ExileRouletteChairs pushBack _vehicle;
        ExileRouletteChairPositions pushBack [_x select 1, getDir _vehicle];
    };
}
forEach _vehicles;

// 0 Simple Objects
private _invisibleSelections = ["zasleh", "zasleh2", "box_nato_grenades_sign_f", "box_nato_ammoord_sign_f", "box_nato_support_sign_f"];
private _simpleObjects = [

];

{
    private _simpleObject = createSimpleObject [_x select 0, _x select 1];
    _simpleObject setVectorDirAndUp [_x select 2, _x select 3];
    
    {
        if ((toLower _x) in _invisibleSelections) then 
        {
            _simpleObject hideSelection [_x, true];
        };
    }
    forEach (selectionNames _simpleObject);
}
forEach _simpleObjects;