//
// Created by grzeg on 23.05.2022.
//

#ifndef PROGRAM_CLICZNIK_H
#define PROGRAM_CLICZNIK_H

#include <iostream>
#include "CListaOdczytow.h"

using namespace std;

/// Klasa bazowa licznik
///
/// Klasa licznik zawiera podstawowe dane uniwersalne dla każdego licznika:
/// string numer licznika, string jednostka, string typ oraz CListaOdczytow odczyty.
class CLicznik {
    string numerLicznika;
    string jednostka;
    string typ;

public:
    CListaOdczytow odczyty;  // protected
/// Metoda umożliwiająca wprowadzenie numeru licznika
///
///@param p Nowy numer licznika
    void podajDaneLicznika(string p);
/// Metoda umożliwiająca wprowadzenie jednostki
///
///@param s Nowa jednostka
    void zmienJednostke(string s);
/// Metoda umożliwiająca wprowadzenie numeru licznika
///
///@param p Nowy numer licznika
    string outJednostka();
/// Metoda umożliwiająca wprowadzenie numeru licznika
///
///@param p Nowy numer licznika
    void zmienTyp(string s);
/// Metoda zwracająca pole typ
///
/// @return @typ
    string outTyp();
/// Metoda zwracająca numer licznika
///
/// @return @numerLicznika
    string outNumerLicznika();
/// Metoda wirtualna służąca do podania danych taryfy
    virtual void podajTaryfy(double x, double y) = 0;
/// Metoda wirtualna służąca do zwrócenia danych taryfy
    virtual double outTaryfaZuzycia() = 0;
/// Metoda wirtualna służąca do zwrócenia danych taryfy
    virtual double outTaryfaMiesieczna() = 0;

};


#endif //PROGRAM_CLICZNIK_H
