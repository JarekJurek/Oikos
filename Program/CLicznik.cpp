//
// Created by grzeg on 23.05.2022.
//

#include "CLicznik.h"

void CLicznik::wyswietlDaneLicznika(){
    cout << "Nazwa: " << nazwa << endl;
    cout << "Numer licznika: " << numerLicznika << endl;
    cout << "Data: " << data << endl;
    cout << "Stan licznika: " << stanLicznika << endl << endl;
}

void CLicznik::wprowadzDaneLicznika() {
    cout << "Podaj nazwe: ";
    cin >> nazwa;
    cout << "Podaj numer licznika: ";
    cin >> numerLicznika;
    cout << "Podaj data: ";
    cin >> data;
    cout << "Podaj stan licznika: ";
    cin >> stanLicznika;
}
