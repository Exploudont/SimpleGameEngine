#ifndef _SIMPLE_GAME_ENGINE_OBJ_FILE_H_
	#define _SIMPLE_GAME_ENGINE_OBJ_FILE_H_

#include <vector>
#include "objtypes.h"


namespace File {

	namespace OBJ {

		class ObjFile {
		public:
			void load(const char* file_path) {
				const char* VERTICE = "v";
				const char* VERTICE_PATTERN = "v %f %f %f";
				
				const char* VERTICE_NORMAL = "vn";
				const char* VERTICE_NORMAL_PATTERN = "vn";
				
				const char* LINE = "l";
				const char* LINE_PATTERN = "l v%d/vt%d v%d/vt%d";
				
				const char* FACE = "f";
				const char* FACE_PATTERN = "f v%d/vt%d/vn%d v%d/vt%d/vn%d v%d/vt%d/vn%d";


				OBJ::vec3d vec3d_tmp;
				OBJ::vec2d vec2d_tmp;
				OBJ::line line_tmp;
				OBJ::face face_tmp;
				

				if( == VERTICE) {
					
				}
				else if( == VERTICE_NORMAL) {
					
				}
				else if( == LINE) {
					
				}
				else if( == FACE) {
					
					sscanf(FACE_PATTERN, , &face_tmp.p[0], &face_tmp.p[1], &face_tmp.p[2]);
				}
			}
		
		
		private:
			std::vector<OBJ::vec3d>	vertx;
			std::vector<OBJ::vec3d> vertx_nomals;
			std::vector<OBJ::line> lines;
			std::vector<OBJ::face> faces;
		};

	};
};

#endif
