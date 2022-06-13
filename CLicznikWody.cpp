//
// Created by grzeg on 23.05.2022.
//

#include "CLicznikWody.h"

CLicznikWody::CLicznikWody() {
    taryfaMiesieczna = -1;
    taryfaZuzycia = -1;
    zmienJednostke("m3");
    zmienTyp("wody");  // w dopełniaczu
}

void CLicznikWody::podajTaryfy(double x, double y) {
    taryfaMiesieczna = x;
    taryfaZuzycia = y;
}

double CLicznikWody::outTaryfaZuzycia() {
    return taryfaZuzycia;
}

double CLicznikWody::outTaryfaMiesieczna() {
    return taryfaMiesieczna;
}