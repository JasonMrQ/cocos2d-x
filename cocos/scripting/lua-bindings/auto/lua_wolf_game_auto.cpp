#include "scripting/lua-bindings/auto/lua_wolf_game_auto.hpp"
#include "Live2DNode.h"
#include "GdxParticle.h"
#include "PbcHelper.h"
#include "SdkHelpers.h"
#include "NativeHelpers.h"
#include "Helpers.h"
#include "UdbNetClient.hpp"
#include "UdbManager.hpp"
#include "scripting/lua-bindings/manual/tolua_fix.h"
#include "scripting/lua-bindings/manual/LuaBasicConversions.h"

int lua_wolf_game_Live2DNode_transformScreenX(lua_State* tolua_S)
{
    int argc = 0;
    Live2DNode* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DNode",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DNode*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_wolf_game_Live2DNode_transformScreenX'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "Live2DNode:transformScreenX");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_Live2DNode_transformScreenX'", nullptr);
            return 0;
        }
        double ret = cobj->transformScreenX(arg0);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DNode:transformScreenX",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_Live2DNode_transformScreenX'.",&tolua_err);
#endif

    return 0;
}
int lua_wolf_game_Live2DNode_transformScreenY(lua_State* tolua_S)
{
    int argc = 0;
    Live2DNode* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DNode",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DNode*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_wolf_game_Live2DNode_transformScreenY'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "Live2DNode:transformScreenY");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_Live2DNode_transformScreenY'", nullptr);
            return 0;
        }
        double ret = cobj->transformScreenY(arg0);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DNode:transformScreenY",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_Live2DNode_transformScreenY'.",&tolua_err);
#endif

    return 0;
}
int lua_wolf_game_Live2DNode_transformViewY(lua_State* tolua_S)
{
    int argc = 0;
    Live2DNode* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DNode",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DNode*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_wolf_game_Live2DNode_transformViewY'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "Live2DNode:transformViewY");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_Live2DNode_transformViewY'", nullptr);
            return 0;
        }
        double ret = cobj->transformViewY(arg0);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DNode:transformViewY",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_Live2DNode_transformViewY'.",&tolua_err);
#endif

    return 0;
}
int lua_wolf_game_Live2DNode_transformViewX(lua_State* tolua_S)
{
    int argc = 0;
    Live2DNode* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DNode",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DNode*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_wolf_game_Live2DNode_transformViewX'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "Live2DNode:transformViewX");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_Live2DNode_transformViewX'", nullptr);
            return 0;
        }
        double ret = cobj->transformViewX(arg0);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DNode:transformViewX",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_Live2DNode_transformViewX'.",&tolua_err);
#endif

    return 0;
}
int lua_wolf_game_Live2DNode_runExpression(lua_State* tolua_S)
{
    int argc = 0;
    Live2DNode* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DNode",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DNode*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_wolf_game_Live2DNode_runExpression'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "Live2DNode:runExpression");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_Live2DNode_runExpression'", nullptr);
            return 0;
        }
        cobj->runExpression(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DNode:runExpression",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_Live2DNode_runExpression'.",&tolua_err);
#endif

    return 0;
}
int lua_wolf_game_Live2DNode_runRandomMotion(lua_State* tolua_S)
{
    int argc = 0;
    Live2DNode* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DNode",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DNode*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_wolf_game_Live2DNode_runRandomMotion'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        std::string arg0;
        int arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "Live2DNode:runRandomMotion");

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "Live2DNode:runRandomMotion");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_Live2DNode_runRandomMotion'", nullptr);
            return 0;
        }
        int ret = cobj->runRandomMotion(arg0, arg1);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DNode:runRandomMotion",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_Live2DNode_runRandomMotion'.",&tolua_err);
#endif

    return 0;
}
int lua_wolf_game_Live2DNode_setSacleX(lua_State* tolua_S)
{
    int argc = 0;
    Live2DNode* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DNode",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DNode*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_wolf_game_Live2DNode_setSacleX'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "Live2DNode:setSacleX");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_Live2DNode_setSacleX'", nullptr);
            return 0;
        }
        cobj->setSacleX(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DNode:setSacleX",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_Live2DNode_setSacleX'.",&tolua_err);
#endif

    return 0;
}
int lua_wolf_game_Live2DNode_hitTest(lua_State* tolua_S)
{
    int argc = 0;
    Live2DNode* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DNode",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DNode*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_wolf_game_Live2DNode_hitTest'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        std::string arg0;
        double arg1;
        double arg2;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "Live2DNode:hitTest");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "Live2DNode:hitTest");

        ok &= luaval_to_number(tolua_S, 4,&arg2, "Live2DNode:hitTest");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_Live2DNode_hitTest'", nullptr);
            return 0;
        }
        bool ret = cobj->hitTest(arg0, arg1, arg2);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DNode:hitTest",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_Live2DNode_hitTest'.",&tolua_err);
#endif

    return 0;
}
int lua_wolf_game_Live2DNode_runRandomExpression(lua_State* tolua_S)
{
    int argc = 0;
    Live2DNode* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DNode",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DNode*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_wolf_game_Live2DNode_runRandomExpression'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_Live2DNode_runRandomExpression'", nullptr);
            return 0;
        }
        cobj->runRandomExpression();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DNode:runRandomExpression",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_Live2DNode_runRandomExpression'.",&tolua_err);
