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
//    ClistaMieszkan *l;
//   CSerializer *ser; singleton
public:
    static void wprowadzanieDanychM(CMieszkanie *m);

    static void wyswietlanieDanychM(CMieszkanie *m);

    static void wprowadzanieDanychL(CLicznik *l);

    static void wyswietlanieDanychL(CLicznik *l);

    static void wprowadzenieOdczytuL(CLicznik *l);

    static void mainManu(CListaMieszkan *l);

    static void pokazListeM(CListaMieszkan *l);

};


#endif //PROGRAM_CINTERFEJS_H
