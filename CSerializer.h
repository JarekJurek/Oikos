//
// Created by grzeg on 03.06.2022.
//

#ifndef PROGRAM_CSERIALIZER_H
#define PROGRAM_CSERIALIZER_H

#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <cstring>


#include "CSerializerAbstr.h"
#include "CMieszkanie.h"

using namespace std;
/// Kalsa serializera tekstowego
///
/// Klasa dziedziczy publicznie po abstrakcyjnej klasie CSerializerAbstr
class CSerializer : public CSerializerAbstr {
public:
/// Metoda zapisująca dane do pliku
///
/// @param m jest wskaźnikiem do typu CMieszknie
/// @param nrMieszkania jest numerem mieszkania które chcemy zapisać
    void zapiszMieszkanie(CMieszkanie *m, int nrMieszkania) override;
/// Metoda usuwająca mieszkanie z plików
///
/// @param nrMieszkania jest numerem mieszkania które chcemy usunąć
    void usunMieszkanie(int nrMieszkania) override;
/// Metoda zapisująca dane z pliku
///
/// @param l jest wskaźnikiem do typu CLicznik
/// @param nrLicznika jest numerem licznika który chcemy zapisać
/// @param nrMieszkania jest numerem mieszkania które chcemy zapisać
    void zapiszLicznik(CLicznik *l, int nrLicznika, int nrMieszkania) override;
/// Metoda usuwająca licznik z plików
///
/// @param nrLicznika jest numerem licznika który chcemy usunąć
/// @param nrMieszkania jest numerem mieszkania które chcemy usunąć
    void usunLicznik(int nrLicznika, int nrMieszkania) override;
/// Metoda zapisująca dane z pliku
///
/// @param o jest wskaźnikiem do typu COdczyt
/// @param nrOdczytu jest numerem odczytu który chcemy zapisać
/// @param nrLicznika jest numerem licznika który chcemy zapisać
/// @param nrMieszkania jest numerem mieszkania które chcemy zapisać
    void zapiszOdczyt(COdczyt *o, int nrOdczytu, int nrLicznika, int nrMieszkania) override;
/// Metoda usuwająca odczyt z plików
///
/// @param nrOdczytu jest numerem odczytu który chcemy usunąć
/// @param nrLicznika jest numerem licznika który chcemy usunąć
/// @param nrMieszkania jest numerem mieszkania które chcemy usunąć
    void usunOdczyt(int nrOdczytu, int nrLicznika, int nrMieszkania) override;
};


#endif //PROGRAM_CSERIALIZER_H
