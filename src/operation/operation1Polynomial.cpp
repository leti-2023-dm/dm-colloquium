#include "operation1Polynomial.h"

Algebra *Operation1Polynomial::get(Algebra *operationObject) const {
    auto* objectPolynomial = dynamic_cast<Polynomial*>(operationObject);

    return get(objectPolynomial);
}
