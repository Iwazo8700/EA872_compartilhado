#include "Amortecedor.hpp"

Amortecedor::Amortecedor(float B){
	this->B = B;
}

float Amortecedor::get_B(){return this->B;}
void Amortecedor::set_B(float B){this->B = B;}

