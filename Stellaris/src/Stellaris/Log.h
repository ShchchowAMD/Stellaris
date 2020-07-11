#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Stellaris
{
    class STELLARIS_API Log
    {
    public:
        static void Init();

        inline static std::shared_ptr<spdlog::logger> &GetCoreLogger() { return s_CoreLogger; }
        inline static std::shared_ptr<spdlog::logger> &GetClientLogger() { return s_ClientLogger; }

    private:
        static std::shared_ptr<spdlog::logger> s_CoreLogger;
        static std::shared_ptr<spdlog::logger> s_ClientLogger;
    };

}

// Core log macros
#define STELLARIS_CORE_TRACE(...)        ::Stellaris::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define STELLARIS_CORE_INFO(...)         ::Stellaris::Log::GetCoreLogger()->info(__VA_ARGS__)
#define STELLARIS_CORE_WARN(...)         ::Stellaris::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define STELLARIS_CORE_ERROR(...)        ::Stellaris::Log::GetCoreLogger()->error(__VA_ARGS__)
#define STELLARIS_CORE_FATAL(...)        ::Stellaris::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define STELLARIS_TRACE(...)        ::Stellaris::Log::GetClientLogger()->trace(__VA_ARGS__)
#define STELLARIS_INFO(...)         ::Stellaris::Log::GetClientLogger()->info(__VA_ARGS__)
#define STELLARIS_WARN(...)         ::Stellaris::Log::GetClientLogger()->warn(__VA_ARGS__)
#define STELLARIS_ERROR(...)        ::Stellaris::Log::GetClientLogger()->error(__VA_ARGS__)
#define STELLARIS_FATAL(...)        ::Stellaris::Log::GetClientLogger()->fatal(__VA_ARGS__)
