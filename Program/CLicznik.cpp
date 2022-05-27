//
// Created by grzeg on 23.05.2022.
//

#include "CLicznik.h"

void CLicznik::wyswietlDaneLicznika(){
    cout << "Nazwa: " << nazwa << endl;
    cout << "Numer licznika: " << numerLicznika << endl;
    cout << "Data ostatniego odczytu: " << odczyt.outData() << endl;
    cout << "Stan licznika: " << odczyt.outStan() << endl << endl;
}

void CLicznik::wprowadzDaneLicznika() {
    cout << "Podaj nazwe:";
    cin >> nazwa;
    cout << "Podaj numer licznika:";
    cin >> numerLicznika;
    cout << endl;
}
