//
// Created by Toby Dragon on 10/24/18.
//
#include <stdexcept>


template <class T>
LinkedPriorityQueueFastDequeue<T>::LinkedPriorityQueueFastDequeue(){
    front = nullptr;
}

template <class T>
LinkedPriorityQueueFastDequeue<T>::~LinkedPriorityQueueFastDequeue(){

}

/*
 * Adds an item to the priority queue
 * @param priority - a float representing the priority (large numbers are higher priority)
 * @post - the item is included in the priority queue to be removed later
 */
template <class T>
void LinkedPriorityQueueFastDequeue<T>::addItem(const T& itemToAdd, float priorityToAdd){
    //create the new node
    PriorityLinkedNode<T>* newNode = new PriorityLinkedNode<T>(itemToAdd, priorityToAdd);
    //handle if queue is empty
    if (isEmpty()){
        front = newNode;
    }
    //handle if item should be at front
    else if (newNode->getPriority() > front->getPriority()){
        newNode->setNext(front);
        front = newNode;
    }
    //else get a pointer to the node before, and the node after, and put node between
    else {
        PriorityLinkedNode<T>* nodeBefore = front;
        while( nodeBefore->getNext() != nullptr && nodeBefore->getNext()->getPriority() >= newNode->getPriority()){
            nodeBefore = nodeBefore->getNext();
        }
        PriorityLinkedNode<T>* nodeAfter = nodeBefore->getNext();
        nodeBefore->setNext(newNode);
        newNode->setNext(nodeAfter);
    }
}

/*
 * removes and returns the item with the highest priority (large numbers are higher priority).
 * If the priorities are equal, it acts as a normal queue (FIFO)
 * @post - the item is removed from the priority queue
 * @returns a copy of the item
 * @throws std::out_of_range exception if empty
 */
template <class T>
T LinkedPriorityQueueFastDequeue<T>::dequeueHighestPriorityItem(){
    if (isEmpty()){
        throw std::out_of_range("Can't dequeue from empty PriorityQueue");
    }
    else {
        T item = front->getItem();
        PriorityLinkedNode<T>* toDelete = front;
        front = front->getNext();
        delete toDelete;
        return item;
    }
}

/*
 * @returns true if queue is empty, false if there are any items
 */
template <class T>
bool LinkedPriorityQueueFastDequeue<T>::isEmpty(){
    return front == nullptr;
}

template<class T>
std::string LinkedPriorityQueueFastDequeue<T>::toString() {
    PriorityLinkedNode<T>* curr = front;
    TheaterRoom currItem = front->getItem();
    std::string stringToReturn;

    while(curr->getNext() != nullptr){
        stringToReturn += currItem.getMoviePlaying().getName();
        stringToReturn += ", ";
        curr = curr->getNext();
    }

}