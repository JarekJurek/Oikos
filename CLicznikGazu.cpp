//
// Created by grzeg on 23.05.2022.
//

#include "CLicznikGazu.h"

CLicznikGazu::CLicznikGazu() {
    taryfaMiesieczna = -1;
    taryfaZuzycia = -1;
    zmienJednostke("m3");
    zmienTyp("gazu");  // w dopełniaczu
}

void CLicznikGazu::podajTaryfy(double x, double y) {
    taryfaMiesieczna = x;
    taryfaZuzycia = y;
}

double CLicznikGazu::outTaryfaZuzycia() {
    return taryfaZuzycia;
}

double CLicznikGazu::outTaryfaMiesieczna() {
    return taryfaMiesieczna;
}