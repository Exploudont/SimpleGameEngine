#ifndef _SIMPLE_GAME_ENGINE_WINDOW_ATTRIBUTES_H_
	#define _SIMPLE_GAME_ENGINE_WINDOW_ATTRIBUTES_H_

#include "../types.h"

namespace Window {

	class WindowAttributes {
	public:
		WindowAttributes(const char* title, u32 width, u32 heigth)
			: title((char*)title),
			  width(width),
			  heigth(heigth)
		{}

		char* title;
		u32 width;
		u32 heigth;
	};

};


#endif
