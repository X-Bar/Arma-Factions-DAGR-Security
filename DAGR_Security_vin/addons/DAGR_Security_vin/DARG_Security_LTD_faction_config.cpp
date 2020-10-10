class cfgPatches
{
  class DARG_Security_LTD_DARG_Security_LTD
  {
    units[]={"DARG_Security_LTD_Officer","DARG_Security_LTD_Squad_Leader_PDW","DARG_Security_LTD_Contractor_PDW","DARG_Security_LTD_Contractor_Driver_","DARG_Security_LTD_Contractor_Crewmen","DARG_Security_LTD_Contractor_Heli_Pilot","DARG_Security_LTD_Contractor_Pilot_","DARG_Security_LTD_Van_Transport","DARG_Security_LTD_Offroad","DARG_Security_LTD_Offroad_Radios","DARG_Security_LTD_WY55_Hellcat","DARG_Security_LTD_Cessna"};
    weapons[]={"DARG_Security_LTD_hgun_Pistol_heavy_02_F_acc_flashlight_pistol","DARG_Security_LTD_hgun_PDW2000_F","DARG_Security_LTD_hgun_ACPC2_F","DARG_Security_LTD_hgun_Pistol_01_F"};
    requiredVersion=0.1;
    requiredAddons[]={"A3_Weapons_F_Items","A3_Weapons_F","A3_Weapons_F_Pistols_Pistol_Heavy_02","A3_Characters_F","A3_Weapons_F_SMGs_Pdw2000","A3_Weapons_F_Pistols_ACPC2","A3_Characters_F_Orange","A3_Weapons_F_Exp_Pistols_Pistol_01","A3_Characters_F_Exp","A3_Characters_F_Enoch_Headgear"};
  };
};

class cfgFactionClasses
{
  class DARG_Security_LTD_DARG_Security_LTD
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

  class DARG_Security_LTD_hgun_Pistol_heavy_02_F_acc_flashlight_pistol: hgun_Pistol_heavy_02_F
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

  class DARG_Security_LTD_hgun_PDW2000_F: hgun_PDW2000_F
  {
    displayName="PDW2000 9 mm";
    scope=1;
    class LinkedItems
    {
    };
  };

  class DARG_Security_LTD_hgun_ACPC2_F: hgun_ACPC2_F
  {
    displayName="ACP-C2 .45 ACP";
    scope=1;
    class LinkedItems
    {
    };
  };

  class DARG_Security_LTD_hgun_Pistol_01_F: hgun_Pistol_01_F
  {
    displayName="PM 9 mm";
    scope=1;
    class LinkedItems
    {
    };
  };

};

class cfgVehicles
{
  class I_G_officer_F;
  class B_LegStrapBag_black_F;
  class I_G_Soldier_SL_F;
  class I_G_Soldier_F;
  class C_Van_02_transport_F;
  class C_IDAP_Offroad_01_F;
  class C_Offroad_01_comms_F;
  class I_Heli_light_03_unarmed_F;
  class C_Plane_Civil_01_F;

