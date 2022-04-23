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
	//if !(isclass _planeCfg) exitwith {["Vehicle class '%1' not found",_planeClass] call bis_fnc_error; false};

    //_selected = missionnamespace getvariable ["RscATtributePLAYERGROUP_selected",""];
	_selected = missionnamespace getvariable ["type_group",""];
	_selected = _logic getvariable ["type_group",""];
	
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
	_planePos = [_pos,_dis,_dir + 180] call bis_fnc_relpos;
	_planePos set [2,(_pos select 2) + _alt];
	_planeSide = (getnumber (_planeCfg >> "side")) call bis_fnc_sideType;
	_planeArray = [_planePos,_dir,_planeClass,_planeSide] call bis_fnc_spawnVehicle;
	_plane = _planeArray select 0;
	//_type_spawn = (Units _type_spawnArray); 
	_plane setposasl _planePos;
	_plane spawn {sleep 3; _this spawn WBK_DropPodLaunchSequance;};
	{ _x addCuratorEditableObjects [[_plane],true] } forEach (allCurators);
		
	
	//hint format ["%1", _selected];
	
	if (_selected isEqualTo "VirtualArsenal") then { 
	
  	_type_spawn = createVehicle ["Box_NATO_AmmoVeh_F", position _plane, [], 0, "FLY"];
	_type_spawn setPos [(getPos _plane) select 0,(getPos _plane) select 1, 0];
	_type_spawn attachTo [_plane, [0,0.9,1.8]];
	_type_spawn addAction ["<t color='#0099FF'>Virtual Arsenal</t>",{["Open", true] spawn bis_fnc_arsenal},[false],6,false,true,"","(_target distance _this) < 7"];
	deleteVehicleCrew _plane;
    { _x addCuratorEditableObjects [[_type_spawn],true] } forEach (allCurators);
	} else {
	_playerObject = allPlayers select (allPlayers findIf {(name _x) isEqualTo _selected;});
	_playerObject moveInAny _plane;
	};
	
	//--- Restore custom direction
	_dirVar = _fnc_scriptname + typeof _logic;
	_logic setdir (missionnamespace getvariable [_dirVar,direction _logic]);
	
	private ["_grp2","_man1","_man2","_jumpDelay","_side"];

    _jumpDelay = param [10,0.1];
    private _groupType = if (_planeSide getfriend west > 0.6) then {west} else {east};	
	_grp2 = createGroup _groupType;	
	
	_veh = _this select 0;
    _veh_type = (typeOf _veh); 
	
		//--- Check Box
	/*	
    _checkClass = _logic getvariable "HasArsenal";
    if (_checkClass == true) then {
	//--- Create Box
	_type_spawn = createVehicle ["Box_NATO_AmmoVeh_F", position _plane, [], 0, "FLY"];
	_type_spawn setPos [(getPos _plane) select 0,(getPos _plane) select 1, 0];
	_type_spawn attachTo [_plane, [0,0.7,2]];
	_type_spawn addAction ["<t color='#0099FF'>Virtual Arsenal</t>",{["Open", true] spawn bis_fnc_arsenal},[false],6,false,true,"","(_target distance _this) < 7"];
	deleteVehicleCrew _plane;
	} else {nil};	
	*/
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