#ifndef MUL_ND_N_H
#define MUL_ND_N_H

#include "../../operation/operation2Natural.h"

class MUL_ND_N: public Operation2Natural {
    public:
        Natural* get(Natural* firstOperand, Natural* secondOperand) const;
        Natural* get(Natural* firstOperand, uint8_t secondOperand) const;
};

#endif