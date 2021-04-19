#ifndef _SIMPLE_GAME_ENGINE_WINDOW_OPEN_GL_H_
	#define _SIMPLE_GAME_ENGINE_WINDOW_OPEN_GL_H_

#include "../types.h"
#include "windowattributes.h"
#include "window.h"
#include "../loggingsystem/Logger.h"

namespace Window {

	class WindowOpenGL: public Window {
	public:
	
		b8 Init() override {
			return glfwInit();
		}

		WindowOpenGL(const char* title, u32 width, u32 heigth) {

			if(!Init()) {
				LOG_FATAL("can not init OpenGL");
				return ;
			}

			//wa = MakeWindowAttributes(title, width, heigth);
			wa = new WindowAttributes(title, width, heigth);

			/* create OpenGL Window */
			this->window = glfwCreateWindow(width, heigth, title, NULL, NULL);

			/* if is created successfully */
			if(this->window==NULL) {
				LOG_FATAL("can not create the window");
				glfwTerminate();
				return ;
			}

			/* set current context */
			glfwMakeContextCurrent(this->window);			
		}

		WindowOpenGL(const char* title) {

			if(!Init()) {
				LOG_FATAL("can not init OpenGL");
				return ;
			}

			
			this->window = glfwCreateWindow(DEFAULT_WIDTH, DEFAULT_HEIGTH, title, NULL, NULL);

			
			if(this->window==NULL) {
				LOG_FATAL("can not create the window");
				glfwTerminate();
				return ;
			}

			
			glfwMakeContextCurrent(this->window);

		}
		

		b8 shouldClose() override {
			return glfwWindowShouldClose(this->window);
		}


		void close() override {
			terminate();
		}


		void update() override {
			/* Swap front and back buffers */
			glfwSwapBuffers(this->window);
				
			/* Poll for and process events */
			glfwPollEvents();
		}


		void render() override {
			/* Render here */
        	glClear(GL_COLOR_BUFFER_BIT);

		}
		
		
	private:
		inline b8 setupOpenGL() {
			return glfwInit();
		}

		inline void terminate() {
			glfwTerminate();
		}
	
		inline b8 setContext(GLFWwindow* w) {
			if(w!=NULL) {
				glfwMakeContextCurrent(w);
				return TRUE;
			}

			return FALSE;
		}

		
		GLFWwindow* window;
		
	};
};

#endif
