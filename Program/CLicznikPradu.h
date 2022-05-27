//
// Created by grzeg on 23.05.2022.
//

#ifndef PROGRAM_CLICZNIKPRADU_H
#define PROGRAM_CLICZNIKPRADU_H

#include "CLicznik.h"

class CLicznikPradu :public CLicznik {
public:
    CLicznikPradu(string = "unsigned", long long = -1,
                  string = "99.99.1999", float = -1.0);
    void podajStanLicznika() override;
};


#endif //PROGRAM_CLICZNIKPRADU_H
