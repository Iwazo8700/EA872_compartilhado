#pragma once
#include <iostream>
#include <memory>
#include <stdlib.h>



const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;



class PixelConverter {
	private:
		float scale;
		float height, width;
	public:
		PixelConverter(float scale, float height, float width) : scale{scale}, height{height}, width{width}{}
		int* convert_to_px(float x, float y);
};