#endif

    return 0;
}
int lua_wolf_game_Live2DNode_updateViewMatrix(lua_State* tolua_S)
{
    int argc = 0;
    Live2DNode* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DNode",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DNode*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_wolf_game_Live2DNode_updateViewMatrix'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 5) 
    {
        double arg0;
        double arg1;
        double arg2;
        double arg3;
        double arg4;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "Live2DNode:updateViewMatrix");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "Live2DNode:updateViewMatrix");

        ok &= luaval_to_number(tolua_S, 4,&arg2, "Live2DNode:updateViewMatrix");

        ok &= luaval_to_number(tolua_S, 5,&arg3, "Live2DNode:updateViewMatrix");

        ok &= luaval_to_number(tolua_S, 6,&arg4, "Live2DNode:updateViewMatrix");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_Live2DNode_updateViewMatrix'", nullptr);
            return 0;
        }
        cobj->updateViewMatrix(arg0, arg1, arg2, arg3, arg4);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DNode:updateViewMatrix",argc, 5);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_Live2DNode_updateViewMatrix'.",&tolua_err);
#endif

    return 0;
}
int lua_wolf_game_Live2DNode_setPosition(lua_State* tolua_S)
{
    int argc = 0;
    Live2DNode* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DNode",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DNode*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_wolf_game_Live2DNode_setPosition'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        double arg0;
        double arg1;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "Live2DNode:setPosition");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "Live2DNode:setPosition");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_Live2DNode_setPosition'", nullptr);
            return 0;
        }
        cobj->setPosition(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DNode:setPosition",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_Live2DNode_setPosition'.",&tolua_err);
#endif

    return 0;
}
int lua_wolf_game_Live2DNode_onDrag(lua_State* tolua_S)
{
    int argc = 0;
    Live2DNode* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DNode",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DNode*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_wolf_game_Live2DNode_onDrag'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        double arg0;
        double arg1;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "Live2DNode:onDrag");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "Live2DNode:onDrag");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_Live2DNode_onDrag'", nullptr);
            return 0;
        }
        cobj->onDrag(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DNode:onDrag",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_Live2DNode_onDrag'.",&tolua_err);
#endif

    return 0;
}
int lua_wolf_game_Live2DNode_getPosition(lua_State* tolua_S)
{
    int argc = 0;
    Live2DNode* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Live2DNode",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (Live2DNode*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_wolf_game_Live2DNode_getPosition'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_Live2DNode_getPosition'", nullptr);
            return 0;
        }
        const cocos2d::Vec2& ret = cobj->getPosition();
        vec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DNode:getPosition",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_Live2DNode_getPosition'.",&tolua_err);
#endif

    return 0;
}
int lua_wolf_game_Live2DNode_load(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"Live2DNode",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        std::string arg0;
        std::string arg1;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "Live2DNode:load");
        ok &= luaval_to_std_string(tolua_S, 3,&arg1, "Live2DNode:load");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_Live2DNode_load'", nullptr);
            return 0;
        }
        Live2DNode* ret = Live2DNode::load(arg0, arg1);
        object_to_luaval<Live2DNode>(tolua_S, "Live2DNode",(Live2DNode*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "Live2DNode:load",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_Live2DNode_load'.",&tolua_err);
#endif
    return 0;
}
int lua_wolf_game_Live2DNode_constructor(lua_State* tolua_S)
{
    int argc = 0;
    Live2DNode* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_Live2DNode_constructor'", nullptr);
            return 0;
        }
        cobj = new Live2DNode();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"Live2DNode");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "Live2DNode:Live2DNode",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_Live2DNode_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_wolf_game_Live2DNode_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Live2DNode)");
    return 0;
}

int lua_register_wolf_game_Live2DNode(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"Live2DNode");
    tolua_cclass(tolua_S,"Live2DNode","Live2DNode","cc.DrawNode",nullptr);

    tolua_beginmodule(tolua_S,"Live2DNode");
        tolua_function(tolua_S,"new",lua_wolf_game_Live2DNode_constructor);
        tolua_function(tolua_S,"transformScreenX",lua_wolf_game_Live2DNode_transformScreenX);
        tolua_function(tolua_S,"transformScreenY",lua_wolf_game_Live2DNode_transformScreenY);
        tolua_function(tolua_S,"transformViewY",lua_wolf_game_Live2DNode_transformViewY);
        tolua_function(tolua_S,"transformViewX",lua_wolf_game_Live2DNode_transformViewX);
        tolua_function(tolua_S,"runExpression",lua_wolf_game_Live2DNode_runExpression);
        tolua_function(tolua_S,"runRandomMotion",lua_wolf_game_Live2DNode_runRandomMotion);
        tolua_function(tolua_S,"setSacleX",lua_wolf_game_Live2DNode_setSacleX);
        tolua_function(tolua_S,"hitTest",lua_wolf_game_Live2DNode_hitTest);
        tolua_function(tolua_S,"runRandomExpression",lua_wolf_game_Live2DNode_runRandomExpression);
        tolua_function(tolua_S,"updateViewMatrix",lua_wolf_game_Live2DNode_updateViewMatrix);
        tolua_function(tolua_S,"setPosition",lua_wolf_game_Live2DNode_setPosition);
        tolua_function(tolua_S,"onDrag",lua_wolf_game_Live2DNode_onDrag);
        tolua_function(tolua_S,"getPosition",lua_wolf_game_Live2DNode_getPosition);
        tolua_function(tolua_S,"load", lua_wolf_game_Live2DNode_load);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(Live2DNode).name();
    g_luaType[typeName] = "Live2DNode";
    g_typeCast["Live2DNode"] = "Live2DNode";
    return 1;
}

