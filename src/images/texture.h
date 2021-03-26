#ifndef _SIMPLE_GAME_ENGINE_TEXTURE_H_
	#define _SIMPLE_GAME_ENGINE_TEXTURE_H_

#include "image.h"
#include "texturetype.h"

namespace Image {
	
	class Texture {
		public:
		
			/*
			* Create a Texture Object.
			*/
			Texture(const char* file_path, enum TextureType type) {
				this->type = type;
				img = Image::loadImage(file_path);
			}
			
			/*
			* Create a Texture color Object.
			*/
			Texture(const char* file_path): this(file_path, TextureType::COLOR_TEXTURE) {}
			
			/*
			* Return the Image structure that rappresent the Image.
			*/
			Image* getImage() { return this->img; }
			
			/*
			* Return the ID of the Texture.
			*/
			uint32_t getID() { return this->id; }
			
			/*
			* Return the pointer to Texture's ID.
			*/
			uint32_t* getID() { return &this->id; }
			
			/*
			* Return the type of the Texture.
			*/
			enum TextureType getTextureType() { return this->type; }
		
		
		protected:
			Image* img;
			uint32_t id;
			enum TextureType type;
	};
};

#endif