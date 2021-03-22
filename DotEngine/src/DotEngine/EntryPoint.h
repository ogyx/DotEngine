#pragma once
#ifdef DE_PLATFORM_WINDOWS

extern DotEngine::Application* DotEngine::CreateApplication();

int main(int argc, char** argv)
{
	auto app = DotEngine::CreateApplication();
	app->Run();
	delete app;
}
#endif // #ifdef DE_PLATFORM_WINDOWS