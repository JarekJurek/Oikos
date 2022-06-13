//
// Created by grzeg on 23.05.2022.
//

#ifndef PROGRAM_CMIESZKANIE_H
#define PROGRAM_CMIESZKANIE_H

#include <iostream>
#include <fstream>
#include <vector>

#include "CAdres.h"
#include "CTaryfa.h"
#include "CLicznikPradu.h"
#include "CLicznikWody.h"
#include "CLicznikGazu.h"
#include "CListaLicznikow.h"
#include "CRachunek.h"

using namespace std;

class CMieszkanie {
    double wartosc;
    double czynsz;
public:
    CAdres adres;
    CListaLicznikow liczniki;
    CRachunek rachunek;

    CMieszkanie(double x = -1, double y = -1);

    void wprowadzDaneM(double x, double y);

    double outCzynsz();

    double outWartosc();
};


#endif //PROGRAM_CMIESZKANIE_H
