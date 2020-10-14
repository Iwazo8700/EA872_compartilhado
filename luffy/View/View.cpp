#include "View.hpp"


View::View(std::shared_ptr<Images> img, int width, int height)
	this.img = img;  
	SCREEN_WIDTH = width;
	SCREEN_HEIGHT = height;
// Inicializando o subsistema de video do SDL
  if ( SDL_Init (SDL_INIT_VIDEO) < 0 ) {
    std::cout << SDL_GetError();
    return 1;
  }

  // Criando uma janela
  img->window = SDL_CreateWindow("Demonstracao do SDL2",
      SDL_WINDOWPOS_UNDEFINED,
      SDL_WINDOWPOS_UNDEFINED,
      SCREEN_WIDTH,
      SCREEN_HEIGHT,
      SDL_WINDOW_SHOWN);
  if (window==nullptr) { // Em caso de erro...
    std::cout << SDL_GetError();
    SDL_Quit();
    return 1;
  }

  // Inicializando o renderizador
	img->renderer = SDL_CreateRenderer(
      window, -1,
      SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
  if (renderer==nullptr) { // Em caso de erro...
    SDL_DestroyWindow(window);
    std::cout << SDL_GetError();
    SDL_Quit();
    return 1;
  }

  // Carregando texturas

  // Quadrado onde a textura sera desenhada
  SDL_QueryTexture(texture, nullptr, nullptr, &target.w, &target.h);
}

void View::render(){
    // Desenhar a cena
    SDL_RenderClear(img->renderer);
    SDL_RenderCopy(img->renderer, img->texture2, nullptr, nullptr);
    SDL_RenderCopy(img->renderer, img->texture, nullptr, &target);
    SDL_RenderPresent(img->renderer);
	
}

