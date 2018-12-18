//
// Created by Pravesh Patel on 12/4/18.
//

#include "BoxOffice.h"
#include "../Movie.h"
#include <string>
#include "../ADTs/ArrayList.h"

BoxOffice::BoxOffice() {
    this->ticketPrice;
    this->totalTicketsSold;
    this->theaterList;
    this->moviesInTheaters;
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

int BoxOffice::getTotalTicketsSold() {
    return totalTicketsSold;
}
