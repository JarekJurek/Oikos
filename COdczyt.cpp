//
// Created by grzeg on 27.05.2022.
//

#include "COdczyt.h"

COdczyt::COdczyt(float x, string d) {
    stan = x;
    data = d;
}

void COdczyt::podajOdczyt(float x, string d) {
    stan = x;
    data = d;
}

float COdczyt::outStan() {
    return stan;
}

string COdczyt::outData() {
    return data;
}



