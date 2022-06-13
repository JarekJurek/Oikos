//
// Created by grzeg on 23.05.2022.
//

#ifndef PROGRAM_CLICZNIKPRADU_H
#define PROGRAM_CLICZNIKPRADU_H

#include "CLicznik.h"

class CLicznikPradu : public CLicznik {
    double taryfaMiesieczna;
    double taryfaZuzycia;
public:
    CLicznikPradu();

    void podajTaryfy(double x, double y) override;

    double outTaryfaZuzycia() override;

    double outTaryfaMiesieczna() override;

};


#endif //PROGRAM_CLICZNIKPRADU_H
