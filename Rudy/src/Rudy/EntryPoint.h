#pragma once

#ifdef RD_PLATFORM_WINDOWS

extern Rudy::Application* Rudy::CreateApplication();

int main(int argc, char** argv) {
	printf("Rudy Engine\n");
	auto app = Rudy::CreateApplication();
	app->Run();
	delete app;
}
#else
	#error Rudy only supports Windows... for now!
#endif