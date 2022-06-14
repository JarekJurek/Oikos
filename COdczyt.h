//
// Created by grzeg on 27.05.2022.
//

#ifndef PROGRAM_CODCZYT_H
#define PROGRAM_CODCZYT_H

#include <iostream>

using namespace std;
/// Klasa określająca odczyt z licznika
///
/// Klasa COdczyt zawiera podstawowe dane odczytu:
/// stan i datę
class COdczyt {
    double stan;
    string data;
public:
/// Konstruktor bez parametrów
    COdczyt();
/// Metoda umożliwiająca zmianę pól klasy
///
/// @param x wartość stanu licznika
/// @param d data odczytu
    void podajOdczyt(double x, string d);
/// Metoda zwracająca pole stan
///
/// @return stan
    double outStan();
/// Metoda zwracająca pole data
///
/// @return data
    string outData();

};


#endif //PROGRAM_CODCZYT_H
