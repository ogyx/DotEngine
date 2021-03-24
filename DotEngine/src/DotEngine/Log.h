#pragma once

#include "Core.h"

#include <memory>

#include "spdlog/spdlog.h"

namespace DotEngine
{
    class DOTENGINE_API Log
    {
    public:
        static void InitLog();

        inline static std::shared_ptr<spdlog::logger>& GetCoreLogger()      { return s_DotEngineCoreLogger; }
        inline static std::shared_ptr<spdlog::logger>& GetClientLogger()    { return s_DotEngineCoreLogger; }
    private:
        static std::shared_ptr<spdlog::logger> s_DotEngineCoreLogger;
        static std::shared_ptr<spdlog::logger> s_DotEngineClientLogger;
    };

}

// Core logger macros
#define DOTENGINE_CORE_TRACE(...)        DotEngine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define DOTENGINE_CORE_INFO(...)         DotEngine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define DOTENGINE_CORE_WARN(...)         DotEngine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define DOTENGINE_CORE_ERROR(...)        DotEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define DOTENGINE_CORE_FATAL(...)        DotEngine::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client logger macros
#define DOTENGINE_CLIENT_TRACE(...)      DotEngine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define DOTENGINE_CLIENT_INFO(...)       DotEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define DOTENGINE_CLIENT_WARN(...)       DotEngine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define DOTENGINE_CLIENT_ERROR(...)      DotEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define DOTENGINE_CLIENT_FATAL(...)      DotEngine::Log::GetClientLogger()->fatal(__VA_ARGS__)