#pragma once

#include "Core.h"

namespace DotEngine
{
	class DOTENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// created in the client!
	Application* CreateApplication();
}
