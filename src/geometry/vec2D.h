#ifndef _SIMPLE_GAME_ENGINE_VEC2D
	#define _SIMPLE_GAME_ENGINE_VEC2D 1

#include "../types.h"

namespace Geometry {

	/*
	* Rappresent a Vertice2D.
	*
	* - x: 4Byte;
	* - y: 4Byte.
	* 
	* Structure cost in space 8Byte.
	*/
	struct vec2D {
		f32 x, y;
	};
	
	typedef struct vec2D vec2D;


	// ------------------------------------------------------
	// MUL
	inline vec2D operator* (const Geometry::vec2D& v, f32 f) {
		return { v.x*f, v.y*f };
	}

	inline vec2D operator* (f32 f, const Geometry::vec2D& v) {
		return { v.x*f, v.y*f };
	}

	inline void operator*= (Geometry::vec2D& v, f32 f) {
		v.x *= f;
		v.y *= f;
	}


	// ------------------------------------------------------
	// SUM

	inline vec2D operator+ (f32 f, const Geometry::vec2D& v) {
		return { v.x+f, v.y+f };
	}

	inline vec2D operator+ (const Geometry::vec2D& v, f32 f) {
		return { v.x+f, v.y+f };
	}

	inline void operator+= (Geometry::vec2D& v, f32 f) {
		v.x += f;
		v.y += f;
	}
	
	inline vec2D operator+ (const Geometry::vec2D& v1, const Geometry::vec2D& v2) {
		return { v1.x+v2.x, v1.y+v2.y };
	}

	inline void operator+= (Geometry::vec2D& v1, const Geometry::vec2D& v2) {
		v1.x += v2.x;
		v1.y += v2.y;
	}


	// ------------------------------------------------------
	// SUB

	inline vec2D operator- (const Geometry::vec2D& v, f32 f) {
		return { v.x-f, v.y-f };
	}

	inline vec2D operator- (f32 f, const Geometry::vec2D& v) {
		return { v.x-f, v.y-f };
	}

	inline void operator-= (Geometry::vec2D& v, f32 f) {
		v.x -= f;
		v.y -= f;
	}
	
	inline vec2D operator- (const Geometry::vec2D& v1, const Geometry::vec2D& v2) {
		return { v1.x-v2.x, v1.y-v2.y };
	}

	inline void operator-= (Geometry::vec2D& v1, const Geometry::vec2D& v2) {
		v1.x -= v2.x;
		v1.y -= v2.y;
	}

	// ------------------------------------------------------
	// DIV
	
};

#endif
