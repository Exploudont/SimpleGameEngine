#ifndef _SIMPLE_GAME_ENGINE_TEXTURE_TYPE_H_
	#define _SIMPLE_GAME_ENGINE_TEXTURE_TYPE_H_

namespace Image {

	/*
	* Descrive the Type of Texture.
	*
	* Cost in space 1Byte (by compiler).
	*/	
	enum TextureType {
		COLOR_TEXTURE,
		ALPHA_TEXTURE,
		NORMAL_MAP,
		DIPLACEMENT_MAP,
		LIGHT_MAP
	};
	
	
};

#endif
