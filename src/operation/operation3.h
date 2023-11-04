#ifndef LONG_OPERATIONS_OPERATION3_H
#define LONG_OPERATIONS_OPERATION3_H
#include <cstdint>
#include "./operation.h"
#include "../algebra/algebra.h"

class Operation3 : public Operation {
public:
    [[nodiscard]] uint16_t arity() const override;
    [[nodiscard]] virtual Algebra* get(Algebra* firstOperand, Algebra* secondOperand, Algebra* thirdOperand) const = 0;
};


#endif //LONG_OPERATIONS_OPERATION3_H
