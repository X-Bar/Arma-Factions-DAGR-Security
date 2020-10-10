// Author X-Bar
// https://steamcommunity.com/profiles/76561198017283845/
// Made using Drongo's Config Generator
// https://steamcommunity.com/sharedfiles/filedetails/?id=1771335720

// DAGR Security a poor PMC
// vanilla version

// changed JTAC vest

class cfgPatches
{
  class DARG_LTD_DARG_Security_LTD
  {
    units[]={"DARG_LTD_Officer","DARG_LTD_Squad_Leader_PDW","DARG_LTD_Contractor_PDW","DARG_LTD_Contractor_Driver_","DARG_LTD_Contractor_Crewmen","DARG_LTD_Contractor_Heli_Pilot","DARG_LTD_Contractor_Pilot_","DARG_LTD_Contractor_JTAC","DARG_LTD_Contractor_Sharpshooter","DARG_LTD_Van_Transport","DARG_LTD_Offroad_Radios","DARG_LTD_WY55_Hellcat","DARG_LTD_Cessna","DARG_LTD_Offroad","DARG_LTD_Offroad_service","DARG_LTD_Mk6_mortar"};
    weapons[]={"DARG_LTD_hgun_Pistol_heavy_02_F_acc_flashlight_pistol","DARG_LTD_hgun_PDW2000_F","DARG_LTD_hgun_ACPC2_F","DARG_LTD_hgun_Pistol_01_F","DARG_LTD_arifle_Mk20_GL_plain_F_acc_flashlight","DARG_LTD_srifle_DMR_06_hunter_F_optic_KHS_old"};
    requiredVersion=0.1;
    requiredAddons[]={"A3_Weapons_F_Items","A3_Weapons_F","A3_Weapons_F_Pistols_Pistol_Heavy_02","A3_Characters_F","A3_Weapons_F_SMGs_Pdw2000","A3_Weapons_F_Pistols_ACPC2","A3_Characters_F_Orange","A3_Weapons_F_Exp_Pistols_Pistol_01","A3_Characters_F_Exp","A3_Characters_F_Enoch_Headgear","A3_Weapons_F_Rifles_MK20","A3_Weapons_F_Enoch_LongRangeRifles_DMR_06"};
  };
};

class cfgFactionClasses
{
  class DARG_LTD_DARG_Security_LTD
  {
    icon="";
    displayName="DARG Security LTD";
    side=2;
    priority=1;
  };
};


class cfgWeapons
{
  class hgun_Pistol_heavy_02_F;
  class hgun_PDW2000_F;
  class hgun_ACPC2_F;
  class hgun_Pistol_01_F;
  class arifle_Mk20_GL_plain_F;
  class srifle_DMR_06_hunter_F;

  class DARG_LTD_hgun_Pistol_heavy_02_F_acc_flashlight_pistol: hgun_Pistol_heavy_02_F
  {
    displayName="Zubr .45 ACP";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_flashlight_pistol";
      };
    };
  };

  class DARG_LTD_hgun_PDW2000_F: hgun_PDW2000_F
  {
    displayName="PDW2000 9 mm";
    scope=1;
    class LinkedItems
    {
    };
  };

  class DARG_LTD_hgun_ACPC2_F: hgun_ACPC2_F
  {
    displayName="ACP-C2 .45 ACP";
    scope=1;
    class LinkedItems
    {
    };
  };

  class DARG_LTD_hgun_Pistol_01_F: hgun_Pistol_01_F
  {
    displayName="PM 9 mm";
    scope=1;
    class LinkedItems
    {
    };
  };

  class DARG_LTD_arifle_Mk20_GL_plain_F_acc_flashlight: arifle_Mk20_GL_plain_F
  {
    displayName="Mk20 EGLM 5.56 mm";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_flashlight";
      };
    };
  };

  class DARG_LTD_srifle_DMR_06_hunter_F_optic_KHS_old: srifle_DMR_06_hunter_F
  {
    displayName="Mk14 7.62 mm (Classic)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_KHS_old";
      };
    };
  };

};

