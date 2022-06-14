//
// Created by grzeg on 03.06.2022.
//

#ifndef PROGRAM_CLISTAMIESZKAN_H
#define PROGRAM_CLISTAMIESZKAN_H

#include <iostream>
#include <deque>
#include <algorithm>

#include "CMieszkanie.h"
#include "CSerializer.h"
#include "CDeserializer.h"
/// Klasa określająca kontener deque mieszkań
///
/// Klasa obsługuje kontener/liste z mieszkaniami i zawiera pole:
/// deque<CMieszkanie> mListaL będący właściwą listą
class CListaMieszkan {
    deque<CMieszkanie> mListaM;

public:
/// Metoda umożliwiająca dodanie nowego mieszkania do listy
/// @param m dodawane do listy nowe mieszkanie
    void utworzNoweMieszkanie(const CMieszkanie &m);  // Funkcja tworząca nowy obiekt CMieszkanie i dodająca wskaźnik do niego
/// Metoda umożliwiająca usunięcie mieszkania z listy
/// @param x numer usuwanego mieszkania
    void usunMieszkanie(int x);
/// Metoda zwracająca wskaźnik mieszkania
/// @param x numer mieszkania
/// @returns *CMieszkanie
    CMieszkanie *outWskaznikMieszkania(int x);
/// Metoda zwracająca ile elementów jest w liście
    int outLiczbaElementow();

};


#endif //PROGRAM_CLISTAMIESZKAN_H
