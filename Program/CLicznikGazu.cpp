//
// Created by grzeg on 23.05.2022.
//

#include "CLicznikGazu.h"
CLicznikGazu::CLicznikGazu(string n, long long nr,
                           string d, float stan,
                           float sM, float x){
    nazwa = n;
    numerLicznika = nr;
    data = d;
    stanLicznika = stan;
    stanMetry = sM;
    przelicznik = x;
}

void CLicznikGazu::przeliczJednostki() {
    stanLicznika = stanMetry * przelicznik;
}

void CLicznikGazu::podajStanLicznika() {
    cout << "Podaj stan licznika gazu nr: "
    << numerLicznika << endl;
    cin >> stanMetry;
    cout << "Zapisano" << endl;
    przeliczJednostki();
}
