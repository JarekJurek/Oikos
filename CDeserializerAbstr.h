//
// Created by grzeg on 06.06.2022.
//

#ifndef PROGRAM_CDESERIALIZERABSTR_H
#define PROGRAM_CDESERIALIZERABSTR_H

#include "CMieszkanie.h"
/// Klasa abstrakcyjna deserializera

class CDeserializerAbstr {
public:
    virtual void wczytajMieszkanie(CMieszkanie *m, int nrMieszkania) = 0;

    virtual int podajIloscMieszkan() = 0;

    virtual void wczytajLicznik(CLicznik *&l, int nrLicznika, int nrMieszkania) = 0;

    virtual int podajIloscLicznikow(int nrMieszkania) = 0;

    virtual void wczytajOdczyt(COdczyt *o, int nrOdczytu, int nrLicznika, int nrMieszkania) = 0;

    virtual int podajIloscOdczytow(int nrLicznika, int nrMieszkania) = 0;

};


#endif //PROGRAM_CDESERIALIZERABSTR_H