int lua_wolf_game_CGdxParticle_setMirrorEnable(lua_State* tolua_S)
{
    int argc = 0;
    CGdxParticle* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CGdxParticle",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (CGdxParticle*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_wolf_game_CGdxParticle_setMirrorEnable'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "CGdxParticle:setMirrorEnable");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_CGdxParticle_setMirrorEnable'", nullptr);
            return 0;
        }
        cobj->setMirrorEnable(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "CGdxParticle:setMirrorEnable",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_CGdxParticle_setMirrorEnable'.",&tolua_err);
#endif

    return 0;
}
int lua_wolf_game_CGdxParticle_playAgain(lua_State* tolua_S)
{
    int argc = 0;
    CGdxParticle* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CGdxParticle",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (CGdxParticle*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_wolf_game_CGdxParticle_playAgain'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_CGdxParticle_playAgain'", nullptr);
            return 0;
        }
        cobj->playAgain();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "CGdxParticle:playAgain",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_CGdxParticle_playAgain'.",&tolua_err);
#endif

    return 0;
}
int lua_wolf_game_CGdxParticle_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"CGdxParticle",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        std::string arg0;
        std::string arg1;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "CGdxParticle:create");
        ok &= luaval_to_std_string(tolua_S, 3,&arg1, "CGdxParticle:create");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_CGdxParticle_create'", nullptr);
            return 0;
        }
        CGdxParticle* ret = CGdxParticle::create(arg0, arg1);
        object_to_luaval<CGdxParticle>(tolua_S, "CGdxParticle",(CGdxParticle*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "CGdxParticle:create",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_CGdxParticle_create'.",&tolua_err);
#endif
    return 0;
}
static int lua_wolf_game_CGdxParticle_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (CGdxParticle)");
    return 0;
}

int lua_register_wolf_game_CGdxParticle(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"CGdxParticle");
    tolua_cclass(tolua_S,"CGdxParticle","CGdxParticle","cc.Node",nullptr);

    tolua_beginmodule(tolua_S,"CGdxParticle");
        tolua_function(tolua_S,"setMirrorEnable",lua_wolf_game_CGdxParticle_setMirrorEnable);
        tolua_function(tolua_S,"playAgain",lua_wolf_game_CGdxParticle_playAgain);
        tolua_function(tolua_S,"create", lua_wolf_game_CGdxParticle_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(CGdxParticle).name();
    g_luaType[typeName] = "CGdxParticle";
    g_typeCast["CGdxParticle"] = "CGdxParticle";
    return 1;
}

int lua_wolf_game_PbcHelper_reset(lua_State* tolua_S)
{
    int argc = 0;
    PbcHelper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"PbcHelper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (PbcHelper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_wolf_game_PbcHelper_reset'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_PbcHelper_reset'", nullptr);
            return 0;
        }
        cobj->reset();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "PbcHelper:reset",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_PbcHelper_reset'.",&tolua_err);
#endif

    return 0;
}
int lua_wolf_game_PbcHelper_registerProto(lua_State* tolua_S)
{
    int argc = 0;
    PbcHelper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"PbcHelper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (PbcHelper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_wolf_game_PbcHelper_registerProto'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "PbcHelper:registerProto");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_PbcHelper_registerProto'", nullptr);
            return 0;
        }
        bool ret = cobj->registerProto(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "PbcHelper:registerProto",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_PbcHelper_registerProto'.",&tolua_err);
#endif

    return 0;
}
int lua_wolf_game_PbcHelper_getInstance(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"PbcHelper",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_PbcHelper_getInstance'", nullptr);
            return 0;
        }
        PbcHelper* ret = PbcHelper::getInstance();
        object_to_luaval<PbcHelper>(tolua_S, "PbcHelper",(PbcHelper*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "PbcHelper:getInstance",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_PbcHelper_getInstance'.",&tolua_err);
#endif
    return 0;
}
static int lua_wolf_game_PbcHelper_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (PbcHelper)");
    return 0;
}

int lua_register_wolf_game_PbcHelper(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"PbcHelper");
    tolua_cclass(tolua_S,"PbcHelper","PbcHelper","cc.Ref",nullptr);

    tolua_beginmodule(tolua_S,"PbcHelper");
        tolua_function(tolua_S,"reset",lua_wolf_game_PbcHelper_reset);
        tolua_function(tolua_S,"registerProto",lua_wolf_game_PbcHelper_registerProto);
        tolua_function(tolua_S,"getInstance", lua_wolf_game_PbcHelper_getInstance);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(PbcHelper).name();
    g_luaType[typeName] = "PbcHelper";
    g_typeCast["PbcHelper"] = "PbcHelper";
    return 1;
}

