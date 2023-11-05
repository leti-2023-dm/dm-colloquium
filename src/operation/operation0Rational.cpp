#include "operation0Rational.h"

Algebra *Operation0Rational::get() const {
    return operationObject_;
}

Operation0Rational::~Operation0Rational() {
    delete operationObject_;
}