class cfgVehicles
{
  class B_officer_F;
  class B_LegStrapBag_black_F;
  class B_Soldier_SL_F;
  class I_Soldier_lite_F;
  class I_crew_F;
  class I_helipilot_F;
  class I_pilot_F;
  class B_recon_JTAC_F;
  class B_Recon_Sharpshooter_F;
  
  class B_RadioBag_01_digi_F;
  
  class C_Van_02_transport_F;
  class C_Offroad_01_comms_F;
  class I_Heli_light_03_unarmed_F;
  class C_Plane_Civil_01_F;
  class C_Offroad_01_F;
  class C_Offroad_01_repair_F;
  class I_Mortar_01_F;

  class DARG_LTD_Officer: B_officer_F
  {
    faction="DARG_LTD_DARG_Security_LTD";
    side=2;
    displayName="Officer";
    uniformClass="U_Marshal";
    weapons[]={"Binocular","DARG_LTD_hgun_Pistol_heavy_02_F_acc_flashlight_pistol","Put","Throw"};
    respawnWeapons[]={"Binocular","DARG_LTD_hgun_Pistol_heavy_02_F_acc_flashlight_pistol","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    magazines[]={"6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShellBlue","SmokeShell","SmokeShell","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder"};
    respawnMagazines[]={"6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShellBlue","SmokeShell","SmokeShell","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_MilCap_gry","V_Rangemaster_belt","G_Squares_Tinted"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_MilCap_gry","V_Rangemaster_belt","G_Squares_Tinted"};
    backpack="DARG_LTD_Officer_pack";
  };

  class DARG_LTD_Squad_Leader_PDW: B_Soldier_SL_F
  {
    faction="DARG_LTD_DARG_Security_LTD";
    side=2;
    displayName="Squad Leader PDW";
    uniformClass="U_C_IDAP_Man_cargo_F";
    weapons[]={"Binocular","DARG_LTD_hgun_PDW2000_F","DARG_LTD_hgun_ACPC2_F","Put","Throw"};
    respawnWeapons[]={"Binocular","DARG_LTD_hgun_PDW2000_F","DARG_LTD_hgun_ACPC2_F","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
    magazines[]={"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellBlue","SmokeShell","SmokeShell","SmokeShell","SmokeShell","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellGreen","SmokeShellRed"};
    respawnMagazines[]={"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellBlue","SmokeShell","SmokeShell","SmokeShell","SmokeShell","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellGreen","SmokeShellRed"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles","Binocular","H_Booniehat_khk_hs","V_TacVestIR_blk","G_Tactical_Black","NVGoggles"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles","Binocular","H_Booniehat_khk_hs","V_TacVestIR_blk","G_Tactical_Black","NVGoggles"};
    backpack="DARG_LTD_Squad_Leader_PDW_pack";
  };

  class DARG_LTD_Contractor_PDW: I_Soldier_lite_F
  {
    faction="DARG_LTD_DARG_Security_LTD";
    side=2;
    displayName="Contractor PDW";
    uniformClass="U_C_Mechanic_01_F";
    weapons[]={"Binocular","DARG_LTD_hgun_PDW2000_F","DARG_LTD_hgun_Pistol_01_F","Put","Throw"};
    respawnWeapons[]={"Binocular","DARG_LTD_hgun_PDW2000_F","DARG_LTD_hgun_Pistol_01_F","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    magazines[]={"10Rnd_9x21_Mag","10Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellBlue","SmokeShell","SmokeShell","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
    respawnMagazines[]={"10Rnd_9x21_Mag","10Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellBlue","SmokeShell","SmokeShell","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_Cap_oli_hs","V_TacVest_blk","G_Bandanna_sport"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_Cap_oli_hs","V_TacVest_blk","G_Bandanna_sport"};
    backpack="DARG_LTD_Contractor_PDW_pack";
  };

  class DARG_LTD_Contractor_Driver_: I_crew_F
  {
    faction="DARG_LTD_DARG_Security_LTD";
    side=2;
    displayName="Contractor Driver";
    uniformClass="U_I_C_Soldier_Bandit_2_F";
    weapons[]={"Binocular","DARG_LTD_hgun_PDW2000_F","DARG_LTD_hgun_Pistol_01_F","Put","Throw"};
    respawnWeapons[]={"Binocular","DARG_LTD_hgun_PDW2000_F","DARG_LTD_hgun_Pistol_01_F","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    magazines[]={"10Rnd_9x21_Mag","10Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellBlue","SmokeShell","SmokeShell","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
    respawnMagazines[]={"10Rnd_9x21_Mag","10Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellBlue","SmokeShell","SmokeShell","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_Cap_blk_CMMG","V_TacVest_blk","G_WirelessEarpiece_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_Cap_blk_CMMG","V_TacVest_blk","G_WirelessEarpiece_F"};
    backpack="DARG_LTD_Contractor_Driver__pack";
  };

  class DARG_LTD_Contractor_Crewmen: I_crew_F
  {
    faction="DARG_LTD_DARG_Security_LTD";
    side=2;
    displayName="Contractor Crewmen";
    uniformClass="U_C_WorkerCoveralls";
    weapons[]={"Binocular","DARG_LTD_hgun_PDW2000_F","DARG_LTD_hgun_Pistol_01_F","Put","Throw"};
    respawnWeapons[]={"Binocular","DARG_LTD_hgun_PDW2000_F","DARG_LTD_hgun_Pistol_01_F","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    magazines[]={"10Rnd_9x21_Mag","10Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellBlue","SmokeShell","SmokeShell","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
    respawnMagazines[]={"10Rnd_9x21_Mag","10Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellBlue","SmokeShell","SmokeShell","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_Tank_eaf_F","V_Rangemaster_belt","G_Lowprofile"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_Tank_eaf_F","V_Rangemaster_belt","G_Lowprofile"};
    backpack="DARG_LTD_Contractor_Crewmen_pack";
  };

  class DARG_LTD_Contractor_Heli_Pilot: I_helipilot_F
  {
    faction="DARG_LTD_DARG_Security_LTD";
    side=2;
    displayName="Contractor Heli Pilot";
    uniformClass="U_C_Driver_3";
    weapons[]={"Binocular","DARG_LTD_hgun_PDW2000_F","DARG_LTD_hgun_Pistol_01_F","Put","Throw"};
    respawnWeapons[]={"Binocular","DARG_LTD_hgun_PDW2000_F","DARG_LTD_hgun_Pistol_01_F","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    magazines[]={"10Rnd_9x21_Mag","10Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellBlue","SmokeShell","SmokeShell","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
    respawnMagazines[]={"10Rnd_9x21_Mag","10Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellBlue","SmokeShell","SmokeShell","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_Tank_eaf_F","V_Rangemaster_belt","G_Combat"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_Tank_eaf_F","V_Rangemaster_belt","G_Combat"};
    backpack="DARG_LTD_Contractor_Heli_Pilot_pack";
  };

  class DARG_LTD_Contractor_Pilot_: I_pilot_F
  {
    faction="DARG_LTD_DARG_Security_LTD";
    side=2;
    displayName="Contractor Pilot";
    uniformClass="U_C_Driver_3";
    weapons[]={"Binocular","DARG_LTD_hgun_PDW2000_F","DARG_LTD_hgun_Pistol_01_F","Put","Throw"};
    respawnWeapons[]={"Binocular","DARG_LTD_hgun_PDW2000_F","DARG_LTD_hgun_Pistol_01_F","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    magazines[]={"10Rnd_9x21_Mag","10Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellBlue","SmokeShell","SmokeShell","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
    respawnMagazines[]={"10Rnd_9x21_Mag","10Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellBlue","SmokeShell","SmokeShell","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_Tank_eaf_F","V_Rangemaster_belt","G_Combat"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_Tank_eaf_F","V_Rangemaster_belt","G_Combat"};
    backpack="DARG_LTD_Contractor_Pilot__pack";
  };

  class DARG_LTD_Contractor_JTAC: B_recon_JTAC_F
  {
    faction="DARG_LTD_DARG_Security_LTD";
    side=2;
    displayName="Contractor JTAC";
    //~ editorSubcategory="DARG_LTD_ed_men"; // how does this work?
    uniformClass="U_BG_Guerrilla_6_1";
    weapons[]={"Laserdesignator","DARG_LTD_arifle_Mk20_GL_plain_F_acc_flashlight","Put","Throw"};
    respawnWeapons[]={"Laserdesignator","DARG_LTD_arifle_Mk20_GL_plain_F_acc_flashlight","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
    magazines[]={"UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","SmokeShellOrange","SmokeShellOrange","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellRed","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShellPurple","SmokeShellPurple"};
    respawnMagazines[]={"UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","SmokeShellOrange","SmokeShellOrange","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellRed","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShellPurple","SmokeShellPurple"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles","Laserdesignator","H_Booniehat_khk_hs","V_TacChestrig_cbr_F","G_Bandanna_khk","NVGoggles"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles","Laserdesignator","H_Booniehat_khk_hs","V_TacChestrig_cbr_F","G_Bandanna_khk","NVGoggles"};
    backpack="DARG_LTD_Contractor_JTAC_pack";
  };

  class DARG_LTD_Contractor_Sharpshooter: B_Recon_Sharpshooter_F
  {
    faction="DARG_LTD_DARG_Security_LTD";
    side=2;
    displayName="Contractor Sharpshooter";
    uniformClass="U_BG_Guerilla1_2_F";
    weapons[]={"Laserdesignator","DARG_LTD_srifle_DMR_06_hunter_F_optic_KHS_old","DARG_LTD_hgun_Pistol_01_F","Put","Throw"};
    respawnWeapons[]={"Laserdesignator","DARG_LTD_srifle_DMR_06_hunter_F_optic_KHS_old","DARG_LTD_hgun_Pistol_01_F","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    magazines[]={"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","SmokeShellBlue","SmokeShell","SmokeShell","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag"};
    respawnMagazines[]={"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","SmokeShellBlue","SmokeShell","SmokeShell","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Laserdesignator","H_Booniehat_khk_hs","V_BandollierB_khk","G_Bandanna_khk"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Laserdesignator","H_Booniehat_khk_hs","V_BandollierB_khk","G_Bandanna_khk"};
    backpack="DARG_LTD_Contractor_Sharpshooter_pack";
  };

  class DARG_LTD_Van_Transport: C_Van_02_transport_F
  {
    faction="DARG_LTD_DARG_Security_LTD";
    side=2;
    displayName="Van Transport";
    hiddenSelectionsTextures[]={"a3\soft_f_orange\van_02\data\van_body_black_co.paa","a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa","a3\soft_f_orange\van_02\data\van_glass_transport_ca.paa","a3\soft_f_orange\van_02\data\van_body_black_co.paa"};
    crew="DARG_LTD_Contractor_Driver_";
    typicalCargo[]={"DARG_LTD_Contractor_Driver_"};
  };

  class DARG_LTD_Offroad_Radios: C_Offroad_01_comms_F
  {
    faction="DARG_LTD_DARG_Security_LTD";
    side=2;
    displayName="Offroad Radios";
    hiddenSelectionsTextures[]={"a3\soft_f_enoch\offroad_01\data\offroad_01_ext_grn_co.paa","a3\soft_f_enoch\offroad_01\data\offroad_01_ext_grn_co.paa","a3\soft_f_enoch\offroad_01\data\offroad_01_cover_grn_co.paa"};
    crew="DARG_LTD_Contractor_Driver_";
    typicalCargo[]={"DARG_LTD_Contractor_Driver_"};
  };

  class DARG_LTD_WY55_Hellcat: I_Heli_light_03_unarmed_F
  {
    faction="DARG_LTD_DARG_Security_LTD";
    side=2;
    displayName="WY55 Hellcat";
    hiddenSelectionsTextures[]={"a3\air_f_epb\heli_light_03\data\heli_light_03_base_co.paa"};
    crew="DARG_LTD_Contractor_Heli_Pilot";
    typicalCargo[]={"DARG_LTD_Contractor_Heli_Pilot"};
  };

  class DARG_LTD_Cessna: C_Plane_Civil_01_F
  {
    faction="DARG_LTD_DARG_Security_LTD";
    side=2;
    displayName="Cessna";
    hiddenSelectionsTextures[]={"a3\air_f_exp\plane_civil_01\data\btt_ext_01_wave_co.paa","a3\air_f_exp\plane_civil_01\data\btt_ext_02_wave_co.paa","a3\air_f_exp\plane_civil_01\data\btt_int_01_tan_co.paa","a3\air_f_exp\plane_civil_01\data\btt_int_02_tan_co.paa"};
    crew="DARG_LTD_Contractor_Pilot_";
    typicalCargo[]={"DARG_LTD_Contractor_Pilot_"};
  };

  class DARG_LTD_Offroad: C_Offroad_01_F
  {
    faction="DARG_LTD_DARG_Security_LTD";
    side=2;
    displayName="Offroad";
    hiddenSelectionsTextures[]={"a3\soft_f\offroad_01\data\offroad_01_ext_base05_co.paa","a3\soft_f\offroad_01\data\offroad_01_ext_base05_co.paa"};
    crew="DARG_LTD_Contractor_Driver_";
    typicalCargo[]={"DARG_LTD_Contractor_Driver_"};
  };

  class DARG_LTD_Offroad_service: C_Offroad_01_repair_F
  {
    faction="DARG_LTD_DARG_Security_LTD";
    side=2;
    displayName="Offroad service";
    hiddenSelectionsTextures[]={"a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_repair_civ_co.paa","a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_repair_civ_co.paa"};
    crew="DARG_LTD_Contractor_Driver_";
    typicalCargo[]={"DARG_LTD_Contractor_Driver_"};
  };

  class DARG_LTD_Mk6_mortar: I_Mortar_01_F
  {
    faction="DARG_LTD_DARG_Security_LTD";
    side=2;
    displayName="Mk6 mortar";
    hiddenSelectionsTextures[]={"a3\static_f\mortar_01\data\mortar_01_co.paa"};
    crew="DARG_LTD_Contractor_Driver_";
    typicalCargo[]={"DARG_LTD_Contractor_Driver_"};
  };


  class DARG_LTD_Officer_pack: B_LegStrapBag_black_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_SmokeShellBlue {count=1;magazine="SmokeShellBlue";};
     class _xx_SmokeShell {count=2;magazine="SmokeShell";};
     class _xx_6Rnd_45ACP_Cylinder {count=4;magazine="6Rnd_45ACP_Cylinder";};
    };
    class TransportItems
    {
     class _xx_FirstAidKit {count=2;name="FirstAidKit";};
    };
    class TransportWeapons{};
  };


  class DARG_LTD_Squad_Leader_PDW_pack: B_LegStrapBag_black_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_SmokeShellBlue {count=1;magazine="SmokeShellBlue";};
     class _xx_SmokeShell {count=4;magazine="SmokeShell";};
     class _xx_30Rnd_9x21_Mag {count=2;magazine="30Rnd_9x21_Mag";};
     class _xx_SmokeShellGreen {count=1;magazine="SmokeShellGreen";};
     class _xx_SmokeShellRed {count=1;magazine="SmokeShellRed";};
    };
    class TransportItems
    {
     class _xx_FirstAidKit {count=2;name="FirstAidKit";};
    };
    class TransportWeapons{};
  };


  class DARG_LTD_Contractor_PDW_pack: B_LegStrapBag_black_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_SmokeShellBlue {count=1;magazine="SmokeShellBlue";};
     class _xx_SmokeShell {count=2;magazine="SmokeShell";};
     class _xx_30Rnd_9x21_Mag {count=2;magazine="30Rnd_9x21_Mag";};
    };
    class TransportItems
    {
     class _xx_FirstAidKit {count=2;name="FirstAidKit";};
    };
    class TransportWeapons{};
  };


  class DARG_LTD_Contractor_Driver__pack: B_LegStrapBag_black_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_SmokeShellBlue {count=1;magazine="SmokeShellBlue";};
     class _xx_SmokeShell {count=2;magazine="SmokeShell";};
     class _xx_30Rnd_9x21_Mag {count=2;magazine="30Rnd_9x21_Mag";};
    };
    class TransportItems
    {
     class _xx_FirstAidKit {count=2;name="FirstAidKit";};
    };
    class TransportWeapons{};
  };


  class DARG_LTD_Contractor_Crewmen_pack: B_LegStrapBag_black_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_SmokeShellBlue {count=1;magazine="SmokeShellBlue";};
     class _xx_SmokeShell {count=2;magazine="SmokeShell";};
     class _xx_30Rnd_9x21_Mag {count=2;magazine="30Rnd_9x21_Mag";};
    };
    class TransportItems
    {
     class _xx_FirstAidKit {count=2;name="FirstAidKit";};
    };
    class TransportWeapons{};
  };


  class DARG_LTD_Contractor_Heli_Pilot_pack: B_LegStrapBag_black_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_SmokeShellBlue {count=1;magazine="SmokeShellBlue";};
     class _xx_SmokeShell {count=2;magazine="SmokeShell";};
     class _xx_30Rnd_9x21_Mag {count=2;magazine="30Rnd_9x21_Mag";};
    };
    class TransportItems
    {
     class _xx_FirstAidKit {count=2;name="FirstAidKit";};
    };
    class TransportWeapons{};
  };


  class DARG_LTD_Contractor_Pilot__pack: B_LegStrapBag_black_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_SmokeShellBlue {count=1;magazine="SmokeShellBlue";};
     class _xx_SmokeShell {count=2;magazine="SmokeShell";};
     class _xx_30Rnd_9x21_Mag {count=2;magazine="30Rnd_9x21_Mag";};
    };
    class TransportItems
    {
     class _xx_FirstAidKit {count=2;name="FirstAidKit";};
    };
    class TransportWeapons{};
  };


