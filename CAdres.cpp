//
// Created by grzeg on 23.05.2022.
//

#include "CAdres.h"

CAdres::CAdres(string q, string w, int x, string e, string r) {
    ulica = q;
    numerDomu = w;
    numerMieszkania = x;
    kodPocztowy = e;
    miasto = r;
}

void CAdres::wprowadzAdresM() {
    cout << "Ulica:";
    cin >> ulica;
    cout << "Numer domu:";
    cin >> numerDomu;
    cout << "Numer mieszkania:";
    cin >> numerMieszkania;
    cout << "Kod pocztowy:";
    cin >> kodPocztowy;
    cout << "Miasto:";
    cin >> miasto;
    cout << endl;
}

void CAdres::wyswietlAdresM() {
    cout << "Ulica: " << ulica << endl;
    cout << "Numer domu: " << numerDomu << endl;
    cout << "Numer mieszkania: " << numerMieszkania << endl;
    cout << "Kod pocztowy: " << kodPocztowy << endl;
    cout << "Miasto: " << miasto << endl;
    cout << endl;
}
