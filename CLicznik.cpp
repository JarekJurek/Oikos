//
// Created by grzeg on 23.05.2022.
//

#include "CLicznik.h"


void CLicznik::podajDaneLicznika(string p) {
    numerLicznika = p;
}

string CLicznik::outJednostka() {
    return jednostka;
}

string CLicznik::outNumerLicznika() {
    return numerLicznika;
}

void CLicznik::zmienJednostke(string s) {
    jednostka = s;
}

void CLicznik::zmienTyp(string s) {
    typ = s;
}

string CLicznik::outTyp() {
    return typ;
}
