//
// Created by grzeg on 23.05.2022.
//

#ifndef PROGRAM_CLICZNIKPRADU_H
#define PROGRAM_CLICZNIKPRADU_H

#include "CLicznik.h"

class CLicznikPradu : public CLicznik {
    string numerLicznika;
    double stanLicznika;
public:
    virtual void podajDaneLicznika(string s, double x);
};


#endif //PROGRAM_CLICZNIKPRADU_H
