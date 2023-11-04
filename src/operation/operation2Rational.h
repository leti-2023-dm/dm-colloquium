#ifndef LONG_OPERATIONS_OPERATION2RATIONAL_H
#define LONG_OPERATIONS_OPERATION2RATIONAL_H
#include "operation2.h"
#include "../algebra/rational.h"


class Operation2Rational : Operation2 {
protected:
    virtual Rational* get(Rational* firstOperand, Rational* secondOperand) const = 0;
public:
    [[nodiscard]] Algebra* get(Algebra* firstOperand, Algebra* secondOperand) const override;
};


#endif //LONG_OPERATIONS_OPERATION2RATIONAL_H
