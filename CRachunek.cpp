//
// Created by grzeg on 30.05.2022.
//

#include "CRachunek.h"

void CRachunek::oplataZuzycia(double x, double y) {
    sumaOplat += x * y;
}

void CRachunek::oplataMiesieczna(double x, int y) {
    sumaOplat += x * y;
}

double CRachunek::outSumaOplat() {
    return sumaOplat;
}

void CRachunek::zerujRachunek() {
    sumaOplat = 0;
}

CRachunek::CRachunek() {
    sumaOplat = -1;
}

void CRachunek::oplataWodaCiepla(double zuzycieWC, double tarydaPodgrzanie) {

}

void CRachunek::oplataWoda(double p) {

}
