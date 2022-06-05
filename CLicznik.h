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
    CLicznik(string s = "-1");

    void wporwadzDane(string s);

    virtual void podajStanLicznika();  // czysta klasa wirtualna

//    void wprowadzDaneLicznika();
//
//    void wczytajDaneLicznika(string);
//
//    void wyswietlDaneLicznika();

//    COdczyt odczyt; // to nie w public i nazwa raczej modczyt - member
//
    string outNumerLicznika();

//    COdczyt* odczyt() { return &m_odczyt; }
};


#endif //PROGRAM_CLICZNIK_H
