//
// Created by Matt on 12/3/2018.
//

#ifndef COMP220FINALPROJECT18_CONSESSIONS_H
#define COMP220FINALPROJECT18_CONSESSIONS_H

#include <string>

class ConcessionItem {
private:
    std::string itemName;
    int stock;
    float price;

public:
    ConcessionItem(std::string itemName, int stock, float price){};

    ~ConcessionItem(){};

    //gets Item
    std::string getItem(){};

    //gets stock of this item
    int getStock(){};

    //gets price of this item
    float getPrice(){};

    //changes stock of the item
    void setStock(){};

    //changes price of the item
    void setPrice(){};


};


#endif //COMP220FINALPROJECT18_CONSESSIONS_H