//
// Created by grzeg on 06.06.2022.
//

#ifndef PROGRAM_CLISTALICZNIKOW_H
#define PROGRAM_CLISTALICZNIKOW_H

#include <iostream>
#include <deque>
#include <algorithm>

#include "CLicznik.h"
/// Klasa określająca kontener deque liczników
///
/// Klasa obsługuje kontener/liste z licznikami i zawiera pole:
/// deque<CLicznik *> mListaL będący właściwą listą
class CListaLicznikow {
    deque<CLicznik *> mListaL;

public:
/// Metoda umożliwiająca dodanie nowego licznika do listy
/// @param l dodawany do listy nowy licznk
    void dodajNowyLicznik(CLicznik *l);  // Funkcja tworząca nowy obiekt CLicznik i dodająca wskaźnik do niego
/// Metoda umożliwiająca usunięcie licznika z listy
/// @param x numer usuwanego licznika
    void usunLicznik(int x);
/// Metoda zwracająca wskaźnik licznika
/// @param x numer licznika
/// @returns *CLicznik
    CLicznik *outWskaznikLicznika(int x);
/// Metoda zwracająca ile elementów jest w liście
    int outLiczbaElementow();
};


#endif //PROGRAM_CLISTALICZNIKOW_H
