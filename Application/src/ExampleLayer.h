#pragma once

#include "BaseCPP.h"

class ExampleLayer : public BaseCPP::Layer
{
public:
	ExampleLayer();
	virtual ~ExampleLayer() = default;

	virtual void OnAttach() override;
	virtual void OnDetach() override;

	void OnUpdate(BaseCPP::Timestep ts) override;
	virtual void OnImGuiRender() override;
	void OnEvent(BaseCPP::Event& e) override;
private:
	BaseCPP::ShaderLibrary m_ShaderLibrary;
	BaseCPP::Ref<BaseCPP::Shader> m_Shader;
	BaseCPP::Ref<BaseCPP::VertexArray> m_VertexArray;

	BaseCPP::Ref<BaseCPP::Shader> m_FlatColorShader;
	BaseCPP::Ref<BaseCPP::VertexArray> m_SquareVA;

	BaseCPP::Ref<BaseCPP::Texture2D> m_Texture, m_ChernoLogoTexture;

	BaseCPP::OrthographicCameraController m_CameraController;
	glm::vec3 m_SquareColor = { 0.2f, 0.3f, 0.8f };
};

