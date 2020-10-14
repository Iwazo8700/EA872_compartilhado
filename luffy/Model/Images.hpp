#pragma once
#include <memory>
#include <stdlib.h>
#include <unistd.h>
#include <SDL2/SDL_image.h>
#include <iostream>


class Images{
	public:
		Images(char const *dir, char const *dir2, int SCREEN_WIDTH, int SCREEN_HEIGHT);
		~Images();
		SDL_Texture *texture;
		SDL_Texture *texture2;
		SDL_Window* window = nullptr;
		SDL_Renderer* renderer;
		SDL_Rect target;
		void set_fundo(char const *dir);
		void set_prot(char const *dir);
};

