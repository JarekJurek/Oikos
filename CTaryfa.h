//
// Created by grzeg on 30.05.2022.
//

#ifndef PROGRAM_CTARYFA_H
#define PROGRAM_CTARYFA_H

#include <iostream>

using namespace std;

class CTaryfa {
    double taryfaWodaCiepla;
    double taryfaWodaZimna;
    double taryfaGaz;
    double taryfaPrad;
    double taryfaNajem;
public:
    CTaryfa(double = -1, double = -1, double = -1, double = -1, double = -1);

    void wprowadzTaryfy(double x, double y, double z, double a, double b);

    void wyswietlTaryfy();

    double outTaryfaWodaCiepla();

    double outTaryfaWodaZimna();

    double outTaryfaGaz();

    double outTaryfaPrad();

    double outTaryfaNajem();
};


#endif //PROGRAM_CTARYFA_H
