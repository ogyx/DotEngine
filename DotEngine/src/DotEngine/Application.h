#pragma once

#include "Core.h"
#include "Events/Event.h"
#include "DotEngine/Events/ApplicationEvent.h"
#include "Window.h"

namespace DotEngine
{
	class DOTENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

		void OnEvent(Event& e);
    private:
		bool OnWindowClosed(WindowCloseEvent& e);

        std::unique_ptr<Window> m_Window;
        bool m_Running = true;
	};

	// created in the client!
	Application* CreateApplication();
}
