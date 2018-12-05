//
// Created by Bryan Pruett on 12/4/18.
//

#ifndef COMP220FINALPROJECT18_THEATERROOM_H
#define COMP220FINALPROJECT18_THEATERROOM_H

#include "LinkedNode.h"
#include <string>


class TheaterRoom {
private:
    int seatCount;
    int roomNumber;

public:
    TheaterRoom(int seatCount, int roomNumber){};

    ~TheaterRoom(){};

    // get a theater room
    int getRoom(int roomNumber);

};


#endif //COMP220FINALPROJECT18_THEATERROOM_H
