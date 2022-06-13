//
// Created by grzeg on 23.05.2022.
//

#ifndef PROGRAM_CLICZNIKWODY_H
#define PROGRAM_CLICZNIKWODY_H

#include "CLicznik.h"

class CLicznikWody : public CLicznik {
    double taryfaMiesieczna;
    double taryfaZuzycia;
public:
    CLicznikWody();

    void podajTaryfy(double x, double y) override;

    double outTaryfaZuzycia() override;

    double outTaryfaMiesieczna() override;

};

#endif //PROGRAM_CLICZNIKWODY_H
