#include "allegro5/allegro.h"
#include "allegro5/allegro_image.h"
#include "allegro5/allegro_primitives.h"
#include <iostream>

class SomeObject
{
    public:
    int width;
    int height;
    ALLEGRO_DISPLAY *display;

    SomeObject();
    SomeObject* fullScreen();
    SomeObject* setDisplay(int w, int h);
    SomeObject* destroyDisplay();
    SomeObject* delay(double t);
    SomeObject* draw();
    void printSomething();
};
