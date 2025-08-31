class CfgServerInfoMenu
{
   addAction = 0; // Enable/disable action menu item | use 0 to disable | default: 1 (enabled)
   antiHACK = "infiSTAR + BattlEye";
   hostedBy = "BS-Free";
   ipPort = "209.133.194.59:2332";
   openKey = "User7"; // https://community.bistudio.com/wiki/inputAction/actions
   openAtLogin = no;
   restart = 3; // Number of hours before server automatically restarts
   serverName = "BS-Free PVE Exile Esseker REBORN";
   class menuItems
   {
      // title AND content accept formatted text (since update Oct 5,2016)
      class first
      {
         menuName = "General";
         title = "<t color='#ffffff'>GENERAL INFORMATION</t>";
         content[] = {

			"<img size='4' align='center' image='BSF_Client\images\BSF_Logo_Dirty_1024x256.paa' />",
"<br />",
			"<t size='1.1'>We have gone to great lengths to make this server as awesome as possible.  This guide has a bunch of info including how to get the most out of the mods we’ve included… please read it. We gladly welcome constructive criticism and suggestions on what we can do to make the server even better.</t><br />",
"<br />",
			"<t size='1.1'>A word about Admins… </t><br />",
"<br />",
			" - ARMA is buggy.  Everyone knows this, or should.<br />",
			" - Exile is a VERY complex mod that adds to the bugs.<br />",
			" - The mission and AI mods add even more bugs.<br />",
			" - This has to be accepted as part of the game.<br />",
"<br />",
			"While the Admins are here to help, asking them to replace everything that goes missing gets annoying and prevents us from actually PLAYING the game.<br />",
"<br />",
			"Please limit the requests.<br />",
"<br />",
"<br />",
			"<t size='1.2' color='#db3a47' underline='true'>CONTACT</t><br />",
"<br />",
			"<t size='1.1'>Join us on our active <a color='#db3a47' href='https://discord.gg/PEjMSDw'>Discord Server</a> - <a color='#db3a47' underline='true' href='https://discord.gg/PEjMSDw'>https://discord.gg/PEjMSDw</a></t><br />",
"<br />",
			"<t size='1.1'> Find info on the BSF website: <a  color='#db3a47' href='http://bs-free.com'>www.BS-Free.com</a></t><br />",
"<br />",
			"<t size='1.1' align='center'><a color='#db3a47' href='http://bs-free.com/forum'>bs-free.com/forum</a></t><br />",
"<br />",
			"<t size='1.1'> Send us an EMAIL:</t><br />",
			"<t size='1.1' align='center' color='#db3a47'>admin@bs-free.com</t><br />",
"<br />",
"<br />"

         };
      };
      class second
      {
         menuName = "Rules";
         title = "SERVER RULES";
         content[] = {
			"<img size='3' align='center' image='BSF_Client\images\BSF_Logo_Dirty_1024x256.paa' />",
"<br />",
			"This is a PVE server. Player killing, looting, raiding, etc. is FORBIDDEN - with exceptions below<br />",
"<br />",
			" - Don't bother trying to find loopholes in the interpretation of these rules.  This isn't a courtroom, we have final say as to whether you're breaking them or not.  Just ask.<br />",
"<br />",


			"                  STEAL /stēl/<br />",
"<br />",
			"                  verb<br />",
			"                    1. To take shit that isn't yours.<br />",
			"                    2. A good way to get banned.<br />",
"<br />",
			" - Don't steal from other players.  If you are seen looking into another player’s vehicle or loot crate it's safe to assume that you are stealing from it.  If a player is working on a mission yopu CANNOT loot the bodies or vehicles unless they give you permission. There is PLENTY of loot on this map - go get your own.<br />",
"<br />",
			" - There are no random vehicle spawns on this map.  If you see a vehicle that isn't from a mission that YOU completed, or from roaming AI that YOU killed, DON'T TOUCH IT!  We have logs of every sale by every player.  We have a ban list full of players that just HAD to sell shit that wasn't theirs.  Stay off of that list.  It's easy.  Just don't take stuff that you didn't earn.<br />",
"<br />",
			" - If you are heard using racist, sexist, homophobic, or any other prejudiced language you will be BANNED! <br />",
"<br />",
			" - If we catch you intentionally misspelling words in order to get by the filters you will be BANNED! <br />",
"<br />",
			" - Don't be a dick. Trolls and other forms of asshole are not welcome.<br />",
"<br />",
			" - Use a bit of restraint if you get into a dispute with another player. It's really easy to look like a childish bully in need of attention. We don't have the time or patience for that shit. <br />",
"<br />",
			" - We have VERY little patience for behavior that isn't in line with these basic rules of civility. If you can't act mature, go somewhere else. <br />",
"<br />",
			" - Don't park in the green/red zones on the map except in the PVP area. Vehicles left in trader zones are automatically unlocked at server restart.<br />",
"<br />",
			" - Base Building - See the section of this guide on our rules for territories. <br />",
"<br />",
			" - Heed the restart warnings!!  If you log out after the 3 min warning, you are asking for trouble… lost gear, missing vehicles, player roll-back.  We have logs that show exactly what time you disconnected, so don’t bullshit us. The database needs time to update before restart.  Log out before then.<br />",
"<br />",
			" - We encourage cooperation. If you need help on a mission, need a ride, or just need info, ask. If someone else needs help, maybe you can be that guy? <br />",
"<br />",

			"<t size='1.2' color='#db3a47' underline='true'>MISSIONS </t><br />",
"<br />",
			"Missions need to be claimed using the usual means: <br />",
"<br />",
			" - Claim the mission in side-chat (blue) and place a visible marker with your name on it on the map. <br />",
"<br />",
			" - Make sure that the marker shows up in the side-chat channel.<br />",
"<br />",
			" - If multiple players claim the same mission, the mission belongs to the player that properly claimed it side-chat first.<br />",
"<br />",
			" - Only one mission per group can be claimed at a time..<br />",
"<br />",
			" - If you get hung up and can't get to the mission, please announce that you are releasing the mission and delete your marker..<br />",
"<br />",
			" - Certain missions may not appear on the map as markers.  If you run into one of these and want to clear it, place a marker on the map. <br />",
"<br />",
			" - If you wander into a mission that someone else is doing, you might be mistaken for AI and accidentally shot. Keep an eye on the map and make your presence known first. <br />",
"<br />",

			"<t size='1.2' color='#db3a47'>VEHICLE REPLACMENT</t><br />",
"<br />",
			"This is ArmA – shit happens.  There are 100 ways to lose a vehicle in the game.  Although it sucks to lose one, everybody does. We don’t have to time to replace things that happen because of bad luck or bad judgment.  If your game crashes – that sucks, we’re sorry.<br />",
"<br />",
			"Vehicles destroyed by server errors will be replaced gladly but we require video proof of that error. <br />",
"<br />",
			"It’s easy to record now with little performance loss.  Here are some options: <br />",
"<br />",
			"Plays.tv<br />",
			"Nvidia ShadowPlay<br />",
			"Raptr/AMD Gaming Evolved<br />",
			"Open Broadcast Software<br />",
			"MSI Afterburner<br />",

"<br />",
"<br />"
			};
      };
      class third
      {
         menuName = "OPTIONAL MODS";
         title = "OPTIONAL MODS";
         content[] = {
			"<img size='3' align='center' image='BSF_Client\images\BSF_Logo_Dirty_1024x256.paa' />",
"<br />",
		 "<t size='1.2'>There are some mods that are not needed to join the server but may enhance your experience. Those mods are:</t><br /><br />",
"<br />",
		 "JSRS SOUNDMOD - Subscribe via <a color='#db3a47' href='http://steamcommunity.com/sharedfiles/filedetails/?id=861133494'>STEAM</a> - Great sound FX and ambient sound mod.<br />",
"<br />",
		 "JSRS SOUNDMOD - RHS AiO Mod Pack Sound Support - Subscribe via <a color='#db3a47' href='http://steamcommunity.com/sharedfiles/filedetails/?id=2068033599'>STEAM</a> - Additional FX for RHS mods.<br />",
"<br />",
		 "Blastcore_Edited_(standalone_version) - Subscribe via <a color='#db3a47' href='https://goo.gl/UQNOui'>STEAM</a> - Awesome explosion FX.<br />",
"<br />",
		 "HMDs Mod - Subscribe via <a color='#db3a47' href='https://steamcommunity.com/sharedfiles/filedetails/?id=312724602'>STEAM</a> - Helmet Mounted Displays for aircraft.<br />",
"<br />",
		 "RHS HMDs - Subscribe via <a color='#db3a47' href='http://steamcommunity.com/sharedfiles/filedetails/?id=877530153'>STEAM</a> - Helmet Mounted Displays for RHS aircraft.<br />",
"<br />",
"<br />"
			 };
      };
      class fourth
      {
         menuName = "HOW TO";
         title = "HOW TO";
         content[] = {
			"<img size='3' align='center' image='BSF_Client\images\BSF_Logo_Dirty_1024x256.paa' />",
"<br />",
			 "<t size='1.2' color='#db3a47' underline='true'>InstaDoc Hotkey</t><br />",
"<br />",
			"We've added the ability to use InstaDocs by pressing '8' on your keyboard.  This it the upper-row '8', not the numpad.<br />",
"<br />",



			 "<t size='1.2' color='#db3a47' underline='true'>VIRTURAL GARAGE</t><br />",
"<br />",
			"Please use Virtual Garage to store vehicles if you have a territory.  Too many vehicles on the map cause server lag and a drop in FPS. At any given time there can be more than 400 vehicles on the map if VG isn't used.<br />",
"<br />",
			"You can access VG on the first page of your XM8.  Vehicles can be stored and fetched while within your territory if you have one.  Any gear in the vehicle will be stored along with it.<br />",
"<br />",
			"VG is safe.  It only adds a little tag in the database, they don't really go anywhere. <br />",
"<br />",
			"The vehicles will fetch back into the exact location where they were stored.  If you put something in that spot, the vehicle might blow up when fetching it. We suggest storing vehicles in a dedicated open area to be safe. <br />",
"<br />",



			 "<t size='1.2' color='#db3a47' underline='true'>SINGLE USE VIRTURAL GARAGE</t><br />",
"<br />",
			"The Single Virtual Garage allow you to buy a separate VG to store a single vehicle.  This VG can be purchased by anyone regardless of whether they currently own a territory.  The VG will maintain whatever storage and custom skin the vehicle currently has.  Vehicles stored in these VGs ARE NOT protected from the auto-delete function if a vehicle isn’t moved for X number of days. Vehicles stored in a Single VG can be retrieved from any Single VG location on the map. These can be accessed at any Vehicle or Aircraft trader as well as custom locations which will show on the map if available.<br />",
"<br />",



			 "<t size='1.2' color='#db3a47' underline='true'>EQUIPMENT LOADOUTS</t><br />",
"<br />",
			"You can save and purchase named loadouts at the Equipment reader.  Instead of selecting 'Trade' choose 'Access Loadout Trader'. Most items in your inventory will be included in the save.  Some equipment has been blacklisted and will not be saved to loadouts.<br />",
"<br />",



			 "<t size='1.2' color='#db3a47' underline='true'>TOWING</t><br />",
"<br />",

			"With the vehicle you want to tow behind you, approach your vehicle and select ‘Deploy Tow Ropes’ from the scroll wheel list. Walk the ropes over to the other vehicle and select ‘Attach Tow Ropes’. You can tow up to 2 vehicles at a time. <br />",
			"When selling multiple vehicles, you MUST sell them in reverse order (last one first) or you will lose some vehicles. <br />",
"<br />",
			"Other options:<br />",
			"- ‘Drop Tow Ropes’ - If you want to drop them after you've picked them up.<br />",
			"- ‘Pick Up Tow Ropes’ - To un-tow a vehicle or pick them up off the ground.<br />",
			"- ‘Put Away Tow Ropes’ - So they aren’t dragging behind you.<br />",
"<br />",
			"We also have the R3F towing available for most vehicles.  The is the bright green option on the scroll wheel.  DO NOT USE NON_PERSISTENT VEHICLES TO TOW PERSISTANT VEHICLES!!!!  The persistent vehicle will disappear!<br />",
"<br />",



			"<t size='1.2' color='#db3a47' underline='true'>SLING LOADING</t><br />",
			"<br />",
			"While at your aircraft select ‘Deploy Cargo Ropes’. If you have the mod installed you may see an option box on the upper-left of your screen asking how many sling positions you want to deploy. Select ‘Pick Up Cargo Ropes’ then move to the cargo you want to sling load and select ‘Attach To Cargo Ropes’. Get in your aircraft and fly away! <br />",
"<br />",
			"If you fly too fast you may lose your cargo. Keep an eye on it and you can land and pick it up again. <br />",
"<br />",
			"Some aircraft deploy multiple sets of ropes. You can use these additional ropes to sling additional cargo or attach them to the primary cargo to make it more secure. If slinging multiple vehicles be careful how you load them. If they are banging into each other they might explode. Lengthen or shorten one or more sets of ropes to keep that from happening.<br />",
"<br />",
			"You can also:<br />",
			"- ‘Drop Cargo Ropes’ - If you want to drop them after you've picked them up.<br />",
			"- ‘Retract Cargo Ropes’	- To put them back in the aircraft.<br />",
			"- ‘Extend Cargo Ropes’ - To lengthen the ropes while flying.<br />",
			"- ‘Shorten Cargo Ropes’ - To make ropes shorter while flying.<br />",
			"- ‘Release Cargo’ - yeah...<br />",
"<br />",



			"<t size='1.2' color='#db3a47' underline='true'>LOADING CARGO INTO VEHICLES</t><br />",
"<br />",
			"Back your vehicle up to the cargo you want to load. If the vehicle and cargo are compatible you'll have an option in yellow to ‘Load cargo on (vehicle)’. To unload cargo select ‘Unload cargo from (vehicle)’. <br />",
"<br />",
			"Underwater cargo from shipwrecks can be loaded onto SDVs (subs). Approach the crate ‘head on’ and you will get the option to load.<br />",
"<br />",



			"<t size='1.2' color='#db3a47' underline='true'>SELLING CRATES </t><br />",
"<br />",
			"Unload your cargo to the ground at the Waste Dump trader. Approach the crate/box, select ‘Take (crate)’, and then select ‘Release (cargo)’.<br />",
"<br />",
			"You can now sell this crate/box to the Waste Dump Trader as if it was a vehicle... Cha-ching!<br />",
"<br />",
			"Don't leave empty crates laying around the dump. Either sell them or get rid of them.  The Admin can see who left the crate.<br />",
"<br />",



			"<t size='1.2' color='#db3a47' underline='true'>ENHANCED MOVEMENT SETUP</t><br />",
"<br />",
			 "<t color='#db3a47'>1 - </t>Navigate to your keyboard controls customization (escape menu).<br />",
			 "<t color='#db3a47'>2 - </t>Scroll down on the 'Show:' menu to 'Custom controls'.<br />",
			 "<t color='#db3a47'>3 - </t>Choose a control slot that you want to use (anything other than 1-3) and assign a key binding to it.<br />",
			 "<t color='#db3a47'>4 - </t>If you want to use ArmA's default 'V' key make sure to delete the existing key binding under 'Infantry movement'.<br />",
			 "<t color='#db3a47'>5 - </t>Back at the escape screen, select the 'Enhanced Movement' options on the lower-right of the screen.<br />",
			 "<t color='#db3a47'>6 - </t>Click on 'Keys', then 'Jump/Climb'.<br />",
			 "<t color='#db3a47'>7 - </t>Assign the Custom Control slot that you set up above.<br />",
			 "<t color='#db3a47'>8 - </t>Go climb some shit.<br />",
"<br />",



			"<t size='1.2' color='#db3a47' underline='true'>DEPLOY BIKE / QUAD / GNAT / KAYAK</t><br />",
"<br />",
			"We decided to make your life a bit easier for the bambies.<br />",
			" - If you are a Bambi you can deploy a vehicle from your XM8.<br />",
			" - You can pack the vehicles back up by selecting 'Pack Vehicle' from the scroll-wheel.<br />",
			" - These are not persistent - they will de-spawn at restart.<br />",

"<br />",



			"<t size='1.2' color='#db3a47' underline='true'>VIEW DISTANCE</t><br />",
"<br />",
			"Use the View Distance app in your XM8 to customize your view settings depending on whether you're on foot, in a car, or in an aircraft. The shorter your view distance the better your FPS will be but you might not see things you need to. Play with it.<br />",

"<br />",



			"<t size='1.2' color='#db3a47' underline='true'>UNIT SCANNER</t><br />",
"<br />",
			"Your XM8 has a Unit Scanner app in it to help locate AI, zombies, players, or vehicles. - Open XM8 > More > Unit Scanner.<br />",

"<br />",


			"<t size='1.2' color='#db3a47' underline='true'>BASE MARKER</t><br />",
"<br />",
			"Use this XM8 App to place a flag marker on the map where your base is.  This will disappear at startup - Open XM8 > More > Base Marker.<br />",
"<br />",


			"<t size='1.2' color='#db3a47' underline='true'>RECRUIT SOLDIER</t><br />",
"<br />",
			"This XM8 app all will allow you to spawn an AI NPC that will follow and fight with you until killed.  You need to have some Beef Parts on you to use this app.<br />",
"<br />",



			"<t size='1.2' color='#db3a47' underline='true'>BSF AIRDROP</t><br />",
"<br />",
			"With this XM8 app you can call in an airdrop of supplies, vehicles, or base parts. Categories and prices are listed. After selecting your payload and hitting the 'Order Drop', a transport heli will be deployed and para-drop your cargo.  Look for the smoke marker. VEHICLES ARE NOT PERSISTENT!<br />",
"<br />",



			"<t size='1.2' color='#db3a47' underline='true'>DRIVE TRAINS!</t><br />",
"<br />",
			"Most trains found on map can be entered and driven along their tracks.  Approach the train and select 'Enter Train As Driver'.  Use W & D to move train and hit DELETE to exit. You can hook up other cars by bumping into them.<br />",
"<br />",


			"<t size='1.2' color='#db3a47' underline='true'>FISHING! (sort of)</t><br />",
"<br />",
			"When in a stationary boat in relatively deep water you can cast your net and hope for dinner. You must have a BSF Fishing Net in your inventory.  Hit the INS key and let the excitement begin.<br />",
"<br />",



"<br />"
			 };
      };
      class fifth
      {
         menuName = "ADMIN";
         title = "ADMIN REQUESTS";
         content[] = {
			"<img size='3' align='center' image='BSF_Client\images\BSF_Logo_Dirty_1024x256.paa' />",
"<br />",
			"The ADMIN are here to help with most types issues that come up.<br />",
"<br />",
			"That being said, it's important to everyone on the server that you don't over-use the admin's time and help.<br />",
"<br />",
			"Remember that the admin are:<br />",
"<br />",
			"<t size='1.2' color='#db3a47' underline='true'>Players!</t> - Players that want to actually PLAY.  Constantly being interrupted with trivial complaints just makes it less enjoyable for them and they may not be around as much as you'd like.<br />",
"<br />",
			"<t size='1.2' color='#db3a47' underline='true'>Volunteers!</t> - Nobody is getting paid here, or making any money.  Try to remember that if you're getting frustrated with ArmA bugs. <br />",
"<br />",
			"Speaking of bugs...<br />",
			"ARMA is a buggy game.  Everyone knows this and shit just happens sometimes... unfortunate shit. Shit is lost. Shit blows up.  Shit just mysteriously vanishes... SHIT!!!<br />",
"<br />",
			"While we want to help, we can't replace every lost item or vehicle.<br />",
"<br />",
			"Make sure to read the section about our VEHICLE REPLACEMENT policies... VIDEO!!!<br />",
"<br />",
			"Now that we've clarified our position here, please ask us for help if something terrible happens! <br />",
"<br />",
"<br />"
			 };
      };
       class sixth
      {
         menuName = "TERRITORIES";
         title = "TERRITORIES & BASES";
         content[] = {
			"<img size='3' align='center' image='BSF_Client\images\BSF_Logo_Dirty_1024x256.paa' />",
"<br />",
			"We encourage base building but 'ask' that you do so in a way that doesn't impact other player's game.  That means not obstructing things like airstrips, gas stations, roads, military areas, high loot areas, etc.  If you're not sure, just ask an admin for clarification.  If you build in an off-limits area, we might just delete it as soon as we find it<br />",
"<br />",
"<br />",
			"<t size='1.2' color='#db3a47' underline='true'>BASE LOCATIONS</t><br />",
"<br />",
			"Loot won't spawn within the radius of a territory.  That's why we limit how close you can build to these areas.<br />",
"<br />",
			"No Building within 1,000m of trader zones..<br />",
"<br />",
			"No building within 200m of the perimeter of any town, military area, or high loot area.<br />",
"<br />",
			"Don't obstruct access to road, airstrips, gas stations, etc.<br />",
"<br />",
			"Keep your structures away from the edge of the road.  A good point of reference is the distance that most of the little rock walls are on Altis and Malden.<br />",
"<br />",
			"<t size='1.2' color='#db3a47' underline='true'>PROTECTION MONEY</t><br />",
"<br />",
			"As in all Exile servers, you need to pay protection money every 10 days at the Office Trader in order to keep your base intact.  If you fail to pay the tabs owed your base will just disappear along with everything in it! You can see when your next payment is due in the TERRITORIES section of your XM8.  The amount owed is calculated by the number of items built in that territory.<br />",
"<br />",
"<br />",
"<br />"
			 };
      };
      class seventh
      {
         menuName = "DONATE";
         title = "HOW TO SUPPORT YOUR SERVER";
         content[] = {
			"<img size='3' align='center' image='BSF_Client\images\BSF_Logo_Dirty_1024x256.paa' />",
"<br />",
		 "<t size='1.2'>It takes a lot of time and money to keep these servers running and maintained. We run multiple dedicated servers in order to maintain good performance on each of our maps. </t><br />",
"<br />",
		 "All of the money needed to keep this going comes from players. Your support keeps the lights on.  Please consider pitching in to ensure that we can stick around.<br />",
"<br />",
		 "Donating is easy using our secure PayPal or Patreon links on our website - <a color='#db3a47' href='http://bs-free.com/donate/'>BS-Free.com</a><br />",

"<br />",
"<br />"
			 };
      };
   };
};
