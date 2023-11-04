#include "operation3Natural.h"

Algebra* Operation3Natural::get(Algebra* firstOperand, Algebra* secondOperand, Algebra* thirdOperand) const {
    auto* firstNatural = dynamic_cast<Natural*>(firstOperand);
    auto* secondNatural = dynamic_cast<Natural*>(secondOperand);
    auto* thirdNatural = dynamic_cast<Natural*>(thirdOperand);

    return get(firstNatural, secondNatural, thirdNatural);
}
