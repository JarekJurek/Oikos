//
// Created by grzeg on 23.05.2022.
//

#ifndef PROGRAM_CLICZNIKPRADU_H
#define PROGRAM_CLICZNIKPRADU_H

#include "CLicznik.h"

class CLicznikPradu : public CLicznik {
    double stan;
public:
    virtual void podajStanLicznika(double x);
    double outStan();
};


#endif //PROGRAM_CLICZNIKPRADU_H
