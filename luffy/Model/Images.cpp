#include "Images.hpp"


Images::Images(char* dir, char* dir2){
	texture = IMG_LoadTexture(this.renderer, dir);
	texture2 = IMG_LoadTexture(this.renderer, dir2);
}

void Images::set_fundo(char* dir){texture = IMG_LoadTexture(this.renderer, dir);}

void Images::set_prot(char *dir){texture2 = IMG_LoadTexture(this.renderer, dir);}
