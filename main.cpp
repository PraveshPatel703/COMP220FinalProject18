#include <iostream>
#include "string"
#include "cmath"
#include "../Final Project v3/Concessions/ConcessionItem.h"
#include "../Final Project v3/Concessions/ConcessionStand.h"
#include "../Final Project v3/Boxoffice/BoxOffice.h"
#include "../Final Project v3/Boxoffice/TheaterRoom.h"
#include "Movie.h"
using namespace std;



int main() {

    Movie* movie1 = new Movie("Averngers", "Action", 4.5, 2.0);
    Movie* movie2 = new Movie("Happy Gilmore", "Comedy", 4.7, 1.6);
    Movie* movie3 = new Movie("Ice Age", "Family", 3.0, 1.5);
    Movie* movie4 = new Movie("Get Out", "Horror", 2.7, 1.8);
    Movie* movie5 = new Movie("Star Wars", "Sci Fi", 5.0, 1.75);


    std::cout<<"------------Welcome To Your Movie Theater------------"<<std::endl;
    std::cout<<"Type /help if you need a list of commands!"<<std::endl;
    string command;
    string foodItem;
    int numOfFood;
    int totalIncome;
    int numOfTickets;
    int newTicketPrice;
    ConcessionStand* food = new ConcessionStand();
    BoxOffice* BO = new BoxOffice();
    float price = BO->getTicketPrice();
    getline(cin,command);
    int end = 0;
    while(end == 0){

        if(command == "/help"){
            cout<<"--------List of Commands:--------"<<endl;
            cout<<"/quit"<<endl;
            cout<<"/1 -> Change Ticket Price"<<endl;
            cout<<"/2 -> Get Ticket Price"<<endl;
            cout<<"/3 -> Sell Tickets"<<endl;
            cout<<"/4 -> Total Tickets Sold"<<endl;
            cout<<"/5 -> Get Total Income"<<endl;
            cout<<"/6 -> Current Movies playing"<<endl;
            cout<<"/7 -> Sell Concession Item"<<endl;
            cout<<"Enter a number: "<<endl;
            getline(cin,command);

        }

        if(command == "/quit"){
            return 0;
        }
        if(command == "1"){
            std::cout<<"Current ticket price: "<< BO->getTicketPrice()<<std::endl;
            cout<<"Change price to: "<<endl;
            std::cin>> newTicketPrice;
            BO->changeTicketPrice(newTicketPrice);
            price = BO->getTicketPrice();
        }

        if(command == "2"){
            cout<<"Ticket price is: "<< BO->getTicketPrice() <<endl;
        }

        if(command == "3"){
            cout<<"Enter Number of Tickets Sold: "<<endl;
            //std::cin>> numOfTickets;
            //for(int i=0; i<numOfTickets;i++) {
              //  BO->updateTicketsSold();
                //totalIncome += BO->getTicketPrice();
       //     }
        }

        if(command == "4"){
            //std::cout << BO->getTicketsSold() << " Tickets were sold!"<<std::endl;
        }

        if(command == "5"){

            cout<<"Total income is: "<< totalIncome <<endl;
        }

        if(command == "6"){

            cout<<"The current movies playing are: "<<endl;
            BO->getMoviesPlaying();
        }

        if(command == "7"){

            cout<<"What concession item did you sell"<<endl;
            cout<<"Fritos"<<endl;
            cout<<"Pepsi"<<endl;
            getline(cin,foodItem);
            cout<<"How many sold:"<<endl;
            std::cin>> numOfFood;
            food->itemSold(foodItem,numOfFood);

        }

        command = "";
        cout<<"Enter a command number or /help: "<<endl;
        getline(cin,command);

    }

}