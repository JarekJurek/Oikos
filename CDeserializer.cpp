//
// Created by grzeg on 03.06.2022.
//

#include "CDeserializer.h"

void CDeserializer::wczytajMieszkanie(CMieszkanie *m, int nrMieszkania) {
//    string path = "C:\\Users\\grzeg\\Documents\\Studia\\Semestr 6\\PJC\\Oikos\\Mieszkania\\";
//    path += "Mieszkanie" + to_string(nrMieszkania) + "\\Mieszkanie" + to_string(nrMieszkania) +  ".txt";

    string path = "C:\\Users\\grzeg\\Documents\\Studia\\Semestr 6\\PJC\\Oikos\\";
    path += "Mieszkanie" + to_string(nrMieszkania) + ".txt";
    ifstream plik(path);

    if (!plik.good()) {
        cout << "Problem z folderem mieszkaniowym" << endl;
        return;
    }

    // wczytywanie danych adresu
    int rozmiarDanych = 5;
    string listaDane[rozmiarDanych];
    int i;
    for (i = 0; i < rozmiarDanych; i++) {
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
//    string path = "C:\\Users\\grzeg\\Documents\\Studia\\Semestr 6\\PJC\\Oikos\\Mieszkania\\iloscMieszkan.txt";
    string path = "C:\\Users\\grzeg\\Documents\\Studia\\Semestr 6\\PJC\\Oikos\\iloscMieszkan.txt";

    ifstream plik(path);

    if (!plik.good()) {
        cout << "Problem z folderem ilosc mieszkan" << endl;
        return -1;
    }

    string line;
    getline(plik, line);
    return stoi(line);
}

void CDeserializer::wczytajLicznik(CLicznik *&l, int nrLicznika, int nrMieszkania) {
//    string path = "C:\\Users\\grzeg\\Documents\\Studia\\Semestr 6\\PJC\\Oikos\\Mieszkania\\";
//    path += "Mieszkanie" + to_string(nrMieszkania) + "\\Liczniki" + "\\Licznik" + to_string(nrLicznika) + ".txt";
    string path = "C:\\Users\\grzeg\\Documents\\Studia\\Semestr 6\\PJC\\Oikos\\";
    path += "Mieszkanie" + to_string(nrMieszkania) + "Licznik" + to_string(nrLicznika) + ".txt";
    ifstream plik(path);

    if (!plik.good()) {
        cout << "Problem z folderem licznikowym" << endl;
        return;
    }

    string typ;
    getline(plik, typ);
    int rozmiarDanych = 3;
    string listaDane[rozmiarDanych];
    int i;
    if (typ == "pradu") {
        CLicznikPradu *Lp = new CLicznikPradu;
        l = Lp;
        for (i = 0; i < rozmiarDanych; i++) {
            getline(plik, listaDane[i]);
        }
        l->podajDaneLicznika(listaDane[0]);
        l->podajTaryfy(stod(listaDane[1]), stod(listaDane[2]));
    } else if (typ == "wody") {
//                    CLicznikWody Lw;
//                    l = &Lw;
    } else if (typ == "gazu") {
//                    CLicznikGazu Lg;
//                    l = &Lg;
    }
    plik.close();
    return;
}

int CDeserializer::podajIloscLicznikow(int nrMieszkania) {
//    string path = "C:\\Users\\grzeg\\Documents\\Studia\\Semestr 6\\PJC\\Oikos\\Liczniki\\iloscLicznikow.txt";
    string path = "C:\\Users\\grzeg\\Documents\\Studia\\Semestr 6\\PJC\\Oikos\\";
    path += "iloscLicznikowMieszkanie" + to_string(nrMieszkania) + ".txt";
    ifstream plik(path);

    if (!plik.good()) {
        cout << "Problem z folderem mieszkaniowym" << endl;
        return -1;
    }

    string line;
    getline(plik, line);
    return stoi(line);
}

void CDeserializer::wczytajOdczyt(COdczyt *o, int nrOdczytu, int nrLicznika, int nrMieszkania) {
//    if(nrOdczytu == -1){
//
//    }

    string path = "C:\\Users\\grzeg\\Documents\\Studia\\Semestr 6\\PJC\\Oikos\\";
    path += "Mieszkanie" + to_string(nrMieszkania) + "Licznik" + to_string(nrLicznika) + "Odczyt" + to_string(nrOdczytu) + ".txt";
    ifstream plik(path);

    if (!plik.good()) {
        cout << "odczyt wczytajOdczyt dser" << endl;
        return;
    }

    // wczytywanie danych adresu
    int rozmiarDanych = 2;
    string listaDane[rozmiarDanych];
    int i;
    for (i = 0; i < rozmiarDanych; i++) {
        getline(plik, listaDane[i]);
    }
    o->podajOdczyt(stod(listaDane[0]), listaDane[1]);

    plik.close();
    return;
}

int CDeserializer::podajIloscOdczytow(int nrLicznika, int nrMieszkania) {
    string path = "C:\\Users\\grzeg\\Documents\\Studia\\Semestr 6\\PJC\\Oikos\\";
    path += "iloscOdczytowMieszkanie" + to_string(nrMieszkania) + "Licznik" + to_string(nrLicznika) + ".txt";
    ifstream plik(path);

    if (!plik.good()) {
        cout << "odczyt podajIloscOdczytow dser" << endl;
        return -1;
    }

    string line;
    getline(plik, line);
    return stoi(line);
}


