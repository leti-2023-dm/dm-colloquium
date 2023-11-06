#ifndef MUL_NK_N_H
#define MUL_NK_N_H

#include "../../operation/operation2Natural.h"
#include "../../algebra/natural.h"

class MUL_Nk_N: public Operation2Natural {
    public:
        Natural* get(Natural* firstOperand, Natural* secondOperand) const;
};

#endif