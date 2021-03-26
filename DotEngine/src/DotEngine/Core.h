#pragma once

#ifdef DE_PLATFORM_WINDOWS
	#ifdef DE_BUILD_DLL
	#define DOTENGINE_API __declspec(dllexport)
	#else
	#define DOTENGINE_API __declspec(dllimport)
	#endif // #ifdef DE_BUILD_DLL
#else
#error DotEngine only support windows!
#endif // #ifdef DE_PLATFORM_WINDOWS

#ifdef DOT_ENABLE_ASSERTS
    #define  DOT_CORE_ASSERT(x, ...) { if(!(x)) {DOT_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); }}
    #define  DOT_ASSERT(x, ...) { if(!(x)) {DOT_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); }}
#else
    #define  DOT_CORE_ASSERT(x, ...)
    #define  DOT_ASSERT(x, ...) 
#endif // #ifdef DOT_ENABLE_ASSERTS


#define BIT(x) (1 << x)