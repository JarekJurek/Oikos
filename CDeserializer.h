//
// Created by grzeg on 03.06.2022.
//

#ifndef PROGRAM_CDESERIALIZER_H
#define PROGRAM_CDESERIALIZER_H

#include <iostream>
#include <fstream>
#include <string>

#include "CDeserializerAbstr.h"
#include "CMieszkanie.h"

using namespace std;
/// Klasa deserializera tekstowego dziedzicząca po abstrakcyjnej klasie CDeserializerAbstr

class CDeserializer : public CDeserializerAbstr { // deserializer tekstowy
public:
/// Metoda wczytująca dane z pliku
///
/// @param m jest wskaźnikiem do typu CMieszknie
/// @param nrMieszkania jest numerem mieszkania które chcemy wczytać
    void wczytajMieszkanie(CMieszkanie *m, int nrMieszkania) override;
/// Metoda zwracająca ilosc mieszkan zapisanych w plikach
///
/// @returns ilosc mieszkan
    int podajIloscMieszkan() override;
/// Metoda wczytująca dane z pliku
///
/// @param l jest wskaźnikiem do typu CLicznik
/// @param nrLicznika jest numerem licznika który chcemy wczytać
/// @param nrMieszkania jest numerem mieszkania które chcemy wczytać
    void wczytajLicznik(CLicznik *&l, int nrLicznika, int nrMieszkania) override;
/// Metoda zwracająca ilosc liczników zapisanych w plikach
///
/// @param nrMieszkania jest numerem mieszkania ktorego liczniki liczymy
/// @return ilosc licznikow
    int podajIloscLicznikow(int nrMieszkania) override;
/// Metoda wczytująca dane z pliku
///
/// @param o jest wskaźnikiem do typu COdczyt
/// @param nrLicznika jest numerem odczytu który chcemy wczytać
/// @param nrLicznika jest numerem licznika który chcemy wczytać
/// @param nrMieszkania jest numerem mieszkania które chcemy wczytać
    void wczytajOdczyt(COdczyt *o, int nrOdczytu, int nrLicznika, int nrMieszkania) override;
/// Metoda zwracająca ilosc mieszkan odczytow zapisanych w plikach
///
/// @param nrMieszkania jest numerem mieszkania ktorego liczniki liczymy
/// @param nrLicznika jest numerem licznika ktorego odczyty liczymy
/// @return ilosc odczytow
    int podajIloscOdczytow(int nrLicznika, int nrMieszkania) override;

};


#endif //PROGRAM_CDESERIALIZER_H
