#include "operation1Rational.h"

Algebra *Operation1Rational::get(Algebra *operationObject) const {
    auto* objectRational = dynamic_cast<Rational*>(operationObject);

    return get(objectRational);
}
