//
// Created by grzeg on 03.06.2022.
//

#ifndef PROGRAM_CSERIALIZER_H
#define PROGRAM_CSERIALIZER_H

#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <cstring>


#include "CSerializerAbstr.h"
#include "CMieszkanie.h"

using namespace std;

class CSerializer : public CSerializerAbstr {  // serializer tekstowy
public:
    void zapiszMieszkanie(CMieszkanie *m, int nrMieszkania) override;

    void usunMieszkanie(int nrMieszkania) override;

    void zapiszLicznik(CLicznik *l, int nrLicznika, int nrMieszkania) override;

    void usunLicznik(int nrLicznika, int nrMieszkania) override;

    void zapiszOdczyt(COdczyt *o, int nrOdczytu, int nrLicznika, int nrMieszkania) override;

    void usunOdczyt(int nrOdczytu, int nrLicznika, int nrMieszkania) override;
};


#endif //PROGRAM_CSERIALIZER_H
