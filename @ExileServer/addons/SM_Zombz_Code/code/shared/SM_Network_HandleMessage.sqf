/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

params [["_type", ""],["_data", []]];

if (isServer) then
{
	switch (toLower _type) do
	{
		case "updatelocality":
		{
			_data spawn SM_Network_UpdateLocality;
		};
		case "killzombie":
		{
			_data call SM_Network_KillZombie;
		};
		case "addguts":
		{
			_data call SM_Network_AddGuts;
		};
		case "explodehead":
		{
			_data call SM_Network_HandleDamage;
		};
		case "gut":
		{
			_data call SM_Network_Gut;
		};
		case "gutvariable":
		{
			_data call SM_Network_GutVariable;
		};
		default {};
	};
}
else
{
	switch (toLower _type) do
	{
		case "explodehead":
		{
			_data call SM_Network_ExplodeHead;
		};
		case "notification":
		{
			_data call SM_Network_Notification;
		};
		case "removeguts":
		{
			_data call SM_Network_RemoveGuts;
		};
		case "playsound":
		{
			_data call SM_Say3D;
		};
		default {};
	};
};

true
