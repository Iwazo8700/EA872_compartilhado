#pragma once
#include <iostream>
#include <memory>
#include <stdlib.h>
#include <unistd.h>
#include <SDL2/SDL_image.h>
#include <iostream>

class View {
	private:
		std::shared_ptr<Images> img; 
	public:
		View();
		void render(int x, int y);
};

