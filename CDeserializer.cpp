//
// Created by grzeg on 03.06.2022.
//

#include "CDeserializer.h"

void CDeserializer::wczytajMieszkanie(CMieszkanie *m) {
    string path = R"(C:\Users\grzeg\Documents\Studia\Semestr 6\PJC\Oikos\mieszkania.txt)";
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

    // wczytywanie danych taryfy
    for (i = 0; i < 5; i++) {
        getline(plik, listaDane[i]);
    }
    m->taryfa.wprowadzTaryfy(stof(listaDane[0]), stof(listaDane[1]), stof(listaDane[2]),
                          stof(listaDane[3]), stof(listaDane[4]));

//    getline(plik, line);
//    lprad.wczytajDaneLicznika(line);
//    getline(plik, line);
//    lgaz.wczytajDaneLicznika(line);
//    getline(plik, line);
//    lwodaCiepla.wczytajDaneLicznika(line);
//    getline(plik, line);
//    lwodaZimna.wczytajDaneLicznika(line);

    plik.close();
    return;
}
