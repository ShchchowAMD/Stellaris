#pragma once
#include "Core.h"

namespace Stellaris
{
    class STELLARIS_API Application
    {
    public:
        Application();
        virtual ~Application();

        void Run();
    };

    // To be defined in CLIENT
    Application *CreateApplication();
}