int lua_wolf_game_SdkHelpers_sdkRegisterWithAccountID(lua_State* tolua_S)
{
    int argc = 0;
    SdkHelpers* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"SdkHelpers",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (SdkHelpers*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_wolf_game_SdkHelpers_sdkRegisterWithAccountID'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        std::string arg0;
        std::string arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "SdkHelpers:sdkRegisterWithAccountID");

        ok &= luaval_to_std_string(tolua_S, 3,&arg1, "SdkHelpers:sdkRegisterWithAccountID");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_SdkHelpers_sdkRegisterWithAccountID'", nullptr);
            return 0;
        }
        cobj->sdkRegisterWithAccountID(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "SdkHelpers:sdkRegisterWithAccountID",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_SdkHelpers_sdkRegisterWithAccountID'.",&tolua_err);
#endif

    return 0;
}
int lua_wolf_game_SdkHelpers_sdkRegister(lua_State* tolua_S)
{
    int argc = 0;
    SdkHelpers* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"SdkHelpers",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (SdkHelpers*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_wolf_game_SdkHelpers_sdkRegister'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "SdkHelpers:sdkRegister");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_SdkHelpers_sdkRegister'", nullptr);
            return 0;
        }
        cobj->sdkRegister(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "SdkHelpers:sdkRegister",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_SdkHelpers_sdkRegister'.",&tolua_err);
#endif

    return 0;
}
int lua_wolf_game_SdkHelpers_sdkLoginWithAccountID(lua_State* tolua_S)
{
    int argc = 0;
    SdkHelpers* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"SdkHelpers",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (SdkHelpers*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_wolf_game_SdkHelpers_sdkLoginWithAccountID'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        int arg0;
        std::string arg1;
        std::string arg2;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "SdkHelpers:sdkLoginWithAccountID");

        ok &= luaval_to_std_string(tolua_S, 3,&arg1, "SdkHelpers:sdkLoginWithAccountID");

        ok &= luaval_to_std_string(tolua_S, 4,&arg2, "SdkHelpers:sdkLoginWithAccountID");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_SdkHelpers_sdkLoginWithAccountID'", nullptr);
            return 0;
        }
        cobj->sdkLoginWithAccountID(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "SdkHelpers:sdkLoginWithAccountID",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_SdkHelpers_sdkLoginWithAccountID'.",&tolua_err);
#endif

    return 0;
}
int lua_wolf_game_SdkHelpers_channelVersion(lua_State* tolua_S)
{
    int argc = 0;
    SdkHelpers* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"SdkHelpers",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (SdkHelpers*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_wolf_game_SdkHelpers_channelVersion'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::function<void (int)> arg0;

        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_SdkHelpers_channelVersion'", nullptr);
            return 0;
        }
        char* ret = cobj->channelVersion(arg0);
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "SdkHelpers:channelVersion",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_SdkHelpers_channelVersion'.",&tolua_err);
#endif

    return 0;
}
int lua_wolf_game_SdkHelpers_sdk(lua_State* tolua_S)
{
    int argc = 0;
    SdkHelpers* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"SdkHelpers",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (SdkHelpers*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_wolf_game_SdkHelpers_sdk'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_SdkHelpers_sdk'", nullptr);
            return 0;
        }
        int ret = cobj->sdk();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "SdkHelpers:sdk",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_SdkHelpers_sdk'.",&tolua_err);
#endif

    return 0;
}
int lua_wolf_game_SdkHelpers_getInstance(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"SdkHelpers",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_SdkHelpers_getInstance'", nullptr);
            return 0;
        }
        SdkHelpers* ret = SdkHelpers::getInstance();
        object_to_luaval<SdkHelpers>(tolua_S, "SdkHelpers",(SdkHelpers*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "SdkHelpers:getInstance",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_SdkHelpers_getInstance'.",&tolua_err);
#endif
    return 0;
}
static int lua_wolf_game_SdkHelpers_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (SdkHelpers)");
    return 0;
}

int lua_register_wolf_game_SdkHelpers(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"SdkHelpers");
    tolua_cclass(tolua_S,"SdkHelpers","SdkHelpers","cc.Ref",nullptr);

    tolua_beginmodule(tolua_S,"SdkHelpers");
        tolua_function(tolua_S,"sdkRegisterWithAccountID",lua_wolf_game_SdkHelpers_sdkRegisterWithAccountID);
        tolua_function(tolua_S,"sdkRegister",lua_wolf_game_SdkHelpers_sdkRegister);
        tolua_function(tolua_S,"sdkLoginWithAccountID",lua_wolf_game_SdkHelpers_sdkLoginWithAccountID);
        tolua_function(tolua_S,"channelVersion",lua_wolf_game_SdkHelpers_channelVersion);
        tolua_function(tolua_S,"sdk",lua_wolf_game_SdkHelpers_sdk);
        tolua_function(tolua_S,"getInstance", lua_wolf_game_SdkHelpers_getInstance);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(SdkHelpers).name();
    g_luaType[typeName] = "SdkHelpers";
    g_typeCast["SdkHelpers"] = "SdkHelpers";
    return 1;
}

