#pragma once
#include "Massa.hpp"
#include <memory>
#include <SDL2/SDL_image.h>

class Keyboard {
	private:
		std::shared_ptr<Massa> m;
		SDL_Event evento; // eventos discretos
		const Uint8* state; // estado do teclado
	public:
		Keyboard(std::shared_ptr<Massa> m);
		void update_keyboard();
		int quit_screen();
};
