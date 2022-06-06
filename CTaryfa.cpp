//
// Created by grzeg on 30.05.2022.
//

#include "CTaryfa.h"

CTaryfa::CTaryfa(double x, double y, double z, double a, double b) {
    taryfaWodaCiepla = x;
    taryfaWodaZimna = y;
    taryfaGaz = z;
    taryfaPrad = a;
    taryfaNajem = b;
}

void CTaryfa::wprowadzTaryfy(double x, double y, double z, double a, double b) {
    taryfaWodaCiepla = x;
    taryfaWodaZimna = y;
    taryfaGaz = z;
    taryfaPrad = a;
    taryfaNajem = b;
}

double CTaryfa::outTaryfaWodaCiepla() {
    return taryfaWodaCiepla;
}

double CTaryfa::outTaryfaWodaZimna() {
    return taryfaWodaZimna;
}

double CTaryfa::outTaryfaGaz() {
    return taryfaGaz;
}

double CTaryfa::outTaryfaPrad() {
    return taryfaPrad;
}

double CTaryfa::outTaryfaNajem() {
    return taryfaNajem;
}


