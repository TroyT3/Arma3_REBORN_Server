/**
 * Created with Exile Mod 3DEN Plugin
 * www.exilemod.com
 */

ExileRouletteChairs = [];
ExileRouletteChairPositions = [];

// 13 Vehicles
private _vehicles = [
["Land_Misc_Garb_Heap_EP1", [9771.72, 4886.82, 8.29937], [0, 0.99997, 0.00773577], [0.0132599, -0.00773509, 0.999882], true],
["Garbage_container", [9744.29, 4888.16, 8.98975], [0, 0.999919, 0.0127279], [0.00738091, -0.0127275, 0.999892], true],
["Land_Misc_GContainer_Big", [9752.09, 4897.87, 8.9649], [0, 0.999937, 0.0112462], [0.0166261, -0.0112446, 0.999799], true],
["Garbage_can", [9742.34, 4897.66, 8.82524], [0, 0.999915, 0.0130241], [0.0192166, -0.0130217, 0.999731], true],
["Land_GarbageBin_02_F", [9737.69, 4898.19, 8.91316], [0, 1, 0], [0, 0, 1], true],
["Land_GarbageBags_F", [9761.01, 4887.74, 8.45741], [0, 0.999981, 0.00610837], [0.00479659, -0.0061083, 0.99997], true],
["Land_GarbagePallet_F", [9772.68, 4896.21, 8.22054], [0, 0.999997, 0.00229024], [0.011601, -0.00229009, 0.99993], true],
["Land_GarbageWashingMachine_F", [9761.36, 4897.21, 8.5131], [0, 0.999997, 0.00231612], [0.0158329, -0.00231583, 0.999872], true],
["Land_GarbageHeap_01_F", [9784.08, 4886.02, 8.28184], [0, 1, 0], [0.00195312, 0, 0.999998], true],
["Land_GarbageHeap_02_F", [9785.03, 4895.77, 7.90043], [0, 1, 0], [0.00592007, 0, 0.999982], true],
["Land_GarbageHeap_03_F", [9792.91, 4885.42, 8.64365], [0, 1, 0.000690534], [0.0063005, -0.00069052, 0.99998], true],
["Land_GarbageHeap_04_F", [9794.55, 4894.57, 8.31047], [0, 1, 0.000488281], [0.00469613, -0.000488276, 0.999989], true],
["Land_GarbageContainer_open_F", [9753.25, 4888.73, 8.82109], [0, 0.999993, 0.00370257], [0.0092965, -0.00370241, 0.99995], true]
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

// 1 Simple Objects
private _invisibleSelections = ["zasleh", "zasleh2", "box_nato_grenades_sign_f", "box_nato_ammoord_sign_f", "box_nato_support_sign_f"];
private _simpleObjects = [
["a3\structures_f_epb\civ\garbage\garbagecontainer_closed_f.p3d", [9749.07, 4888.57, 8.90127], [0, 0.99998, 0.00626255], [0.0138448, -0.00626194, 0.999885]]
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