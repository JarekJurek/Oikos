//
// Created by grzeg on 23.05.2022.
//

#ifndef PROGRAM_CMIESZKANIE_H
#define PROGRAM_CMIESZKANIE_H

#include <iostream>
#include <fstream>
#include <vector>

#include "CAdres.h"
#include "CLicznikPradu.h"
#include "CLicznikWody.h"
#include "CLicznikGazu.h"
#include "CListaLicznikow.h"
#include "CRachunek.h"

using namespace std;
/// Klasa określająca mieszkanie
///
/// Klasa CMieszkanie zawiera podstawowe dane mieszkania:
/// wartość, czynsz, a także obiekty CAdres adres, CListaLiczników liczniki, CRachunek rachunek
class CMieszkanie {
    double wartosc;
    double czynsz;
public:
    CAdres adres;
    CListaLicznikow liczniki;
    CRachunek rachunek;
/// Konstruktor z polami domyślnymi
///
/// @param x wartrość domyślna wartości mieszkania
/// @param y wartość domyślna czynszu
    CMieszkanie(double x = -1, double y = -1);
/// Metoda umożliwiająca zmianę pól obiektów
///
/// @param x wartrość domyślna wartości mieszkania
/// @param y wartość domyślna czynszu
    void wprowadzDaneM(double x, double y);
/// Metoda zwracająca wartość czynszu
///
/// @return czynsz
    double outCzynsz();
/// Metoda zwracająca wartość mieszkania
///
/// @return wartość
    double outWartosc();
};


#endif //PROGRAM_CMIESZKANIE_H
