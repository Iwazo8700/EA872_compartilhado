#include "PixelConverter.hpp"

PixelConverter::PixelConverter(float scale, int height, int width){
	this->scale = scale;
	this->height = height;
	this->width = width;
}

std::vector<int> PixelConverter::convert_to_px(float x, float y){
	int pos_x = (int) ((this->width/this->scale)*(x/this->scale)+this->width/2);
	int pos_y = (int) ((this->height/this->scale)*(y/this->scale)+this->height/2);

	std::vector<int> pos{pos_x,pos_y};

	return pos;
}
