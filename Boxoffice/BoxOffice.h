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
    int ticketsSold = 0;
    int movieTime;
    float duration;
    PriorityQueue<TheaterRoom>* theaterPriority = new LinkedPriorityQueueFastDequeue<TheaterRoom>;
    List* moviesInTheaters = new ArrayList(5);


public:

    BoxOffice();
    ~BoxOffice();
    void changeTicketPrice(float newTicketPrice);
    float getTicketPrice();
    int getMovieTime();
    int getTicketsSold();


};


#endif //COMP220FINALPROJECT18_BOXOFFICE_H
