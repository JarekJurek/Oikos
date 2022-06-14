//
// Created by grzeg on 08.06.2022.
//

#ifndef PROGRAM_CLISTAODCZYTOW_H
#define PROGRAM_CLISTAODCZYTOW_H

#include <iostream>
#include <deque>
#include <algorithm>

#include "COdczyt.h"
/// Klasa określająca kontener deque odczytów
///
/// Klasa obsługuje kontener/liste z odczytami i zawiera pole:
/// deque<COdczyt> mListaO będący właściwą listą
class CListaOdczytow {
    deque<COdczyt> mListaO;
public:
/// Metoda umożliwiająca dodanie nowego odczytu do listy
/// @param l dodawany do listy nowy odczyt
    void dodajNowyOdczyt(const COdczyt &l);
/// Metoda umożliwiająca usunięcie odczytu z listy
/// @param x numer usuwanego odczytu
    void usunOdczyt(int x);
/// Metoda zwracająca wskaźnik odczytu
/// @param x numer odczytu
/// @returns *COdczyt
    COdczyt *outOdczyt(int x);
/// Metoda zwracająca ile elementów jest w liście
    int outLiczbaElementow();
};


#endif //PROGRAM_CLISTAODCZYTOW_H
