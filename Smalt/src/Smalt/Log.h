#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Smalt {
	class SMALT_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};
}

// Core log macros
#define ST_CORE_TRACE(...)   ::Smalt::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define ST_CORE_INFO(...)    ::Smalt::Log::GetCoreLogger()->info(__VA_ARGS__)
#define ST_CORE_WARN(...)    ::Smalt::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define ST_CORE_ERROR(...)   ::Smalt::Log::GetCoreLogger()->error(__VA_ARGS__)
#define ST_CORE_FATAL(...)   ::Smalt::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define ST_TRACE(...)   ::Smalt::Log::GetClientLogger()->trace(__VA_ARGS__)
#define ST_INFO(...)    ::Smalt::Log::GetClientLogger()->info(__VA_ARGS__)
#define ST_WARN(...)    ::Smalt::Log::GetClientLogger()->warn(__VA_ARGS__)
#define ST_ERROR(...)   ::Smalt::Log::GetClientLogger()->error(__VA_ARGS__)
#define ST_FATAL(...)   ::Smalt::Log::GetClientLogger()->fatal(__VA_ARGS__)


