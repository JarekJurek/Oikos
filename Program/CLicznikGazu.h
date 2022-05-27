//
// Created by grzeg on 23.05.2022.
//

#ifndef PROGRAM_CLICZNIKGAZU_H
#define PROGRAM_CLICZNIKGAZU_H

#include "CLicznik.h"

class CLicznikGazu :public CLicznik{
    float przelicznik;
public:
    CLicznikGazu(string = "unsigned", long long = -1, float = 10.972);
    float przeliczJednostki(float);
    void podajStanLicznika() override;

};


#endif //PROGRAM_CLICZNIKGAZU_H
