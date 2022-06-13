//
// Created by grzeg on 23.05.2022.
//

#include "CLicznikPradu.h"

CLicznikPradu::CLicznikPradu() {
    taryfaMiesieczna = -1;
    taryfaZuzycia = -1;
    zmienJednostke("kWh");
    zmienTyp("pradu");  // w dopełniaczu
}

void CLicznikPradu::podajTaryfy(double x, double y) {
    taryfaMiesieczna = x;
    taryfaZuzycia = y;
}

double CLicznikPradu::outTaryfaZuzycia() {
    return taryfaZuzycia;
}

double CLicznikPradu::outTaryfaMiesieczna() {
    return taryfaMiesieczna;
}




