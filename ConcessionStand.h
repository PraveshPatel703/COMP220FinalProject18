//
// Created by Matt on 12/3/2018.
//

#ifndef COMP220FINALPROJECT18_CONCESSIONSTAND_H
#define COMP220FINALPROJECT18_CONCESSIONSTAND_H

#include "ConcessionItem.h"
#include"List.h"

class ConcessionStand{
private:
    float totalIncome;
    List* menu;
public:
    ConcessionStand();

    ~ConcessionStand();


    float getTotalIncome();

    //adds a new item to concession menu
    void addToMenu(ConcessionItem newItem);

    //removes an item from the concession menu
    void removeFromMenu(ConcessionItem itemToRemove);

    //prints the whole menu out
    std::string printMenu();



};

#endif //COMP220FINALPROJECT18_CONCESSIONSTAND_H