  class DARG_LTD_Contractor_JTAC_pack: B_RadioBag_01_digi_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_SmokeShellBlue {count=1;magazine="SmokeShellBlue";};
     class _xx_SmokeShell {count=4;magazine="SmokeShell";};
     class _xx_SmokeShellGreen {count=1;magazine="SmokeShellGreen";};
     class _xx_SmokeShellRed {count=2;magazine="SmokeShellRed";};
     class _xx_30Rnd_556x45_Stanag {count=3;magazine="30Rnd_556x45_Stanag";};
     class _xx_SmokeShellPurple {count=2;magazine="SmokeShellPurple";};
    };
    class TransportItems
    {
     class _xx_FirstAidKit {count=2;name="FirstAidKit";};
    };
    class TransportWeapons{};
  };


  class DARG_LTD_Contractor_Sharpshooter_pack: B_LegStrapBag_black_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_SmokeShellBlue {count=1;magazine="SmokeShellBlue";};
     class _xx_SmokeShell {count=2;magazine="SmokeShell";};
     class _xx_10Rnd_Mk14_762x51_Mag {count=2;magazine="10Rnd_Mk14_762x51_Mag";};
    };
    class TransportItems
    {
     class _xx_FirstAidKit {count=2;name="FirstAidKit";};
    };
    class TransportWeapons{};
  };

};


