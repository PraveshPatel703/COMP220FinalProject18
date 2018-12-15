//
// Created by Pravesh Patel on 12/4/18.
//

#include "MapLinkedList.h"
#include <iostream>
#include <string>

template<class T>
MapLinkedList<T>::MapLinkedList(){
    front = nullptr;
    end = nullptr;
    currNodeCount = 0;

}

template<class T>
MapLinkedList<T>::~MapLinkedList(){
    while(currNodeCount!=0){
        MapLinkedNode<T>* curr = front->getNext();
        delete front;
        front = curr;

        currNodeCount--;
    }
    end = nullptr;

}
template<class T>
void MapLinkedList<T>::insertAtEnd(T itemToAdd, std::string keyToAdd){
    MapLinkedNode<T>* newNode = new MapLinkedNode<T>(itemToAdd, keyToAdd);
    if (front == nullptr){
        front = newNode;
    }
    else {
        end->setNext(newNode);
        end = newNode;
    }
    currNodeCount++;
}


template<class T>
void MapLinkedList<T>::put(std::string key, const T& value){
    insertAtEnd(value, key);
}


template<class T>
T MapLinkedList<T>::get(std::string key){
    MapLinkedNode<T>* curr = front;
    while(curr->getNext() != nullptr){
        if(curr->getKey() == key){
            return curr->getItem();
        }
        else{
            curr = curr->getNext();
        }
    }
    throw std::invalid_argument("Key is not present");
}

template<class T>
bool MapLinkedList<T>::containsKey(std::string key){
    MapLinkedNode<T>* curr = front;
    while(curr->getNext() != nullptr){
        if(curr->getKey() == key){
            return true;
        }
        else{
            curr = curr->getNext();
        }
    }
    return false;
}
