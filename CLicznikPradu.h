//
// Created by grzeg on 23.05.2022.
//

#ifndef PROGRAM_CLICZNIKPRADU_H
#define PROGRAM_CLICZNIKPRADU_H

#include "CLicznik.h"

class CLicznikPradu : public CLicznik {
    string nazwa;
    string numerLicznika;
    double stanLicznika;
public:
    void podajDaneLicznika(string p, string s, double x) override;
    string outNumerLicznika() override;
    double outStanLicznika() override;
    string outNazwaLicznika() override;

};


#endif //PROGRAM_CLICZNIKPRADU_H
