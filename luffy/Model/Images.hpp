#pragma once
#include <iostream>
#include <memory>
#include <stdlib.h>
#include <unistd.h>
#include <SDL2/SDL_image.h>
#include <iostream>


class Images{
	public:
		Images(char* dir, char* dir2);
		SDL_Texture *texture;
		SDL_Texture *texture2;
		SDL_Window* window = nullptr;
		SDL_Renderer* renderer;
		SDL_Rect target;
		void set_fundo(char* dir);
		void set_prot(char* dir);
};

