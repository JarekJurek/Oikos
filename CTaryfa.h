//
// Created by grzeg on 30.05.2022.
//

#ifndef PROGRAM_CTARYFA_H
#define PROGRAM_CTARYFA_H

#include <iostream>

using namespace std;

class CTaryfa {
    float taryfaWodaCiepla;
    float taryfaWodaZimna;
    float taryfaGaz;
    float taryfaPrad;
    float taryfaNajem;
public:
    CTaryfa(float = -1, float = -1, float = -1, float = -1, float = -1);

    void wprowadzTaryfy();

    void wyswietlTaryfy();
};


#endif //PROGRAM_CTARYFA_H
