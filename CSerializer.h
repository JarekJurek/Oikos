//
// Created by grzeg on 03.06.2022.
//

#ifndef PROGRAM_CSERIALIZER_H
#define PROGRAM_CSERIALIZER_H

#include <iostream>
#include <fstream>
#include "CMieszkanie.h"
#include <string>

using namespace std;

class CSerializer {
public:
    void zapiszMieszkanie(CMieszkanie *m);
};


#endif //PROGRAM_CSERIALIZER_H
