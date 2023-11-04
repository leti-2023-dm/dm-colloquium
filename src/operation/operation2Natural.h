#ifndef LONG_OPERATIONS_OPERATION2NATURAL_H
#define LONG_OPERATIONS_OPERATION2NATURAL_H
#include "operation2.h"
#include "../algebra/natural.h"

class Operation2Natural : Operation2 {
protected:
    virtual Natural* get(Natural* firstOperand, Natural* secondOperand) const = 0;
public:
    [[nodiscard]] Algebra* get(Algebra* firstOperand, Algebra* secondOperand) const override;
};


#endif //LONG_OPERATIONS_OPERATION2NATURAL_H
