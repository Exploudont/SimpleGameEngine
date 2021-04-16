#ifndef _SIMPLE_GAME_ENGINE_MESH_H_
	#define _SIMPLE_GAME_ENGINE_MESH_H_


namespace Mesh {

	class Mesh {
	public:
		virtual void Bind() = 0;
		virtual void unBind() = 0;
	};

	
};

#endif
