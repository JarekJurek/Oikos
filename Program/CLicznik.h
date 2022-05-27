//
// Created by grzeg on 23.05.2022.
//

#ifndef PROGRAM_CLICZNIK_H
#define PROGRAM_CLICZNIK_H

#include <iostream>
#include "COdczyt.h"

using namespace std;

class CLicznik {
public:
    string nazwa;
    long long numerLicznika;

    COdczyt odczyt;

    virtual void podajStanLicznika() = 0;  // czysta klasa wirtualna
    void wprowadzDaneLicznika();
    void wyswietlDaneLicznika();

};


#endif //PROGRAM_CLICZNIK_H
