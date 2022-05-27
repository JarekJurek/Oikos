//
// Created by grzeg on 23.05.2022.
//

#include "CLicznikWody.h"

CLicznikWody::CLicznikWody(string s, long long x, string d, float y) {
    nazwa = s;
    numerLicznika = x;
    data = d;
    stanLicznika = y;
}

void CLicznikWody::podajStanLicznika() {
    cout << "Podaj stan licznika wody nr: "
         << numerLicznika << endl;
    cin >> stanLicznika;
    cout << "Zapisano" << endl;
}