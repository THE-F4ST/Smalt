#pragma once

#ifdef ST_PLATFORM_WINDOWS

extern Smalt::Application* Smalt::CreateApplication();

int main(int argc, char** argv) {
	Smalt::Log::Init();
	ST_CORE_WARN("Initialized Log");
	int a = 5;
	ST_INFO("Hello! var=(0)", a);

	auto app = Smalt::CreateApplication();
	app->Run();
	delete app;
}

#endif