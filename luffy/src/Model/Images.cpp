#include "Images.hpp"


Images::Images(char const *dir, char const *dir2, int SCREEN_WIDTH, int SCREEN_HEIGHT){
	if ( SDL_Init (SDL_INIT_VIDEO) < 0 ) {
		std::cout << SDL_GetError();
	}

	this->window = SDL_CreateWindow("Simulacao Massa-Mola-Amortecedor",
	SDL_WINDOWPOS_UNDEFINED,
	SDL_WINDOWPOS_UNDEFINED,
	SCREEN_WIDTH,
	SCREEN_HEIGHT,
	SDL_WINDOW_SHOWN);

	if (this->window==nullptr) { // Em caso de erro...
		std::cout << SDL_GetError();
		SDL_Quit();
	}

 	// Inicializando o renderizador
	this->renderer = SDL_CreateRenderer(
				this->window, -1,
				SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (this->renderer==nullptr) { // Em caso de erro...
		SDL_DestroyWindow(this->window);
		std::cout << SDL_GetError();
		SDL_Quit();
	}

	this->texture = IMG_LoadTexture(this->renderer, dir);
	this->texture2 = IMG_LoadTexture(this->renderer, dir2);
	this->target.x = 0;
	this->target.y = 0;
	this->target.w = 100;
	this->target.h = 100;
	this->destino = {0, 0, 800, 400};
}

Images::~Images(){
	SDL_DestroyTexture(this->texture);
	SDL_DestroyTexture(this->texture2);
	SDL_DestroyRenderer(this->renderer);
	SDL_DestroyWindow(this->window);
	SDL_Quit();
}

void Images::set_fundo(char const *dir){texture = IMG_LoadTexture(this->renderer, dir);}

void Images::set_prot(char const *dir){texture2 = IMG_LoadTexture(this->renderer, dir);}
