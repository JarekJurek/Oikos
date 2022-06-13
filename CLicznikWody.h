//
// Created by grzeg on 23.05.2022.
//

#ifndef PROGRAM_CLICZNIKWODY_H
#define PROGRAM_CLICZNIKWODY_H

#include "CLicznik.h"

class CLicznikWody : public CLicznik {
    double taryfaPodgrzanieWody;
    double taryfaWodaZimnaIscieki;
public:
    CLicznikWody();

    void podajTaryfy(double x, double y) override;

    double outTaryfaPodgrzanieWody();

    double outTaryfaWiS();

};

#endif //PROGRAM_CLICZNIKWODY_H
