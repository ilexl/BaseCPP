#include "bcpch.h"
#include "BaseCPP/Renderer/VertexArray.h"

#include "BaseCPP/Renderer/Renderer.h"
#include "Platform/OpenGL/OpenGLVertexArray.h"

namespace BaseCPP {

	Ref<VertexArray> VertexArray::Create()
	{
		switch (Renderer::GetAPI())
		{
			case RendererAPI::API::None:    BC_CORE_ASSERT(false, "RendererAPI::None is currently not supported!"); return nullptr;
			case RendererAPI::API::OpenGL:  return CreateRef<OpenGLVertexArray>();
		}

		BC_CORE_ASSERT(false, "Unknown RendererAPI!");
		return nullptr;
	}

}