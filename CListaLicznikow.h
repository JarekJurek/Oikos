//
// Created by grzeg on 06.06.2022.
//

#ifndef PROGRAM_CLISTALICZNIKOW_H
#define PROGRAM_CLISTALICZNIKOW_H

#include <iostream>
#include <vector>
#include <algorithm>

#include "CLicznik.h"

class CListaLicznikow {
    vector<CLicznik *> mListaL;

public:
    void dodajNowyLicznik(CLicznik *l);  // Funkcja tworząca nowy obiekt CLicznik i dodająca wskaźnik do niego

    void usunLicznik(int x);

    CLicznik *outWskaznikLicznika(int x);

    int outLiczbaElementow();
};


#endif //PROGRAM_CLISTALICZNIKOW_H
