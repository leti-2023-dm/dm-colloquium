#include "operation3Polynomial.h"

Algebra* Operation3Polynomial::get(Algebra* firstOperand, Algebra* secondOperand, Algebra* thirdOperand) const {
    auto* firstPoly = dynamic_cast<Polynomial*>(firstOperand);
    auto* secondPoly = dynamic_cast<Polynomial*>(secondOperand);
    auto* thirdPoly = dynamic_cast<Polynomial*>(thirdOperand);

    return get(firstPoly, secondPoly, thirdPoly);
}
