//
// Created by Pravesh Patel on 12/4/18.
//

#ifndef COMP220FINALPROJECT18_BOXOFFICE_H
#define COMP220FINALPROJECT18_BOXOFFICE_H

#include "string"
#include "TheaterRoom.h"
#include "../ADTs/PriorityQueue.h"
#include "../ADTs/LinkedPriorityQueueFastDequeue.h"
#include "../ADTs/List.h"
#include "../ADTs/ArrayList.h"
#include "../Movie.h"

class BoxOffice{

private:

    float ticketPrice = 10.00;
    int totalTicketsSold = 0;
    List* theaterList = new ArrayList(5);
    PriorityQueue<TheaterRoom>* moviesInTheaters = new LinkedPriorityQueueFastDequeue<TheaterRoom>;


public:

    BoxOffice();
    ~BoxOffice();
    void changeTicketPrice(float newTicketPrice);
    float getTicketPrice();
    int getMovieTime();
    int getTotalTicketsSold();


};


#endif //COMP220FINALPROJECT18_BOXOFFICE_H
