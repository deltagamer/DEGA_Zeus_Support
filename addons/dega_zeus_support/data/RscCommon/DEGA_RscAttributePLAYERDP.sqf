#include "\dega_zeus_support\data\DEGA_defineResinclDesign.inc"
#include "\A3\ui_f_curator\UI\defineResinclDesign.inc"
#include "\A3\ui_f\hpp\defineCommonGrids.inc"

_mode = _this select 0;
_params = _this select 1;
_unit = _this select 2;

switch _mode do {
	case "onLoad": {
		_display = _params select 0;
		_ctrlValue = _display displayctrl DEGA_IDC_RSCATTRIBUTEPLAYERDP_VALUE;
		_ctrlValue ctrlsetfontheight GUI_GRID_H;		

		_playerSide = player call bis_fnc_objectside;
		_selected = missionnamespace getvariable ["RscATtributePLAYERGROUP_selected",""];
		{
			//--- Show only friendly planes (or all when curator is virtual)

			if (isPlayer _x) then {
				_lnbAdd = _ctrlValue lnbaddrow ["","",name _x];
				_ctrlValue lnbsetdata [[_lnbAdd,0],name _x];

			};
		} foreach allPlayers;   //foreach allUnits;
		_ctrlValue lnbsort [1,false];
		for "_i" from 0 to ((lnbsize _ctrlValue select 0) - 1) do {
			if ((_ctrlValue lnbdata [_i,0]) == _selected) exitwith {_ctrlValue lnbsetcurselrow _i;};
		};
		if (lnbcurselrow _ctrlValue < 0) then {
			_ctrlValue lnbsetcurselrow 0;
		};
	};
	case "confirmed": {
		_display = _params select 0;
		_ctrlValue = _display displayctrl DEGA_IDC_RSCATTRIBUTEPLAYERDP_VALUE;
		_vehicle = _ctrlValue lnbdata [lnbcurselrow _ctrlValue,0];

		_unit setvariable ["type_group",_vehicle,true];
		_unit setvariable ["BIS_fnc_curatorAttributes",[],true];
		missionnamespace setvariable ["RscATtributePLAYERGROUP_selected",_vehicle];
	};
	case "onUnload": {
		if (!isnil "RscAttributePostProcess_default") then {
			[nil,0,false] call bis_fnc_setPPeffectTemplate;
		};
		RscAttributePostProcess_default = nil;
	};
};