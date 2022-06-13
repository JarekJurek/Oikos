//
// Created by grzeg on 23.05.2022.
//

#ifndef PROGRAM_CLICZNIK_H
#define PROGRAM_CLICZNIK_H

#include <iostream>
#include "CListaOdczytow.h"

using namespace std;

class CLicznik {
    string numerLicznika;
    string jednostka;
    string typ;

public:
    CListaOdczytow odczyty;  // protected

    void podajDaneLicznika(string p);

    void zmienJednostke(string s);

    string outJednostka();

    void zmienTyp(string s);

    string outTyp();

    string outNumerLicznika();

    virtual void podajTaryfy(double x, double y) = 0;

    virtual double outTaryfaZuzycia() = 0;

    virtual double outTaryfaMiesieczna() = 0;

};


#endif //PROGRAM_CLICZNIK_H
