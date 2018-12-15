//
// Created by Toby Dragon on 10/17/17.
//
#include "MapLinkedNode.h"
template<class T>
MapLinkedNode<T>::MapLinkedNode(T item, std::string key){
    this->key = key;
    this->item = item;
    next = nullptr;
}


template<class T>
MapLinkedNode<T>::MapLinkedNode(const MapLinkedNode<T>& nodeToCopy){
    item = nodeToCopy->getItem();
    key = nodeToCopy->getKey();
    next = nullptr;
}

template<class T>
T MapLinkedNode<T>::getItem(){
    return item;
}

template<class T>
std::string MapLinkedNode<T>::getKey(){
    return key;
}

template<class T>
MapLinkedNode<T>* MapLinkedNode<T>::getNext(){
    return next;
}

template<class T>
void MapLinkedNode<T>::setKey(std::string newKey){
    key = newKey;
}

template<class T>
void MapLinkedNode<T>::setItem(T newItem){
    item = newItem;
}

template<class T>
void MapLinkedNode<T>::setNext(MapLinkedNode<T>* newNext){
    next = newNext;
}