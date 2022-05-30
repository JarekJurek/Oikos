//
// Created by grzeg on 23.05.2022.
//

#include "CMieszkanie.h"

CMieszkanie::CMieszkanie(string s, float x, float y) {
    nazwa = s;
    wartosc = x;
    czynsz = y;
}

void CMieszkanie::wprowadzDaneM() {
    cout << "Nazwa:";
    cin >> nazwa;
    cout << "Wartosc:";
    cin >> wartosc;
    cout << "Czynsz:";
    cin >> czynsz;
    adres.wprowadzAdresM();
    cout << endl;
}

void CMieszkanie::wyswietlDaneM() {
    cout << "Nazwa: " << nazwa << endl;
    cout << "Wartosc: " << wartosc << endl;
    cout << "Czynsz: " << czynsz << endl;
    adres.wyswietlAdresM();
    cout << endl;
}


