#pragma once

#ifdef ST_PLATFORM_WINDOWS
	#ifdef ST_BUILD_DLL
		#define SMALT_API __declspec(dllexport)
	#else
		#define SMALT_API __declspec(dllimport)
	#endif
#else
	#error Smalt only supports Windows
#endif 

#define BIT(x) (1 << x)