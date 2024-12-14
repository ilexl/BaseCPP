#pragma once

#include "BaseCPP.h"

class Sandbox2D : public BaseCPP::Layer
{
public:
	Sandbox2D();
	virtual ~Sandbox2D() = default;

	virtual void OnAttach() override;
	virtual void OnDetach() override;

	void OnUpdate(BaseCPP::Timestep ts) override;
	virtual void OnImGuiRender() override;
	void OnEvent(BaseCPP::Event& e) override;
private:
	BaseCPP::OrthographicCameraController m_CameraController;
	
	// Temp
	BaseCPP::Ref<BaseCPP::VertexArray> m_SquareVA;
	BaseCPP::Ref<BaseCPP::Shader> m_FlatColorShader;
	BaseCPP::Ref<BaseCPP::Framebuffer> m_Framebuffer;

	BaseCPP::Ref<BaseCPP::Texture2D> m_CheckerboardTexture;

	glm::vec4 m_SquareColor = { 0.2f, 0.3f, 0.8f, 1.0f };
};