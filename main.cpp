#include <iostream>

#include "CMieszkanie.h"
#include "CRachunek.h"

using namespace std;

int main() {
//    CLicznikPradu G1;
//    G1.wyswietlDaneLicznika();
//    G1.wprowadzDaneLicznika();
//    G1.wyswietlDaneLicznika();
//    G1.podajStanLicznika();
//    G1.wyswietlDaneLicznika();

    CMieszkanie m1;
    m1.wprowadzDaneM();
    m1.wyswietlDaneM();
    CRachunek styczen;
    styczen.obliczOplaty(&m1);
    styczen.wyswietlRachunek();

}