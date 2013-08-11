#ifndef IMAGECONTAINER_H
#define IMAGECONTAINER_H

#include "./BmpImage.h"
#include <string>
#include <map>

class ImageContainer
{
    //----- START PUBLIC

    public:
    //properties
    void static registerImage(std::string key, BmpImage* i, bool replaceIfExists = true);
    int static getTotalImage();

    //methods
    void static draw(std::string key);
    void static drawAll();


    //----- END PUBLIC

    //----- START PROTECTED

    protected:
    //properties
    static std::map<std::string, BmpImage*> images;
    static int totalImage;


    //----- END PROTECTED
};

#endif
