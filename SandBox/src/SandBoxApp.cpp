#include <DotEngine.h>

class SandBox : public DotEngine::Application
{
public:
	SandBox() {}
	~SandBox() {}

};

DotEngine::Application* DotEngine::CreateApplication()
{
	return new SandBox();
}

