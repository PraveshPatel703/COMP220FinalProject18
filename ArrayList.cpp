//
// Created by Pravesh Patel on 12/4/18.
//

#include <iostream>
#include "ArrayList.h"
#include "ArrayLib.h"
#include <string>


//private
void ArrayList::doubleCapacity() {

    int*dblcapc= new int[currCapacity*2];

    for (int i = 0; i <currCapacity ; ++i) {
        dblcapc[i]=array[i];
    }

    delete [] array;
    array=dblcapc;
    dblcapc= nullptr;
    currCapacity=currCapacity*2;

}

//public

//Constructor
ArrayList::ArrayList(int initialCapacity) {
    if(initialCapacity<1){
        throw std::invalid_argument("initial size is 0");
    } else {
        array = new int[initialCapacity];
        currItemCount = 0;
        currCapacity = initialCapacity;
    }

}

//Copy Constructor
ArrayList::ArrayList(const ArrayList& arrayListToCopy) {

    currItemCount=arrayListToCopy.currItemCount;
    currCapacity=arrayListToCopy.currCapacity;
    array = new int[currCapacity];

    for (int i = 0; i <currItemCount ; ++i) {
        array[i]=arrayListToCopy.array[i];
    }
}

//Overloaded Assignment Operator
ArrayList& ArrayList::operator=(const ArrayList &arrayListToCopy) {

    if (this != &arrayListToCopy) {

        delete[] array;

        currItemCount = arrayListToCopy.currItemCount;
        currCapacity = arrayListToCopy.currCapacity;
        array = new int[arrayListToCopy.currCapacity];

        for (int i = 0; i < currItemCount; ++i) {
            array[i] = arrayListToCopy.array[i];
        }


    }
    return *this;
}

//Destructor
ArrayList::~ArrayList() {
    delete array;
}

// Public functions
void ArrayList::insertAtEnd(int itemToAdd) {

    if (currItemCount==currCapacity){

        doubleCapacity();

    }

    array[currItemCount]=itemToAdd;
    currItemCount+=1;

}

int ArrayList::getValueAt(int index) {
    if(index<0){
        throw std::out_of_range("<negative index error>");
    }
    if(index>=currItemCount) {
        throw std::out_of_range("<index out of range>");
    }
    return array[index];
}

std::string ArrayList::toString() {
    std::string arrayString="";
    if (currItemCount>0){
        for(int i=0;i<currItemCount;i++){

            if(i==0){ arrayString+=("{"); }//if

            if(i<currItemCount-1){ arrayString+=std::to_string(array[i])+", "; }//if
            else{ arrayString+=std::to_string(array[i]);}//else

            if(i==currItemCount-1){ arrayString+=("}"); }//if
        }//for

    }//if
    else{ arrayString="{}"; }

    return arrayString;
}

bool ArrayList::isEmpty() {
    if (currItemCount==0){
        return true;
    }
    else{
        return false;
    }
}

int ArrayList::itemCount() {
    return currItemCount;
}

void ArrayList::clearList() {
    for (int i = 0; i <currItemCount ; ++i) {
        array[i]=0;
    }
    currItemCount=0;
}

int ArrayList::find(int numToFind) {
    int index=-1;
    for (int i = 0; i < currItemCount ; ++i) {
        if (array[i]==numToFind){
            index= i;
            return index;
        }
    }
    return index;

}

int ArrayList::findLast(int numToFind) {
    int index=-1;
    for (int i = 0; i <currItemCount; ++i) {
        if (array[i]==numToFind){
            index=i;
        }
    }
    return index;
}

int ArrayList::findMaxIndex() {
    if (currItemCount<1){
        throw std::invalid_argument("invalid argument");
    }
    //assumes max index is the first thing
    int max=array[0];
    //sets max index to the first index value
    int index=0;

    //goes through and checks which is the highest int
    for (int i = 0; i <currItemCount; ++i) {
        //if it finds a greater max
        if (array[i]>max){
            //it will set that new value to max and it's index to max index
            max=array[i];
            index=i;
        }

    }
    return index;
}

void ArrayList::insertAtFront(int itemToAdd) {
    if (currItemCount==currCapacity){
        doubleCapacity();
    } else {

        //assumes there's a spot available  at the end and goes to it
        currItemCount += 1;

        //then shifts everything over one
        for (int i = currItemCount; i >= 1; --i) {
            array[i] = array[i - 1];
        }
        //and finally adds one to the front
        array[0]=itemToAdd;
    }

}

void ArrayList::insertAt(int itemToAdd, int index) {
    int timer = 0;
    if (index > currItemCount || index < 0) {
        throw std::out_of_range("Out of range");
    }
    else if (currItemCount == currCapacity){
        doubleCapacity();
    } else {
        //assumes there's a spot available
        currItemCount += 1;
        //goes to that spot in the array
        int availableSpot = (index - (currItemCount-1))-currItemCount;

        //shifts everything before that spot over one spot
        for (int i = availableSpot; i >= 1; --i) {
            array[i - 1] = array[i];
        }
        //and fills the new item into the front
        array[0] = itemToAdd;
    }

}
int ArrayList::removeValueAtEnd(){

    if (currItemCount < 0){
        throw std::out_of_range("<no number to remove>");
    }
    else {

        int copy = array[currCapacity-1];
        for (int i = 0; i <= currItemCount ; --i) {
            copy=array[i-1];
            array[i]=array[i-1];

        }
        currItemCount-=1;
        return copy;
    }
}

int ArrayList::removeValueAtFront() {
    if (currItemCount < 0){
        throw std::out_of_range("<no number to remove>");
    }
    else {

        int copy = array[currCapacity-1];
        for (int i = 0; i <= currItemCount ; ++i) {
            copy=array[i];
            array[i]=array[i+1];

        }
        currItemCount-=1;
        return copy;
    }
}


int ArrayList::removeValueAt(int index) {
    if(index<0){
        throw std::out_of_range("<negative index error>");
    }
    if(index>=currItemCount){
        throw std::out_of_range("<index out of range>");
    }
    int copy=array[index];
    for (int i = index; i <= currItemCount-1 ; ++i) {
        array[i]=array[i+1];

    }
    currItemCount-=1;
    return copy;
}