int lua_wolf_game_NativeHelpers_openUrl(lua_State* tolua_S)
{
    int argc = 0;
    NativeHelpers* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"NativeHelpers",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (NativeHelpers*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_wolf_game_NativeHelpers_openUrl'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "NativeHelpers:openUrl");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_NativeHelpers_openUrl'", nullptr);
            return 0;
        }
        cobj->openUrl(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "NativeHelpers:openUrl",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_NativeHelpers_openUrl'.",&tolua_err);
#endif

    return 0;
}
int lua_wolf_game_NativeHelpers_getOsFamily(lua_State* tolua_S)
{
    int argc = 0;
    NativeHelpers* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"NativeHelpers",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (NativeHelpers*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_wolf_game_NativeHelpers_getOsFamily'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_NativeHelpers_getOsFamily'", nullptr);
            return 0;
        }
        std::string ret = cobj->getOsFamily();
        lua_pushlstring(tolua_S,ret.c_str(),ret.length());
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "NativeHelpers:getOsFamily",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_NativeHelpers_getOsFamily'.",&tolua_err);
#endif

    return 0;
}
int lua_wolf_game_NativeHelpers_getGatewayServerUrl(lua_State* tolua_S)
{
    int argc = 0;
    NativeHelpers* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"NativeHelpers",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (NativeHelpers*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_wolf_game_NativeHelpers_getGatewayServerUrl'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_NativeHelpers_getGatewayServerUrl'", nullptr);
            return 0;
        }
        const std::string ret = cobj->getGatewayServerUrl();
        lua_pushlstring(tolua_S,ret.c_str(),ret.length());
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "NativeHelpers:getGatewayServerUrl",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_NativeHelpers_getGatewayServerUrl'.",&tolua_err);
#endif

    return 0;
}
int lua_wolf_game_NativeHelpers_installPackage(lua_State* tolua_S)
{
    int argc = 0;
    NativeHelpers* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"NativeHelpers",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (NativeHelpers*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_wolf_game_NativeHelpers_installPackage'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "NativeHelpers:installPackage");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_NativeHelpers_installPackage'", nullptr);
            return 0;
        }
        cobj->installPackage(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "NativeHelpers:installPackage",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_NativeHelpers_installPackage'.",&tolua_err);
#endif

    return 0;
}
int lua_wolf_game_NativeHelpers_getBranch(lua_State* tolua_S)
{
    int argc = 0;
    NativeHelpers* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"NativeHelpers",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (NativeHelpers*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_wolf_game_NativeHelpers_getBranch'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_NativeHelpers_getBranch'", nullptr);
            return 0;
        }
        const std::string ret = cobj->getBranch();
        lua_pushlstring(tolua_S,ret.c_str(),ret.length());
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "NativeHelpers:getBranch",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_NativeHelpers_getBranch'.",&tolua_err);
#endif

    return 0;
}
int lua_wolf_game_NativeHelpers_getVersion(lua_State* tolua_S)
{
    int argc = 0;
    NativeHelpers* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"NativeHelpers",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (NativeHelpers*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_wolf_game_NativeHelpers_getVersion'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_NativeHelpers_getVersion'", nullptr);
            return 0;
        }
        const std::string ret = cobj->getVersion();
        lua_pushlstring(tolua_S,ret.c_str(),ret.length());
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "NativeHelpers:getVersion",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_NativeHelpers_getVersion'.",&tolua_err);
#endif

    return 0;
}
int lua_wolf_game_NativeHelpers_getDeviceInfo(lua_State* tolua_S)
{
    int argc = 0;
    NativeHelpers* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"NativeHelpers",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (NativeHelpers*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_wolf_game_NativeHelpers_getDeviceInfo'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "NativeHelpers:getDeviceInfo");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_NativeHelpers_getDeviceInfo'", nullptr);
            return 0;
        }
        std::string ret = cobj->getDeviceInfo(arg0);
        lua_pushlstring(tolua_S,ret.c_str(),ret.length());
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "NativeHelpers:getDeviceInfo",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_NativeHelpers_getDeviceInfo'.",&tolua_err);
#endif

    return 0;
}
int lua_wolf_game_NativeHelpers_libraryPath(lua_State* tolua_S)
{
    int argc = 0;
    NativeHelpers* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"NativeHelpers",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (NativeHelpers*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_wolf_game_NativeHelpers_libraryPath'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_NativeHelpers_libraryPath'", nullptr);
            return 0;
        }
        std::string ret = cobj->libraryPath();
        lua_pushlstring(tolua_S,ret.c_str(),ret.length());
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "NativeHelpers:libraryPath",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_NativeHelpers_libraryPath'.",&tolua_err);
#endif

    return 0;
}
int lua_wolf_game_NativeHelpers_getInstance(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"NativeHelpers",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_NativeHelpers_getInstance'", nullptr);
            return 0;
        }
        NativeHelpers* ret = NativeHelpers::getInstance();
        object_to_luaval<NativeHelpers>(tolua_S, "NativeHelpers",(NativeHelpers*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "NativeHelpers:getInstance",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_NativeHelpers_getInstance'.",&tolua_err);
#endif
    return 0;
}
int lua_wolf_game_NativeHelpers_parentPath(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"NativeHelpers",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "NativeHelpers:parentPath");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_NativeHelpers_parentPath'", nullptr);
            return 0;
        }
        std::string ret = NativeHelpers::parentPath(arg0);
        lua_pushlstring(tolua_S,ret.c_str(),ret.length());
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "NativeHelpers:parentPath",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_NativeHelpers_parentPath'.",&tolua_err);
#endif
    return 0;
}
static int lua_wolf_game_NativeHelpers_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (NativeHelpers)");
    return 0;
}

