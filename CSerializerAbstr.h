//
// Created by grzeg on 06.06.2022.
//

#ifndef PROGRAM_CSERIALIZERABSTR_H
#define PROGRAM_CSERIALIZERABSTR_H

#include "CMieszkanie.h"

class CSerializerAbstr {
public:
    virtual void zapiszMieszkanie(CMieszkanie *m);
};


#endif //PROGRAM_CSERIALIZERABSTR_H
