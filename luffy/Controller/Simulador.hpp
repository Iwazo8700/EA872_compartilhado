#pragma once
#include <iostream>
#include <memory>
#include <stdlib.h>
#include "Massa.hpp"
#include "Mola.hpp"
#include "Amortecedor.hpp"


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
;
		void aplicar_lei();
		void set_massa(std::shared_ptr<Massa> m);
		void set_view(std::shared_ptr<View> v);
		void set_mola(std::shared_ptr<Mola> k);
		void set_amortecedor(std::shared_ptr<Amortecedor> b);
		float get_time();
		
};

