//
// Created by Matt on 12/4/2018.
//
#include "ConcessionStand.h"


ConcessionStand::ConcessionStand(){
    this->totalIncome = 0.00;
    this->menu =
};

ConcessionStand::~ConcessionStand(){

};


float ConcessionStand::getTotalIncome(){
    return totalIncome;
};

//adds a new item to concession menu
void ConcessionStand::addToMenu(ConcessionItem newItem){
    menu->insertAtEnd(newItem);
};

//removes an item from the concession menu
void ConcessionStand::removeFromMenu(ConcessionItem itemToRemove){
    menu->removeValueAt(itemToRemove);
};

//prints the whole menu out
std::string ConcessionStand::printMenu(){
    return menu->toString();
};