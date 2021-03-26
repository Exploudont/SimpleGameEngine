#ifndef _SIMPLE_GAME_ENGINE_IMAGE_H_
	#define _SIMPLE_GAME_ENGINE_IMAGE_H_

#include <stdint.h>

namespace Image {

	struct image {
		char* file_path;
		uint32_t width;
		uint32_t height;
		uint8_t* datas;
	};
	typedef struct image Image;
};

#endif