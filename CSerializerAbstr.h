//
// Created by grzeg on 06.06.2022.
//

#ifndef PROGRAM_CSERIALIZERABSTR_H
#define PROGRAM_CSERIALIZERABSTR_H

#include "CMieszkanie.h"
/// Klasa abstrakcyjna serializera
class CSerializerAbstr {
public:
    virtual void zapiszMieszkanie(CMieszkanie *m, int nrMieszkania) = 0;
    virtual void usunMieszkanie(int nrMieszkania) = 0;
    virtual void zapiszLicznik(CLicznik *l, int nrLicznika, int nrMieszkania) = 0;
    virtual void usunLicznik(int nrLicznika, int nrMieszkania) = 0;
    virtual void zapiszOdczyt(COdczyt *o, int nrOdczytu, int nrLicznika, int nrMieszkania) = 0;
    virtual void usunOdczyt(int nrOdczytu, int nrLicznika, int nrMieszkania) = 0;
};


#endif //PROGRAM_CSERIALIZERABSTR_H
