//
// Created by Toby Dragon on 11/3/17.
//

#ifndef INC_220_27_PRIORITYQUEUE_PRIORITYLINKEDNODE_H
#define INC_220_27_PRIORITYQUEUE_PRIORITYLINKEDNODE_H

template <class T>
class PriorityLinkedNode{
private:
    T* item;
    float priority;
    PriorityLinkedNode* next;

public:
    PriorityLinkedNode(const T& item, float priority);
    PriorityLinkedNode(const PriorityLinkedNode& nodeToCopy); //only copies item and priority, next is set to nullptr
    T getItem();
    float getPriority();
    PriorityLinkedNode* getNext();
    void setNext(PriorityLinkedNode* newNext);
};

#include "PriorityLinkedNode.inl"

#endif //INC_220_27_PRIORITYQUEUE_PRIORITYLINKEDNODE_H
