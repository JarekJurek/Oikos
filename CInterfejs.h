//
// Created by grzeg on 03.06.2022.
//

#ifndef PROGRAM_CINTERFEJS_H
#define PROGRAM_CINTERFEJS_H

#include <iostream>
#include <unistd.h>
#include <vector>

#include "CMieszkanie.h"
#include "CListaMieszkan.h"
#include "CLicznik.h"

using namespace std;
/// Klasa interfejsu tekstowego
///
/// Klasa interfejs zawiera kolejne pola potrzbne do wyświetlania danych:
/// CListaMieszkan @l, CSerializerAbstr @ser, CDeserializerAbstr @dser
class CInterfejs {
    CListaMieszkan *l;
    CSerializerAbstr *ser;
    CDeserializerAbstr *dser;
public:
/// Konstruktor bez parametrów
    CInterfejs();
/// Metoda do wprowadzania danych mieszkania
    void wprowadzanieDanychM(CMieszkanie *m);
/// Metoda do wyświetlania danych mieszkania
/// @param m jest wskaźnikiem typu CMieszkanie
    void wyswietlanieDanychM(CMieszkanie *m);
/// Metoda do wprowadzania danych licznika
/// @param l jest wskaźnikiem typu Clicznik
/// @param nrMieszkania jest numerem mieszkania do którego chcemy dodać licznik
    void wprowadzanieDanychL(CLicznik *l, int nrMieszkania);
/// Metoda do wyświetlania danych licznika
/// @param l jest wskaźnikiem typu Clicznik
    void wyswietlanieDanychL(CLicznik *l);
/// Metoda do wprowadzania danych licznika prądu
/// @param l jest wskaźnikiem typu Clicznik
    void wprowadzanieDanychLPradu(CLicznik *l);
/// Metoda do wprowadzania danych licznika wody
/// @param l jest wskaźnikiem typu Clicznik
    void wprowadzanieDanychLWody(CLicznik *l);
/// Metoda do wprowadzania danych licznika gazu
/// @param l jest wskaźnikiem typu Clicznik
    void wprowadzanieDanychLGazu(CLicznik *l);
/// Metoda do wprowadzania danych odczytu
/// @param l jest wskaźnikiem typu Clicznik
/// @param nrLicznika jest numerem mieszkania do którego cemy dodać odczyt
/// @param nrMieszkania jest numerem mieszkania do którego chcemy dodać odczyt
    void wprowadzenieOdczytuL(CLicznik *l, int nrLicznika, int nrMieszkania);
/// Metoda wyświetlająca menu główne
    void mainManu();
/// Metoda wyświetlająca liste mieszkań razem z możliwymi opcjami działania
    void pokazListeM();

};


#endif //PROGRAM_CINTERFEJS_H
