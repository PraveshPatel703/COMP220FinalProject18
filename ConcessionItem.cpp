//
// Created by Matt on 12/3/2018.
//

#include "ConcessionItem.h"
#include <string>

class ConcessionItem{
private:
    std::string itemName;
    int stock;
    float price;

public:
    ConcessionItem(std::string itemName, int stock, float price){};

    ~ConcessionItem(){};

    std::string getItem(){};

    int getStock(){};

    float getPrice(){};

    void setStock(){};

    void setPrice(){};



};