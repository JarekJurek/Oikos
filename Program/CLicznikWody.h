//
// Created by grzeg on 23.05.2022.
//

#ifndef PROGRAM_CLICZNIKWODY_H
#define PROGRAM_CLICZNIKWODY_H

#include "CLicznik.h"

class CLicznikWody :public CLicznik{
public:
    CLicznikWody(string = "unsigned", long long = -1,
                 string = "99.99.1999", float = -1.0);
    void podajStanLicznika() override;
};


#endif //PROGRAM_CLICZNIKWODY_H
