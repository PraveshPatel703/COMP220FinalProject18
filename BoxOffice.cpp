//
// Created by Pravesh Patel on 12/4/18.
//

#include "BoxOffice.h"
#include "Movie.h"
#include <string>
#include "ArrayList.h"

BoxOffice::BoxOffice(int movieTimeIn, float durationIn, int roomNumberIn) {
    this->ticketPrice;
    this->ticketsSold;
    this->movieTime = movieTimeIn;
    this->roomNumber = roomNumberIn;
    ArrayList* currentMovies = new Movie[5](); //? - having issue here
}

BoxOffice::~BoxOffice() {
    delete currentMovies;
}

float BoxOffice::getTicketPrice() {
    return ticketPrice;
}

void BoxOffice::changeTicketPrice(float newTicketPrice) {
    ticketPrice = newTicketPrice;
}

int BoxOffice::getRoomNumber() {
    return roomNumber;
}

int BoxOffice::getMovieTime() {
    return movieTime;
}

float BoxOffice::getDuration() {
    return duration;
}


//currently working on this function... Please help if you can!!

void BoxOffice::setMovieToRoom(ArrayList* currentMovies, int roomNumber) {

    ArrayList*

    for (int i = 0; i < roomNumber; ++i) {

    }
}