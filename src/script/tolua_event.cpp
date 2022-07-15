/*
** Lua binding: event
** Generated automatically by toluapp-1.0.94 on Fri Jul 15 14:45:14 2022.
*/

#include "stdafx.h"
#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "toluapp.h"

/* Exported function */
TOLUA_API int tolua_event_open (lua_State* tolua_S);

#include "../../inc/define/server_event_def.h"

/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
}

/* Open function */
TOLUA_API int tolua_event_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_constant(tolua_S,"evtInvalid",evtInvalid);
  tolua_constant(tolua_S,"evtStaticBegin",evtStaticBegin);
  tolua_constant(tolua_S,"evtStaticRoleBegin",evtStaticRoleBegin);
  tolua_constant(tolua_S,"evtRoleSyncData",evtRoleSyncData);
  tolua_constant(tolua_S,"evtStaticRoleEnd",evtStaticRoleEnd);
  tolua_constant(tolua_S,"evtStaticEnd",evtStaticEnd);
  tolua_constant(tolua_S,"evtDynamicBegin",evtDynamicBegin);
  tolua_constant(tolua_S,"evtDynamicRoleBegin",evtDynamicRoleBegin);
  tolua_constant(tolua_S,"evtRoleKillNpc",evtRoleKillNpc);
  tolua_constant(tolua_S,"evtDynamicRoleEnd",evtDynamicRoleEnd);
  tolua_constant(tolua_S,"evtDynamicEnd",evtDynamicEnd);
  tolua_constant(tolua_S,"evtTotal",evtTotal);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_event (lua_State* tolua_S) {
 return tolua_event_open(tolua_S);
};
#endif

