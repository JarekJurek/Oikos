//
// Created by grzeg on 27.05.2022.
//

#ifndef PROGRAM_CODCZYT_H
#define PROGRAM_CODCZYT_H

#include <iostream>

using namespace std;

class COdczyt {
    double stan;
    string data;
public:
    COdczyt(double = -1, string = "void");

    void podajOdczyt(double, string);

    double outStan();

    string outData();

};


#endif //PROGRAM_CODCZYT_H
