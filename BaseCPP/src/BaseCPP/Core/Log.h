#pragma once

#include "BaseCPP/Core/Base.h"

#include <spdlog/spdlog.h>
#include <spdlog/fmt/ostr.h>

namespace BaseCPP {

	class Log
	{
	public:
		static void Init();

		static Ref<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		static Ref<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static Ref<spdlog::logger> s_CoreLogger;
		static Ref<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
#define BC_CORE_TRACE(...)    ::BaseCPP::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define BC_CORE_INFO(...)     ::BaseCPP::Log::GetCoreLogger()->info(__VA_ARGS__)
#define BC_CORE_WARN(...)     ::BaseCPP::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define BC_CORE_ERROR(...)    ::BaseCPP::Log::GetCoreLogger()->error(__VA_ARGS__)
#define BC_CORE_CRITICAL(...) ::BaseCPP::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define BC_TRACE(...)         ::BaseCPP::Log::GetClientLogger()->trace(__VA_ARGS__)
#define BC_INFO(...)          ::BaseCPP::Log::GetClientLogger()->info(__VA_ARGS__)
#define BC_WARN(...)          ::BaseCPP::Log::GetClientLogger()->warn(__VA_ARGS__)
#define BC_ERROR(...)         ::BaseCPP::Log::GetClientLogger()->error(__VA_ARGS__)
#define BC_CRITICAL(...)      ::BaseCPP::Log::GetClientLogger()->critical(__VA_ARGS__)