/*
 * This file is subject to the terms and conditions defined in
 * file 'APL-SA LICENSE.txt', which is part of this source code package.
 */
 
class CfgPatches
{
	class BigfootsShipwrecks_BS1_Server {
		requiredVersion = 0.1;
		requiredAddons[] = {
            "exile_server"
        };
		units[] = {};
		weapons[] = {};
	};
};

class CfgFunctions 
{
	class BigfootsShipwrecks_BS1
	{
		class main 
		{			
			file="BigfootsShipwrecks_BS1\bootstrap";
			class preInit
            {
                preInit = 1;
            };
			class postInit
			{
				postInit = 1;
			};
		};
	};
};
