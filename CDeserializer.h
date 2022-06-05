//
// Created by grzeg on 03.06.2022.
//

#ifndef PROGRAM_CDESERIALIZER_H
#define PROGRAM_CDESERIALIZER_H

#include <iostream>
#include <fstream>
#include "CMieszkanie.h"
#include <string>

using namespace std;

class CDeserializer {
public:
    static void wczytajMieszkanie(CMieszkanie *m);
};


#endif //PROGRAM_CDESERIALIZER_H
