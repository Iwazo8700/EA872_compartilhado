#pragma once
#include <iostream>
#include <memory>
#include <stdlib.h>

class Mola {
	private:
		float k;
	public:
		Mola(float k): k(this->k) {}
		float get_k();
		void set_k(float k);
};


