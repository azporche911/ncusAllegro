#ifndef KEYBOARDEVENT_H
#define KEYBOARDEVENT_H

#include "allegro5/allegro.h"
#include "allegro5/allegro_primitives.h"
#include <iostream>

class KeyBoardEvent
{
    public:

    //methods
    KeyBoardEvent();
    void reactToEvent(ALLEGRO_EVENT e);
    ALLEGRO_EVENT_QUEUE* getResource();

    //----- START PROTECTED
    protected:

    //properties
	ALLEGRO_EVENT_QUEUE* keyBoardQueue;


	//----- END PROTECTED
};

#endif
