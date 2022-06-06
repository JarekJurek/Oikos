//
// Created by grzeg on 05.06.2022.
//

#ifndef PROGRAM_CLISTALICZNIKOW_H
#define PROGRAM_CLISTALICZNIKOW_H

#include <iostream>
#include <vector>
#include <algorithm>

#include "CLicznik.h"
//#include "CLicznikPradu.h"
//#include "CLicznikWody.h"
//#include "CLicznikGazu.h"

#include "CSerializer.h"
#include "CDeserializer.h"

class CListaLicznikow {
    vector<CLicznik*> listaL;
public:

    void *dodajNowyLicznik(CLicznik *l);  // Funkcja tworząca nowy obiekt CLicznik i dodająca wskaźnik do niego

    void usunLicznik(int x);

    CLicznik *outWskaznikLicznika(int x);

};

#endif //PROGRAM_CLISTALICZNIKOW_H
