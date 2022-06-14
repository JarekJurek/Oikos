//
// Created by grzeg on 30.05.2022.
//

#ifndef PROGRAM_CRACHUNEK_H
#define PROGRAM_CRACHUNEK_H

#include <iostream>
#include "CLicznik.h"


using namespace std;
/// Klasa określająca rachunek
///
/// Klasa COdczyt zawiera podstawowe dane rachunku i umożliwia ich edycję:
/// sumę opłat
class CRachunek {
    double sumaOplat;

public:
/// Konstruktor bez parametrów
    CRachunek();
/// Metoda umożliwiająca podliczenie rachunku z zużycia
///
/// @param x wartość stanu licznika
/// @param y wartość taryfy
    void oplataZuzycia(double x, double y);
/// Metoda umożliwiająca podliczenie rachunku z miesiąca
///
/// @param x wartość stanu licznika
/// @param y ilość miesięcy
    void oplataMiesieczna(double x, int y);
/// Metoda zwracająca pole suma opłat
///
/// @return sumaOplat
    double outSumaOplat();
/// Metoda zerująca pole sumaOplat
    void zerujRachunek();

};


#endif //PROGRAM_CRACHUNEK_H
