//
// Created by grzeg on 23.05.2022.
//

#ifndef PROGRAM_CLICZNIK_H
#define PROGRAM_CLICZNIK_H

#include <iostream>
#include "CListaOdczytow.h"

using namespace std;

class CLicznik {
public:
    CListaOdczytow odczyty;  // protected

    virtual void podajDaneLicznika(string n, string p) = 0;

    virtual string outNumerLicznika() = 0;

    virtual string outNazwaLicznika() = 0;

};


#endif //PROGRAM_CLICZNIK_H
