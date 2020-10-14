#include "Massa.hpp"

Massa::Massa(float m, float pos, float vel, float ace){
	this->m = m;
	this->pos = pos;
	this->vel = vel;
	this->ace = ace;
}
float Massa::get_massa(){return this->m;}
float Massa::get_pos(){return this->pos;}
float Massa::get_vel(){return this->vel;}
float Massa::get_ace(){return this->ace;}
float Massa::get_force(){return this->force;}
void Massa::set_massa(float massa){this->m = massa;}
void Massa::set_pos(float pos){this->pos = pos;}
void Massa::set_vel(float vel){this->vel = vel;}
void Massa::set_ace(float ace){this->ace = ace;}
void Massa::set_force(float force){this->force = force;}

