//
// Created by grzeg on 08.06.2022.
//

#ifndef PROGRAM_CLISTAODCZYTOW_H
#define PROGRAM_CLISTAODCZYTOW_H

#include <iostream>
#include <vector>
#include <algorithm>

#include "COdczyt.h"

class CListaOdczytow {
    vector<COdczyt *> mListaO;

public:
    void dodajNowyOdczyt(COdczyt *l);  // Funkcja tworząca nowy obiekt CLicznik i dodająca wskaźnik do niego

    void usunOdczyt(int x);

    COdczyt *outWskaznikOdczyt(int x);

    int outLiczbaElementow();
};


#endif //PROGRAM_CLISTAODCZYTOW_H
