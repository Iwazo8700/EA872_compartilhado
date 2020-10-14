#pragma once
#include <iostream>
#include <memory>
#include <stdlib.h>
#include <vector>

class PixelConverter {
	private:
		float scale;
		int height, width;
	public:
		PixelConverter(float scale, int height, int width);
		std::vector<int> convert_to_px(float x, float y);
};

