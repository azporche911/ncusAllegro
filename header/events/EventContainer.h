#ifndef EVENTCONTAINER_H
#define EVENTCONTAINER_H

#include "allegro5/allegro.h"
#include "./KeyBoardEvent.h"
#include <iostream>
#include <map>
#include <string>

class EventContainer
{
    public:
    void static setEvent(std::string key, KeyBoardEvent* event);
    void static registerEventByKey(std::string key);
    void static listenAndDoEvent(std::string key);
    static KeyBoardEvent* getKeyBoardEvent(std::string key);

    protected:

    //for awhile we will use KeyBoardEvent
    //in the future we will use more generic class such as maybe "Event" class
    //to enable polymorphism
    static std::map<std::string, KeyBoardEvent*> events;
};

#endif
