//
// Created by Pravesh Patel on 12/4/18.
//

#include "BoxOffice.h"
#include "../Movie.h"
#include <string>
#include "../ADTs/ArrayList.h"

BoxOffice::BoxOffice(MapLinkedList<TheaterRoom>* theaterRoomList, LinkedPriorityQueueFastDequeue<Movie>* moviesInTheaters) {
    this->ticketPrice = 10.00;
    this->totalTicketsSold = 0;
    this->theaterList = theaterRoomList;
    this->moviesInTheaters = moviesInTheaters;
}

//BoxOffice::~BoxOffice() {

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

std::string BoxOffice::getMoviesPlaying() {
    return moviesInTheaters->toString();
}