#ifndef LONG_OPERATIONS_OPERATION2POLYNOMIAL_H
#define LONG_OPERATIONS_OPERATION2POLYNOMIAL_H
#include "operation2.h"
#include "../algebra/polynomial.h"

class Operation2Polynomial : Operation2 {
protected:
    virtual Polynomial* get(Polynomial* firstOperand, Polynomial* secondOperand) const = 0;

public:
    [[nodiscard]] Algebra* get(Algebra* firstOperand, Algebra* secondOperand) const override;
};


#endif //LONG_OPERATIONS_OPERATION2POLYNOMIAL_H
