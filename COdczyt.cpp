//
// Created by grzeg on 27.05.2022.
//

#include "COdczyt.h"

COdczyt::COdczyt() {
    stan = -1;
    data = "void";
}

void COdczyt::podajOdczyt(double x, string d) {
    stan = x;
    data = d;
}

double COdczyt::outStan() {
    return stan;
}

string COdczyt::outData() {
    return data;
}



