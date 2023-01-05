#pragma once

#ifdef ST_PLATFORM_WINDOWS

extern Smalt::Application* Smalt::CreateApplication();

int main(int argc, char** argv) {
	printf("Welcome to Smlat Game Engine\n");
	auto app = Smalt::CreateApplication();
	app->Run();
	delete app;
}

#endif