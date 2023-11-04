#ifndef LONG_OPERATIONS_OPERATION3POLYNOMIAL_H
#define LONG_OPERATIONS_OPERATION3POLYNOMIAL_H
#include "operation3.h"
#include "../algebra/polynomial.h"

class Operation3Polynomial : Operation3 {
protected:
    [[nodiscard]] virtual Polynomial* get(Polynomial* firstOperand, Polynomial* secondOperand, Polynomial* thirdOperand) const = 0;

public:
    [[nodiscard]] Algebra* get(Algebra* firstOperand, Algebra* secondOperand, Algebra* thirdOperand) const override;
};


#endif //LONG_OPERATIONS_OPERATION3POLYNOMIAL_H
