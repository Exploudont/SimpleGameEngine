#ifndef _SIMPLE_GAME_ENGINE_VEC4D
	#define _SIMPLE_GAME_ENGINE_VEC4D 1

#include "../types.h"

namespace Geometry {

	/*
	* Rappresent a Vertice4D.
	*
	* - x: 4Byte;
	* - y: 4Byte;
	* - z: 4byte;
	* - w: 4Byte.
	* 
	* Structure cost in space 16Byte.
	*/
	
	struct vec4D {
		f32 x, y, z, w;
	};
	
	typedef struct vec4D vec4D;

};

#endif
