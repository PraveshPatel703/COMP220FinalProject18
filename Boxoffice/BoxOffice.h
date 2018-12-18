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
#include "../ADTs/Map.h"
#include "../ADTs/MapLinkedNode.h"
#include "../ADTs/MapLinkedList.h"
#include "../Movie.h"

class BoxOffice{

private:

    float ticketPrice;
    int totalTicketsSold;
    Map<TheaterRoom>* theaterList;
    PriorityQueue<Movie>* moviesInTheaters;


public:

    BoxOffice(MapLinkedList<TheaterRoom>* theaterRoomList, LinkedPriorityQueueFastDequeue<Movie>* moviesInTheaters);
    ~BoxOffice();
    void changeTicketPrice(float newTicketPrice);
    float getTicketPrice();
    int getMovieTime();
    int getTotalTicketsSold();
    std::string getMoviesPlaying();


};


#endif //COMP220FINALPROJECT18_BOXOFFICE_H
