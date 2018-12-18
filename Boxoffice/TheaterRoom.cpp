//
// Created by Bryan Pruett on 12/4/18.
//

#include "TheaterRoom.h"


TheaterRoom::TheaterRoom(int seatCount, int roomNumber, Movie moviePlaying){
        //this function will create the rooms< currently we will set to a max of 5
        this->seatCount = seatCount;
        this->ticketsSold = 0;
        this->roomNumber = roomNumber;
        this->moviePlaying = moviePlaying;
}

TheaterRoom::~TheaterRoom(){

};


int TheaterRoom::getRoom(){
    return roomNumber;
}

int TheaterRoom::getSeatCount(){
    return seatCount;
}

Movie TheaterRoom::getMoviePlaying() {
    return moviePlaying;
}

void TheaterRoom::setMovie(Movie newMovie) {
    moviePlaying = newMovie;
}