int lua_register_wolf_game_NativeHelpers(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"NativeHelpers");
    tolua_cclass(tolua_S,"NativeHelpers","NativeHelpers","cc.Ref",nullptr);

    tolua_beginmodule(tolua_S,"NativeHelpers");
        tolua_function(tolua_S,"openUrl",lua_wolf_game_NativeHelpers_openUrl);
        tolua_function(tolua_S,"getOsFamily",lua_wolf_game_NativeHelpers_getOsFamily);
        tolua_function(tolua_S,"getGatewayServerUrl",lua_wolf_game_NativeHelpers_getGatewayServerUrl);
        tolua_function(tolua_S,"installPackage",lua_wolf_game_NativeHelpers_installPackage);
        tolua_function(tolua_S,"getBranch",lua_wolf_game_NativeHelpers_getBranch);
        tolua_function(tolua_S,"getVersion",lua_wolf_game_NativeHelpers_getVersion);
        tolua_function(tolua_S,"getDeviceInfo",lua_wolf_game_NativeHelpers_getDeviceInfo);
        tolua_function(tolua_S,"libraryPath",lua_wolf_game_NativeHelpers_libraryPath);
        tolua_function(tolua_S,"getInstance", lua_wolf_game_NativeHelpers_getInstance);
        tolua_function(tolua_S,"parentPath", lua_wolf_game_NativeHelpers_parentPath);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(NativeHelpers).name();
    g_luaType[typeName] = "NativeHelpers";
    g_typeCast["NativeHelpers"] = "NativeHelpers";
    return 1;
}

int lua_wolf_game_Helpers_seekNodeByName(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"Helpers",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        cocos2d::Node* arg0;
        std::string arg1;
        ok &= luaval_to_object<cocos2d::Node>(tolua_S, 2, "cc.Node",&arg0, "Helpers:seekNodeByName");
        ok &= luaval_to_std_string(tolua_S, 3,&arg1, "Helpers:seekNodeByName");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_Helpers_seekNodeByName'", nullptr);
            return 0;
        }
        cocos2d::Node* ret = Helpers::seekNodeByName(arg0, arg1);
        object_to_luaval<cocos2d::Node>(tolua_S, "cc.Node",(cocos2d::Node*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "Helpers:seekNodeByName",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_Helpers_seekNodeByName'.",&tolua_err);
#endif
    return 0;
}
int lua_wolf_game_Helpers_seekNodeByTag(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"Helpers",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        cocos2d::Node* arg0;
        int arg1;
        ok &= luaval_to_object<cocos2d::Node>(tolua_S, 2, "cc.Node",&arg0, "Helpers:seekNodeByTag");
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "Helpers:seekNodeByTag");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_Helpers_seekNodeByTag'", nullptr);
            return 0;
        }
        cocos2d::Node* ret = Helpers::seekNodeByTag(arg0, arg1);
        object_to_luaval<cocos2d::Node>(tolua_S, "cc.Node",(cocos2d::Node*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "Helpers:seekNodeByTag",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_Helpers_seekNodeByTag'.",&tolua_err);
#endif
    return 0;
}
int lua_wolf_game_Helpers_getCsbPngs(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"Helpers",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "Helpers:getCsbPngs");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_Helpers_getCsbPngs'", nullptr);
            return 0;
        }
        std::vector<std::string> ret = Helpers::getCsbPngs(arg0);
        ccvector_std_string_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "Helpers:getCsbPngs",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_Helpers_getCsbPngs'.",&tolua_err);
#endif
    return 0;
}
int lua_wolf_game_Helpers_dumpNode(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"Helpers",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        cocos2d::Node* arg0;
        ok &= luaval_to_object<cocos2d::Node>(tolua_S, 2, "cc.Node",&arg0, "Helpers:dumpNode");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_Helpers_dumpNode'", nullptr);
            return 0;
        }
        Helpers::dumpNode(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2)
    {
        cocos2d::Node* arg0;
        int arg1;
        ok &= luaval_to_object<cocos2d::Node>(tolua_S, 2, "cc.Node",&arg0, "Helpers:dumpNode");
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "Helpers:dumpNode");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_Helpers_dumpNode'", nullptr);
            return 0;
        }
        Helpers::dumpNode(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "Helpers:dumpNode",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_Helpers_dumpNode'.",&tolua_err);
#endif
    return 0;
}
int lua_wolf_game_Helpers_seekNodeByNameFast(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"Helpers",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        cocos2d::Node* arg0;
        std::string arg1;
        ok &= luaval_to_object<cocos2d::Node>(tolua_S, 2, "cc.Node",&arg0, "Helpers:seekNodeByNameFast");
        ok &= luaval_to_std_string(tolua_S, 3,&arg1, "Helpers:seekNodeByNameFast");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_Helpers_seekNodeByNameFast'", nullptr);
            return 0;
        }
        cocos2d::Node* ret = Helpers::seekNodeByNameFast(arg0, arg1);
        object_to_luaval<cocos2d::Node>(tolua_S, "cc.Node",(cocos2d::Node*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "Helpers:seekNodeByNameFast",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_Helpers_seekNodeByNameFast'.",&tolua_err);
#endif
    return 0;
}
int lua_wolf_game_Helpers_pauseNode(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"Helpers",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        cocos2d::Node* arg0;
        ok &= luaval_to_object<cocos2d::Node>(tolua_S, 2, "cc.Node",&arg0, "Helpers:pauseNode");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_Helpers_pauseNode'", nullptr);
            return 0;
        }
        Helpers::pauseNode(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "Helpers:pauseNode",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_Helpers_pauseNode'.",&tolua_err);
#endif
    return 0;
}
int lua_wolf_game_Helpers_getCascadeBoundingBox(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"Helpers",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        cocos2d::Node* arg0;
        ok &= luaval_to_object<cocos2d::Node>(tolua_S, 2, "cc.Node",&arg0, "Helpers:getCascadeBoundingBox");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_Helpers_getCascadeBoundingBox'", nullptr);
            return 0;
        }
        cocos2d::Rect ret = Helpers::getCascadeBoundingBox(arg0);
        rect_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "Helpers:getCascadeBoundingBox",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_Helpers_getCascadeBoundingBox'.",&tolua_err);
#endif
    return 0;
}
int lua_wolf_game_Helpers_seekNodeByTagFast(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"Helpers",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        cocos2d::Node* arg0;
        int arg1;
        ok &= luaval_to_object<cocos2d::Node>(tolua_S, 2, "cc.Node",&arg0, "Helpers:seekNodeByTagFast");
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "Helpers:seekNodeByTagFast");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_Helpers_seekNodeByTagFast'", nullptr);
            return 0;
        }
        cocos2d::Node* ret = Helpers::seekNodeByTagFast(arg0, arg1);
        object_to_luaval<cocos2d::Node>(tolua_S, "cc.Node",(cocos2d::Node*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "Helpers:seekNodeByTagFast",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_Helpers_seekNodeByTagFast'.",&tolua_err);
#endif
    return 0;
}
int lua_wolf_game_Helpers_resumeNode(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"Helpers",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        cocos2d::Node* arg0;
        ok &= luaval_to_object<cocos2d::Node>(tolua_S, 2, "cc.Node",&arg0, "Helpers:resumeNode");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_Helpers_resumeNode'", nullptr);
            return 0;
        }
        Helpers::resumeNode(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "Helpers:resumeNode",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_Helpers_resumeNode'.",&tolua_err);
#endif
    return 0;
}
static int lua_wolf_game_Helpers_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Helpers)");
    return 0;
}

