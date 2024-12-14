#pragma once
#include "BaseCPP/Core/Base.h"

#ifdef BC_PLATFORM_WINDOWS

extern BaseCPP::Application* BaseCPP::CreateApplication();

int main(int argc, char** argv)
{
	BaseCPP::Log::Init();

	BC_PROFILE_BEGIN_SESSION("Startup", "BaseCPPProfile-Startup.json");
	auto app = BaseCPP::CreateApplication();
	BC_PROFILE_END_SESSION();

	BC_PROFILE_BEGIN_SESSION("Runtime", "BaseCPPProfile-Runtime.json");
	app->Run();
	BC_PROFILE_END_SESSION();

	BC_PROFILE_BEGIN_SESSION("Startup", "BaseCPPProfile-Shutdown.json");
	delete app;
	BC_PROFILE_END_SESSION();
}

#endif
