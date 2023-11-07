#ifndef LONG_OPERATIONS_MOD_NN_N_H
#define LONG_OPERATIONS_MOD_NN_N_H
#include "../../operation/operation2Natural.h"



class MOD_NN_N : Operation2Natural {
public:
    Natural* get(Natural* firstOperand, Natural* secondOperand) const final;
};

#endif //LONG_OPERATIONS_MOD_NN_N_H
