#ifndef LONG_OPERATIONS_OPERATION0RATIONAL_H
#define LONG_OPERATIONS_OPERATION0RATIONAL_H
#include "operation0.h"
#include "../algebra/rational.h"


class Operation0Rational : Operation0 {
    Rational* operationObject_;
public:
    explicit Operation0Rational(const Rational& operationObject) : operationObject_(new Rational(operationObject)) {};
    [[nodiscard]] Algebra* get() const override;
    ~Operation0Rational() override;
};


#endif //LONG_OPERATIONS_OPERATION0RATIONAL_H
