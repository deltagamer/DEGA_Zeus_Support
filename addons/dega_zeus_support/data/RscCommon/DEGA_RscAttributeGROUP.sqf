#include "\dega_zeus_support\data\DEGA_defineResinclDesign.inc"
#include "\A3\ui_f_curator\UI\defineResinclDesign.inc"
#include "\A3\ui_f\hpp\defineCommonGrids.inc"

_mode = _this select 0;
_params = _this select 1;
_unit = _this select 2;
_cbo = ((findDisplay 1900) displayCtrl (1896));
_cbo ctrlRemoveAllEventHandlers "LBSelChanged";

private _varSidePod = missionNamespace getVariable "SideDropPod";
if (isNil "_varSidePod") then
{
	missionNamespace setVariable ["varName", "West"];
	_varSidePod = "West";
};

switch _mode do {
	case "onLoad": 
	{
        _cbo setVariable ["configClasses", []]; // allows to store arbitrary data on the GUI control itself
        private _storage = _cbo getVariable "configClasses";
 
        private _groupsWestFactions = "true" configClasses (configFile >> "CfgGroups" >> _varSidePod); 
        { 
            private _factionCategories = "true" configClasses _x; 
            private _factionName = getText (_x >> "name");
            { 
            private _groups = "true" configClasses _x;
            private _categoryName = getText (_x >> "name");
            { 
              private _groupName = getText (_x >> "name");
              // filtering starts
              private _groupUnits = "'unit' in tolower (configName _x)" configClasses _x;
              if (count _groupUnits > 4) then {continue}; // skip groups bigger than 4
        	  if (count _groupUnits < 1) then {continue}; // skip groups less than 1
              if (_groupUnits findIf {!(getText (_x >> "vehicle") isKindOf "CAManBase")} > -1) then {continue}; // try to find non-infantry unit in group, if there is one - skip

              // filtering ends 
              private _index = _cbo lbAdd (format ["%1 >> %2 >> %3 (%4 units)", _factionName, _categoryName, _groupName, count _groupUnits]); 			  
			  
              _storage set [_index, _x]; // store the config with the same index
              _cbo lbSetPicture [_index, getText (_x >> "icon")];

            } forEach _groups; 
          } forEach _factionCategories; 
        } forEach _groupsWestFactions;
		
	    //debug
		
	    //_myText = format ["%1",_groupUnits];
	    //Hint _myText;
		 
        _cbo ctrlAddEventHandler ["LBSelChanged", {
            params ["_control", "_cboCurSel"];
            if (_cboCurSel < 0) exitWith {};
            private _storage = _control getVariable "configClasses"; // get the saved config from the saved array
            //systemChat str (_storage select _cboCurSel);
			_side_type = (_storage select _cboCurSel);
			
			_unit setvariable ["type_side",_side_type];
			missionNamespace setVariable ["TAG_myName", _side_type];
			
			//hint str (_side_type);
        }];			

	};
	case "confirmed": 
	{
        //_unit setVariable ["VehicleCrew",_createEmptyVehicle, true];		

		//_unit setvariable ["configClasses",_vehicle,true];
		_unit setvariable ["BIS_fnc_curatorAttributes",[],true];
		//missionnamespace setvariable ["RscATtributeGROUP_selected",_vehicle];	
		lbClear _cbo;
	};
	case "onUnload": {
		if (!isnil "RscAttributePostProcess_default") then {
			[nil,0,false] call bis_fnc_setPPeffectTemplate;
		};
		RscAttributePostProcess_default = nil;
	};
};