//////////////// Paste cfgGroups after this line //////////////// 

// Author X-Bar
// https://steamcommunity.com/profiles/76561198017283845/
// Made using Drongo's Config Generator
// https://steamcommunity.com/sharedfiles/filedetails/?id=1771335720

// DAGR Security a poor PMC
// vanilla version

class cfgGroups
{  
  class INDEP
  {
    name="Independent";
    class DAGR_Security_LTD
    {
      name="DAGR Security LTD";

      class Infantry
      {
        name="Infantry";

        class DAGR_LTD_R_Executive_Team_Small
        {
          name="Executive Team Small";
          faction="DAGR_LTD_DAGR_Security_LTD";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="DARG_LTD_Officer";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="DARG_LTD_Squad_Leader_PDW";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
        };
        class DAGR_LTD_R_Executive_Team
        {
          name="Executive Team";
          faction="DAGR_LTD_DAGR_Security_LTD";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="DARG_LTD_Officer";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="DARG_LTD_Squad_Leader_PDW";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="DARG_LTD_Contractor_PDW";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="DARG_LTD_Contractor_PDW";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=2;
            vehicle="DARG_LTD_Contractor_PDW";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=2;
            vehicle="DARG_LTD_Contractor_PDW";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
        };
        class DAGR_LTD_R_Fire_Team
        {
          name="Fire Team";
          faction="DAGR_LTD_DAGR_Security_LTD";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="DARG_LTD_Squad_Leader_PDW";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="DARG_LTD_Contractor_PDW";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="DARG_LTD_Contractor_PDW";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="DARG_LTD_Contractor_PDW";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=2;
            vehicle="DARG_LTD_Contractor_PDW";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
        };
        class DAGR_LTD_R_Patrol
        {
          name="Patrol";
          faction="DAGR_LTD_DAGR_Security_LTD";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="DARG_LTD_Squad_Leader_PDW";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="DARG_LTD_Contractor_PDW";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
        };
        class DAGR_LTD_R_Recon_Patrol
        {
          name="Recon Patrol";
          faction="DAGR_LTD_DAGR_Security_LTD";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="DARG_LTD_Squad_Leader_PDW";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="DARG_LTD_Contractor_PDW";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
        };
        class DAGR_LTD_R_Sentry
        {
          name="Sentry";
          faction="DAGR_LTD_DAGR_Security_LTD";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="DARG_LTD_Contractor_PDW";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="DARG_LTD_Contractor_PDW";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
        };
        // BAD Declaration 
        //~ class DAGR_LTD_R_Offroad_Radios_Sharpshoot_and_JTAC
        //~ {
          //~ name="Offroad Radios Sharpshoot and JTAC";
          //~ faction="DAGR_LTD_DAGR_Security_LTD";
          //~ side=2;
          //~ class Unit0
          //~ {
            //~ side=2;
            //~ vehicle="DARG_LTD_Contractor_Sharpshooter";
            //~ rank="PRIVATE";
            //~ position[]={0,-0,0};
          //~ };
        //~ };
      };
      class Motorized
      {
        name="Motorized";

