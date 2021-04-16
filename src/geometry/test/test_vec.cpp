#include <stdio.h>

#include "../vec2D.h"
#include "../vec3D.h"
#include "../vec4D.h"


void printV2(const Geometry::vec2D& v) {
	printf("vec2D>");
	printf("\n\tx> %f\n\ty> %f\n", v.x, v.y);
}

void printV3(const Geometry::vec3D& v) {
	printf("vec3D>");
	printf("\n\tx> %f\n\ty> %f\n\tz> %f\n", v.x, v.y, v.z);
}

void printV4(const Geometry::vec4D& v) {
	printf("vec4D>");
	printf("\n\tx> %f\n\ty> %f\n\tz> %f\n\tw> %f\n", v.x, v.y, v.z, v.w);
}



int main(int argc, const char* argv[]) {
	Geometry::vec2D v1 = {0, 1};
	Geometry::vec3D v2 = {0, 1, 2};
	Geometry::vec4D v3 = {0, 1, 2, 3};
	
	v1 *= 3.0;

	printV2(v1);
	printV3(v2);
	printV4(v3);	
	
	return 0;
}
