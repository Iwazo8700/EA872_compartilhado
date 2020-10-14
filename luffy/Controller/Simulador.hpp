#pragma once
#include <iostream>
#include <memory>
#include <stdlib.h>
#include <vector>
#include "../Model/Massa.hpp"
#include "../Model/Mola.hpp"
#include "../Model/Amortecedor.hpp"
#include "../View/View.hpp"
#include "../Controller/PixelConverter.hpp"
#include "../Controller/ImageControl.hpp"

class Simulador {
	private:
		std::shared_ptr<Massa> m;
		std::shared_ptr<Mola> k;
		std::shared_ptr<Amortecedor> b;
		std::shared_ptr<View> view;
		std::shared_ptr<PixelConverter> px;
		std::shared_ptr<ImageControl> imgControl;
		const float T = 0.01;
		float time;
	public:
		Simulador(std::shared_ptr<Massa> m,
			  std::shared_ptr<Mola> k,
			  std::shared_ptr<Amortecedor> b,
                          std::shared_ptr<View> view,
			  std::shared_ptr<PixelConverter> px,
			  std::shared_ptr<ImageControl> imgControl);
;
		void aplicar_lei();
		void set_massa(std::shared_ptr<Massa> m);
		void set_mola(std::shared_ptr<Mola> k);
		void set_amortecedor(std::shared_ptr<Amortecedor> b);
		float get_time();
		
};

