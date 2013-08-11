#include "../../header/events/EventContainer.h"

//initializers;
std::map<std::string, KeyBoardEvent*> EventContainer::events;

void EventContainer::setEvent(std::string key, KeyBoardEvent* event)
{
    events[key] = event;
}


void EventContainer::registerEventByKey(std::string key)
{
    KeyBoardEvent* keyboard = EventContainer::getKeyBoardEvent(key);
    //register and listen
    al_register_event_source(keyboard->getResource(), al_get_keyboard_event_source());
}

KeyBoardEvent* EventContainer::getKeyBoardEvent(std::string key)
{
     //if key does not exist then just return
    //note: SENDY DONT FORGET TO MAKE LOGGING SYSTEM TO KEEP TRACK
    if(events.find(key) == events.end())
        exit(1);

    return events[key];
}

void EventContainer::listenAndDoEvent(std::string key)
{

    KeyBoardEvent* keyboard = EventContainer::getKeyBoardEvent(key);

    while(true)
    {

    ALLEGRO_EVENT ev;
        al_wait_for_event(keyboard->getResource(), &ev);

        keyboard->reactToEvent(ev);
    }

}


