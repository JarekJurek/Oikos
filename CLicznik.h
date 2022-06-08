//
// Created by grzeg on 23.05.2022.
//

#ifndef PROGRAM_CLICZNIK_H
#define PROGRAM_CLICZNIK_H

#include <iostream>
#include "CListaOdczytow.h"

using namespace std;

class CLicznik {
    CListaOdczytow odczyty;

public:

    virtual void podajDaneLicznika(string p, string s, double x);  // czysta klasa wirtualna

    virtual string outNumerLicznika();

    virtual double outStanLicznika();

    virtual string outNazwaLicznika();

};


#endif //PROGRAM_CLICZNIK_H
