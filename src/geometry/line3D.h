#ifndef _SIMPLE_GAME_ENGINE_LINE3D
	#define _SIMPLE_GAME_ENGINE_LINE3D 1

#include "vec3D.h"

namespace Geometry {

	/*
	* Rappresent a Line3D.
	*
	* - v: 8Byte.
	*	contains 2 vec3D.
	*
	* Structure cost in space 8Byte.
	*/	
	struct line3D {
		vec3D v[2];
	};
	
	typedef struct line3D line3D;

};

#endif
