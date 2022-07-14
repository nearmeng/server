/*
** Lua binding: global_config
** Generated automatically by toluapp-1.0.94 on Thu Jul 14 13:33:55 2022.
*/

#include "stdafx.h"
#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "toluapp.h"

/* Exported function */
TOLUA_API int tolua_global_config_open (lua_State* tolua_S);

#include "../../inc/config/server_config.h"

/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"SERVER_CONFIG");
}

/* get function: nTestValue of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_get_SERVER_CONFIG_nTestValue
static int tolua_get_SERVER_CONFIG_nTestValue(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nTestValue'",NULL);
#endif
 tolua_pushinteger(tolua_S,(lua_Integer)self->nTestValue);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: nTestValue of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_set_SERVER_CONFIG_nTestValue
static int tolua_set_SERVER_CONFIG_nTestValue(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nTestValue'",NULL);
 if (!tolua_isinteger(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->nTestValue = ((int32_t)  tolua_tointeger(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: nUserCount of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_get_SERVER_CONFIG_nUserCount
static int tolua_get_SERVER_CONFIG_nUserCount(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nUserCount'",NULL);
#endif
 tolua_pushinteger(tolua_S,(lua_Integer)self->nUserCount);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: nUserCount of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_set_SERVER_CONFIG_nUserCount
static int tolua_set_SERVER_CONFIG_nUserCount(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nUserCount'",NULL);
 if (!tolua_isinteger(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->nUserCount = ((int32_t)  tolua_tointeger(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: nRoleCount of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_get_SERVER_CONFIG_nRoleCount
static int tolua_get_SERVER_CONFIG_nRoleCount(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nRoleCount'",NULL);
#endif
 tolua_pushinteger(tolua_S,(lua_Integer)self->nRoleCount);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: nRoleCount of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_set_SERVER_CONFIG_nRoleCount
static int tolua_set_SERVER_CONFIG_nRoleCount(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nRoleCount'",NULL);
 if (!tolua_isinteger(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->nRoleCount = ((int32_t)  tolua_tointeger(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: nClientPingTimeout of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_get_SERVER_CONFIG_nClientPingTimeout
static int tolua_get_SERVER_CONFIG_nClientPingTimeout(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nClientPingTimeout'",NULL);
#endif
 tolua_pushinteger(tolua_S,(lua_Integer)self->nClientPingTimeout);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: nClientPingTimeout of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_set_SERVER_CONFIG_nClientPingTimeout
static int tolua_set_SERVER_CONFIG_nClientPingTimeout(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nClientPingTimeout'",NULL);
 if (!tolua_isinteger(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->nClientPingTimeout = ((int32_t)  tolua_tointeger(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: nUserKickAfterSessionStopTime of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_get_SERVER_CONFIG_nUserKickAfterSessionStopTime
static int tolua_get_SERVER_CONFIG_nUserKickAfterSessionStopTime(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nUserKickAfterSessionStopTime'",NULL);
#endif
 tolua_pushinteger(tolua_S,(lua_Integer)self->nUserKickAfterSessionStopTime);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: nUserKickAfterSessionStopTime of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_set_SERVER_CONFIG_nUserKickAfterSessionStopTime
static int tolua_set_SERVER_CONFIG_nUserKickAfterSessionStopTime(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nUserKickAfterSessionStopTime'",NULL);
 if (!tolua_isinteger(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->nUserKickAfterSessionStopTime = ((int32_t)  tolua_tointeger(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: nInitDefaultClientSessionCount of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_get_SERVER_CONFIG_nInitDefaultClientSessionCount
static int tolua_get_SERVER_CONFIG_nInitDefaultClientSessionCount(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nInitDefaultClientSessionCount'",NULL);
#endif
 tolua_pushinteger(tolua_S,(lua_Integer)self->nInitDefaultClientSessionCount);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: nInitDefaultClientSessionCount of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_set_SERVER_CONFIG_nInitDefaultClientSessionCount
static int tolua_set_SERVER_CONFIG_nInitDefaultClientSessionCount(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nInitDefaultClientSessionCount'",NULL);
 if (!tolua_isinteger(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->nInitDefaultClientSessionCount = ((int32_t)  tolua_tointeger(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: g_ServerConfig */
#ifndef TOLUA_DISABLE_tolua_get_g_ServerConfig
static int tolua_get_g_ServerConfig(lua_State* tolua_S)
{
  tolua_pushusertype(tolua_S,(void*)&g_ServerConfig,"SERVER_CONFIG");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: g_ServerConfig */
#ifndef TOLUA_DISABLE_tolua_set_g_ServerConfig
static int tolua_set_g_ServerConfig(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"SERVER_CONFIG",0,&tolua_err)))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  g_ServerConfig = *((SERVER_CONFIG*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_global_config_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,1);
 tolua_beginmodule(tolua_S,NULL);
 tolua_cclass(tolua_S,"SERVER_CONFIG","SERVER_CONFIG","",NULL);
 tolua_beginmodule(tolua_S,"SERVER_CONFIG");
  tolua_variable(tolua_S,"nTestValue",tolua_get_SERVER_CONFIG_nTestValue,tolua_set_SERVER_CONFIG_nTestValue);
  tolua_variable(tolua_S,"nUserCount",tolua_get_SERVER_CONFIG_nUserCount,tolua_set_SERVER_CONFIG_nUserCount);
  tolua_variable(tolua_S,"nRoleCount",tolua_get_SERVER_CONFIG_nRoleCount,tolua_set_SERVER_CONFIG_nRoleCount);
  tolua_variable(tolua_S,"nClientPingTimeout",tolua_get_SERVER_CONFIG_nClientPingTimeout,tolua_set_SERVER_CONFIG_nClientPingTimeout);
  tolua_variable(tolua_S,"nUserKickAfterSessionStopTime",tolua_get_SERVER_CONFIG_nUserKickAfterSessionStopTime,tolua_set_SERVER_CONFIG_nUserKickAfterSessionStopTime);
  tolua_variable(tolua_S,"nInitDefaultClientSessionCount",tolua_get_SERVER_CONFIG_nInitDefaultClientSessionCount,tolua_set_SERVER_CONFIG_nInitDefaultClientSessionCount);
 tolua_endmodule(tolua_S);
 tolua_variable(tolua_S,"g_ServerConfig",tolua_get_g_ServerConfig,tolua_set_g_ServerConfig);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_global_config (lua_State* tolua_S) {
 return tolua_global_config_open(tolua_S);
};
#endif

