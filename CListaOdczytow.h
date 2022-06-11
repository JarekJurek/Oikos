//
// Created by grzeg on 08.06.2022.
//

#ifndef PROGRAM_CLISTAODCZYTOW_H
#define PROGRAM_CLISTAODCZYTOW_H

#include <iostream>
#include <deque>
#include <algorithm>

#include "COdczyt.h"

class CListaOdczytow {
    deque<COdczyt> mListaO;

public:
    void dodajNowyOdczyt(const COdczyt &l);

    void usunOdczyt(int x);

    COdczyt outOdczyt(int x);

    int outLiczbaElementow();
};


#endif //PROGRAM_CLISTAODCZYTOW_H
