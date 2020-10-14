#include "PixelConverter.hpp"

PixelConverter::PixelConverter(float scale, int height, int width){
	this->scale = scale;
	this->height = height;
	this->width = width;
}

std::vector<int> PixelConverter::convert_to_px(float x, float y){
	int pos_x, pos_y;
	
	if(x > 0) pos_x = (int) ((((this->width/2) - 100)*x/this->scale) + this->width/2);
	else if(x < 0) pos_x = (int) (((this->width/2)*x/this->scale) + this->width/2); 
	else pos_x = this->width/2;
	if(y > 0) pos_y = (int) ((((this->height/2) - 100)*y/this->scale) + this->height/2);
	else if(y < 0) pos_y = (int) (((this->height/2)*y/this->scale) + this->height/2); 	
	else pos_y = this->height/2;

	if(pos_x < 0) pos_x = 0;
	if(pos_x > this->width-100) pos_x = this->width-100;
	if(pos_y < 0) pos_y = 0;
	if(pos_y > this->height-100) pos_y = this->height-100;

	std::vector<int> pos{pos_x,pos_y};

	return pos;
}
