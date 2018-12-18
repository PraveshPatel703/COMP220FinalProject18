//
// Created by Matt on 12/11/2018.
//

#ifndef COMP220FINALPROJECT18_MOVIETHEATER_H
#define COMP220FINALPROJECT18_MOVIETHEATER_H

#include "Boxoffice/BoxOffice.h"
#include "Concessions/ConcessionStand.h"

class MovieTheater {
private:
    BoxOffice myBoxOffice;
    ConcessionStand myConcessionStand;
    float totalIncome = 0;

public:
    MovieTheater(BoxOffice newBoxOffice, ConcessionStand newConcessionStand);

    MovieTheater(const ConcessionStand &concesstionToCopy);

    MovieTheater& operator=(const ConcessionStand &concessionStand);

    ~MovieTheater();

    float getTotalIncome();
};


#endif //COMP220FINALPROJECT18_MOVIETHEATER_H
