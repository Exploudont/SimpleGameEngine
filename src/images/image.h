#ifndef _SIMPLE_GAME_ENGINE_IMAGE_H_
	#define _SIMPLE_GAME_ENGINE_IMAGE_H_

#include "../types.h"


namespace Image {

	/*
	* Rappresent an Image.
	*
	* - file_path: 8Byte;
	* - width: 4Byte (width >= 0);
	* - height: 4Byte (height >= 0);
	* - num_channels: 1Byte (0-255);
	* - datas: 8Byte.
	*
	* Structure cost in space 25 Byte.
	* Access to Image Datas O(1).
	*/
	struct image {
		char* file_path;
		u32 width;
		u32 height;
		//u8 num_channels;
		u8* datas;
	};
	typedef struct image Image;
};

#endif
