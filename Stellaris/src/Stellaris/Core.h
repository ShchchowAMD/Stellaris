#pragma once

#ifdef STELLARIS_WINDOWS
    #ifdef STELLARIS_EXPORTS
        #define STELLARIS_API __declspec(dllexport)
    #else
        #define STELLARIS_API __declspec(dllimport)
    #endif // STELLARIS_EXPORTS
#else
    #error Stellaris only supports Windows!
#endif // STELLARIS_WINDOWS
