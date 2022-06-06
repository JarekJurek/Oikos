//
// Created by grzeg on 03.06.2022.
//

#ifndef PROGRAM_CSERIALIZER_H
#define PROGRAM_CSERIALIZER_H

#include <iostream>
#include <fstream>
#include <string>

#include "CSerializerAbstr.h"
#include "CMieszkanie.h"

using namespace std;

class CSerializer : public CSerializerAbstr{  // serializer tekstowy
public:
    virtual void zapiszMieszkanie(CMieszkanie *m);
};


#endif //PROGRAM_CSERIALIZER_H
