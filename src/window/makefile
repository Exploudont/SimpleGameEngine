CC = g++
CFLAGS = -lglfw -lGL -lX11 -lpthread -lXrandr -lXi -ldl

main: main.cpp windowopengl.h window.h
		$(CC) $(CFLAGS) main.cpp -fpermissive

clear:
	rm *.o
