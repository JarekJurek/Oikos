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

class CListaMieszkan {
    vector<CMieszkanie *> mListaM;  // lista w formacie std::vector zawierająca wskaźniki do CMieszkanie
    CInterfejs inter;  // utworzenie obiektu interfejsu użytkownika
public:
    void utworzNoweMieszkanie();  // Funkcja tworząca nowy obiekt CMieszkanie i dodająca wskaźnik do niego do listy
    void usunMieszkanie(CMieszkanie *m);
};


#endif //PROGRAM_CLISTAMIESZKAN_H
