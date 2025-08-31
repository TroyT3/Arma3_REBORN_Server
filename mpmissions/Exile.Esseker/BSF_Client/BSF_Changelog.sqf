/*
    BSF_Changelog.sqf
    Holds all changelog entries, ordered newest to oldest.
*/

/*
TO DO 2025-08-18

Fix  8:50:28 File BSF_Community_Addon\addons\BSF_Client\code\fnc_BSF_ShowScanner.sqf..., line 14  - Error Suspending not allowed in this context
Add duping bipods to blacklist?
Check roaming vehicle map center mechanic

Fix:


    19:29:48 Error in expression <etText (_menuItem >> "condition"));
    if (_showMenuItem) then
    {
    private _icon = ge>
    19:29:48   Error position: <_showMenuItem) then
    {
    private _icon = ge>
    19:29:48   Error Undefined variable in expression: _showmenuitem
    19:29:48 File mpmissions\__CUR_MP.Esseker\SM\DynamicMenu\overrides\ExileClient_gui_interactionMenu_hook.sqf..., line 86

ALTER TABLE `account`
    DROP COLUMN `reborn_evr_res`;


    22:38:49 Error in expression <abase_query_selectSingle;
    if ((typeName _cargoContainers) isEqualTo "ARRAY") the>
    22:38:49   Error position: <_cargoContainers) isEqualTo "ARRAY") the>
    22:38:49   Error Undefined variable in expression: _cargocontainers
    22:38:49 File mpmissions\Exile.Esseker\Overrides\ExileServer_object_vehicle_database_load.sqf..., line 116

 9:06:58 Warning, config 'BSF_Community_Addon\addons\BSF_Signs\config.bin' contained invalid CfgPatches entry with extra required Addon 'a3_signs_f'. Invalid CfgPatches entries are invalid. A temporary workaround is being applied, this mod will soon stop working
 9:06:58 Warning, config 'BSF_Community_Addon\addons\BSF_Signs\config.bin' contained invalid CfgPatches entry with extra required Addon 'a3_structures_f_argo'. Invalid CfgPatches entries are invalid. A temporary workaround is being applied, this mod will soon stop working

*/
[
    "<t size='1.2'>August 5, 2025</t><br/>
    • Added many missing mags to the crafting system.<br/>    
    • Re-arranged some crafting menu categorries.<br/>    
    • Added a recipe to craft a toolbox (Foolbox).<br/>    
    • Re-fuel vehicles can now be used to fill gas cans for crafting.<br/>    
    • Reduced the quantity of green paint needed to craft BSF Armor Lockers.<br/>    
    • The cement mixer is no longer needed to craft BSF base parts that don't need cement to craft.<br/>    
    • Repaired a few obviously incorrect recipies.<br/>    
    • <br/>    
    <br/>    
    REBORN: <br/>    
    • Wild-spawned vehicles will now be deleted 2 weeks after spawning.  This will allow more time for players to claim them.<br/>    
    • During an EVR event, nearby AI and Zombies will be killed, preventing an attack while incapacitated.<br/>    
    • Re-wrote the infection and damage handling system. Stats will now be saved in the DB and be persistent.<br/>    
    • Fixed the 'Scavenge Wheel' mechanic to reflect actual number of wheels on a vehicle.<br/>    
    • <br/>    
    ",

    "<t size='1.2'>April 5, 2025</t><br/>
    • Added this here changelog announcement.<br/>    
    • New and improved 'Spawn Bodyguard' script in the XM8. No more lag. Still needs beef.<br/>
    • 'Search Corpse' behavior ported over from REBORN servers. Approach dead AI and use 'Study and hide corpse'.<br/>
    • Loot crates and wrecks are now discoverable by searching dead AI<br/>
    • Fixed some issues with old vehicles still showing in Asset Management<br/>
    • Updated loot tables<br/>
    • Added 'Ammo Bench' on servers where it was missing<br/>
    • Removed town invasion missions on Esseker.<br/>
    • Fixed the aircraft trader's spawn zone on Esseker.<br/>
    • Refinements on Bambi Vehicle Spawns.  A vehicle map marker will now be visible for 2 minutes after spawning.<br/>
    <br/>
    <br/>
    ",


    "<t size='1.2'>July 14, 2024</t><br/>
    • Added dedicated vehicle spawn zones to limit carnage when buying vehicles.<br/>    
    • Minor bug fixes.<br/>
    <br/>
    ",


    "<t size='1.2'>March 31, 2024</t><br/>

<t size='1.1'>ADDITIONS</t><br/>
    • Added the key for Automated Warning Suppressor<br/>
    • Added the key for Better Inventory<br/>
    • Added the key for  ATHENA Seconds Screen Map<br/>
    • Added the Mirage F1 fighter jet to Aircraft Traders on servers with armed jets.<br/>

<t size='1.1'>Ammo Crafting</t><br/>
    • The Ammo Crafting system was inspired by the style of gameplay used on our Reborn servers, where no ammo can be purchased. It is engaged at the new Ammo Workbench that can be crafted at your base. At the ammo workbench, you can disassemble and craft most mags. Disassembling adds components to your inventory; crafting requires them. The UI should be fairly intuitive and there are instructions accessible via a button on the app.<br/>

<t size='1.1'>Asset Management</t><br/>
    • This system gives you access to all of your territories and vehicles. It can be accessed as an XM8 app. With it, you can:<br/>
    • Toggle map markers for your base ( I removed the XM8 app that did the same thing)<br/>
    • Toggle map markers for every location that building is restricted, including other players' territories<br/>
    • Test if your current location can accept a flag  ( removed the XM8 app that did the same thing)<br/>
    • Change your base name and flag<br/>
    • Delete your territory after deconstructing all items<br/>
    • Toggle territory radius markers<br/>
    • Display territory info<br/>
    • Manage build-rights and moderation<br/>
    • Display all vehicles that you own<br/>
    • Display the inventory of each vehicle<br/>
    • Show the vehicle's grid location, PIN, health, VG status, lock status, and details<br/>
    • Toggle vehicle HP bars<br/>
    • Toggle map markers for vehicles<br/>

<t size='1.1'>CHANGES</t><br/>
    • Streamlined and adjusted Shipwreck scripts. Increased variety of underwater wrecks.<br/>
    • Persistent mission vehicles can now be claimed like on the Reborn servers.  You'll need a code lock.<br/>
    • Turning on the territory radius markers now shows red arrows for any portion of the border in a restricted zone, otherwise, the arrows will be green.<br/>
    • Added guardrails around Repair, Refuel, & Rearm station in most locations.  A few more need to be protected.<br/>

<t size='1.1'>XM8</t><br/>
    • Fixed the 'Donate' app from freezing when opened.<br/>
    • Added Asset Management<br/>
    • Removed old VG button<br/>
    • Combined the Bambi-spawnable vehicles into one XM8 app (Bambi Vehicle Spawn).<br/>
    • Removed redundant apps that are now part of Asset Management<br/>

<t size='1.1'>FIXES</t><br/>
    • Fixed the issues with installing crates at bases.  The inventory is now safe.  Crates can still launch into space if installation clips other objects such as floors.<br/>
    • All of those weapon attachments that dupe in containers will now be deleted at restart.<br/>
    • Fixed Donor status not being activated when respawning after death.<br/>
    • Removed UH-1Y from the list of AI reinforcement vehicles due to issues reported by @DrvoFix<br/>
    • Fixed EVR Resistance not being set after death on Reborn servers.<br/>



"]
