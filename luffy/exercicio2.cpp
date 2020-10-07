#include <iostream>
#include <memory>
#include <stdlib.h>
#include <unistd.h>

class Massa{
	private:
		float m;
		float pos, vel, ace;
	public:
		float get_massa();
		void set_massa(float massa);
		float get_pos();
		void set_pos(float pos);
		float get_vel();
		void set_vel(float vel);
		float get_ace();
		void set_ace(float ace);	
};

class PixelConverter {
	private:
		float scale;
		float height, width;
	public:
		PixelConverter(float scale, float height, float width) : scale{scale}, height{height}, width{width}{}
		int* convert_to_px(float x, float y);
};

class Mola {
	private:
		float k;
	public:
		float get_k();
		void set_k(float k);
};

class Amortecedor {
	private:
		float B;
	public:
		float get_B();
		void set_B(float B);
};

class View {
	private:
		float px = 1;
		float min = -10;
		float max = 10;
	public:
		void render(float x);
};

class Simulador {
	private:
		std::shared_ptr<Massa> m;
		std::shared_ptr<Mola> k;
		std::shared_ptr<Amortecedor> b;
		std::shared_ptr<View> view;
		const float T = 0.01;
		float time;
	public:
		Simulador(std::shared_ptr<Massa> m,
			  std::shared_ptr<Mola> k,
			  std::shared_ptr<Amortecedor> b,
			  std::shared_ptr<View> view)
);
		void aplicar_lei();
		void set_massa(std::shared_ptr<Massa> m);
		void set_view(std::shared_ptr<View> v);
		void set_mola(std::shared_ptr<Mola> k);
		void set_amortecedor(std::shared_ptr<Amortecedor> b);
		float get_time();
		
};

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

Simulador::Simulador(){this->time = 0;}
float Simulador::get_time(){ return this->time;}
void Simulador::set_massa(std::shared_ptr<Massa> m){this->m = m;}
void Simulador::set_view(std::shared_ptr<View> v){this->view = v;}
void Simulador::set_mola(std::shared_ptr<Mola> k){this->k = k;}
void Simulador::set_amortecedor(std::shared_ptr<Amortecedor> b){this->b = b;}
float Massa::get_massa(){return this->m;}
float Massa::get_pos(){return this->pos;}
float Massa::get_vel(){return this->vel;}
float Massa::get_ace(){return this->ace;}
float Mola::get_k(){return this->k;}
float Amortecedor::get_B(){return this->B;}
void Massa::set_massa(float massa){this->m = massa;}
void Massa::set_pos(float pos){this->pos = pos;}
void Massa::set_vel(float vel){this->vel = vel;}
void Massa::set_ace(float ace){this->ace = ace;}
void Mola::set_k(float k){this->k = k;}
void Amortecedor::set_B(float B){this->B = B;}
void Simulador::aplicar_lei(){
	this->time += this->T;
	m->set_ace(-1*((m->get_vel()*b->get_B()) + (m->get_pos()*k->get_k())/m->get_massa()));
	m->set_vel(m->get_vel() + m->get_ace()*this->T);
	m->set_pos(m->get_pos() + m->get_vel()*this->T + ((m->get_ace()*this->T*this->T)/2));

	view->render(m->get_pos());
}
int* convert_to_px(float x, float y){
	return {(int) ((this->width/2)*(x/this->scale)+this->width/2),(int) ((this->height/2)*(y/this->scale)+this->height/2)};
}

void View::render(float x){
//	system("clear");

	for(int i=min; i<max; i+=px){
		if(i < x && x < i+px)
			std::cout << "x";
		else
			std::cout << " ";
	}
	std::cout << std::endl;
	
	
}
