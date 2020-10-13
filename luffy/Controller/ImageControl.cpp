#include "ImageControl.hpp"

void ImageControl::change_position(int x, int y){
	this->img->target.x = x;
	this->img->target.y = y;
}
