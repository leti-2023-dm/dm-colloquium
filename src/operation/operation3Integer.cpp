#include "operation3Integer.h"

Algebra *Operation3Integer::get(Algebra *firstOperand, Algebra *secondOperand, Algebra *thirdOperand) const {
    auto* firstInteger = dynamic_cast<Integer*>(firstOperand);
    auto* secondInteger = dynamic_cast<Integer*>(secondOperand);
    auto* thirdInteger = dynamic_cast<Integer*>(thirdOperand);

    return get(firstInteger, secondInteger, thirdInteger);
}
