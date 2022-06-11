//
// Created by grzeg on 03.06.2022.
//

#ifndef PROGRAM_CDESERIALIZER_H
#define PROGRAM_CDESERIALIZER_H

#include <iostream>
#include <fstream>
#include <string>

#include "CDeserializerAbstr.h"
#include "CMieszkanie.h"

using namespace std;

class CDeserializer : public CDeserializerAbstr { // deserializer tekstowy
public:
    void wczytajMieszkanie(CMieszkanie *m, int nrMieszkania) override;

    int podajIloscMieszkan() override;

};


#endif //PROGRAM_CDESERIALIZER_H
