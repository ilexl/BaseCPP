#include "bcpch.h"
#include "BaseCPP/Renderer/GraphicsContext.h"

#include "BaseCPP/Renderer/Renderer.h"
#include "Platform/OpenGL/OpenGLContext.h"

namespace BaseCPP {

	Scope<GraphicsContext> GraphicsContext::Create(void* window)
	{
		switch (Renderer::GetAPI())
		{
			case RendererAPI::API::None:    BC_CORE_ASSERT(false, "RendererAPI::None is currently not supported!"); return nullptr;
			case RendererAPI::API::OpenGL:  return CreateScope<OpenGLContext>(static_cast<GLFWwindow*>(window));
		}

		BC_CORE_ASSERT(false, "Unknown RendererAPI!");
		return nullptr;
	}

}