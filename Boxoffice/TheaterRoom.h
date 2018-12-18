//
// Created by Bryan Pruett on 12/4/18.
//

#ifndef COMP220FINALPROJECT18_THEATERROOM_H
#define COMP220FINALPROJECT18_THEATERROOM_H

#include "../ADTs/LinkedNode.h"
#include "../Movie.h"
#include <string>


class TheaterRoom {
private:
    int seatCount;
    int roomNumber;
    Movie moviePlaying;

public:
    TheaterRoom(int seatCount, int roomNumber, Movie moviePlaying);

    ~TheaterRoom();

    // get a theater room
    int getRoom();

    //gets seat count
    int getSeatCount();

    //gets the current movie playing in this theater
    Movie getMoviePlaying();

    //changes the movie playing
    void setMovie(Movie newMovie);


};


#endif //COMP220FINALPROJECT18_THEATERROOM_H
