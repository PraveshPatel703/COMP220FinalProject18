//
// Created by Matt on 12/11/2018.
//

#include "MovieTheater.h"


MovieTheater::MovieTheater(BoxOffice newBoxOffice, ConcessionStand newConcessionStand){
    this->myBoxOffice = newBoxOffice;
    this->myConcessionStand = newConcessionStand;
}

MovieTheater::MovieTheater(const ConcessionStand &concessionToCopy){

}


MovieTheater::~MovieTheater(){

}

float MovieTheater::getTotalIncome() {

}