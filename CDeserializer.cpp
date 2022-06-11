//
// Created by grzeg on 03.06.2022.
//

#include "CDeserializer.h"

void CDeserializer::wczytajMieszkanie(CMieszkanie *m, int nrMieszkania) {
    string path = "C:\\Users\\grzeg\\Documents\\Studia\\Semestr 6\\PJC\\Oikos\\";
    path += "Mieszkanie" + to_string(nrMieszkania) + ".txt";
    ifstream plik(path);

    if (!plik.good()) {
        cout << "Problem z folderem mieszkaniowym" << endl;
        return;
    }

    // wczytywanie danych adresu
    string listaDane[5];
    int i;
    for (i = 0; i < 5; i++) {
        getline(plik, listaDane[i]);
    }
    m->adres.wprowadzAdres(listaDane[0], listaDane[1], stoi(listaDane[2]),
                        listaDane[3], listaDane[4]);

    // wczytywanie danych: wartość i czynsz
    double x, y;
    string line;
    getline(plik, line);
    x = stod(line);
    getline(plik, line);
    y = stod(line);
    m->wprowadzDaneM(x, y);

    plik.close();
    return;
}

int CDeserializer::podajIloscMieszkan() {
    string path = "C:\\Users\\grzeg\\Documents\\Studia\\Semestr 6\\PJC\\Oikos\\iloscMieszkan.txt";
    ifstream plik(path);

    if (!plik.good()) {
        cout << "Problem z folderem mieszkaniowym" << endl;
        return -1;
    }

    string line;
    getline(plik, line);
    return stoi(line);
}
