
#include <iostream>
#include <memory>
#include <stdlib.h>
#include <unistd.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include "Massa.hpp"
#include "Mola.hpp"
#include "Amortecedor.hpp"
#include "View.hpp"
#include "PixelConverter.hpp"
#include "ImageControl.hpp"


const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;


int main(){
	std::shared_ptr<Massa> m (new Massa(1, 10, 0, 0));
	std::shared_ptr<Mola> k (new Mola(1));
	std::shared_ptr<Amortecedor> b (new Amortecedor(1));
	std::shared_ptr<Images> images (new Images);
	std::shared_ptr<View> view (new View(images, SCREEN_WIDTH, SCREEN_HEIGHT));
	std::shared_ptr<PivelConverter> pixel (new PixelConverter(10, SCREEN_HEIGHT, SCREEN_WIDTH));
	std::shared_ptr<ImageControl> imgControl (new imgControl(images));
	std::unique_ptr<Simulador> sim (new Simulador(m, k, b, view, pixel, imgControl));

	while(true){
		sim->aplicar_lei();
	}
	return 0;
}

