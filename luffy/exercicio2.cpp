#include <iostream>
#include <memory>
#include <stdlib.h>
#include <unistd.h>
#include <vector>

class Massa{
	private:
		float m;
		float pos, vel, ace;
	public:
		Massa (float m, float pos, float vel, float ace): m(this->m), pos(this->pos), vel(this->vel), ace(this->ace) {}
		float get_massa();
		float get_pos();
		float get_vel();
		float get_ace();
		void set_pos(float pos);
		void set_vel(float vel);
		void set_ace(float ace);
};

class Mola {
	private:
		float k;
	public:
		Mola(float k): k(this->k) {}
		float get_k();
};

class Amortecedor {
	private:
		float B;
	public:
		Amortecedor(float B): B(this->B) {}
		float get_B();
};

class PixelConverter {
	private:
		float scale;
		float height, width;
	public:
		PixelConverter(float scale, float height, float width) : scale(this->scale), height(this->height), width(this->width){}
		std::vector<int> convert_to_px(float x, float y);
};

class View {
	private:

	public:
		void render(int x, int y);
};

class Simulador {
	private:
		std::shared_ptr<Massa> m;
		std::shared_ptr<Mola> k;
		std::shared_ptr<Amortecedor> b;
		std::shared_ptr<View> view;
		std::shared_ptr<PixelConverter> px;
		const float T = 0.01;
		float time = 0;
	public:
		Simulador(std::shared_ptr<Massa> m,
			  std::shared_ptr<Mola> k,
			  std::shared_ptr<Amortecedor> b,
			  std::shared_ptr<View> view,
			  std::shared_ptr<PixelConverter> px): m(this->m), k(this->k), b(this->b), view(this->view), px(this->px){}
		void aplicar_lei();
		void set_massa(std::shared_ptr<Massa> m);
		void set_view(std::shared_ptr<View> v);
		void set_mola(std::shared_ptr<Mola> k);
		void set_amortecedor(std::shared_ptr<Amortecedor> b);
		float get_time();
		
};

int main(){
	std::shared_ptr<Massa> m (new Massa(1, 10, 0, 0));
	std::shared_ptr<Mola> k (new Mola(1));
	std::shared_ptr<Amortecedor> b (new Amortecedor(1));
	std::shared_ptr<View> view (new View);
	std::shared_ptr<PixelConverter> px (new PixelConverter(10,400, 200));
	std::unique_ptr<Simulador> sim (new Simulador(m,k,b,view,px));

	while(sim->get_time() < 10)
		sim->aplicar_lei();
	
	return 0;
}

float Simulador::get_time(){return this->time;}
float Massa::get_massa(){return this->m;}
float Massa::get_pos(){return this->pos;}
float Massa::get_vel(){return this->vel;}
float Massa::get_ace(){return this->ace;}
float Mola::get_k(){return this->k;}
void Massa::set_pos(float pos){this->pos=pos;}
void Massa::set_vel(float vel){this->vel=vel;}
void Massa::set_ace(float ace){this->ace=ace;}
float Amortecedor::get_B(){return this->B;}
std::vector<int> PixelConverter::convert_to_px(float x, float y){
	std::vector<int> pos((int) ((this->width/2)*(x/this->scale)+this->width/2),(int) ((this->height/2)*(y/this->scale)+this->height/2));
	return pos;
}
void Simulador::aplicar_lei(){
	this->time += this->T;
	m->set_ace(-1*((m->get_vel()*b->get_B()) + (m->get_pos()*k->get_k())/m->get_massa()));
	m->set_vel(m->get_vel() + m->get_ace()*this->T);
	m->set_pos(m->get_pos() + m->get_vel()*this->T + ((m->get_ace()*this->T*this->T)/2));

	std::vector<int> positions = this->px->convert_to_px(0,this->m->get_pos());
	view->render(positions[0], positions[1]);
}
void View::render (int x, int y){
	
}

