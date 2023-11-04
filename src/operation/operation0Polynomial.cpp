#include "operation0Polynomial.h"

Algebra *Operation0Polynomial::get() const {
    return operationObject_;
}

Operation0Polynomial::~Operation0Polynomial() {
    delete operationObject_;
}
