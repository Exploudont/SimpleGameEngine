#include "window.h"
#include "windowopengl.h"


#define width 600
#define heigth 480


int main() {
	Window::Window* w = new Window::WindowOpenGL("test", width, heigth);

	w->getTitle();
	

	
	while(!(w->shouldClose())) {
		w->update();
		w->render();
	}

	w->close();
	return 0;
	
}
