#ifndef _SIMPLE_GAME_ENGINE_IMAGE_LOADER_H_
	#define _SIMPLE_GAME_ENGINE_IMAGE_LOADER_H_

#include <cstddef>
//#include "SOIL.h"
#include "image.h"

namespace Image {
	
	static Image* loadImage(const char* file_path) {
		Image* img = new Image();
		
		img->file_path = file_path;
		//img->datas = SOIL_image_loader(img->file_path, &img->width, &img->height, 0, SOIL_LOAD_RGB);
		
		return img;
	}
	
	static void clearImage(Image* img) {
		//SOIL_free_image_data(img->datas);
		img->datas = NULL;
	}
};

#endif
