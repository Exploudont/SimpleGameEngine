#ifndef _SIMPLE_GAME_ENGINE_LINE2D
	#define _SIMPLE_GAME_ENGINE_LINE2D 1

#include "vec2D.h"

namespace Geometry {

	/*
	* Rappresent a Line2D.
	*
	* - v: 8Byte.
	*	contains 2 vec2D.
	*
	* Structure cost in space 8Byte.
	*/
	struct line2D {
		vec2D v[2];
	};
	
	typedef struct line2D line2D;

};

#endif
