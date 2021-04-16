CC = g++
CFLAGS = -Wall -Wextra -g


textureopengl.o: image.h imageloader.h texture.h
	$(CC) $(CFLAGS) image.h imageloader.h texture.h -o textureopengl.o -fpermissive


texture.o: texture.h imageloader.o
	$(CC) $(CFLAGS) texture.h imageloader.o -o texture.o -fpermissive


imageloader.o: imageloader.h image.h
	$(CC) $(CFLAGS) imageloader.h -o imageloader.o -fpermissive

clean:
	rm *.o *.h.gch
	
