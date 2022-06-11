//
// Created by grzeg on 06.06.2022.
//

#ifndef PROGRAM_CSERIALIZERABSTR_H
#define PROGRAM_CSERIALIZERABSTR_H

#include "CMieszkanie.h"

class CSerializerAbstr {
public:
    virtual void zapiszMieszkanie(CMieszkanie *m, int nrMieszkania) = 0;
    virtual void usunMieszkanie(int nrMieszkania) = 0;
};


#endif //PROGRAM_CSERIALIZERABSTR_H
