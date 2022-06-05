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

using namespace std;

class CMieszkanie {
    double wartosc;
    double czynsz;
public:
    CAdres adres;
    CTaryfa taryfa;
    CLicznikPradu lprad;  // tego ma nie być
    CLicznikGazu lgaz;
    CLicznikWody lwodaCiepla;
    CLicznikWody lwodaZimna;  // dotąd
//    COdczyt odczyt;
    vector<CLicznik*> liczniki;

    CMieszkanie(double x = -1, double y = -1);

    void wprowadzDaneM(double x, double y);

    double outCzynsz();

    double outWartosc();
};


#endif //PROGRAM_CMIESZKANIE_H
