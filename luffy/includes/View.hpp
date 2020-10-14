#pragma once
#include <iostream>
#include <memory>
#include <stdlib.h>
#include <unistd.h>
#include <SDL2/SDL_image.h>
#include "Images.hpp"

class View {
	private:
		std::shared_ptr<Images> img; 
		int SCREEN_WIDTH, SCREEN_HEIGHT;
	public:
		View(std::shared_ptr<Images> img, int width, int height);
		void render();
};

