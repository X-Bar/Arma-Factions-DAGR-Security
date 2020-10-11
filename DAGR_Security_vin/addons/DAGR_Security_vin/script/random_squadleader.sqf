/*
File: randomize_squadleader.sqf
Author: pettka, modified for a different purpose by X-Bar

https://forums.bohemia.net/forums/topic/166904-random-armed-civilians-uniforms/

Description:
Randomizes a uniform array and puts it to riflemens uniform slot upon startup of mission.
_rnd1 is used to have some riflemen without any headgear 
_rnd2 is used to determine particular headgear from array 


Parameter(s):
None

Returns:
Nothing
*/




_uniform = ["U_B_CombatUniform_mcam", "U_B_CombatUniform_sgg_vest", "U_B_CombatUniform_mcam_worn", "U_BG_Guerilla1_1", "U_BG_Guerilla2_1", "U_BG_Guerilla2_2",
		 "U_BG_Guerilla3_1", "U_BG_leader", "U_I_CombatUniform_shortsleeve", "U_I_CombatUniform", "U_I_OfficerUniform"];
//_uniform = ["U_C_IDAP_Man_cargo_F", "U_C_Man_casual_3_F", "U_C_Man_casual_1_F", "U_Competitor", "U_BG_Guerilla2_1", "U_Rangemaster"];
 _headgear = ["H_MilCap_dgtl", "H_Shemag_khk", "H_Beret_blk", "H_Booniehat_dgtl", "H_Booniehat_mcamo", "H_HelmetB",
 		 "H_HelmetB_paint", "H_HelmetIA", "H_HelmetIA_net", "H_HelmetSpecB_paint2", "H_HelmetCrew_I"];
_vest = ["V_TacVestCamo_khk", "V_TacVestIR_blk", "V_TacVestIR_blk", "V_Rangemaster_belt", "V_BandollierB_blk", "V_BandollierB_oli",
	 "V_BandollierB_rgr", "V_Chestrig_blk", "V_HarnessO_brn", "V_Rangemaster_belt", "V_TacVest_blk"];
_headCount = count _headgear;
_uniformCount = count _uniform;
_vestCount = count _vest;

if (isServer) then {
BIS_randomSeed1 = [];
BIS_randomSeed2 = [];
_rnd1 = floor random _uniformCount;	
_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];
_rnd2 = floor random _headCount;
_this setVariable ["BIS_randomSeed2", _rnd2, TRUE];
};

waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
waitUntil {!(isNil {_this getVariable "BIS_randomSeed2"})};
_randomSeed1 = _this getVariable "BIS_randomSeed1";
_randomSeed2 = _this getVariable "BIS_randomSeed2";

_magazines = magazines _this;
_items = items _this; // Medkits, ToolKits etc.
_assitems = assignedItems _this; // NVG's, GPS etc.

if (true) then {
Removeuniform _this;
Removeheadgear _this;
Removevest _this;
_this adduniform (_uniform select _randomSeed1);
_this addheadgear (_headgear select _randomSeed2);
_this addvest (_vest select (((_randomSeed1 + _randomSeed2) % (_vestCount - 1)) * (floor random _vestCount) % (_vestCount + 1 )));
};

{_this addItem _x} forEach _items;
{_this addMagazine _x} forEach _magazines;
{_this addItem _x} forEach _assitems;
{_this assignItem _x} forEach _assitems;







