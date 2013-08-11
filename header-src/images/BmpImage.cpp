#include "../../header/images/BmpImage.h"


BmpImage::BmpImage(char* p)
{
    path = p;
    positionX = 0;
    positionY = 0;
}

int BmpImage::getWidth()
{
	if ( !width )
		return 0;

	return width;
}


int BmpImage::getHeight()
{
	if ( !height )
		return 0;

	return height;
}

bool BmpImage::loadImage()
{
    bmpImage = al_load_bitmap(path);

    //if fails to load the image
    if ( !bmpImage )
        return false;


	width = al_get_bitmap_width(bmpImage);
	height = al_get_bitmap_height(bmpImage);

    return true;
}

ALLEGRO_BITMAP* BmpImage::getResource()
{
    return bmpImage;
}

int BmpImage::setPositionX(int x)
{
    return positionX = x;
}

int BmpImage::setPositionY(int y)
{
    return positionY = y;
}

int BmpImage::getPositionX()
{
    return positionX;
}

int BmpImage::getPositionY()
{
    return positionY;
}
