#ifndef _SIMPLE_GAME_ENGINE_LINE4D
	#define _SIMPLE_GAME_ENGINE_LINE4D 1

#include "vec4D.h"

namespace Geometry {

	/*
	* Rappresent a Line4D.
	*
	* - v: 8Byte.
	*	contains 2 vec4D.
	*
	* Structure cost in space 8Byte.
	*/
	struct line4D {
		vec4D v[2];
	};
	
	typedef struct line4D line4D;

};

#endif
