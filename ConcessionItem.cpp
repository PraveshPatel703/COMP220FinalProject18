//
// Created by Matt on 12/3/2018.
//

#include "ConcessionItem.h"
#include <string>

    ConcessionItem::ConcessionItem(std::string itemName, int stock, float price){
    this->itemName = itemName;
    this->stock = stock;
    this->price = price;
};

    ConcessionItem::~ConcessionItem(){};

    std::string ConcessionItem::getItem(){
        return itemName;
    };

    int ConcessionItem::getStock(){
        return stock;
    };

    float ConcessionItem::getPrice(){
        return price;
    };

    void ConcessionItem::addToStock(int amountToAdd){
        stock = stock + amountToAdd;
    };

    void ConcessionItem::setPrice(float newPrice){
        price = newPrice;
    };
