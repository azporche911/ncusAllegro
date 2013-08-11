#include "../../header/images/ImageContainer.h"

//----- initializers
int ImageContainer::totalImage = 0;
std::map<std::string, BmpImage*> ImageContainer::images;



void ImageContainer::registerImage(std::string key, BmpImage* i, bool replaceIfExists)
{
    if ( replaceIfExists == true )
    {
        //delete the old reference
        images.erase(key);
        //after we free the memory, then we can assign it without worrying about memory leak
        images[key] = i;
    }

    totalImage++;
}

int ImageContainer::getTotalImage()
{
    return totalImage;
}

void ImageContainer::draw(std::string key)
{
    //if key does not exist then just return
    //note: SENDY DONT FORGET TO MAKE LOGGING SYSTEM TO KEEP TRACK
    if(images.find(key) == images.end())
        return;

    BmpImage* i = images[key];
    al_draw_bitmap(i->getResource(), i->getPositionX(), i->getPositionY(), 20);
}
