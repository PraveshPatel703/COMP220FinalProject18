//
// Created by Bryan Pruett on 12/4/18.
//
#include "iostream"
#include "ConcessionItem.h"
#include "ConcessionStand.h"
#include "TheaterRoom.h"
#include "Movie.h"
#include "BoxOffice.h"


int main(){
//testing 2.0

    BoxOffice *BO = new BoxOffice(4, 1.3);

    std::cout<<BO->getDuration()<<std::endl;
    std::cout<<BO->getMovieTime()<<std::endl;
    std::cout<<BO->getTicketPrice()<<std::endl;
    BO->changeTicketPrice(15.00);
    std::cout<<BO->getTicketPrice()<<std::endl;
    std::cout<<BO->getTicketsSold()<<std::endl;

    BO->updateTicketsSold();
    BO->updateTicketsSold();
    BO->updateTicketsSold();
    BO->updateTicketsSold();

    //should update tickets sold to 4
    std::cout<<BO->getTicketsSold()<<std::endl;
    return 0;
}