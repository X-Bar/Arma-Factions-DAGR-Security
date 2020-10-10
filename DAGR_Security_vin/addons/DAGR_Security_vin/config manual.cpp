// Author X-Bar
// https://steamcommunity.com/profiles/76561198017283845/
// Based on example by BroBeans 
// https://www.armaholic.com/forums.php?m=posts&q=31238

// DAGR Security a poor PMC
// vanilla version
 
class CfgPatches
{
    class dagr_security_faction_vin
    {
        unit[] = {"My_New_Rifleman", "My_New_Backpack", "My_New_Heli"}; //Array: should define any custom units you've created in this cfgVehicles (including Vehicles)
        weapons[] = {"My_New_Uniform", "My_New_Backpack", "My_New_Vest", "My_New_Helmet", "My_New_Gun"}; //Array: should define any custom weapons you've created in this cfgWeapons (including)
    };
};
 
class CfgEditorCategories //Replacement for Factions
{
    class dagr_security_g_vin // Faction name, please make it somewhat unique
    {
        displayName = "DAGR Security LTD"; // Name visible in the list
        Priority = 6; //How far down it appears in the menu
        side = 2; //0 = Opfor, 1 = Blufor, 2 = Independent, 3 = Civillian
    };
};
 
/*class CfgEditorSubCatergoies //Replacement for CfgVehicleclasses -- Although i reccommend using default SubCatergories
{
    class My_New_Faction_Special_Vehicles
    {
        displayName = "Vehicles (Special)";
    };
};*/
 
class CfgVehicles //Used for defining any vehicle/unit
{
    class B_Soldier_F; //Predefining Inheritence class - VERY IMPORTANT
    class B_Carryall_Base; //Predefining Inheritence class - VERY IMPORTANT
    class B_Heli_light_01_F; //Predefining Inheritence class - VERY IMPORTANT
 
    class My_New_Rifleman : B_Soldier_F //Your new units classname : Inheritence class
    {
        side = 2;
        scope = 2; //0 = Invisible, 1 = Invisible but usable, 2 = Visible and usable
        displayName = "Rifleman F";
        editorCatergory = "dagr_security_g_vin"; //Must match faction class name specified earlier
        //editorSubCatergory = "Custom_xx"; //Leave commented out unless you want to specify otherwise
        author = "X-Bar"; //Self explanatory
        backpack = "My_New_Backpack"; //Self explanatory .. comment out if you don't want a backpack/to inherit from class
        weapons[] = {"My_New_Gun", "hgun_Pistol_heavy_01_MRD_F","Throw","Put"}; //Weapons the unit should spawn with
        respawnWeapons[] = {"TEST_GUN","hgun_Pistol_heavy_01_MRD_F","Throw","Put"}; //Should be same as above
        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade"}; //Adds 2 mags (continue or use macros for more mags) and 2 grenades
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade"}; //should be same as above
        linkedItems[] = {"TEST_Vest","TEST_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"}; //Adds custom vest and helmet (specified later in config) and essentials
        respawnLinkedItems[] = {"TEST_Vest","TEST_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"}; //Should be same as above
        //uniformClass = "TEST_Uniform"; //uniform you are using (specified later in config)
        //hiddenSelections[] = {"camo"}; //ONLY COMMENT THESE IN IF YOU ARE RETEXTURING. IF OTHERWISE IT WILL INHERIT THE UNIFORM FROM THE INHERITANCE CLASS
        //HiddenSelectionsTextures[] = {"TEST\data\TEST_Uniform_co.paa"};    //Uniform textures path must be to your .pbo
    };
 
    class My_New_Backpack: B_Carryall_Base
    {
        displayname = "Heavy Ruck (CUSTOM)"; //In-Game Name
        scope = 2;
        //hiddenSelections[] = {"camo"}; //ONLY COMMENT THESE IN IF RETEXTURING
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_Backpack_co.paa"}; //Backpack Textures Path must be to your .pbo
 
        class TransportItems //Items it's carrying
        {
            class _xx_Medikit //Item Classname
            {
                name = "Medikit";
                count = 1; //amount
            };
            class _xx_FirstAidKit //Item Classname
            {
                name = "FirstAidKit";
                count = 5; //amount
            };
        };
    };
 
