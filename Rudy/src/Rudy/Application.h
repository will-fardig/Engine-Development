#pragma once

#include "Core.h"

namespace Rudy {
	class RUDY_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// TO BE DEFINED IN CLIENT
	Application* CreateApplication();
}


