#ifndef _SIMPLE_GAME_ENGINE_OBJ_TYPES_H_
	#define _SIMPLE_GAME_ENGINE_OBJ_TYPES_H_


#include "types.h"
#include "geometry.h"


namespace OBJ {
		
		typedef Geometry::vec3D vec3D;
		typedef Geometry::vec2D vec2D;
		//typedef Geometry::vec2D objtext_coord;
		//typedef Geometry::vec3D objvertx_normal;
		

		struct line {
			u32 p[2];
		};
		typedef struct line line;

		struct face {
			u32 p[3];
		};
		typedef struct face face;
	
};

#endif
