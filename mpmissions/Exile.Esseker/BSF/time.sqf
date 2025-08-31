if (!isServer) exitWith {};

while {true} do
{
	if (daytime >= 18 || daytime < 6) then   // after 6pm and before 6am time multiplier changes
	{
		setTimeMultiplier 18   // adjust this value for slower or faster night cycle
	}
	else
	{
		setTimeMultiplier 6    // adjust this value for slower or faster day cycle
	};

	uiSleep 30;
};
