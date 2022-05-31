//
// Created by grzeg on 23.05.2022.
//

#ifndef PROGRAM_CLICZNIK_H
#define PROGRAM_CLICZNIK_H

#include <iostream>
#include "COdczyt.h"

using namespace std;

class CLicznik {
    string numerLicznika;
public:
    COdczyt odczyt;

    CLicznik(string = "-1");

    virtual void podajStanLicznika() = 0;  // czysta klasa wirtualna

    void wprowadzDaneLicznika();

    void wczytajDaneLicznika(string);

    void wyswietlDaneLicznika();

    string outNumerLicznika();
};


#endif //PROGRAM_CLICZNIK_H