    class My_New_Heli: B_Heli_Light_01_F 
    {
        faction = "TEST_Faction"; //Faction
        side = 2;
        displayName = "MH-9 (Custom)"; //Ingame name
        crew = "B_Helipilot_F"; //or if you make your own crew... crew = "TEST_Heli_pilot";
        //hiddenSelections[] = {"camo1","camo2","camo3"};
        //hiddenSelectionsTextures[] = {"TEST\Data\TEST_mh9_co.paa","TEST\Data\TEST_MH9_co.paa","TEST\Data\TEST_MH9_co.paa"};
        class TransportItems //Cargo Items
        {
            class _xx_Medikit //Item Classname
            {
                name = "Medikit";
                count = 1; //amount
            };
            class _xx_Toolkit
            {
                name = "Toolkit";
                count = 1; //Amount
            };
            class _xx_FirstAidKit //Item Classname
            {
                name = "FirstAidKit";
                count = 5; //amount
            };
            class _xx_30Rnd_65x39_caseless_mag //Item Classname
            {
                count = 25; //amount
            };
        };
    };
};
 
class CfgWeapons
{
    class U_B_CombatUniform_mcam; //Predefining Inheritence class - VERY IMPORTANT
    class uniformitem; //Predefining Inheritence class - VERY IMPORTANT
    class H_HelmetSpecB; //Predefining Inheritence class - VERY IMPORTANT
    class V_PlateCarrier3_rgr; //Predefining Inheritence class - VERY IMPORTANT
    class ItemInfo; //Predefining Inheritence class - VERY IMPORTANT
    class ItemCore; //Predefining Inheritence class - VERY IMPORTANT
    class HeadgearItem; //Predefining Inheritence class - VERY IMPORTANT
    class arifle_MXC_Black_F; //Predefining Inheritence class - VERY IMPORTANT
 
    class My_New_Uniform: U_B_CombatUniform_mcam //New item name : Inheriting class
    {
        scope = 2;
        displayName = "Custom Uniform"; //In-Game name
        hiddenSelections[] = {"Camo"}; //Comment out if not using
        hiddenSelectionsTextures[] = {"TEST\data\TEST_Uniform_co.paa"}; //Path to my texture.
        class ItemInfo: UniformItem
        {
            uniformClass = "My_New_Rifleman"; //A Unit that wears it
            containerClass = "Supply40"; 
            mass = 30; //Weight
            hiddenSelections[] = {"camo"};
        };
    };
    
    class My_New_Vest: V_PlateCarrier3_rgr
    {
        displayName = "Heavy Vest (Custom)"; //In-Game name
        hiddenSelections[] = {"camo"}; //Comment out if you don't plan on rexturing
        hiddenSelectionsTextures[] = {"TEST\Data\TEST_Vest_co.paa"}; //Vest texture path
        class ItemInfo: ItemInfo
        { 
            containerClass = "Supply160"; //Carry Amount
            mass = 50; // Weight
            hiddenSelections[] = {"camo"};
        };
    };
 
 
 
    
    class My_New_Helmet: H_HelmetSpecB
    {
        displayName = "Combat Helmet (Custom)"; //In-Game name
        hiddenSelections[] = {"camo"}; //Comment out if you don't want to rexture
        hiddenSelectionsTextures[] = {"TEST\data\TEST_Helmet_co.paa"}; // Path to your texture.
    };
    
    
    class My_New_Gun: arifle_MXC_Black_F
    {
        scope = 2;
        displayName = "MX (Custom)";
        //hiddenSelections[] = {"camo"};
        //hiddenSelectionsTextures[] = {"TEST\data\TEST_Gun_co.paa"}; // Path to your texture.
        class LinkedItems
        {
            class LinkedItemsOptic //Attachment: Optics
            {
                slot = "CowsSlot";
                item = "optic_aco"; //ACO 
            };
            class LinkedItemsMuzzle //Attachment: Barrel
            {
                slot = "MuzzleSlot";
                item = "muzzle_snds_B"; //Supressor
            };
 
            class LinkedItemsAcc //Attachment: Accessory 
            {
                slot = "PointerSlot";
                item = "acc_flashlight"; //Flashlight
            };
        };
    };
};
