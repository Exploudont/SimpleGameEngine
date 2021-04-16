#include "../image.h"
#include "../../loggingsystem/Logger.h"

#include <stdio.h>
#include <stdint.h>
#include <cstdlib>

void printIMG(Image::Image* img) {

	LOG_INFO("Print Image:");
	printf("file path> %s\n", img->file_path);
	printf("width> %u\n", img->width);
	printf("heigth> %u\n", img->height);
	printf("datas>\n");
	for(int i=0 ; i<3 ; i++)
		printf("\t%u\n", img->datas[i]);
	
}

void addValues(Image::Image* img) {
	LOG_DEBUG("load image values");

	img->file_path = "immagine.jpg";
	img->width = 10;
	img->height = 20;
	
	uint8_t d[] = {10, 20, 30};
	img->datas = d;
}

int main() {

	Image::Image img;
	addValues(&img);
	printIMG(&img);

	Image::Image* img2 = new Image::Image();
	addValues(img2);
	printIMG(img2);
	free(img2);

	return 0;
}
