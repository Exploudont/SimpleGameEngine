#ifndef _SIMPLE_GAME_ENGINE_LINE3D
	#define _SIMPLE_GAME_ENGINE_LINE3D 1

#include "vec3D.h"

namespace Geometry {
	
	struct line3D {
		vec3D v1, v2;
	};
	
	typedef struct line3D line3D;

};

#endif