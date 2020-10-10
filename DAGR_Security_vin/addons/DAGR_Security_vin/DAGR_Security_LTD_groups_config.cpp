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

        class DAGR_Security_LTD_R_Officer_Team_Small
        {
          name="Officer Team Small";
          faction="DAGR_Security_LTD_DAGR_Security_LTD";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="I_G_officer_F";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="I_G_Soldier_SL_F";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
        };
        class DAGR_Security_LTD_R_Officer_Team
        {
          name="Officer Team";
          faction="DAGR_Security_LTD_DAGR_Security_LTD";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="I_G_officer_F";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="I_G_Soldier_SL_F";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="I_G_Soldier_F";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="I_G_Soldier_F";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=2;
            vehicle="I_G_Soldier_F";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=2;
            vehicle="I_G_Soldier_F";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
        };
        class DAGR_Security_LTD_R_Fire_Team
        {
          name="Fire Team";
          faction="DAGR_Security_LTD_DAGR_Security_LTD";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="I_G_Soldier_SL_F";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="I_G_Soldier_F";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="I_G_Soldier_F";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="I_G_Soldier_F";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=2;
            vehicle="I_G_Soldier_F";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
        };
        class DAGR_Security_LTD_R_Patrol
        {
          name="Patrol";
          faction="DAGR_Security_LTD_DAGR_Security_LTD";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="I_G_Soldier_SL_F";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="I_G_Soldier_F";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
        };
        class DAGR_Security_LTD_R_Sentry
        {
          name="Sentry";
          faction="DAGR_Security_LTD_DAGR_Security_LTD";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="I_G_Soldier_F";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="I_G_Soldier_F";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
        };
        class DAGR_Security_LTD_R_Recon_Patrol
        {
          name="Recon Patrol";
          faction="DAGR_Security_LTD_DAGR_Security_LTD";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="I_G_Soldier_SL_F";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="I_G_Soldier_F";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
        };
      };
      class Motorized
      {
        name="Motorized";

        class DAGR_Security_LTD_R_Motorized_Van_Fire_Team
        {
          name="Motorized Van Fire Team";
          faction="DAGR_Security_LTD_DAGR_Security_LTD";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="C_Van_02_transport_F";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class DAGR_Security_LTD_R_Motorized_Offroad_Fire_Team
        {
          name="Motorized Offroad Fire Team";
          faction="DAGR_Security_LTD_DAGR_Security_LTD";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="C_IDAP_Offroad_01_F";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class DAGR_Security_LTD_R_Motorized_Offroad_Radios_FireTeam
        {
          name="Motorized Offroad Radios FireTeam";
          faction="DAGR_Security_LTD_DAGR_Security_LTD";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="C_Offroad_01_comms_F";
            rank="PRIVATE";
            position[]={0,-0,0};
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

      };
      class Airborne
      {
        name="Airborne";

      };
      class Air
      {
        name="Air";

        class DAGR_Security_LTD_R_Cessna
        {
          name="Cessna";
          faction="DAGR_Security_LTD_DAGR_Security_LTD";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="C_Plane_Civil_01_F";
            rank="LIEUTENANT";
            position[]={0,-0,0};
          };
        };
        class DAGR_Security_LTD_R_WY55_Hellcat
        {
          name="WY55 Hellcat";
          faction="DAGR_Security_LTD_DAGR_Security_LTD";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="I_Heli_light_03_unarmed_F";
            rank="LIEUTENANT";
            position[]={0,-0,0};
          };
        };
      };
    };
  };
};
