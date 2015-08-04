#ifndef _CD_LUA_
#define _CD_LUA_

#ifdef __cplusplus
extern "C" {
#endif

#ifdef LUA_NOOBJECT  /* Lua 3 */
void cdlua_open(void);
cdCanvas* cdlua_getcanvas(void);
void cdlua_close(void);
#endif

#ifdef LUA_NOREF  /* Lua 5 */
void cdlua_open(lua_State *L);
cdCanvas* cdlua_getcanvas(lua_State * L);
void cdlua_close(lua_State *L);
#endif

#ifdef __cplusplus
}
#endif

#endif

