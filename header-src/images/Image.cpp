#include "../../header/images/Image.h"

Image::Image(ALLEGRO_BITMAP* r)
{
	resource = r;
}

static Image* Image::make(char* path)
{
	al_init_image_addon();
	static::totalImage = static::totalImage == null? 0 : static::totalImage;

	//we will keep track of the images that have been made :D
	static::totalImage++;

	ALLEGRO_BITMAP* bmImage = al_load_bitmap(path);

	if ( !bmImage)
		exit(1);
	
	return new static(bmImage);
}