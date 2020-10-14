#pragma once
#include <iostream>
#include <memory>
#include <stdlib.h>






class PixelConverter {
	private:
		float scale;
		int height, width;
	public:
		PixelConverter(float scale, int height, int width) : scale{scale}, height{height}, width{width}{}
		int* convert_to_px(float x, float y);
};

