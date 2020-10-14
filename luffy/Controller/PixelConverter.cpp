

int* PixelConverte::convert_to_px(float x, float y){
	return {(int) ((this->width/2)*(x/this->scale)+this->width/2),(int) ((this->height/2)*(y/this->scale)+this->height/2)};
}

