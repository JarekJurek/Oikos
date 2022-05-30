//
// Created by grzeg on 30.05.2022.
//

#ifndef PROGRAM_CRACHUNEK_H
#define PROGRAM_CRACHUNEK_H

#include <iostream>
#include "CMieszkanie.h"
#include "COdczyt.h"
#include "CTaryfa.h"

using namespace std;

class CRachunek {
    float oplataWodaCiepla;
    float oplataWodaZimna;
    float oplataGaz;
    float oplataPrad;
    float oplataNajem;
public:
    CMieszkanie *m;
    CTaryfa *t = NULL;
    COdczyt *o = NULL;

    CRachunek(float = -1, float = -1, float = -1, float = -1, float = -1);

    void obliczOplaty(CMieszkanie *m, CTaryfa *t, COdczyt *o);

    float sumaRachunku();

    void wyswietlRachunek();
};


#endif //PROGRAM_CRACHUNEK_H
