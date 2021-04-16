#ifndef _SIMPLE_GAME_ENGINE_TEXTURE_H_
	#define _SIMPLE_GAME_ENGINE_TEXTURE_H_

#include "../types.h"
#include "image.h"
#include "imageloader.h"
#include "texturetype.h"
#include "../loggingsystem/Logger.h"

namespace Image {

	/*
	* Abstract class to rappresent the Texture.
	* Not contains attributes because they can be implement using optimized methods.
	*/	
	class Texture {
		public:
			
			/*
			* Return the Image structure that rappresent the Image.
			*/
			virtual Image* getImage() = 0;

			/*
			* Return the pointer to Texture's ID.
			*/
			virtual u32* getID() = 0;

			/*
			* Return the type of the Texture.
			*/
			virtual enum TextureType getTextureType() = 0;

			
	};
};

#endif
