//
// Created by grzeg on 23.05.2022.
//

#ifndef PROGRAM_CMIESZKANIE_H
#define PROGRAM_CMIESZKANIE_H

#include <iostream>
#include "CAdres.h"
#include "CLicznik.h"

using namespace std;

class CMieszkanie {
    string nazwa;
    float wartosc;
    float czynsz;
public:
    CAdres adres;
    CMieszkanie(string = "void", float = -1, float = -1);
    void wprowadzDaneM();
    void wyswietlDaneM();
};



#endif //PROGRAM_CMIESZKANIE_H
