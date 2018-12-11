//
// Created by Pravesh Patel on 12/4/18.
//

#include "LinkedList.h"
#include <iostream>

/**
     * Constructor
     */
LinkedList::LinkedList(){
    front = nullptr;
    end = nullptr;
    currNodeCount = 0;

}

//Destructor
LinkedList::~LinkedList(){
    while(currNodeCount!=0){
        LinkedNode* curr = front->getNext();
        delete front;
        front = curr;

        currNodeCount--;
    }
    end = nullptr;

}

/**
 * O(1)
 * appends the new item to the end of the list
 * @post the list has an additional value in it, at the end
 */
void LinkedList::insertAtEnd(int itemToAdd){
    LinkedNode* newNode = new LinkedNode(itemToAdd);
    if (front == nullptr){
        front = newNode;
    }
    else {
        end->setNext(newNode);
        end = newNode;
    }
    currNodeCount++;

}

/**
 * O(n)
 * gets a value from the list
 * @param index the location from which to get the value
 * @return a copy of the item at index
 * @throws out_of_range exception if index is invalid
 */
int LinkedList::getValueAt(int index){
    LinkedNode* curr = front;
    int count = 0;
    for (int i = 0; i < index; ++i) {
        if (curr->getNext()== nullptr){
            throw std::out_of_range("<Out of Bounds>");
        } else{
            curr = curr->getNext();
        }
    }
    return curr->getItem();

}

/**
 * O(n)
 * gives a string representation of the current list
 * @returns a string representing the given list in the exact format shown below
 * {1, 2, 3, 4, 5}
 */
std::string LinkedList::toString(){
    if (front== nullptr){
        return "{}";
    }
    else {
        std::string myStr = "{";
        LinkedNode *curr = front;

        while (curr->getNext() != nullptr) {
            myStr += std::to_string(curr->getItem()) + ", ";
            curr = curr->getNext();
        }
        myStr += std::to_string(curr->getItem()) + "}";
        return myStr;
    }

}

/**
 * O(1)
 * checks if there are any valid items in the list
 * @return true if there are no valid items in the list, false otherwise
 */
bool LinkedList::isEmpty(){
    if(front== nullptr){
        return true;
    }
    else{
        return false;
    }
}

/**
 * O(1)
 * returns a count of valid items currently in the list
 * @returns the number of valid items in the list
 */
int LinkedList::itemCount(){
    return currNodeCount;
}

/**
 * O(1)
 * makes the list empty of valid items
 * @post the list is empty, such that isEmpty() == true
 */
void LinkedList::clearList(){
    front = nullptr;
    end = nullptr;
}

/**
 * O(n)
 * Searches an int array for a certain value
 * @return the index of the first occurrence of numToFind if it is present, otherwise returns -1
 */
int LinkedList::find(int numToFind){
    if (front== nullptr){
        return -1;
    }
    else if (front->getNext()== nullptr){
        if(front->getItem()==numToFind){
            return 0;
        }
        else{
            return -1;
        }
    }
    else{
        LinkedNode* curr = front;
        int count = 0;
        if(curr->getItem()==numToFind){
            return count;
        }
        while(curr->getNext()!= nullptr){
            curr = curr->getNext();
            if (curr->getItem()==numToFind){
                count++;
                return count;
            }
            else{
                count++;
            }

        }
        return -1;
    }

}

/**
 * O(n)
 * Searches an int array for a certain value
 * @return the index of the last occurrence of numToFind if it is present, otherwise returns -1
 */
int LinkedList::findLast(int numToFind){
    if (front== nullptr){
        return -1;
    }
    else if (front->getNext()== nullptr){
        if(front->getItem()==numToFind){
            return 0;
        }
        else{
            return -1;
        }
    }
    else{
        LinkedNode* curr = front;
        int maxIdx= -1;
        int count = 0;
        if(curr->getItem()==numToFind){
            return count;
        }
        while(curr->getNext()!= nullptr){
            curr = curr->getNext();
            if (curr->getItem()==numToFind){
                count++;
                maxIdx= count;
            }
            else{
                count++;
            }
        }
        if (count ==-1){
            return -1;
        }
        else {
            return maxIdx;
        }

    }

}

