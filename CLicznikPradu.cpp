//
// Created by grzeg on 23.05.2022.
//

#include "CLicznikPradu.h"

//void CLicznikPradu::podajStanLicznika() {
//    string s;
//    float x;
//    cout << "Podaj stan licznika pradu nr " << outNumerLicznika() << ".:";
//    cin >> x;
//    cout << "Podaj date:";
//    cin >> s;
//    odczyt.podajOdczyt(x, s);
//    cout << "Zapisano" << endl << endl;
//}

void CLicznikPradu::podajDaneLicznika(string s, double x) {
    numerLicznika = s;
    stanLicznika = x;
}

string CLicznikPradu::outNumerLicznika() {
    return numerLicznika;
}

double CLicznikPradu::outStanLicznika() {
    return stanLicznika;
}
