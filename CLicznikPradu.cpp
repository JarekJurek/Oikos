//
// Created by grzeg on 23.05.2022.
//

#include "CLicznikPradu.h"

void CLicznikPradu::podajDaneLicznika(string p, string s, double x) {
    nazwa = p;
    numerLicznika = s;
    stanLicznika = x;
}

string CLicznikPradu::outNumerLicznika() {
    return numerLicznika;
}

double CLicznikPradu::outStanLicznika() {
    return stanLicznika;
}

string CLicznikPradu::outNazwaLicznika() {
    return nazwa;
}
