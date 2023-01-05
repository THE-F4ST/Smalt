#include <Smalt.h>

class Sandbox : public Smalt::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Smalt::Application* Smalt::CreateApplication() {
	return new Sandbox();
}