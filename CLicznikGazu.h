//
// Created by grzeg on 23.05.2022.
//

#ifndef PROGRAM_CLICZNIKGAZU_H
#define PROGRAM_CLICZNIKGAZU_H

#include "CLicznik.h"

class CLicznikGazu : public CLicznik {
    double taryfaMiesieczna;
    double taryfaZuzycia;
public:
    CLicznikGazu();

    void podajTaryfy(double x, double y) override;

    double outTaryfaZuzycia() override;

    double outTaryfaMiesieczna() override;

};


#endif //PROGRAM_CLICZNIKGAZU_H
