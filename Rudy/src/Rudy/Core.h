#pragma once

#ifdef RD_PLATFORM_WINDOWS
	#ifdef RD_BUILD_DLL
		#define RUDY_API __declspec(dllexport)
	#else
		#define RUDY_API __declspec(dllimport)
	#endif
#else
	#error Rudy only supports Windows... for now!
#endif