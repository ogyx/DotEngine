#include "dotpch.h"
#include "Application.h"

#include "DotEngine/Log.h"

#include <GLFW/glfw3.h>

namespace DotEngine
{
#define  BIND_EVENT(x)  std::bind(&Application::x, this, std::placeholders::_1)

	Application::Application()
	{
        m_Window = std::unique_ptr<Window>(Window::Create());
		m_Window->SetEventCallback(BIND_EVENT(OnEvent));
	}

	Application::~Application()
	{

	}

	void Application::OnEvent(Event& e)
	{
		DOT_CORE_TRACE("{0}", e);

		EventDispatcher dispatcher(e);
		dispatcher.Dispatch<WindowCloseEvent>(BIND_EVENT(OnWindowClosed));
	}


	void Application::Run()
	{

		while (m_Running)
		{
            glClearColor(1, 0, 1, 1);
            glClear(GL_COLOR_BUFFER_BIT);
            m_Window->OnUpdate();
		}
	}
	bool Application::OnWindowClosed(WindowCloseEvent& e)
	{
		m_Running = false;
		return true;
	}
}