#include "Keyboard.hpp"

Keyboard::Keyboard(std::shared_ptr<Massa> m){
	this->m = m;
	this->state = SDL_GetKeyboardState(nullptr); // estado do teclado
}

void Keyboard::update_keyboard(){

	SDL_PumpEvents(); // atualiza estado do teclado
	if (this->state[SDL_SCANCODE_UP]) this->m->set_force(this->m->get_force()+1);
	else if (this->state[SDL_SCANCODE_DOWN]) this->m->set_force(this->m->get_force()-1);
	else this->m->set_force(0);
}

int Keyboard::quit_screen(){
	while (SDL_PollEvent(&(this->evento))) {
		if (this->evento.type == SDL_QUIT) {
			return 1;
		}
	}
	return 0;
}
