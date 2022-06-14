//
// Created by grzeg on 23.05.2022.
//

#ifndef PROGRAM_CLICZNIKGAZU_H
#define PROGRAM_CLICZNIKGAZU_H

#include "CLicznik.h"
/// Klasa określająca licznik gazu
///
/// Klasa dziedziczy po klasie CLicznik, posiada pola:
/// double taryfa miesięczna oraz double taryfa zużycia
class CLicznikGazu : public CLicznik {
    double taryfaMiesieczna;
    double taryfaZuzycia;
public:
/// Konstruktor bez argumentów
    CLicznikGazu();
/// Metoda do wprowadzania taryf
/// @param x taryfa miesięczna
/// @param y taryfa zużycia
    void podajTaryfy(double x, double y) override;
/// Metoda wyświetlająca taryfę zużycia
    double outTaryfaZuzycia() override;
/// Metoda wyświetlająca taryfę miesięczną
    double outTaryfaMiesieczna() override;

};


#endif //PROGRAM_CLICZNIKGAZU_H
