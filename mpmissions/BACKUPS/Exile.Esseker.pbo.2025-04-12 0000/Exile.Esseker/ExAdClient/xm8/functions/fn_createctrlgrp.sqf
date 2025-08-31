// fn_createctrlgrp.sqf

params ["_display","_parent","_idc","_position","_ctrl"];

_ctrl = _display ctrlCreate ["RscControlsGroup", _idc, _parent];
// _ctrl ctrlSetPosition _position;
_ctrl ctrlSetPosition [0.025, 0.04, .865, 0.64];
_ctrl ctrlCommit 0;

_ctrl



// _pW = 0.025;
// _pH = 0.04;
// _leftCol = 1;
// _leftColW = 12.8;
// _rightCol = _leftCol + _leftColW + 2; 15.8
// _rightColW = _leftColW + 3; 31.6
// _margin = 0.2;
// [
// _leftCol * _pW, 0.025
// 1*0.025

//  1 * _pH,	0.04
// .04

//  (_leftColW + _rightCol + 6) * _pW, .865
// 12.8 + 15.8 + 6

//  16 * _pH .64
//  ]

// [0.025, 0.04, .865, 0.64]