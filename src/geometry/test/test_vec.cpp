#include <stdio.h>

#include "vec2D.h"
#include "vec3D.h"
#include "vec4D.h"


void print(const vec2D& v) {
	printf("vec2D>");
	printf("\n\tx> %f\n\ty> %f", v.x, v.y);
}

void print(const vec3D& v) {
	printf("vec3D>");
	printf("\n\tx> %f\n\ty> %f\n\tz> %f", v.x, v.y, v.z);
}

void print(const vec4D& v) {
	printf("vec4D>");
	printf("\n\tx> %f\n\ty> %f\n\tz> %f\n\tw> %f", v.x, v.y, v.z, v.w);
}



int main(int argc, const char* argv[]) {
	Geometry::vec2D v1 = {0, 1};
	Geometry::vec3D v2 = {0, 1, 2};
	Geometry::vec4D v3 = {0, 1, 2, 3};
	
	print(v1);
	print(v2);
	print(v3);	
	
	return 0;
}