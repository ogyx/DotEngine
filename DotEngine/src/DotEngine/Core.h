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