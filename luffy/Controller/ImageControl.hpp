#pragma once
#include <memory>
#include "../Model/Images.hpp"

class ImageControl{
	private:
		std::shared_ptr<Images>	img;
	public:
		ImageControl(std::shared_ptr<Images> img);
		void change_position(int x, int y);
};
