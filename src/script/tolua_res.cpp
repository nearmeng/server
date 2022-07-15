/*
** Lua binding: res
** Generated automatically by toluapp-1.0.94 on Fri Jul 15 14:45:14 2022.
*/

#include "stdafx.h"
#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "toluapp.h"

/* Exported function */
TOLUA_API int tolua_res_open (lua_State* tolua_S);

#include "../../inc/res_def/achieve_res.h"

/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"RES_BASE");
 tolua_usertype(tolua_S,"ACHIEVE_RES");
}

/* get function: nCondType of class  ACHIEVE_RES */
#ifndef TOLUA_DISABLE_tolua_get_ACHIEVE_RES_nCondType
static int tolua_get_ACHIEVE_RES_nCondType(lua_State* tolua_S)
{
  ACHIEVE_RES* self = (ACHIEVE_RES*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nCondType'",NULL);
#endif
 tolua_pushinteger(tolua_S,(lua_Integer)self->nCondType);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: nCondType of class  ACHIEVE_RES */
#ifndef TOLUA_DISABLE_tolua_set_ACHIEVE_RES_nCondType
static int tolua_set_ACHIEVE_RES_nCondType(lua_State* tolua_S)
{
  ACHIEVE_RES* self = (ACHIEVE_RES*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nCondType'",NULL);
 if (!tolua_isinteger(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->nCondType = ((int32_t)  tolua_tointeger(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: nAchieveType of class  ACHIEVE_RES */
#ifndef TOLUA_DISABLE_tolua_get_ACHIEVE_RES_nAchieveType
static int tolua_get_ACHIEVE_RES_nAchieveType(lua_State* tolua_S)
{
  ACHIEVE_RES* self = (ACHIEVE_RES*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nAchieveType'",NULL);
#endif
 tolua_pushinteger(tolua_S,(lua_Integer)self->nAchieveType);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: nAchieveType of class  ACHIEVE_RES */
#ifndef TOLUA_DISABLE_tolua_set_ACHIEVE_RES_nAchieveType
static int tolua_set_ACHIEVE_RES_nAchieveType(lua_State* tolua_S)
{
  ACHIEVE_RES* self = (ACHIEVE_RES*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nAchieveType'",NULL);
 if (!tolua_isinteger(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->nAchieveType = ((int32_t)  tolua_tointeger(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: nCondParam of class  ACHIEVE_RES */
#ifndef TOLUA_DISABLE_tolua_get_res_ACHIEVE_RES_nCondParam
static int tolua_get_res_ACHIEVE_RES_nCondParam(lua_State* tolua_S)
{
 int tolua_index;
  ACHIEVE_RES* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (ACHIEVE_RES*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
 tolua_Error tolua_err;
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=6)
 tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
 tolua_pushinteger(tolua_S,(lua_Integer)self->nCondParam[tolua_index]);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: nCondParam of class  ACHIEVE_RES */
#ifndef TOLUA_DISABLE_tolua_set_res_ACHIEVE_RES_nCondParam
static int tolua_set_res_ACHIEVE_RES_nCondParam(lua_State* tolua_S)
{
 int tolua_index;
  ACHIEVE_RES* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (ACHIEVE_RES*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
 tolua_Error tolua_err;
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=6)
 tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->nCondParam[tolua_index] = ((int32_t)  tolua_tointeger(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: nRewardID of class  ACHIEVE_RES */
#ifndef TOLUA_DISABLE_tolua_get_ACHIEVE_RES_nRewardID
static int tolua_get_ACHIEVE_RES_nRewardID(lua_State* tolua_S)
{
  ACHIEVE_RES* self = (ACHIEVE_RES*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nRewardID'",NULL);
#endif
 tolua_pushinteger(tolua_S,(lua_Integer)self->nRewardID);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: nRewardID of class  ACHIEVE_RES */
#ifndef TOLUA_DISABLE_tolua_set_ACHIEVE_RES_nRewardID
static int tolua_set_ACHIEVE_RES_nRewardID(lua_State* tolua_S)
{
  ACHIEVE_RES* self = (ACHIEVE_RES*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nRewardID'",NULL);
 if (!tolua_isinteger(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->nRewardID = ((int32_t)  tolua_tointeger(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: nScore of class  ACHIEVE_RES */
#ifndef TOLUA_DISABLE_tolua_get_ACHIEVE_RES_nScore
static int tolua_get_ACHIEVE_RES_nScore(lua_State* tolua_S)
{
  ACHIEVE_RES* self = (ACHIEVE_RES*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nScore'",NULL);
#endif
 tolua_pushinteger(tolua_S,(lua_Integer)self->nScore);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: nScore of class  ACHIEVE_RES */
#ifndef TOLUA_DISABLE_tolua_set_ACHIEVE_RES_nScore
static int tolua_set_ACHIEVE_RES_nScore(lua_State* tolua_S)
{
  ACHIEVE_RES* self = (ACHIEVE_RES*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nScore'",NULL);
 if (!tolua_isinteger(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->nScore = ((int32_t)  tolua_tointeger(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: nLevelLimit of class  ACHIEVE_RES */
#ifndef TOLUA_DISABLE_tolua_get_ACHIEVE_RES_nLevelLimit
static int tolua_get_ACHIEVE_RES_nLevelLimit(lua_State* tolua_S)
{
  ACHIEVE_RES* self = (ACHIEVE_RES*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nLevelLimit'",NULL);
#endif
 tolua_pushinteger(tolua_S,(lua_Integer)self->nLevelLimit);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: nLevelLimit of class  ACHIEVE_RES */
#ifndef TOLUA_DISABLE_tolua_set_ACHIEVE_RES_nLevelLimit
static int tolua_set_ACHIEVE_RES_nLevelLimit(lua_State* tolua_S)
{
  ACHIEVE_RES* self = (ACHIEVE_RES*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nLevelLimit'",NULL);
 if (!tolua_isinteger(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->nLevelLimit = ((int32_t)  tolua_tointeger(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: nDayLimit of class  ACHIEVE_RES */
#ifndef TOLUA_DISABLE_tolua_get_ACHIEVE_RES_nDayLimit
static int tolua_get_ACHIEVE_RES_nDayLimit(lua_State* tolua_S)
{
  ACHIEVE_RES* self = (ACHIEVE_RES*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nDayLimit'",NULL);
#endif
 tolua_pushinteger(tolua_S,(lua_Integer)self->nDayLimit);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: nDayLimit of class  ACHIEVE_RES */
#ifndef TOLUA_DISABLE_tolua_set_ACHIEVE_RES_nDayLimit
static int tolua_set_ACHIEVE_RES_nDayLimit(lua_State* tolua_S)
{
  ACHIEVE_RES* self = (ACHIEVE_RES*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nDayLimit'",NULL);
 if (!tolua_isinteger(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->nDayLimit = ((int32_t)  tolua_tointeger(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_res_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_constant(tolua_S,"achtInvalid",achtInvalid);
  tolua_constant(tolua_S,"achtNormal",achtNormal);
  tolua_constant(tolua_S,"achtTotal",achtTotal);
 tolua_cclass(tolua_S,"ACHIEVE_RES","ACHIEVE_RES","RES_BASE",NULL);
 tolua_beginmodule(tolua_S,"ACHIEVE_RES");
  tolua_variable(tolua_S,"nCondType",tolua_get_ACHIEVE_RES_nCondType,tolua_set_ACHIEVE_RES_nCondType);
  tolua_variable(tolua_S,"nAchieveType",tolua_get_ACHIEVE_RES_nAchieveType,tolua_set_ACHIEVE_RES_nAchieveType);
  tolua_array(tolua_S,"nCondParam",tolua_get_res_ACHIEVE_RES_nCondParam,tolua_set_res_ACHIEVE_RES_nCondParam);
  tolua_variable(tolua_S,"nRewardID",tolua_get_ACHIEVE_RES_nRewardID,tolua_set_ACHIEVE_RES_nRewardID);
  tolua_variable(tolua_S,"nScore",tolua_get_ACHIEVE_RES_nScore,tolua_set_ACHIEVE_RES_nScore);
  tolua_variable(tolua_S,"nLevelLimit",tolua_get_ACHIEVE_RES_nLevelLimit,tolua_set_ACHIEVE_RES_nLevelLimit);
  tolua_variable(tolua_S,"nDayLimit",tolua_get_ACHIEVE_RES_nDayLimit,tolua_set_ACHIEVE_RES_nDayLimit);
 tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_res (lua_State* tolua_S) {
 return tolua_res_open(tolua_S);
};
#endif

