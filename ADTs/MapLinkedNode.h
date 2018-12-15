//
// Created by Toby Dragon on 10/24/16.
//

#ifndef MAPLINKEDNODE_H
#define MAPLINKEDNODE_H

#include <string>
#include "../Concessions/ConcessionItem.h"
#include"../Movie.h"
template  <class T>
class MapLinkedNode {

private:
    std::string key;
    T item;
    MapLinkedNode* next;

public:
    //constructor
    MapLinkedNode(T item, std::string key);

    //copy constructor
    MapLinkedNode(const MapLinkedNode& nodeToCopy); //only copies item, next is set to nullptr

    //returns item
    T getItem();

    //returns key
    std::string getKey();

    //gets the next node
    MapLinkedNode* getNext();

    //sets the key to new value
    void setKey(std::string newKey);

    //sets the item to new value
    void setItem(T newItem);

    //sets the next to new value
    void setNext(MapLinkedNode* newNext);
};

#include "MapLinkedNode.inl"
#endif //MAPLINKEDNODE_H
