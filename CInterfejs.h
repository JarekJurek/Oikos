//
// Created by grzeg on 03.06.2022.
//

#ifndef PROGRAM_CINTERFEJS_H
#define PROGRAM_CINTERFEJS_H

#include <iostream>
#include <unistd.h>

#include "CMieszkanie.h"
#include "CListaMieszkan.h"
#include "CListaLicznikow.h"

#include "CLicznikPradu.h"
#include "CLicznikWody.h"


using namespace std;

class CInterfejs {
public:
    void mainManu(CListaMieszkan *l);

    void manuLicznik(CMieszkanie *m);

    void wprowadzanieDanychM(CMieszkanie *m);

    void wyswietlanieDanychM(CMieszkanie *m);

    void wprowadzanieDanychLpradu(CLicznikPradu *lp);

    void wyswietlanieDanychLpradu(CLicznikPradu *lp);

    void wprowadzanieDanychLwody(CLicznikWody *lw);

    void wyswietlanieDanychLwody(CLicznikWody *lw);

};


#endif //PROGRAM_CINTERFEJS_H
