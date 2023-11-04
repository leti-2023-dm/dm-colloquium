#ifndef LONG_OPERATIONS_OPERATION3NATURAL_H
#define LONG_OPERATIONS_OPERATION3NATURAL_H
#include "operation3.h"
#include "../algebra/natural.h"

class Operation3Natural : Operation3 {
protected:
    [[nodiscard]] virtual Natural* get(Natural* firstOperand, Natural* secondOperand, Natural* thirdOperand) const = 0;

public:
    [[nodiscard]] Algebra* get(Algebra* firstOperand, Algebra* secondOperand, Algebra* thirdOperand) const override;
};


#endif //LONG_OPERATIONS_OPERATION3NATURAL_H
