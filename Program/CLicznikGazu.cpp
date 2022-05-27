//
// Created by grzeg on 23.05.2022.
//

#include "CLicznikGazu.h"
CLicznikGazu::CLicznikGazu(string n, long long nr, float x) {
    nazwa = n;
    numerLicznika = nr;
    przelicznik = x;
}

float CLicznikGazu::przeliczJednostki(float x) {
    float y = x * przelicznik;
    return y;
}

void CLicznikGazu::podajStanLicznika() {
    string s;
    float stanMetry;
    cout << "Podaj stan licznika gazu nr: " << numerLicznika << endl;
    cin >> stanMetry;
    cout << "Podaj date: " << endl;
    cin >> s;
    odczyt.podajOdczyt(przeliczJednostki(stanMetry), s);
    cout << "Zapisano" << endl << endl;

}
