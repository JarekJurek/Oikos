//
// Created by grzeg on 23.05.2022.
//

#include "CLicznikPradu.h"

void CLicznikPradu::podajStanLicznika() {
    string s;
    float x;
    cout << "Podaj stan licznika pradu '" << outNazwa() <<
         "', nr. " << outNumerLicznika() << ". :";
    cin >> x;
    cout << "Podaj date:";
    cin >> s;
    odczyt.podajOdczyt(x, s);
    cout << "Zapisano" << endl << endl;
}
