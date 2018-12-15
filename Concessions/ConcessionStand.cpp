//
// Created by Matt on 12/4/2018.
//
#include "ConcessionStand.h"


ConcessionStand::ConcessionStand(){
    this->totalIncome = 0.00;
    this->menu = new MapLinkedList<ConcessionItem>();
};

ConcessionStand::~ConcessionStand(){
    delete(menu);
};


float ConcessionStand::getTotalIncome(){
    return totalIncome;
};

void ConcessionStand::itemSold(std::string itemSold, int amountBought) {
    ConcessionItem itemToLookAt;
    itemToLookAt = menu->get(itemSold);
    itemToLookAt.subFromStock(amountBought);
    totalIncome = itemToLookAt.getPrice() * amountBought;
}

//prints the whole menu out
std::string ConcessionStand::printMenu(){

};