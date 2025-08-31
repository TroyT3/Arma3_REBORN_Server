params ["_trigger"];
private _target = "BSF_VehicleSpawn_Ship_Invisible";
private _playersInArea = 1;
private _emitters = [];

while {_playersInArea > 0} do 
	{
		for "_i" from 0 to 360 step 45 do 
		{
			_source1 = "#particlesource" createVehicleLocal (getPos nearestObject [_trigger, _target]);
			_source1 setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal", 16, 7, 48, 1], "", "Billboard", 1, 10, [0, 0, 0],
						[0, 0, 0.5], 0, 0.895, 0.62, 0.025, [2, 4, 4, .5], [[0.24,0.95,0.85,0.1],[0.24,0.95,0.85,0.1], [1, 1, 1, 0.25], [1, 1, 1, 0]],
						[0.2], 1, 0.04, "", "", _this];
			_source1 setParticleRandom [2, [0.3, 0.3, 0.3], [1.5, 1.5, 1], 20, 0.2, [0, 0, 0, 0.1], 0, 0, 360];
			_source1 setDropInterval 0.2;
			_emitters append[ _source1];
		};

	_playersInArea = count (allplayers select {_x inArea _trigger}); 
		uiSleep 10;
	};	

{
deleteVehicle _x;
} forEach _emitters;