//
// Created by grzeg on 23.05.2022.
//

#ifndef PROGRAM_CLICZNIK_H
#define PROGRAM_CLICZNIK_H

#include <iostream>
#include "COdczyt.h"

using namespace std;

class CLicznik {
//    string numerLicznika;

public:

    virtual void podajDaneLicznika();  // czysta klasa wirtualna

    virtual string outNumerLicznika();

    virtual double outStanLicznika();


//    CLicznik(string x = "-1");

//    COdczyt odczyt; // to nie w public i nazwa raczej modczyt - member

//    void wprowadzDaneLicznika();
//
//    void wczytajDaneLicznika(string);
//
//    void wyswietlDaneLicznika();
//
//    string outNumerLicznika();

//    COdczyt* odczyt() { return &m_odczyt; }
};


#endif //PROGRAM_CLICZNIK_H
