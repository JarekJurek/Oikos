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

    void wprowadzanieDanychM(CMieszkanie *m);

    void wyswietlanieDanychM(CMieszkanie *m);

    void wprowadzanieDanychL(CLicznik *l, int nrMieszkania);

    void wyswietlanieDanychL(CLicznik *l);

    void wprowadzanieDanychLPradu(CLicznik *l);

    void wprowadzanieDanychLWody(CLicznik *l);

    void wprowadzanieDanychLGazu(CLicznik *l);

    void wprowadzenieOdczytuL(CLicznik *l, int nrLicznika, int nrMieszkania);

    void mainManu();

    void pokazListeM();

};


#endif //PROGRAM_CINTERFEJS_H
