#include "operation2Natural.h"

Algebra *Operation2Natural::get(Algebra *firstOperand, Algebra *secondOperand) const {
    auto* firstNatural = dynamic_cast<Natural*>(firstOperand);
    auto* secondNatural = dynamic_cast<Natural*>(secondOperand);

    return get(firstNatural, secondNatural);
}