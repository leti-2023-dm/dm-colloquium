#include "operation2Rational.h"

Algebra* Operation2Rational::get(Algebra* firstOperand, Algebra* secondOperand) const {
    auto* firstRational = dynamic_cast<Rational*>(firstOperand);
    auto* secondRational = dynamic_cast<Rational*>(secondOperand);

    return get(firstRational, secondRational);
}
