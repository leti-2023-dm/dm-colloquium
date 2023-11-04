#include "operation3Rational.h"


Algebra* Operation3Rational::get(Algebra* firstOperand, Algebra* secondOperand, Algebra* thirdOperand) const {
    auto* firstRational = dynamic_cast<Rational*>(firstOperand);
    auto* secondRational = dynamic_cast<Rational*>(secondOperand);
    auto* thirdRational = dynamic_cast<Rational*>(thirdOperand);

    return get(firstRational, secondRational, thirdRational);
}
