#ifndef _SIMPLE_GAME_ENGINE_IMAGE_LOADER_H_
	#define _SIMPLE_GAME_ENGINE_IMAGE_LOADER_H_

#include <cstddef>
#include "SOIL/SOIL.h"
#include "image.h"
#include "../loggingsystem/Logger.h"

namespace Image {

	/*
	* Load an Image from specific file.
	*
	* Time cost like SOIL_image_loader.
	*/
	static Image* loadImage(const char* file_path) {
		Image* img = new Image();
		
		img->file_path = file_path;
		img->datas = NULL;
		//img->datas = SOIL_image_loader(img->file_path, &img->width, &img->height, 0, SOIL_LOAD_RGB);

		LOG_DEBUG("Image loaded");
		return img;
	}

	/*
	* Clear the Image datas.
	*
	* Time cost like SOIL_free_image_data.
	*/
	static void clearImage(Image* img) {
		//SOIL_free_image_data(img->datas);
		img->datas = NULL;
		LOG_DEBUG("Image clean");
	}
};

#endif
