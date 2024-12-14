#include <BaseCPP.h>
#include <BaseCPP/Core/EntryPoint.h>

#include "Sandbox2D.h"
#include "ExampleLayer.h"

class Sandbox : public BaseCPP::Application
{
public:
	Sandbox()
	{
		// PushLayer(new ExampleLayer());
		PushLayer(new Sandbox2D());
	}

	~Sandbox()
	{
	}
};

BaseCPP::Application* BaseCPP::CreateApplication()
{
	return new Sandbox();
}
