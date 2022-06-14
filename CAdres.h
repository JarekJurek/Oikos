//
// Created by grzeg on 23.05.2022.
//

#ifndef PROGRAM_CADRES_H
#define PROGRAM_CADRES_H

#include <iostream>

using namespace std;
/// Klasa CAdres zawierająca pola odresu mieszkania
///
/// Klasa motyw zawiera kolejne pola potrzbne do definicji adresu:
/// string @ulica, string @numerDomu, int @numerMieszkania, string @kodPocztowy oraz string @miasto
class CAdres {
    string ulica;
    string numerDomu;
    int numerMieszkania;
    string kodPocztowy;
    string miasto;
public:
/// Konstruktor z parametrami domyślnymi
/// @param q jest nazwą ulicy
/// @param w numeremDomu
/// @param x numerem mieszkania
/// @param e kodem pocztowym
/// @param r miastem
    CAdres(string q = "void", string w = "void", int x = -1, string e = "void", string r = "void");
/// Metoda edycji pól klasy
/// @param q jest nazwą ulicy
/// @param w numeremDom
/// @param x numerem mieszkania
/// @param e kodem pocztowym
/// @param r miastem
    void wprowadzAdres(string q, string w, int x, string e, string r);
/// Metoda zwracająca ulicę
///@returns ulica
    string outUlica();
/// Metoda zwracająca numer domu
///@returns numer domu
    string outNumerDomu();
/// Metoda zwracająca numer mieszkania
///@returns numer mieszkania
    int outNumerMieszkania();
/// Metoda zwracająca kod pocztowy
///@returns kod pocztowy
    string outKodPocztowy();
/// Metoda zwracająca miasto
///@returns miasto
    string outMiasto();

};


#endif //PROGRAM_CADRES_H
