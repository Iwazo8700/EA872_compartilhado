#include "PixelConverter.hpp"


PixelConverter::PixelConverter(float scale, int height, int width){
	this->scale = scale;
	this->height = height;
	this->width = width;
}

std::vector<int> PixelConverter::convert_to_px(float x, float y){
	std::vector<int> pos((int) ((this->width/2)*(x/this->scale)+this->width/2),(int) ((this->height/2)*(y/this->scale)+this->height/2));
	return pos;
}
