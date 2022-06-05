//
// Created by grzeg on 03.06.2022.
//

#ifndef PROGRAM_CINTERFEJS_H
#define PROGRAM_CINTERFEJS_H

#include <iostream>
#include <unistd.h>

#include "CMieszkanie.h"
#include "CListaMieszkan.h"

using namespace std;

class CInterfejs {
public:
    void wprowadzanieDanychM(CMieszkanie *m);

    void wyswietlanieDanychM(CMieszkanie *m);

    void mainManu(CListaMieszkan *l);
};


#endif //PROGRAM_CINTERFEJS_H
