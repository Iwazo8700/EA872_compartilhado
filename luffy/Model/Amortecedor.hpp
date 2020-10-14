#pragma once
#include <iostream>
#include <memory>
#include <stdlib.h>


class Amortecedor {
	private:
		float B;
	public:
		Amortecedor(float B): B(this->B) {}
		float get_B();
		void set_B(float B);
};


