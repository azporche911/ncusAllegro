#include "../../header/events/KeyBoardEvent.h"


KeyBoardEvent::KeyBoardEvent()
{
    keyBoardQueue = al_create_event_queue();
}

void KeyBoardEvent::reactToEvent(ALLEGRO_EVENT ev)
{
    if(ev.type == ALLEGRO_EVENT_KEY_DOWN)
    {
        std::cout<<"KEY DOWN SENDY\n";
    }
    else if(ev.type == ALLEGRO_EVENT_KEY_UP)
    {
        std::cout<<"KEY UP SENDY\n";
    }
}

ALLEGRO_EVENT_QUEUE* KeyBoardEvent::getResource()
{
    return keyBoardQueue;
}
