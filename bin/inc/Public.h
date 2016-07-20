#pragma once

#define LUA_COMPAT_MODULE


#pragma warning(disable:4251)


#ifdef LUA_BIND_BUILD_AS_LIB
	#define LUA_BIND_API 
#else
	#if defined(LUA_BIND_BUILD_AS_DLL)	/* { */
		#define LUA_BIND_API __declspec(dllexport)
	#else						/* }{ */
		#define LUA_BIND_API __declspec(dllimport)
	#endif						/* } */
#endif


#include "../lua/include/lua.hpp"

#include <cassert>
#include <iostream>
#include <string>