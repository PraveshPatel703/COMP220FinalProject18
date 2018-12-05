//
// Created by Pravesh Patel on 12/4/18.
//

#ifndef COMP220FINALPROJECT18_BOXOFFICE_H
#define COMP220FINALPROJECT18_BOXOFFICE_H

#include "string"
#include "LinkedList.h"
#include "Movie.h"
#include "ArrayList.h"

class BoxOffice{

private:

    float ticketPrice = 10.00;
    int ticketsSold = 0;
    int movieTime;
    float duration;
    //Movie* currentMovies = new Movie[5]();

public:

    BoxOffice(int movieTimeIn,float durationIn);
    ~BoxOffice();
    void changeTicketPrice(float newTicketPrice);
    float getTicketPrice();
    int getMovieTime();
    float getDuration();
    //void setMovieToRoom(Movie[], int roomNumber);
    void updateTicketsSold();
    int getTicketsSold();


};


#endif //COMP220FINALPROJECT18_BOXOFFICE_H
