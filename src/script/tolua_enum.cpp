/*
** Lua binding: enum
** Generated automatically by toluapp-1.0.94 on Thu Jul 14 13:33:55 2022.
*/

#include "stdafx.h"
#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "toluapp.h"

/* Exported function */
TOLUA_API int tolua_enum_open (lua_State* tolua_S);

#include "../../inc/define/object_def.h"
#include "../../inc/define/session_def.h"
#include "../../inc/define/shm_def.h"

/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
}

/* Open function */
TOLUA_API int tolua_enum_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_enum (lua_State* tolua_S) {
 return tolua_enum_open(tolua_S);
};
#endif

