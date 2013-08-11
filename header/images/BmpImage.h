#ifndef BMPIMAGE_H
#define BMPIMAGE_H

#include "allegro5/allegro.h"
#include "allegro5/allegro_image.h"

//al_draw_bitmap(bmImage, 0, 0, 20);
class BmpImage
{
    //----- START PUBLIC
    public:

    //methods
    BmpImage(char* p);
    bool loadImage();
    int setPositionX(int x);
    int setPositionY(int y);
    int getPositionX();
    int getPositionY();
	int getWidth();
	int getHeight();
    ALLEGRO_BITMAP* getResource();

    //----- END PUBLIC


    //----- START PROTECTED
    protected:

    //properties
    char* path;
    int positionX;
    int positionY;
	int width;
	int height;
    ALLEGRO_BITMAP* bmpImage;




    //----- END PROTECTD
};


#endif
