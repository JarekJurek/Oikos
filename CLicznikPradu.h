//
// Created by grzeg on 23.05.2022.
//

#ifndef PROGRAM_CLICZNIKPRADU_H
#define PROGRAM_CLICZNIKPRADU_H

#include "CLicznik.h"

class CLicznikPradu : public CLicznik {
    string nazwa;
    string numerLicznika;
public:
    CLicznikPradu();
    void podajDaneLicznika(string n, string p) override;
    string outNumerLicznika() override;
    string outNazwaLicznika() override;

};


#endif //PROGRAM_CLICZNIKPRADU_H
