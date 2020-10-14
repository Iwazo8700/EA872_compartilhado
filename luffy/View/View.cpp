#include "View.hpp"
#include <iostream>

View::View(std::shared_ptr<Images> img, int width, int height){
	this->img = img;  
	this->SCREEN_WIDTH = width;
	this->SCREEN_HEIGHT = height;

	// Inicializando o subsistema de video do SDL
	if ( SDL_Init (SDL_INIT_VIDEO) < 0 ) {
		std::cout << SDL_GetError();
	}

	// Criando uma janela
  	// Quadrado onde a textura sera desenhada
	SDL_QueryTexture(this->img->texture, nullptr, nullptr, (&this->img->target.w), &(this->img->target.h));
}

void View::render(){
	// Desenhar a cena
	SDL_RenderClear(this->img->renderer);
	SDL_RenderCopy(this->img->renderer, this->img->texture2, nullptr, nullptr);
	SDL_RenderCopy(this->img->renderer, this->img->texture, nullptr, &(this->img->target));
	SDL_RenderPresent(this->img->renderer);
}

