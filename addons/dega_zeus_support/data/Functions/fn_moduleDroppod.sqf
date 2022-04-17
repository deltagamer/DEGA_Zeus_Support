
_logic = _this select 0;
_units = _this select 1;
_activated = _this select 2;

//--- Terminate on client (unless it's curator who created the module)
if (!isserver && {local _x} count (objectcurators _logic) == 0) exitwith {};


//Paradropping

if (_activated) then {

	//--- Wait for params to be set
	if (_logic call bis_fnc_isCuratorEditable) then {
		waituntil {!isnil {_logic getvariable "vehicle"} || isnull _logic};
	};
	if (isnull _logic) exitwith {};

	//--- Show decal
	if ({local _x} count (objectcurators _logic) > 0) then {
		//--- Reveal the circle to curators
		_logic hideobject false;
		_logic setpos position _logic;
		//_logic setPosATL [(getPos _logic) select 0, (getPos _logic) select 1, 210];
	};
	if !(isserver) exitwith {};

	_planeClass = _logic getvariable ["vehicle","B_T_VTOL_01_infantry_F"];
	_planeCfg = configfile >> "cfgvehicles" >> _planeClass;
	if !(isclass _planeCfg) exitwith {["Vehicle class '%1' not found",_planeClass] call bis_fnc_error; false};
	
	_type_spawnSide = _logic getvariable ["type_side","West"];
	_type_spawnFaction = _logic getvariable ["type_faction","BLU_F"];
	_type_spawnType = _logic getvariable ["type_type","Infantry"];
	_type_spawnClass = _logic getvariable ["type_group","BUS_InfSquad"];
	
	//debug
	//_myText = format ["%1\n%2\n%3\n%4", _type_spawnSide, _type_spawnFaction,_type_spawnType,_type_spawnClass];
	//Hint _myText;

	_type_spawnCfg = configfile >> "CfgGroups" >> _type_spawnSide >> _type_spawnFaction >> _type_spawnType >> _type_spawnClass;
	if !(isclass _type_spawnCfg) exitwith {["Spawn class '%1' not found",_type_spawnClass] call bis_fnc_error; false};	

	//--- Restore custom direction
	_dirVar = _fnc_scriptname + typeof _logic;
	_logic setdir (missionnamespace getvariable [_dirVar,direction _logic]);


	_posATL = getposatl _logic;	
	_pos = +_posATL;
	_pos set [2,(_pos select 2) + getterrainheightasl _pos];
	
	_dir = direction _logic;

	_dis = 1;
	_alt = 7000;
	_pitch = atan (_alt / _dis);
	_speed = 800 / 3.6;
	_duration = ([0,0] distance [_dis,_alt]) / _speed;

	//--- Create plane
	_type_spawnPos = [_pos,_dis,_dir + 180] call bis_fnc_relpos;
	_type_spawnPos set [2,(_pos select 2) + _alt];
	_planePos = [_pos,_dis,_dir + 180] call bis_fnc_relpos;
	_planePos set [2,(_pos select 2) + _alt];
	_planeSide = (getnumber (_planeCfg >> "side")) call bis_fnc_sideType;
	_planeArray = [_planePos,_dir,_planeClass,_planeSide] call bis_fnc_spawnVehicle;
	_type_spawnArray = [_type_spawnPos, _type_spawnSide, (_type_spawnCfg),[],[],[],[],[],_dir] call BIS_fnc_spawnGroup;
	_plane = _planeArray select 0;
	_type_spawn = (Units _type_spawnArray); 
	_plane setposasl _planePos;
	_plane spawn {sleep 3; _this spawn WBK_DropPodLaunchSequance;};
	{ _x addCuratorEditableObjects [[_plane],true] } forEach (allCurators);
	{ _x addCuratorEditableObjects [_type_spawn,true] } forEach (allCurators);
	
	private ["_grp2","_man1","_man2","_jumpDelay","_side"];

    _jumpDelay = param [10,0.1];
    private _groupType = if (_planeSide getfriend west > 0.6) then {west} else {east};	
	_grp2 = createGroup _groupType;	
	
	_veh = _this select 0;
    _veh_type = (typeOf _veh); 
	
	{ _plane deleteVehicleCrew _x } forEach crew _plane;
	
	//--- Create UGV
	_type_spawnPos = [_pos,_dis,_dir + 180] call bis_fnc_relpos;
	_type_spawnPos set [2,(_pos select 2) + _alt];
	_type_spawnSide = (getnumber (_type_spawnCfg >> "side")) call bis_fnc_sideType;
	_type_spawnArray = [_type_spawnPos, _type_spawnSide, (_type_spawnCfg),[],[],[],[],[],_dir] call BIS_fnc_spawnGroup;
	_type_spawn = (Units _type_spawnArray); 
    _type_spawnArray setFormation "DIAMOND";
	private ["_para"];
	{
		_x setPos [(getPos _logic) select 0,(getPos _logic) select 1, 250]; 
    	_x moveInAny _plane;		
		_x allowFleeing 0;
		{ _x addCuratorEditableObjects [[_plane],true] } forEach (allCurators);
		{ _x addCuratorEditableObjects [_type_spawn,true] } forEach (allCurators);
	} foreach _type_spawn;	
	
	_plane setvariable ["logic",_logic];
	_logic setvariable ["plane",_plane];	

	//--- Show hint
	[[["Curator","PlaceOrdnance"],nil,nil,nil,nil,nil,nil,true],"bis_fnc_advHint",objectcurators _logic] call bis_fnc_mp;

	//--- Play radio
	[_plane,"CuratorModuleCAS"] call bis_fnc_curatorSayMessage;

	
	if !(isnull _logic) then {
		sleep 1;
		deletevehicle _logic;
		waituntil {_plane distance _pos < _dis || !alive _plane};
	};
};



