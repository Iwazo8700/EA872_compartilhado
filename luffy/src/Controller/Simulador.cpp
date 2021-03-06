#include "Simulador.hpp"

Simulador::Simulador(std::shared_ptr<Massa> m,
		     std::shared_ptr<Mola> k,
	      	     std::shared_ptr<Amortecedor> b,
                     std::shared_ptr<View> view,
		     std::shared_ptr<PixelConverter> px,
		     std::shared_ptr<ImageControl> imgControl,
			 bool luffy){
	this->time = 0;
	this->m = m;
	this->k = k;
	this->b = b;
	this->view = view;
	this->px = px;
	this->imgControl = imgControl;
	this->luffy = luffy;
}

float Simulador::get_time(){return this->time;}

void Simulador::set_massa(std::shared_ptr<Massa> m){this->m = m;}

void Simulador::set_mola(std::shared_ptr<Mola> k){this->k = k;}

void Simulador::set_amortecedor(std::shared_ptr<Amortecedor> b){this->b = b;}

void Simulador::aplicar_lei(){

	this->time += this->T;

	m->set_ace(-1*((m->get_vel()*b->get_B()) + (m->get_pos()*k->get_k() - m->get_force())/m->get_massa()));
	m->set_vel(m->get_vel() + m->get_ace()*this->T);
	m->set_pos(m->get_pos() + m->get_vel()*this->T + ((m->get_ace()*this->T*this->T)/2));
	//std::cout << m->get_pos() << std::endl;
	std::vector<int> pos;
	if(luffy) pos = px->convert_to_px(m->get_pos(),-5);
	else  pos = px->convert_to_px(0, m->get_pos());
	
	this->imgControl->change_position(pos[0], pos[1]);

	view->render();
}
