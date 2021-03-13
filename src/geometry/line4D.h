#ifndef _SIMPLE_GAME_ENGINE_LINE4D
	#define _SIMPLE_GAME_ENGINE_LINE4D 1

#include "vec4D.h"

namespace Geometry {
	
	struct line4D {
		vec4D v1, v2;
	};
	
	typedef struct line4D line4D;

};

#endif