#include "Images.hpp"


Images::Images(char const *dir, char const *dir2){
	this->texture = IMG_LoadTexture(this->renderer, dir);
	this->texture2 = IMG_LoadTexture(this->renderer, dir2);
	this->target.x = 0;
	this->target.y = 0;
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