  class DARG_Security_LTD_Officer: I_G_officer_F
  {
    faction="DARG_Security_LTD_DARG_Security_LTD";
    side=2;
    displayName="Officer";
    uniformClass="U_Marshal";
    weapons[]={"Binocular","DARG_Security_LTD_hgun_Pistol_heavy_02_F_acc_flashlight_pistol","Put","Throw"};
    respawnWeapons[]={"Binocular","DARG_Security_LTD_hgun_Pistol_heavy_02_F_acc_flashlight_pistol","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    magazines[]={"6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShellBlue","SmokeShell","SmokeShell","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder"};
    respawnMagazines[]={"6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShellBlue","SmokeShell","SmokeShell","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_MilCap_gry","V_Rangemaster_belt","G_Bandanna_khk"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_MilCap_gry","V_Rangemaster_belt","G_Bandanna_khk"};
    backpack="DARG_Security_LTD_Officer_pack";
  };

  class DARG_Security_LTD_Squad_Leader_PDW: I_G_Soldier_SL_F
  {
    faction="DARG_Security_LTD_DARG_Security_LTD";
    side=2;
    displayName="Squad Leader PDW";
    uniformClass="U_C_IDAP_Man_cargo_F";
    weapons[]={"Binocular","DARG_Security_LTD_hgun_PDW2000_F","DARG_Security_LTD_hgun_ACPC2_F","Put","Throw"};
    respawnWeapons[]={"Binocular","DARG_Security_LTD_hgun_PDW2000_F","DARG_Security_LTD_hgun_ACPC2_F","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
    magazines[]={"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellBlue","SmokeShell","SmokeShell","SmokeShell","SmokeShell","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellGreen","SmokeShellRed"};
    respawnMagazines[]={"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellBlue","SmokeShell","SmokeShell","SmokeShell","SmokeShell","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellGreen","SmokeShellRed"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles_OPFOR","Binocular","H_Booniehat_khk_hs","V_TacVestIR_blk","G_Tactical_Black","NVGoggles_OPFOR"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","NVGoggles_OPFOR","Binocular","H_Booniehat_khk_hs","V_TacVestIR_blk","G_Tactical_Black","NVGoggles_OPFOR"};
    backpack="DARG_Security_LTD_Squad_Leader_PDW_pack";
  };

  class DARG_Security_LTD_Contractor_PDW: I_G_Soldier_F
  {
    faction="DARG_Security_LTD_DARG_Security_LTD";
    side=2;
    displayName="Contractor PDW";
    uniformClass="U_C_Mechanic_01_F";
    weapons[]={"Binocular","DARG_Security_LTD_hgun_PDW2000_F","DARG_Security_LTD_hgun_Pistol_01_F","Put","Throw"};
    respawnWeapons[]={"Binocular","DARG_Security_LTD_hgun_PDW2000_F","DARG_Security_LTD_hgun_Pistol_01_F","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellBlue","SmokeShell","SmokeShell","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
    respawnMagazines[]={"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellBlue","SmokeShell","SmokeShell","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_Cap_oli_hs","V_TacVest_blk","G_Bandanna_sport"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_Cap_oli_hs","V_TacVest_blk","G_Bandanna_sport"};
    backpack="DARG_Security_LTD_Contractor_PDW_pack";
  };

  class DARG_Security_LTD_Contractor_Driver_: I_G_Soldier_F
  {
    faction="DARG_Security_LTD_DARG_Security_LTD";
    side=2;
    displayName="Contractor Driver";
    uniformClass="U_I_C_Soldier_Bandit_2_F";
    weapons[]={"Binocular","DARG_Security_LTD_hgun_PDW2000_F","DARG_Security_LTD_hgun_Pistol_01_F","Put","Throw"};
    respawnWeapons[]={"Binocular","DARG_Security_LTD_hgun_PDW2000_F","DARG_Security_LTD_hgun_Pistol_01_F","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellBlue","SmokeShell","SmokeShell","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
    respawnMagazines[]={"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellBlue","SmokeShell","SmokeShell","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_Cap_blk_CMMG","V_TacVest_blk","G_WirelessEarpiece_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_Cap_blk_CMMG","V_TacVest_blk","G_WirelessEarpiece_F"};
    backpack="DARG_Security_LTD_Contractor_Driver__pack";
  };

  class DARG_Security_LTD_Contractor_Crewmen: I_G_Soldier_F
  {
    faction="DARG_Security_LTD_DARG_Security_LTD";
    side=2;
    displayName="Contractor Crewmen";
    uniformClass="U_C_WorkerCoveralls";
    weapons[]={"Binocular","DARG_Security_LTD_hgun_PDW2000_F","DARG_Security_LTD_hgun_Pistol_01_F","Put","Throw"};
    respawnWeapons[]={"Binocular","DARG_Security_LTD_hgun_PDW2000_F","DARG_Security_LTD_hgun_Pistol_01_F","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellBlue","SmokeShell","SmokeShell","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
    respawnMagazines[]={"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellBlue","SmokeShell","SmokeShell","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_Tank_eaf_F","V_Rangemaster_belt","G_Lowprofile"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_Tank_eaf_F","V_Rangemaster_belt","G_Lowprofile"};
    backpack="DARG_Security_LTD_Contractor_Crewmen_pack";
  };

  class DARG_Security_LTD_Contractor_Heli_Pilot: I_G_Soldier_F
  {
    faction="DARG_Security_LTD_DARG_Security_LTD";
    side=2;
    displayName="Contractor Heli Pilot";
    uniformClass="U_C_Driver_3";
    weapons[]={"Binocular","DARG_Security_LTD_hgun_PDW2000_F","DARG_Security_LTD_hgun_Pistol_01_F","Put","Throw"};
    respawnWeapons[]={"Binocular","DARG_Security_LTD_hgun_PDW2000_F","DARG_Security_LTD_hgun_Pistol_01_F","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellBlue","SmokeShell","SmokeShell","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
    respawnMagazines[]={"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellBlue","SmokeShell","SmokeShell","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_Tank_eaf_F","V_Rangemaster_belt","G_Combat"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_Tank_eaf_F","V_Rangemaster_belt","G_Combat"};
    backpack="DARG_Security_LTD_Contractor_Heli_Pilot_pack";
  };

  class DARG_Security_LTD_Contractor_Pilot_: I_G_Soldier_F
  {
    faction="DARG_Security_LTD_DARG_Security_LTD";
    side=2;
    displayName="Contractor Pilot";
    uniformClass="U_C_Driver_3";
    weapons[]={"Binocular","DARG_Security_LTD_hgun_PDW2000_F","DARG_Security_LTD_hgun_Pistol_01_F","Put","Throw"};
    respawnWeapons[]={"Binocular","DARG_Security_LTD_hgun_PDW2000_F","DARG_Security_LTD_hgun_Pistol_01_F","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    magazines[]={"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellBlue","SmokeShell","SmokeShell","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
    respawnMagazines[]={"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellBlue","SmokeShell","SmokeShell","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_Tank_eaf_F","V_Rangemaster_belt","G_Combat"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_Tank_eaf_F","V_Rangemaster_belt","G_Combat"};
    backpack="DARG_Security_LTD_Contractor_Pilot__pack";
  };

  class DARG_Security_LTD_Van_Transport: C_Van_02_transport_F
  {
    faction="DARG_Security_LTD_DARG_Security_LTD";
    side=2;
    displayName="Van Transport";
    hiddenSelectionsTextures[]={"a3\soft_f_orange\van_02\data\van_body_black_co.paa","a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa","a3\soft_f_orange\van_02\data\van_glass_transport_ca.paa","a3\soft_f_orange\van_02\data\van_body_black_co.paa"};
    crew="DARG_Security_LTD_Contractor_Driver_";
    typicalCargo[]={"DARG_Security_LTD_Contractor_Driver_"};
  };

  class DARG_Security_LTD_Offroad: C_IDAP_Offroad_01_F
  {
    faction="DARG_Security_LTD_DARG_Security_LTD";
    side=2;
    displayName="Offroad";
    hiddenSelectionsTextures[]={"a3\soft_f_enoch\offroad_01\data\offroad_01_ext_grn_co.paa","a3\soft_f_enoch\offroad_01\data\offroad_01_ext_grn_co.paa"};
    crew="DARG_Security_LTD_Contractor_Driver_";
    typicalCargo[]={"DARG_Security_LTD_Contractor_Driver_"};
  };

  class DARG_Security_LTD_Offroad_Radios: C_Offroad_01_comms_F
  {
    faction="DARG_Security_LTD_DARG_Security_LTD";
    side=2;
    displayName="Offroad Radios";
    hiddenSelectionsTextures[]={"a3\soft_f_enoch\offroad_01\data\offroad_01_ext_grn_co.paa","a3\soft_f_enoch\offroad_01\data\offroad_01_ext_grn_co.paa","a3\soft_f_enoch\offroad_01\data\offroad_01_cover_grn_co.paa"};
    crew="DARG_Security_LTD_Contractor_Driver_";
    typicalCargo[]={"DARG_Security_LTD_Contractor_Driver_"};
  };

  class DARG_Security_LTD_WY55_Hellcat: I_Heli_light_03_unarmed_F
  {
    faction="DARG_Security_LTD_DARG_Security_LTD";
    side=2;
    displayName="WY55 Hellcat";
    hiddenSelectionsTextures[]={"a3\air_f_epb\heli_light_03\data\heli_light_03_base_co.paa"};
    crew="DARG_Security_LTD_Contractor_Heli_Pilot";
    typicalCargo[]={"DARG_Security_LTD_Contractor_Heli_Pilot"};
  };

  class DARG_Security_LTD_Cessna: C_Plane_Civil_01_F
  {
    faction="DARG_Security_LTD_DARG_Security_LTD";
    side=2;
    displayName="Cessna";
    hiddenSelectionsTextures[]={"a3\air_f_exp\plane_civil_01\data\btt_ext_01_wave_co.paa","a3\air_f_exp\plane_civil_01\data\btt_ext_02_wave_co.paa","a3\air_f_exp\plane_civil_01\data\btt_int_01_tan_co.paa","a3\air_f_exp\plane_civil_01\data\btt_int_02_tan_co.paa"};
    crew="DARG_Security_LTD_Contractor_Pilot_";
    typicalCargo[]={"DARG_Security_LTD_Contractor_Pilot_"};
  };


  class DARG_Security_LTD_Officer_pack: B_LegStrapBag_black_F
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


  class DARG_Security_LTD_Squad_Leader_PDW_pack: B_LegStrapBag_black_F
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


  class DARG_Security_LTD_Contractor_PDW_pack: B_LegStrapBag_black_F
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


  class DARG_Security_LTD_Contractor_Driver__pack: B_LegStrapBag_black_F
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


  class DARG_Security_LTD_Contractor_Crewmen_pack: B_LegStrapBag_black_F
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


  class DARG_Security_LTD_Contractor_Heli_Pilot_pack: B_LegStrapBag_black_F
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


  class DARG_Security_LTD_Contractor_Pilot__pack: B_LegStrapBag_black_F
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

};

//////////////// Paste cfgGroups after this line //////////////// 
