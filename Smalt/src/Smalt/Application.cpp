#include "stpch.h"
#include "Application.h"

#include "Smalt/Events/ApplicationEvent.h"
#include "Smalt/Log.h"

namespace Smalt {

	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run() 
	{

		WindowResizeEvent e(1200,720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			ST_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			ST_TRACE(e);
		}
		
		while (true);
	}
}