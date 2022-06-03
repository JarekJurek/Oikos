//
// Created by grzeg on 23.05.2022.
//

#include "CMieszkanie.h"

CMieszkanie::CMieszkanie(double x, double y) {
    wartosc = x;
    czynsz = y;
}

void CMieszkanie::wprowadzDaneM(double x, double y) {
    wartosc = x;
    czynsz = y;

//    lprad.wprowadzDaneLicznika();
//    lprad.podajStanLicznika();
//    lgaz.wprowadzDaneLicznika();
//    lgaz.podajStanLicznika();
//    lwodaZimna.wprowadzDaneLicznika();
//    lwodaZimna.podajStanLicznika();
//    lwodaCiepla.wprowadzDaneLicznika();
//    lwodaCiepla.podajStanLicznika();

}

void CMieszkanie::wyswietlDaneM() {
    cout << "Wartosc: " << wartosc << endl;
    cout << "Czynsz: " << czynsz << endl;
    adres.wyswietlAdresM();
    taryfa.wyswietlTaryfy();
    lprad.wyswietlDaneLicznika();
//    lgaz.wyswietlDaneLicznika();
//    lwodaZimna.wyswietlDaneLicznika();
//    lwodaCiepla.wyswietlDaneLicznika();
    cout << endl;
}

double CMieszkanie::outCzynsz() {
    return czynsz;
}

double CMieszkanie::outWartosc() {
    return wartosc;
}

void CMieszkanie::zapiszMieszkanie(string path) {
    ofstream plik(path);

    if (!plik.good()) {
        cout << "Problem z folderem mieszkaniowym" << endl;
        return;
    }

    plik << to_string(wartosc) << endl;
    plik << to_string(czynsz) << endl;

    // adres
    plik << adres.outUlica() << endl;
    plik << adres.outNumerDomu() << endl;
    plik << to_string(adres.outNumerMieszkania()) << endl;
    plik << adres.outKodPocztowy() << endl;
    plik << adres.outMiasto() << endl;

    // taryfa
    plik << to_string(taryfa.outTaryfaWodaCiepla()) << endl;
    plik << to_string(taryfa.outTaryfaWodaZimna()) << endl;
    plik << to_string(taryfa.outTaryfaGaz()) << endl;
    plik << to_string(taryfa.outTaryfaPrad()) << endl;
    plik << to_string(taryfa.outTaryfaNajem()) << endl;

    // licznik pradu
    plik << lprad.outNumerLicznika() << endl;
    plik << lgaz.outNumerLicznika() << endl;
    plik << lwodaCiepla.outNumerLicznika() << endl;
    plik << lwodaZimna.outNumerLicznika() << endl;

    plik.close();
    return;
}

void CMieszkanie::wczytajMieszkanie(string path) {
    ifstream plik(path);

    if (!plik.good()) {
        cout << "Problem z folderem mieszkaniowym" << endl;
        return;
    }

    string line;
    getline(plik, line);
    wartosc = stod(line);

    getline(plik, line);
    czynsz = stod(line);

    string listaDane[5];
    int i;
    for (i = 0; i < 5; i++) {
        getline(plik, listaDane[i]);
    }
    adres.wprowadzAdres(listaDane[0], listaDane[1], stoi(listaDane[2]),
                        listaDane[3], listaDane[4]);

    for (i = 0; i < 5; i++) {
        getline(plik, listaDane[i]);
    }
    taryfa.wprowadzTaryfy(stof(listaDane[0]), stof(listaDane[1]), stof(listaDane[2]),
                         stof(listaDane[3]), stof(listaDane[4]));

    getline(plik, line);
    lprad.wczytajDaneLicznika(line);
    getline(plik, line);
    lgaz.wczytajDaneLicznika(line);
    getline(plik, line);
    lwodaCiepla.wczytajDaneLicznika(line);
    getline(plik, line);
    lwodaZimna.wczytajDaneLicznika(line);

    plik.close();
    return;
}