/**
 * O(n)
 * finds the largest value in the array
 * @return the first index of the maximum value
 * @throws out_of_range exception if there is no item to remove
 */
int LinkedList::findMaxIndex(){
    if (front== nullptr){
        return -1;
    }
    else if (currNodeCount ==1){
        return 0;
    }
    else {
        LinkedNode* curr = front;
        int count = 0;
        int maxIdx = 0;
        while (curr->getNext()!= nullptr) {
            curr = curr->getNext();
            //if (curr->getItem()>max){
            //    max = curr->getItem();
            //}

        }
        //return find(max);
    }
    return -1;
}

/**
 * O(1)
 * appends the new item to the beginning of the list
 * @post the list has an additional value in it, at the beginning
 *    all other items are shifted down by one index
 */
void LinkedList::insertAtFront(int itemToAdd){
    LinkedNode* newNode = new LinkedNode(itemToAdd);

    if (front == nullptr){
        front = newNode;
    }
    else{
        LinkedNode* pastFront = front;
        front= newNode;
        front->setNext(pastFront);
    }
    currNodeCount++;
}

/**
 * O(2n)
 * inserts the item into the list so that it can be found with get(index)
 * @param index the location in which to insert this item
 * @post the list has an additional value in it at the specified index,
 *        all further values have been shifted down by one index
 * @throws out_of_range exception if index is invalid (< 0 or > currItemCount)
 */
void LinkedList::insertAt(int itemToAdd, int index){
    LinkedNode* newNode = new LinkedNode(itemToAdd);

    if (currNodeCount==0){
        front = newNode;
    }
    else if (index <0 || index >currNodeCount-1){
        throw std::out_of_range("<Out of Bounds>");
    }
    else{
        if (index==0){
            LinkedNode* pastFront = front;
            front= newNode;
            front->setNext(pastFront);
        }
        else if (index==currNodeCount){
            insertAtEnd(itemToAdd);
        }
        else{
            LinkedNode* before = front;
            LinkedNode* after = front;
            for (int i = 0; i < index-1; ++i) {
                before = before->getNext();
            }
            for (int j = 0; j < index; ++j) {
                after = after->getNext();
            }
            before->setNext(newNode);
            newNode->setNext(after);
            std::cout<< before->getItem() << std::endl;
            std::cout<< after->getItem() << std::endl;
        }
    }

    currNodeCount++;
}

/**
 * O(1)
 * removes the item at the end of the list, and returns a copy of that item
 * @post the item at the end is removed from the list
 * @return a copy of the item at the end
 * @throws out_of_range exception if there is no item to remove
 */
int LinkedList::removeValueAtEnd(){
    int item;
    if(end== nullptr){
        throw std::out_of_range("<Out of Bounds>");
    }else {
        item = end->getItem();
        LinkedNode* next = next->getNext();
        end = nullptr;
        end = next;
        currNodeCount--;

    }
    return item;

}

/**
 * O(1)
 * removes the item at the front of the list, and returns a copy of that item
 * @post the item at the front is removed from the list, everything else is shifted down one
 * @return a copy of the item at index
 * @throws out_of_range exception if there is no item to remove
 */
int LinkedList::removeValueAtFront(){
    int item;
    if(front== nullptr){
        throw std::out_of_range("<Out of Bounds>");
    }else {
        item = front->getItem();
        LinkedNode* next = next->getNext();
        front = nullptr;
        front = next;
        currNodeCount--;

    }
    return item;

}

/**
 * O(2n)
 * removes the item at index from the list, and returns a copy of that item
 * @param index the location from which to get the value
 * @post the item at index is removed from the list, everything else is shifted down one
 * @return a copy of the item at index
 * @throws out_of_range exception if index is invalid
 */
int LinkedList::removeValueAt(int index){
    int item;
    if(front== nullptr){
        throw std::out_of_range("<Out of Bounds>");
    }
    else{
        LinkedNode* curr = front;
        LinkedNode* before;
        for (int i = 0; i < index; ++i) {
            curr = curr->getNext();
        }
        item = curr->getItem();
        for (int j = 0; j < index-1; ++j) {
            before = before->getNext();
        }
        before->setNext(before->getNext()->getNext());
    }

    currNodeCount--;
    return item;

}
