#include <iostream>
#include <memory>
#include <stdlib.h>
#include <unistd.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include "Model/Massa.hpp"
#include "Model/Mola.hpp"
#include "Model/Amortecedor.hpp"
#include "View/View.hpp"
#include "Controller/PixelConverter.hpp"
#include "Controller/ImageControl.hpp"
#include "Controller/Simulador.hpp"
#include "Controller/Keyboard.hpp"

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 400;

int main(){
	std::shared_ptr<Massa> m (new Massa(1, 10, 0, 0));
	std::shared_ptr<Mola> k (new Mola(1));
	std::shared_ptr<Amortecedor> b (new Amortecedor(1));
	std::shared_ptr<Images> images (new Images("./Images/capi.png", "./Images/fundo.jpg", SCREEN_WIDTH, SCREEN_HEIGHT));
	std::shared_ptr<View> view (new View(images, SCREEN_WIDTH, SCREEN_HEIGHT));
	std::shared_ptr<PixelConverter> pixel (new PixelConverter(10, SCREEN_HEIGHT, SCREEN_WIDTH));
	std::shared_ptr<ImageControl> imgControl (new ImageControl(images));
	std::unique_ptr<Simulador> sim (new Simulador(m, k, b, view, pixel, imgControl));
	std::unique_ptr<Keyboard> key (new Keyboard(m));

	while(true){
		key->update_keyboard();
		sim->aplicar_lei();
		if(key->quit_screen())
			break;
	}

	return 0;
}

