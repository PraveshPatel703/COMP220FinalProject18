//
// Created by Toby Dragon on 11/3/17.
//

#ifndef COMP220FinalProject18_LINKEDPRIORITYQUEUEFASTDEQUEUE_H
#define COMP220FInalProject18_LINKEDPRIORITYQUEUEFASTDEQUEUE_H

#include "../Movie.h"
#include "../Boxoffice/TheaterRoom.h"
#include "PriorityLinkedNode.h"
#include "PriorityQueue.h"

template <class T>
class LinkedPriorityQueueFastDequeue : public PriorityQueue<T> {
private:
    PriorityLinkedNode<T>* front;

    LinkedPriorityQueueFastDequeue(const LinkedPriorityQueueFastDequeue<T>& qToCopy);
    LinkedPriorityQueueFastDequeue& operator=(const LinkedPriorityQueueFastDequeue<T>& qToCopy);

public:
    LinkedPriorityQueueFastDequeue();
    ~LinkedPriorityQueueFastDequeue();


    /*
     * Adds an item to the priority queue
     * @param priority - a float representing the priority (large numbers are higher priority)
     * @post - the item is included in the priority queue to be removed later
     */
    void addItem(const T& itemToAdd, float priorityToAdd);


    /*
     * removes and returns the item with the highest priority (large numbers are higher priority).
     * If the priorities are equal, it acts as a normal queue (FIFO)
     * @post - the item is removed from the priority queue
     * @returns a copy of the item
     * @throws std::out_of_range exception if empty
     */
    T dequeueHighestPriorityItem();

    /*
     * @returns true if queue is empty, false if there are any items
     */
    bool isEmpty();

    std::string toString();

};

#include "LinkedPriorityQueueFastDequeue.inl"

#endif //INC_220_27_PRIORITYQUEUE_LINKEDPRIORITYQUEUEFASTDEQUEUE_H
