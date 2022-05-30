//
// Created by grzeg on 23.05.2022.
//

#ifndef PROGRAM_CMIESZKANIE_H
#define PROGRAM_CMIESZKANIE_H

#include <iostream>
#include "CAdres.h"
#include "CLicznikPradu.h"
#include "CLicznikWody.h"
#include "CLicznikGazu.h"
#include "CTaryfa.h"

using namespace std;

class CMieszkanie {
    float wartosc;
    float czynsz;
public:
    CAdres adres;
    CTaryfa taryfa;
    CLicznikPradu lprad;
    CLicznikGazu lgaz;
    CLicznikWody lwodaCiepla;
    CLicznikWody lwodaZimna;

    CMieszkanie(float = -1, float = -1);

    void wprowadzDaneM();

    void wyswietlDaneM();

    float outCzynsz();
};


#endif //PROGRAM_CMIESZKANIE_H
