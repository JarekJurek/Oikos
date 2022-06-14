//
// Created by grzeg on 23.05.2022.
//

#ifndef PROGRAM_CLICZNIKWODY_H
#define PROGRAM_CLICZNIKWODY_H

#include "CLicznik.h"
/// Klasa określająca licznik prądu
///
/// Klasa dziedziczy po klasie CLicznik, posiada pola:
/// double taryfa miesięczna oraz double taryfa zużycia
class CLicznikWody : public CLicznik {
    double taryfaMiesieczna;
    double taryfaZuzycia;
public:
/// Konstruktor bez argumentów
    CLicznikWody();
/// Metoda do wprowadzania taryf
/// @param x taryfa miesięczna
/// @param y taryfa zużycia
    void podajTaryfy(double x, double y) override;
/// Metoda wyświetlająca taryfę zużycia
    double outTaryfaZuzycia() override;
/// Metoda wyświetlająca taryfę miesięczną
    double outTaryfaMiesieczna() override;

};

#endif //PROGRAM_CLICZNIKWODY_H
