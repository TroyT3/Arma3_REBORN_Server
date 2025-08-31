private ["_level","_additionalIncome","_decayPercent","_nameTag"];

_level = [ExileClientPlayerScore] call JohnO_fnc_getRespectTier;

_additionalIncome = round (ExileClientPlayerScore * 0.002);
_resistance = (player getVariable ["EVRresistance",0]) * 100;
_decayPercent = 0;
_nameTag = "";

switch (_level) do
{
	case 0:
	{
		_decayPercent = 0;
		_nameTag = "Lacky";
	};

	case 1:
	{
		_decayPercent = 8;
		_nameTag = "Associate";
	};

	case 2:
	{
		_decayPercent = 16;
		_nameTag = "Soldier";
	};

	case 3:
	{
		_decayPercent = 25;
		_nameTag = "Capo";
	};

	case 4:
	{
		_decayPercent = 33;
		_nameTag = "Underboss";
	};

	case 5:
	{
		_decayPercent = 41;
		_nameTag = "Boss";
	};
};

["InfoTitleAndText", 

	["<t size='27'>Respect Info</t>", 
		format 
		[
		"<t size='23'>Your respect tier is</t> <t color='#00ff77'  size='23'>%1</t>
		<br />
		<t>&#160;</t>
		<br />
		<t size='23'>You will generate an additional</t> <t color='#00ff77'  size='23'>$%2</t> income from wages 
		<br />
		<t>&#160;</t>
		<br />
		<t size='23'>Your self healing rate is increased by</t> <t color='#00ff77'  size='23'>%3 hp</t> per minute 
		<br />
		<t>&#160;</t>
		<br />
		<t size='23'>Your Hunger and Thirst will deterioate slower, by a factor of</t> <t color='#00ff77' size='23'>%4%5</t>
		<t>&#160;</t>
		<br />
		<t size='23'>Your resistance to EVR event damage is</t> <t color='#00ff77'  size='23'>%6%5</t>
		",
		_nameTag, 
		_additionalIncome, 
		_level, 
		_decayPercent,
		"%",
		_resistance
		]
	]
] call ExileClient_gui_toaster_addTemplateToast;