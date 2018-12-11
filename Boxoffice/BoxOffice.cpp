//
// Created by Pravesh Patel on 12/4/18.
//

#include "BoxOffice.h"
#include "../Movie.h"
#include <string>
#include "../ADTs/ArrayList.h"

BoxOffice::BoxOffice() {
    this->ticketPrice;
    this->ticketsSold;
    //Movie* currentMovies = new Movie[5](); //? - having issue here
}

//BoxOffice::~BoxOffice() {
    //delete currentMovies;
//}

float BoxOffice::getTicketPrice() {
    return ticketPrice;
}

void BoxOffice::changeTicketPrice(float newTicketPrice) {
    ticketPrice = newTicketPrice;
}

int BoxOffice::getMovieTime() {
    return movieTime;
}

float BoxOffice::getDuration() {
    return duration;
}

void BoxOffice::updateTicketsSold() {
    ticketsSold++;
}

int BoxOffice::getTicketsSold() {
    return ticketsSold;
}

//currently working on this function... Please help if you can!!
// selects movies from the larger list of movies playable to the theater "playlist"
//void BoxOffice::setMovieToRoom(ArrayList* currentMovies, int roomNumber) {}
