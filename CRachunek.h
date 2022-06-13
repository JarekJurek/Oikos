//
// Created by grzeg on 30.05.2022.
//

#ifndef PROGRAM_CRACHUNEK_H
#define PROGRAM_CRACHUNEK_H

#include <iostream>
#include "CLicznik.h"


using namespace std;

class CRachunek {
    double sumaOplat;

public:
    CRachunek();

    void oplataZuzycia(double x, double y);

    void oplataMiesieczna(double x, int y);

    void oplataWodaCiepla(double zuzycie, double tarydaPodgrzanie, double taryfaWiS);

    void oplataWoda(double zuzycie, double taryfaWiS);

    double outSumaOplat();

    void zerujRachunek();

};


#endif //PROGRAM_CRACHUNEK_H
