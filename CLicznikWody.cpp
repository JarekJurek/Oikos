//
// Created by grzeg on 23.05.2022.
//

#include "CLicznikWody.h"

void CLicznikWody::podajStanLicznika() {
    string s;
    float x;
    cout << "Podaj stan licznika wody nr " << outNumerLicznika() << ".:";
    cin >> x;
    cout << "Podaj date:";
    cin >> s;
    odczyt.podajOdczyt(x, s);
    cout << "Zapisano" << endl << endl;
}