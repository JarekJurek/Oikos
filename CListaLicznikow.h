//
// Created by grzeg on 05.06.2022.
//

#ifndef PROGRAM_CLISTALICZNIKOW_H
#define PROGRAM_CLISTALICZNIKOW_H

#include <iostream>
#include <vector>
#include <algorithm>

#include "CLicznik.h"
#include "CSerializer.h"
#include "CDeserializer.h"

class CListaLicznikow {
    vector<CLicznik *> listaL;  // lista w formacie std::vector zawierająca wskaźniki do CMieszkanie

public:

    CLicznik *utworzNowyLicznik(vector<CLicznik *> listaL);  // Funkcja tworząca nowy obiekt CMieszkanie i dodająca wskaźnik do niego

    void usunLicznik(int x, vector<CLicznik *> listaL);

    CLicznik *outWskaznikLicznika(int x, vector<CLicznik *> listaL);

};

#endif //PROGRAM_CLISTALICZNIKOW_H
