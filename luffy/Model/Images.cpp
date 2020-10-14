#include "Images.hpp"


Images::Images(char const *dir, char const *dir2){
	texture = IMG_LoadTexture(this->renderer, dir);
	texture2 = IMG_LoadTexture(this->renderer, dir2);
}

void Images::set_fundo(char const *dir){texture = IMG_LoadTexture(this->renderer, dir);}

void Images::set_prot(char const *dir){texture2 = IMG_LoadTexture(this->renderer, dir);}
