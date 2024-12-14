#include "bcpch.h"
#include "BaseCPP/Renderer/RenderCommand.h"

namespace BaseCPP {

	Scope<RendererAPI> RenderCommand::s_RendererAPI = RendererAPI::Create();

}