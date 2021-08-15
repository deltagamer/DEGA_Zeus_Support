#include "\dega_zeus_support\data\DEGA_defineResinclDesign.inc"
#include "\A3\ui_f_curator\UI\defineResinclDesign.inc"
#include "\A3\ui_f\hpp\defineCommonGrids.inc"

_mode = _this select 0;
_params = _this select 1;
_unit = _this select 2;

switch _mode do {
	case "onLoad": {
		_display = _params select 0;
		_ctrlValue = _display displayctrl DEGA_IDC_RSCATTRIBUTEGROUP_VALUE;
		_ctrlValue ctrlsetfontheight GUI_GRID_H;

		_playerSide = player call bis_fnc_objectside;
		_selected = missionnamespace getvariable ["RscATtributeGROUP_selected",""];
		{
			//--- Show only friendly planes (or all when curator is virtual)
			_side_type = gettext (_x >> "side");
			_faction_type = gettext (_x >> "faction");
			_type_type = gettext (_x >> "type_type");
			_class_type = gettext (_x >> "value_type");
			_cfg = configfile >> "CfgGroups" >> _side_type >> _faction_type >> _type_type >> _class_type;
			_cfg1 = configfile >> "CfgGroups" >> _side_type >> _faction_type;
			if ([_playerSide,(getnumber (_cfg >> "side")) call bis_fnc_sidetype] call bis_fnc_arefriendly) then {
				_lnbAdd = _ctrlValue lnbaddrow ["","",gettext (_cfg >> "Name"),gettext (_cfg1 >> "Name")];
				
				_ctrlValue lnbsetdata [[_lnbAdd,0],_side_type];
				_ctrlValue lnbsetdata [[_lnbAdd,1],_faction_type];
				_ctrlValue lnbsetdata [[_lnbAdd,2],_type_type];
				_ctrlValue lnbsetdata [[_lnbAdd,3],_class_type];
				
				_ctrlValue lnbsetpicture [[_lnbAdd,0],gettext (configfile >> "cfgfactionclasses" >> gettext (_cfg >> "faction") >> "icon")];
				_ctrlValue lnbsetpicture [[_lnbAdd,1],gettext (_cfg >> "picture")];
			};
		} foreach ((configfile >> "cfgvehicles" >> typeof _unit >> "arguments" >> "GROUP" >> "values") call BIS_fnc_returnChildren);
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
		_ctrlValue = _display displayctrl DEGA_IDC_RSCATTRIBUTEGROUP_VALUE;
		
		_side_type = _ctrlValue lnbdata [lnbcurselrow _ctrlValue,0];
		_faction_type = _ctrlValue lnbdata [lnbcurselrow _ctrlValue,1];
		_type_type = _ctrlValue lnbdata [lnbcurselrow _ctrlValue,2];
		_class_type = _ctrlValue lnbdata [lnbcurselrow _ctrlValue,3];
		
		_unit setvariable ["type_side",_side_type,true];
		_unit setvariable ["type_faction",_faction_type,true];
		_unit setvariable ["type_type",_type_type,true];
		_unit setvariable ["type_group",_class_type,true];		
		
	    //debug
	    //_myText = format ["%1\n%2\n%3\n%4", _side_type,_faction_type,_type_type,_class_type];
	    //Hint _myText;

		_unit setvariable ["BIS_fnc_curatorAttributes",[],true];
		missionnamespace setvariable ["RscATtributeGROUP_selected",_class_type];
	};
	case "onUnload": {
		if (!isnil "RscAttributePostProcess_default") then {
			[nil,0,false] call bis_fnc_setPPeffectTemplate;
		};
		RscAttributePostProcess_default = nil;
	};
};