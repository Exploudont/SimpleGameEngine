#ifndef _SIMPLE_GAME_ENGINE_TEXTURE_CONTAINER_H_
	#define _SIMPLE_GAME_ENGINE_TEXTURE_CONTAINER_H_

#include "../types.h"
#include "texture.h"
#include <unordered_map>

namespace Image {

	class TextureContainer {
	public:
		Texture& get(u32 id) { return text_container[id]; }

		void add(Texture* t) { text_container[t->getID()] = t; }

		std::unordered_map& getMappedTexture() { return text_container; }
	
	
	private:
		std::unordered_map<u32, Texture*> text_container;
	};
	
};

#ifndef
