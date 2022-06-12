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

    void wczytajLicznik(CLicznik *&l, int nrLicznika, int nrMieszkania) override;

    int podajIloscLicznikow(int nrMieszkania) override;

    void wczytajOdczyt(COdczyt *o, int nrOdczytu, int nrLicznika, int nrMieszkania) override;

    int podajIloscOdczytow(int nrLicznika, int nrMieszkania) override;

};


#endif //PROGRAM_CDESERIALIZER_H
