//
// Created by grzeg on 03.06.2022.
//

#ifndef PROGRAM_CINTERFEJS_H
#define PROGRAM_CINTERFEJS_H

#include <iostream>
#include <unistd.h>
#include <vector>

#include "CMieszkanie.h"
#include "CListaMieszkan.h"
#include "CLicznik.h"

using namespace std;

class CInterfejs {
    CListaMieszkan *l;
    CSerializerAbstr *ser; // singleton
    CDeserializerAbstr *dser;
public:
    CInterfejs();

    static void wprowadzanieDanychM(CMieszkanie *m);

    static void wyswietlanieDanychM(CMieszkanie *m);

    static void wprowadzanieDanychL(CLicznik *l);

    static void wyswietlanieDanychL(CLicznik *l);

    static void wprowadzenieOdczytuL(CLicznik *l);

    void mainManu();

    void pokazListeM();

};


#endif //PROGRAM_CINTERFEJS_H
