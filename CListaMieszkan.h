//
// Created by grzeg on 03.06.2022.
//

#ifndef PROGRAM_CLISTAMIESZKAN_H
#define PROGRAM_CLISTAMIESZKAN_H

#include <iostream>
#include <vector>
#include <algorithm>

#include "CMieszkanie.h"
#include "CSerializer.h"
#include "CDeserializer.h"

class CListaMieszkan {
    vector<CMieszkanie *> mListaM;  // lista w formacie std::vector zawierająca wskaźniki do CMieszkanie

public:

    CMieszkanie *utworzNoweMieszkanie();  // Funkcja tworząca nowy obiekt CMieszkanie i dodająca wskaźnik do niego

    void usunMieszkanie(int x);

    CMieszkanie *outWskaznikMieszkania(int x);

};


#endif //PROGRAM_CLISTAMIESZKAN_H
