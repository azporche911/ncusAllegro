#include "allegro5/allegro.h"
#include "allegro5/allegro_image.h"
#include "allegro5/allegro_primitives.h"
#include <iostream>

class DisplayContainer
{
    public:
    int width;
    int height;
    ALLEGRO_DISPLAY *display;

    DisplayContainer();
    DisplayContainer* fullScreen();
    DisplayContainer* setWindowSize(int w, int h);
    DisplayContainer* destroyDisplay();
    DisplayContainer* delay(double t);
    DisplayContainer* draw();
    DisplayContainer* setImage(char* p);
    DisplayContainer* flip();
    void printSomething();
};
