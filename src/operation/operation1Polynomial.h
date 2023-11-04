#ifndef LONG_OPERATIONS_OPERATION1POLYNOMIAL_H
#define LONG_OPERATIONS_OPERATION1POLYNOMIAL_H
#include "operation1.h"
#include "../algebra/polynomial.h"

class Operation1Polynomial : Operation1 {
protected:
    virtual Polynomial* get(Polynomial* operationObject) const = 0;
public:
    Algebra* get(Algebra* operationObject) const override;
};


#endif //LONG_OPERATIONS_OPERATION1POLYNOMIAL_H
