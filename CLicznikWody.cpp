//
// Created by grzeg on 23.05.2022.
//

#include "CLicznikWody.h"

CLicznikWody::CLicznikWody() {
    taryfaPodgrzanieWody = -1;
    taryfaWodaZimnaIscieki = -1;
    zmienJednostke("m3");
    zmienTyp("wodyZ");  // w dopełniaczu
}

void CLicznikWody::podajTaryfy(double x, double y) {
    taryfaPodgrzanieWody = x;
    taryfaWodaZimnaIscieki = y;
}

//double CLicznikWody::outTaryfaPodgrzanieWody() {
//    return taryfaPodgrzanieWody;
//}

//double CLicznikWody::outTaryfaWodaZimnaIscieki() {
//    return taryfaWodaZimnaIscieki;
//}