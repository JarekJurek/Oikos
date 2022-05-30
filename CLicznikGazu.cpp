//
// Created by grzeg on 23.05.2022.
//

#include "CLicznikGazu.h"

CLicznikGazu::CLicznikGazu(float x) {
    przelicznik = x;
}

float CLicznikGazu::przeliczJednostki(float x) {
    float y = x * przelicznik;
    return y;
}

void CLicznikGazu::podajStanLicznika() {
    string s;
    float stanMetry;
    cout << "Podaj stan licznika gazu nr " << outNumerLicznika() << ".:";
    cin >> stanMetry;
    cout << "Podaj date:";
    cin >> s;
    odczyt.podajOdczyt(przeliczJednostki(stanMetry), s);
    cout << "Zapisano" << endl;

}
