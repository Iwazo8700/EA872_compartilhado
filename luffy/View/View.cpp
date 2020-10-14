#include "View.hpp"


View::View(std::shared_ptr<Images> img, int width, int height){
	this->img = img;  
	this->SCREEN_WIDTH = width;
	this->SCREEN_HEIGHT = height;

	// Inicializando o subsistema de video do SDL
	if ( SDL_Init (SDL_INIT_VIDEO) < 0 ) {
		std::cout << SDL_GetError();
	}

	// Criando uma janela
	this->img->window = SDL_CreateWindow("Simulacao Massa-Mola-Amortecedor",
	SDL_WINDOWPOS_UNDEFINED,
	SDL_WINDOWPOS_UNDEFINED,
	SCREEN_WIDTH,
	SCREEN_HEIGHT,
	SDL_WINDOW_SHOWN);

	if (this->img->window==nullptr) { // Em caso de erro...
		std::cout << SDL_GetError();
		SDL_Quit();
	}

 	// Inicializando o renderizador
	this->img->renderer = SDL_CreateRenderer(
				this->img->window, -1,
				SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (this->img->renderer==nullptr) { // Em caso de erro...
		SDL_DestroyWindow(this->img->window);
		std::cout << SDL_GetError();
		SDL_Quit();
	}

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

