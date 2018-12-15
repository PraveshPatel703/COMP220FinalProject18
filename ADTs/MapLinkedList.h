//
// Created by Pravesh Patel on 12/4/18.
//

#ifndef COMP220FINALPROJECT18_LINKEDLIST_H
#define COMP220FINALPROJECT18_LINKEDLIST_H

#include "../ADTs/Map.h"
#include "../ADTs/MapLinkedNode.h"

template<class T>
class MapLinkedList : public Map<T>{
private:
    MapLinkedNode<T>* front;
    MapLinkedNode<T>* end;
    int currNodeCount;

    //Private to disable copying and assigning from outside class, don't implement these methods
    MapLinkedList(const MapLinkedList& arrayListToCopy);
    MapLinkedList& operator=(const MapLinkedList& arrayListToCopy);
public:
    /**
     * Constructor
     */
    MapLinkedList();

    //Destructor
    ~MapLinkedList();

    void insertAtEnd(T itemToAdd, std::string keyToAdd);

    std::string toString();

    void put(std::string key, const T& value);

    T get(std::string);

    bool containsKey(std::string key);

};

#include "MapLinkedList.inl"
#endif //COMP220FINALPROJECT18_LINKEDLIST_H
