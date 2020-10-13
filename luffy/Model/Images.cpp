#include "Images.hpp"


Images::Images(char* dir, char* dir2){
	IMG_LoadTexture(this.renderer, dir);
	IMG_LoadTexture(this.renderer, dir2);
}

void Images::set_fundo(char* dir){IMG_LoadTexture(this.renderer, dir);}

void Images::set_prot(char *dir){IMG_LoadTexture(this.renderer, dir);}
