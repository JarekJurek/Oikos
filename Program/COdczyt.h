//
// Created by grzeg on 27.05.2022.
//

#ifndef PROGRAM_CODCZYT_H
#define PROGRAM_CODCZYT_H

#include <iostream>

using namespace std;

class COdczyt {
    float stan;
    string data;
public:
    COdczyt(float = -1, string = "void");
    void podajOdczyt(float, string);
    float outStan();
    string outData();

};


#endif //PROGRAM_CODCZYT_H
