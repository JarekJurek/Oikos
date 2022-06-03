//
// Created by grzeg on 23.05.2022.
//

#ifndef PROGRAM_CMIESZKANIE_H
#define PROGRAM_CMIESZKANIE_H

#include <iostream>
#include <fstream>
#include "CAdres.h"
#include "CLicznikPradu.h"
#include "CLicznikWody.h"
#include "CLicznikGazu.h"
#include "CTaryfa.h"

#include <deque>


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
    COdczyt odczyt;
//    std::deque<CLicznik*> liczniki;  // ???

    CMieszkanie(double x = -1, double y = -1);

    void wprowadzDaneM();

    void wyswietlDaneM();

    void zapiszMieszkanie(string);

    void wczytajMieszkanie(string);

    double outCzynsz();

    double outWartosc();
};


#endif //PROGRAM_CMIESZKANIE_H
