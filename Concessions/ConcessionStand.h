//
// Created by Matt on 12/3/2018.
//

#ifndef COMP220FINALPROJECT18_CONCESSIONSTAND_H
#define COMP220FINALPROJECT18_CONCESSIONSTAND_H

#include "ConcessionItem.h"
#include "../ADTs/Map.h"
#include "../ADTs/MapLinkedList.h"
#include "../ADTs/MapLinkedNode.h"

class ConcessionStand{
private:
    float totalIncome;
    Map<ConcessionItem>* menu;
public:
    ConcessionStand();

    ConcessionStand(const ConcessionStand &concesstionToCopy);

    ConcessionStand& operator=(const ConcessionStand &concessionStand);

    ~ConcessionStand();

    float getTotalIncome();

    //adds an the item to the order and subtracts stock amount from the item in the menu
    void itemSold(std::string itemSold, int amountBought);

    //prints the whole menu out
    std::string printMenu();



};

#endif //COMP220FINALPROJECT18_CONCESSIONSTAND_H
