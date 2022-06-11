//
// Created by grzeg on 23.05.2022.
//

#include "CLicznikPradu.h"

CLicznikPradu::CLicznikPradu() {
    nazwa = "void";
    numerLicznika = "-1";
}

void CLicznikPradu::podajDaneLicznika(string n, string p) {
    nazwa = n;
    numerLicznika = p;
}

string CLicznikPradu::outNumerLicznika() {
    return numerLicznika;
}

string CLicznikPradu::outNazwaLicznika() {
    return nazwa;
}


