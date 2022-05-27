//
// Created by grzeg on 23.05.2022.
//

#ifndef PROGRAM_CLICZNIKGAZU_H
#define PROGRAM_CLICZNIKGAZU_H

#include "CLicznik.h"

class CLicznikGazu :public CLicznik{
    float stanMetry;
    float przelicznik;
public:
    CLicznikGazu(string = "unsigned", long long = -1,
                 string = "data", float = -1.0, float = -1,
                 float = 10.972);
    void przeliczJednostki();
    void podajStanLicznika() override;

};


#endif //PROGRAM_CLICZNIKGAZU_H
