//
// Created by Bryan Pruett on 12/4/18.
//
#include "iostream"
#include "ConcessionItem.h"
#include "ConcessionStand.h"
#include "TheaterRoom.h"
#include "Movie.h"
#include "BoxOffice.h"

void testConcessionItem(){
    ConcessionItem c1 = ConcessionItem("fritos",10,2.00);
    ConcessionItem c2 = ConcessionItem("pepsi",15,3.00);
    ConcessionItem C3 = ConcessionItem("popcorn",20,4.00);
    std::cout<<c1.getItem()<<std::endl;
    std::cout<<c1.getPrice()<<std::endl;
    std::cout<<c1.getStock()<<std::endl;
    std::cout<<c1.getStock()<<std::endl;
}


int main(){
//testing 2.0

    testConcessionItem();

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