//
//  main.c
//  LuaOnMac
//
//  Created by lyhao on 2017/9/30.
//  Copyright © 2017年 lyhao. All rights reserved.
//

#include <stdio.h>
#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"

int main(int argc, const char * argv[]) {
    //open lua
    lua_State *L = luaL_newstate();
    
    //opens the standard libraries
    luaL_openlibs(L);
    
    //run lua script
    luaL_dofile(L, "/Users/marcus/Desktop/LuaOnMac/LuaOnMac/Lua/hello.lua");
    
    lua_close(L);
    return 0;
}
