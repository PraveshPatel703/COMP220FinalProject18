//
// Created by Matt on 12/4/2018.
//
#include "ConcessionStand.h"



ConcessionStand::ConcessionStand(){
    this->totalIncome = 0.00;
    this->menu = ;
    this->currentOrder = ;

};

ConcessionStand::~ConcessionStand(){

};


float ConcessionStand::getTotalIncome(){
    return totalIncome;
};

void ConcessionStand::itemSold(std::string itemSold) {

}

//prints the whole menu out
std::string ConcessionStand::printMenu(){
    return menu->toString();
};