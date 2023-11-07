#ifndef LONG_OPERATIONS_COM_NN_D_H
#define LONG_OPERATIONS_COM_NN_D_H
#include "../../operation/operation2Natural.h"



class COM_NN_D : Operation2Natural {
public:
    Natural* get(Natural* firstOperand, Natural* secondOperand) const final;
};

#endif //LONG_OPERATIONS_COM_NN_D_H
