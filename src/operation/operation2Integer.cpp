#include "operation2Integer.h"


Algebra *Operation2Integer::get(Algebra *firstOperand, Algebra *secondOperand) const {
    auto* firstInteger = dynamic_cast<Integer*>(firstOperand);
    auto* secondInteger = dynamic_cast<Integer*>(secondOperand);

    return get(firstInteger, secondInteger);
}
