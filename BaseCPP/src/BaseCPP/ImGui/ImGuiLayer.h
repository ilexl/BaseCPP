#pragma once

#include "BaseCPP/Core/Layer.h"

#include "BaseCPP/Events/ApplicationEvent.h"
#include "BaseCPP/Events/KeyEvent.h"
#include "BaseCPP/Events/MouseEvent.h"

namespace BaseCPP {

	class ImGuiLayer : public Layer
	{
	public:
		ImGuiLayer();
		~ImGuiLayer() = default;

		virtual void OnAttach() override;
		virtual void OnDetach() override;
		virtual void OnEvent(Event& e) override;

		void Begin();
		void End();
	private:
		float m_Time = 0.0f;
	};

}