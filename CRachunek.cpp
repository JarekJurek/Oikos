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

void CRachunek::oplataWodaCiepla(double zuzycie, double tarydaPodgrzanie, double taryfaWiS){
    sumaOplat = zuzycie * tarydaPodgrzanie + zuzycie * taryfaWiS;

}

void CRachunek::oplataWoda(double zuzycie, double taryfaWiS) {
    sumaOplat = zuzycie * taryfaWiS;
}
