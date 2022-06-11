//
// Created by grzeg on 06.06.2022.
//

#ifndef PROGRAM_CDESERIALIZERABSTR_H
#define PROGRAM_CDESERIALIZERABSTR_H

#include "CMieszkanie.h"

class CDeserializerAbstr {
public:
    virtual void wczytajMieszkanie(CMieszkanie *m, int nrMieszkania) = 0;
    virtual int podajIloscMieszkan() = 0;

};


#endif //PROGRAM_CDESERIALIZERABSTR_H
