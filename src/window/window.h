#ifndef _SIMPLE_GAME_ENGINE_WINDOW_H_
	#define _SIMPLE_GAME_ENGINE_WINDOW_H_

#include "GLFW/glfw3.h"
#include "../types.h"
#include "windowattributes.h"

namespace Window {


	class Window {
	public:

		/* Init the Graphics API */
		virtual b8 Init() = 0;



		/* Update something */
		virtual void update() = 0;

		/* Render call */
		virtual void render() = 0;

		/* Return true if the Window should close */
		virtual b8 shouldClose() = 0;

		/* Close the window and terminate the Graphics API */
		virtual void close() = 0;

		
		


		/* Window Attributes */

		/* Return the Title of the Window */
		const char* getTitle() { return wa->title; }

		/* Return the Width of the Window */		
		u32 getWidth() { return wa->width; }

		/* Return the Heigth of the Window */			
		u32 getHeigth() { return wa->heigth; }



		/* Default Meausure */
		static const u32 DEFAULT_WIDTH = 600;
		static const u32 DEFAULT_HEIGTH = 480;

	protected:
		WindowAttributes* wa;
	
	};
};

#endif
