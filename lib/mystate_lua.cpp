extern "C" {
  #include "lua.h"
  #include "lualib.h"
  #include "lauxlib.h"
}

#include "mystate.h"

static int mystate_multiply(lua_State* L)
{
  MyState obj;
  int x = lua_checkinteger(L, 1);
  int y = lua_checkinteger(L, 2);
  int result = obj->multiply(x, y);
  lua_pushinteger(L, result);
  return 1;
}

static const struct luaL_Reg mystate_lib[] = {
  {"multiply", mystate_multiply},
  {NULL, NULL}
}

extern "C" int luaopen_libmystate(lua_State* L)
{
  luaL_newlib(L, mystate_lib);
  return 1;
}