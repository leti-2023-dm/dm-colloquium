#ifndef LONG_OPERATIONS_OPERATION3RATIONAL_H
#define LONG_OPERATIONS_OPERATION3RATIONAL_H
#include "operation3.h"
#include "../algebra/rational.h"

class Operation3Rational : Operation3 {
protected:
    [[nodiscard]] virtual Rational* get(Rational* firstOperand, Rational* secondOperand, Rational* thirdOperand) const = 0;

public:
    [[nodiscard]] Algebra* get(Algebra* firstOperand, Algebra* secondOperand, Algebra* thirdOperand) const override;
};


#endif //LONG_OPERATIONS_OPERATION3RATIONAL_H
