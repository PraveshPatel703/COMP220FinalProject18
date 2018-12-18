//
// Created by Toby Dragon on 11/3/17.
//

#include "PriorityLinkedNode.h"
template <class T>
PriorityLinkedNode<T>::PriorityLinkedNode(const T& item, float priority){
    this->item = new T(item);
    this->priority = priority;
    next = nullptr;
}

template <class T>
PriorityLinkedNode<T>::PriorityLinkedNode(const PriorityLinkedNode& nodeToCopy){
    item = nodeToCopy.item;
    this->priority = nodeToCopy.priority;
    next = nullptr;
}

template <class T>
T PriorityLinkedNode<T>::getItem(){
    return *item;
}

template <class T>
PriorityLinkedNode<T>* PriorityLinkedNode<T>::getNext(){
    return next;
}

template <class T>
float PriorityLinkedNode<T>::getPriority(){
    return priority;
}

template <class T>
void PriorityLinkedNode<T>::setNext(PriorityLinkedNode<T>* newNext){
    next = newNext;
}