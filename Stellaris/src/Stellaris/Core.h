#pragma once

#ifdef STELLARIS_PLATFORM_WINDOWS
    #ifdef STELLARIS_BUILD_DLL
        #define STELLARIS_API __declspec(dllexport)
    #else
        #define STELLARIS_API __declspec(dllimport)
    #endif // STELLARIS_BUILD_DLL
#else
    #error Stellaris only supports Windows!
#endif // STELLARIS_PLATFORM_WINDOWS
