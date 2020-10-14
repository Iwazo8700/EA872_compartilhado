#include "ImageControl.hpp"

ImageControl::ImageControl(std::shared_ptr<Images> img){
	this->img = img;
};

void ImageControl::change_position(int x, int y){
	this->img->target.x = x;
	this->img->target.y = y;
}
