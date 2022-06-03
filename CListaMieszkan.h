//
// Created by grzeg on 03.06.2022.
//

#ifndef PROGRAM_CLISTAMIESZKAN_H
#define PROGRAM_CLISTAMIESZKAN_H

#include <iostream>
#include <vector>
#include <algorithm>

#include "CMieszkanie.h"
#include "CInterfejs.h"
#include "CSerializer.h"
#include "CDeserializer.h"

class CListaMieszkan {
    vector<CMieszkanie *> mListaM;  // lista w formacie std::vector zawierająca wskaźniki do CMieszkanie
    CInterfejs minter;  // utworzenie obiektu interfejsu użytkownika
    CSerializer mserialize;
    CDeserializer mdeserialize;

public:

    void utworzNoweMieszkanie();  // Funkcja tworząca nowy obiekt CMieszkanie i dodająca wskaźnik do niego do listy

    void wczytajDaneMieszkania();

    void usunMieszkanie(CMieszkanie *m);

    void wyswietlDaneMieszkania(int x);  // docelowo -> void wyswietlDaneMieszkania(CMieszkanie *m);

    void zapiszDaneMieszkania(int x);

};


#endif //PROGRAM_CLISTAMIESZKAN_H