int lua_register_wolf_game_Helpers(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"Helpers");
    tolua_cclass(tolua_S,"Helpers","Helpers","",nullptr);

    tolua_beginmodule(tolua_S,"Helpers");
        tolua_function(tolua_S,"seekNodeByName", lua_wolf_game_Helpers_seekNodeByName);
        tolua_function(tolua_S,"seekNodeByTag", lua_wolf_game_Helpers_seekNodeByTag);
        tolua_function(tolua_S,"getCsbPngs", lua_wolf_game_Helpers_getCsbPngs);
        tolua_function(tolua_S,"dumpNode", lua_wolf_game_Helpers_dumpNode);
        tolua_function(tolua_S,"seekNodeByNameFast", lua_wolf_game_Helpers_seekNodeByNameFast);
        tolua_function(tolua_S,"pauseNode", lua_wolf_game_Helpers_pauseNode);
        tolua_function(tolua_S,"getCascadeBoundingBox", lua_wolf_game_Helpers_getCascadeBoundingBox);
        tolua_function(tolua_S,"seekNodeByTagFast", lua_wolf_game_Helpers_seekNodeByTagFast);
        tolua_function(tolua_S,"resumeNode", lua_wolf_game_Helpers_resumeNode);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(Helpers).name();
    g_luaType[typeName] = "Helpers";
    g_typeCast["Helpers"] = "Helpers";
    return 1;
}

int lua_wolf_game_UdbNetClient_connectServer(lua_State* tolua_S)
{
    int argc = 0;
    UdbNetClient* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"UdbNetClient",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (UdbNetClient*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_wolf_game_UdbNetClient_connectServer'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        const char* arg0;
        int arg1;
        const char* arg2;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "UdbNetClient:connectServer"); arg0 = arg0_tmp.c_str();

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "UdbNetClient:connectServer");

        std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp, "UdbNetClient:connectServer"); arg2 = arg2_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_UdbNetClient_connectServer'", nullptr);
            return 0;
        }
        cobj->connectServer(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "UdbNetClient:connectServer",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_UdbNetClient_connectServer'.",&tolua_err);
#endif

    return 0;
}
int lua_wolf_game_UdbNetClient_isRuning(lua_State* tolua_S)
{
    int argc = 0;
    UdbNetClient* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"UdbNetClient",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (UdbNetClient*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_wolf_game_UdbNetClient_isRuning'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_UdbNetClient_isRuning'", nullptr);
            return 0;
        }
        bool ret = cobj->isRuning();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "UdbNetClient:isRuning",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_UdbNetClient_isRuning'.",&tolua_err);
#endif

    return 0;
}
int lua_wolf_game_UdbNetClient_Create(lua_State* tolua_S)
{
    int argc = 0;
    UdbNetClient* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"UdbNetClient",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (UdbNetClient*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_wolf_game_UdbNetClient_Create'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_UdbNetClient_Create'", nullptr);
            return 0;
        }
        bool ret = cobj->Create();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "UdbNetClient:Create",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_UdbNetClient_Create'.",&tolua_err);
#endif

    return 0;
}
int lua_wolf_game_UdbNetClient_Send(lua_State* tolua_S)
{
    int argc = 0;
    UdbNetClient* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"UdbNetClient",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (UdbNetClient*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_wolf_game_UdbNetClient_Send'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        const char* arg0;
        int arg1;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "UdbNetClient:Send"); arg0 = arg0_tmp.c_str();

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "UdbNetClient:Send");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_UdbNetClient_Send'", nullptr);
            return 0;
        }
        int ret = cobj->Send(arg0, arg1);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    if (argc == 3) 
    {
        const char* arg0;
        int arg1;
        int arg2;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "UdbNetClient:Send"); arg0 = arg0_tmp.c_str();

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "UdbNetClient:Send");

        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "UdbNetClient:Send");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_UdbNetClient_Send'", nullptr);
            return 0;
        }
        int ret = cobj->Send(arg0, arg1, arg2);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "UdbNetClient:Send",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_UdbNetClient_Send'.",&tolua_err);
