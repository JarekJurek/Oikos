//
// Created by grzeg on 23.05.2022.
//

#include "CLicznikPradu.h"

CLicznikPradu::CLicznikPradu(string s , long long x, string d, float y) {
    nazwa = s;
    numerLicznika = x;
//    data = d;
//    stanLicznika = y;
}

void CLicznikPradu::podajStanLicznika() {
    cout << "Podaj stan licznika prądu nr: "
         << numerLicznika << endl;
//    cin >> stanLicznika;
    cout << "Zapisano" << endl;
}
