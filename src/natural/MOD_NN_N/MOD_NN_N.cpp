#include "MOD_NN_N.h"

Natural* MOD_NN_N::get(Natural* firstOperand, Natural* secondOperand) const {
    DIV_NN_N divResult;
    Natural* quotient = divResult.get(firstOperand, secondOperand);
    SUB_NDN_N sub(quotient);
    Natural* subResult = sub.get(firstOperand, secondOperand);
    return subResult;
}