#endif

    return 0;
}
int lua_wolf_game_UdbNetClient_Close(lua_State* tolua_S)
{
    int argc = 0;
    UdbNetClient* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"UdbNetClient",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (UdbNetClient*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_wolf_game_UdbNetClient_Close'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_UdbNetClient_Close'", nullptr);
            return 0;
        }
        int ret = cobj->Close();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "UdbNetClient:Close",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_UdbNetClient_Close'.",&tolua_err);
#endif

    return 0;
}
int lua_wolf_game_UdbNetClient_constructor(lua_State* tolua_S)
{
    int argc = 0;
    UdbNetClient* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_UdbNetClient_constructor'", nullptr);
            return 0;
        }
        cobj = new UdbNetClient();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"UdbNetClient");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "UdbNetClient:UdbNetClient",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_UdbNetClient_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_wolf_game_UdbNetClient_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (UdbNetClient)");
    return 0;
}

int lua_register_wolf_game_UdbNetClient(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"UdbNetClient");
    tolua_cclass(tolua_S,"UdbNetClient","UdbNetClient","cc.Ref",nullptr);

    tolua_beginmodule(tolua_S,"UdbNetClient");
        tolua_function(tolua_S,"new",lua_wolf_game_UdbNetClient_constructor);
        tolua_function(tolua_S,"connectServer",lua_wolf_game_UdbNetClient_connectServer);
        tolua_function(tolua_S,"isRuning",lua_wolf_game_UdbNetClient_isRuning);
        tolua_function(tolua_S,"Create",lua_wolf_game_UdbNetClient_Create);
        tolua_function(tolua_S,"Send",lua_wolf_game_UdbNetClient_Send);
        tolua_function(tolua_S,"Close",lua_wolf_game_UdbNetClient_Close);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(UdbNetClient).name();
    g_luaType[typeName] = "UdbNetClient";
    g_typeCast["UdbNetClient"] = "UdbNetClient";
    return 1;
}

int lua_wolf_game_UdbManager_deleteObj(lua_State* tolua_S)
{
    int argc = 0;
    UdbManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"UdbManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (UdbManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_wolf_game_UdbManager_deleteObj'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "UdbManager:deleteObj"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_UdbManager_deleteObj'", nullptr);
            return 0;
        }
        cobj->deleteObj(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "UdbManager:deleteObj",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_UdbManager_deleteObj'.",&tolua_err);
#endif

    return 0;
}
int lua_wolf_game_UdbManager_createObj(lua_State* tolua_S)
{
    int argc = 0;
    UdbManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"UdbManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (UdbManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_wolf_game_UdbManager_createObj'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "UdbManager:createObj"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_UdbManager_createObj'", nullptr);
            return 0;
        }
        UdbNetClient* ret = cobj->createObj(arg0);
        object_to_luaval<UdbNetClient>(tolua_S, "UdbNetClient",(UdbNetClient*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "UdbManager:createObj",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_UdbManager_createObj'.",&tolua_err);
#endif

    return 0;
}
int lua_wolf_game_UdbManager_getInstance(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"UdbManager",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_wolf_game_UdbManager_getInstance'", nullptr);
            return 0;
        }
        UdbManager* ret = UdbManager::getInstance();
        object_to_luaval<UdbManager>(tolua_S, "UdbManager",(UdbManager*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "UdbManager:getInstance",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_wolf_game_UdbManager_getInstance'.",&tolua_err);
#endif
    return 0;
}
static int lua_wolf_game_UdbManager_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (UdbManager)");
    return 0;
}

int lua_register_wolf_game_UdbManager(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"UdbManager");
    tolua_cclass(tolua_S,"UdbManager","UdbManager","cc.Ref",nullptr);

    tolua_beginmodule(tolua_S,"UdbManager");
        tolua_function(tolua_S,"deleteObj",lua_wolf_game_UdbManager_deleteObj);
        tolua_function(tolua_S,"createObj",lua_wolf_game_UdbManager_createObj);
        tolua_function(tolua_S,"getInstance", lua_wolf_game_UdbManager_getInstance);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(UdbManager).name();
    g_luaType[typeName] = "UdbManager";
    g_typeCast["UdbManager"] = "UdbManager";
    return 1;
}
TOLUA_API int register_all_wolf_game(lua_State* tolua_S)
{
	tolua_open(tolua_S);
	
	tolua_module(tolua_S,nullptr,0);
	tolua_beginmodule(tolua_S,nullptr);

	lua_register_wolf_game_Live2DNode(tolua_S);
	lua_register_wolf_game_CGdxParticle(tolua_S);
	lua_register_wolf_game_SdkHelpers(tolua_S);
	lua_register_wolf_game_UdbManager(tolua_S);
	lua_register_wolf_game_PbcHelper(tolua_S);
	lua_register_wolf_game_NativeHelpers(tolua_S);
	lua_register_wolf_game_Helpers(tolua_S);
	lua_register_wolf_game_UdbNetClient(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

