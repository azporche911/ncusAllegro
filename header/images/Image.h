#ifndef IMAGE_H
#define IMAGE_H

#include "allegro5/allegro_image.h"

class Image
{
	static int totalImage;

	ALLEGRO_BITMAP* resource;
	
	char* path;
	int width;
	int height;
	int positionX;
	int positionY;

	Image(ALLEGRO_BITMAP* r);

	static Image* make(char* path);

}

#endif