#include "Rudy.h"

class Sandbox : public Rudy::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Rudy::Application* Rudy::CreateApplication() {
	return new Sandbox();
}