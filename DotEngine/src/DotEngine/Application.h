#pragma once

#include "Core.h"
#include "Events/Event.h"
#include "Window.h"

namespace DotEngine
{
	class DOTENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

    private:
        std::unique_ptr<Window> m_Window;
        bool m_Running = true;
	};

	// created in the client!
	Application* CreateApplication();
}
