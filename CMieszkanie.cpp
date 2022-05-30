//
// Created by grzeg on 23.05.2022.
//

#include "CMieszkanie.h"

CMieszkanie::CMieszkanie(float x, float y) {
    wartosc = x;
    czynsz = y;
}

void CMieszkanie::wprowadzDaneM() {
    cout << "Dodawanie mieszkania" << endl;
    adres.wprowadzAdresM();
    cout << "Wartosc:";
    cin >> wartosc;
    cout << "Czynsz:";
    cin >> czynsz;
    taryfa.wprowadzTaryfy();
    lprad.wprowadzDaneLicznika();
    lprad.podajStanLicznika();
//    lgaz.wprowadzDaneLicznika();
//    lgaz.podajStanLicznika();
//    lwodaZimna.wprowadzDaneLicznika();
//    lwodaZimna.podajStanLicznika();
//    lwodaCiepla.wprowadzDaneLicznika();
//    lwodaCiepla.podajStanLicznika();
    cout << endl;
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

float CMieszkanie::outCzynsz() {
    return czynsz;
}