        class DAGR_LTD_R_Van_Reinforcements
        {
          name="Van Reinforcements";
          faction="DAGR_LTD_DAGR_Security_LTD";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="DARG_LTD_Van_Transport";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="DARG_LTD_Squad_Leader_PDW";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=2;
            vehicle="DARG_LTD_Contractor_PDW";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=2;
            vehicle="DARG_LTD_Contractor_PDW";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
          class Unit4
          {
            side=2;
            vehicle="DARG_LTD_Contractor_PDW";
            rank="PRIVATE";
            position[]={0,-60,0};
          };
          class Unit5
          {
            side=2;
            vehicle="DARG_LTD_Contractor_PDW";
            rank="PRIVATE";
            position[]={0,-75,0};
          };
        };
        class DAGR_LTD_R_Offroad_Reinforcements
        {
          name="Offroad Reinforcements";
          faction="DAGR_LTD_DAGR_Security_LTD";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="DARG_LTD_Offroad";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="DARG_LTD_Squad_Leader_PDW";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=2;
            vehicle="DARG_LTD_Contractor_PDW";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=2;
            vehicle="DARG_LTD_Contractor_PDW";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
          class Unit4
          {
            side=2;
            vehicle="DARG_LTD_Contractor_PDW";
            rank="PRIVATE";
            position[]={0,-60,0};
          };
          class Unit5
          {
            side=2;
            vehicle="DARG_LTD_Contractor_PDW";
            rank="PRIVATE";
            position[]={0,-75,0};
          };
        };
        class DAGR_LTD_R_Offroad_Radios_Sharpshooter_and_JTAC
        {
          name="Offroad Radios Sharpshooter and JTAC";
          faction="DAGR_LTD_DAGR_Security_LTD";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="DARG_LTD_Offroad_Radios";
            rank="PRIVATE";
            position[]={0,0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="DARG_LTD_Contractor_JTAC";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit2
          {
            side=2;
            vehicle="DARG_LTD_Contractor_Sharpshooter";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
      };
      class Mechanized
      {
        name="Mechanized";

      };
      class Armored
      {
        name="Armored";

      };
      class SpecOps
      {
        name="Special Forces";

      };
      class Support
      {
        name="Support Infantry";

        class DAGR_LTD_R_Sharpshooter_JTAC_Team
        {
          name="Sharpshooter JTAC Team";
          faction="DAGR_LTD_DAGR_Security_LTD";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="DARG_LTD_Contractor_JTAC";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="DARG_LTD_Contractor_Sharpshooter";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
      };
      class Airborne
      {
        name="Airborne";

      };
      class Air
      {
        name="Air";

      };
    };
  };
};
