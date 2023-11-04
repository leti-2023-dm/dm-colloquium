#ifndef LONG_OPERATIONS_OPERATION1RATIONAL_H
#define LONG_OPERATIONS_OPERATION1RATIONAL_H
#include "operation1.h"
#include "../algebra/rational.h"


class Operation1Rational : Operation1 {
protected:
    virtual Rational* get(Rational* operationObject) const = 0;
public:
    Algebra* get(Algebra* operationObject) const override;
};


#endif //LONG_OPERATIONS_OPERATION1RATIONAL_H
