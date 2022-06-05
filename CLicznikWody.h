//
// Created by grzeg on 23.05.2022.
//

#ifndef PROGRAM_CLICZNIKWODY_H
#define PROGRAM_CLICZNIKWODY_H

#include "CLicznik.h"

class CLicznikWody : public CLicznik {
    double stan;
public:
    virtual void podajStanLicznika(double x);
    double outStan();

};


#endif //PROGRAM_CLICZNIKWODY_H
