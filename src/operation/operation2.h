#ifndef LONG_OPERATIONS_OPERATION2_H
#define LONG_OPERATIONS_OPERATION2_H
#include "operation.h"
#include "../algebra/algebra.h"

class Operation2 : Operation {
public:
    [[nodiscard]] uint16_t arity() const override;
    [[nodiscard]] virtual Algebra* get(Algebra* firstOperand, Algebra* secondOperand) const = 0;
};


#endif //LONG_OPERATIONS_OPERATION2_H
