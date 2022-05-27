//
// Created by grzeg on 23.05.2022.
//

#ifndef PROGRAM_CLICZNIK_H
#define PROGRAM_CLICZNIK_H

#include <iostream>
#include "COdczyt.h"

using namespace std;

class CLicznik {
    string nazwa;
    string numerLicznika;

public:
    COdczyt odczyt;

    string outNazwa();

    string outNumerLicznika();

    CLicznik(string = "void", string = "-1");

    virtual void podajStanLicznika() = 0;  // czysta klasa wirtualna

    void wprowadzDaneLicznika();

    void wyswietlDaneLicznika();

};


#endif //PROGRAM_CLICZNIK_H
