#ifndef _SIMPLE_GAME_ENGINE_VEC3D
	#define _SIMPLE_GAME_ENGINE_VEC3D 1

#include "../types.h"

namespace Geometry {

	/*
	* Rappresent a Vertice3D.
	*
	* - x: 4Byte;
	* - y: 4Byte;
	* - z: 4byte.
	* 
	* Structure cost in space 12Byte.
	*/
	struct vec3D {
		f32 x, y, z;
	};
	
	typedef struct vec3D vec3D;

};

#endif
