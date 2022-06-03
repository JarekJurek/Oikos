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

void CAdres::wprowadzAdres(string q, string w, int x, string e, string r) {
    ulica = q;
    numerDomu = w;
    numerMieszkania = x;
    kodPocztowy = e;
    miasto = r;
}

void CAdres::wyswietlAdresM() {
    cout << "Ulica: " << ulica << endl;
    cout << "Numer domu: " << numerDomu << endl;
    cout << "Numer mieszkania: " << numerMieszkania << endl;
    cout << "Kod pocztowy: " << kodPocztowy << endl;
    cout << "Miasto: " << miasto << endl;
    cout << endl;
}



string CAdres::outUlica() {
    return ulica;
}

string CAdres::outNumerDomu() {
    return numerDomu;
}

int CAdres::outNumerMieszkania() {
    return numerMieszkania;
}

string CAdres::outKodPocztowy() {
    return kodPocztowy;
}

string CAdres::outMiasto() {
    return miasto;
}


