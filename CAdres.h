//
// Created by grzeg on 23.05.2022.
//

#ifndef PROGRAM_CADRES_H
#define PROGRAM_CADRES_H

#include <iostream>
using namespace std;

class CAdres {
    string ulica;
    string numerDomu;
    int numerMieszkania;
    string kodPocztowy;
    string miasto;
public:
    CAdres(string = "void", string = "void", int = -1, string = "void", string = "void");
    void wprowadzAdresM();
    void wyswietlAdresM();
};




#endif //PROGRAM_CADRES_H
