#include "bcpch.h"
#include "BaseCPP/Core/Input.h"

#ifdef BC_PLATFORM_WINDOWS
	#include "Platform/Windows/WindowsInput.h"
#endif

namespace BaseCPP {

	Scope<Input> Input::s_Instance = Input::Create();

	Scope<Input> Input::Create()
	{
	#ifdef BC_PLATFORM_WINDOWS
		return CreateScope<WindowsInput>();
	#else
		BC_CORE_ASSERT(false, "Unknown platform!");
		return nullptr;
	#endif
	}
} 