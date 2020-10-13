#pragma once
#include <iostream>
#include <memory>
#include <stdlib.h>
#include <unistd.h>
#include <SDL2/SDL_image.h>
#include <iostream>




int main(){
	std::shared_ptr<Massa> m (new Massa);
	std::shared_ptr<Mola> k (new Mola);
	std::shared_ptr<Amortecedor> b (new Amortecedor);
	std::unique_ptr<Simulador> sim (new Simulador);
	std::shared_ptr<View> view (new View);

	m->set_massa(1);
	m->set_pos(10);
	m->set_vel(0);
	m->set_ace(0);

	k->set_k(1);
	
	b->set_B(1);

	sim->set_massa(m);
	sim->set_mola(k);
	sim->set_amortecedor(b);
	sim->set_view(view);

	while(sim->get_time() < 10)
		sim->aplicar_lei();
	
	return 0;
}

