#ifndef LONG_OPERATIONS_OPERATION0POLYNOMIAL_H
#define LONG_OPERATIONS_OPERATION0POLYNOMIAL_H
#include "../algebra/polynomial.h"
#include "operation0.h"


class Operation0Polynomial : Operation0 {
    Polynomial* operationObject_;
public:
    explicit Operation0Polynomial(const Polynomial& operationObject) : operationObject_(new Polynomial(operationObject)) {};
    [[nodiscard]] Algebra* get() const override;
    ~Operation0Polynomial() override;
};


#endif //LONG_OPERATIONS_OPERATION0POLYNOMIAL_H
