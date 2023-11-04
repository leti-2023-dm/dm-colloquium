#include "operation2Polynomial.h"

Algebra* Operation2Polynomial::get(Algebra* firstOperand, Algebra* secondOperand) const {
    auto* firstPoly = dynamic_cast<Polynomial*>(firstOperand);
    auto* secondPoly = dynamic_cast<Polynomial*>(secondOperand);

    return get(firstPoly, secondPoly);
}
