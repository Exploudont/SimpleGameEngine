#ifndef _SIMPLE_GAME_ENGINE_TEXTURE_OPEN_GL_H_
	#define _SIMPLE_GAME_ENGINE_TEXTURE_OPEN_GL_H_

#include "image.h"
#include "texturetype.h"
#include "texture.h"

namespace Image {

	/*
	* Texture for OpenGL.
	*/
	class TextureOpenGL : public Texture {
	public:	

		/*
		* Create OpenGL Texture.
		*/
		TextureOpenGL(const char* file_path, enum TextureType type) {
			generateID();
			LoadOnGPU();	
			generateMipmap();

			// can be created more efficiently using the SOIL loader.
		}

		/*
		* Return the Image structure that rappresent the Image.
		*/
		Image* getImage() override { return this->img; }


		/*
		* Return the pointer to Texture's ID.
		*/
		u32* getID() override { return &this->id; }


		/*
		* Return the type of the Texture.
		*/
		enum TextureType getTextureType() override { return this->type; }


	private:
		/*
		* Generate Unique ID for the Texture using OpenGL calls.
		*/
		inline void generateID() {
			//glGenTextures(1, &this->id);
			//glBindTexture(GL_TEXTURE_2D, this->id);
			LOG_INFO("Texture ID generated");
		}
		
		/*
		* Load on GPU the Image Texture using OpenGL calls.
		*/
		inline void LoadOnGPU() {
			/*
			glTexImage2D(GL_TEXTURE_2D, 0, getOpenGLTextureType(type),
				&img->width, &img->height, 0,
				GL_RGB, GL_UNSIGNED_BYTE, img->datas);
			*/
			LOG_INFO("Texture loaded on GPU");
		}
		
		/*
		* Generate the Mipmap using OpenGL calls.
		*/
		inline void generateMipmap() {
			//glGenMipmap(GL_TEXTURE_2D);
			//glBindTexture(GL_TEXTURE_2D, 0);
			LOG_INFO("Generated mipmap");
		}
	
		/*
		* Return the equivalent OpenGL texture type.
		* If not valid by default return a color texture type.
		*/
		int getOpenGLTextureType(enum TextureType type) {
			/*
			switch(type) {
				case TextureType::COLOR_TEXTURE:	return GL_RGB;
				case TextureType::LIGHT_MAP:		return GL_LUMINANCE;
				case TextureType::ALPHA_TEXTURE:	return GL_ALPHA;
			}
			
			return GL_RGB;
			*/
			return 0;
		}


		Image* img;		// 8Byte pointer
		u32 id;		// 4Byte 
		enum TextureType type;	// 1Byte (assigned by compiler)
	
	};
	
};

#endif
