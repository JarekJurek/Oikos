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

    COdczyt m_odczyt; // to nie w public
public:
    CLicznik(string x = "-1");

    virtual void podajStanLicznika() = 0;  // czysta klasa wirtualna

    void wprowadzDaneLicznika();

    void wczytajDaneLicznika(string);

    void wyswietlDaneLicznika();

    string outNumerLicznika();

    COdczyt* odczyt() { return &m_odczyt; }
};


#endif //PROGRAM_CLICZNIK_H
