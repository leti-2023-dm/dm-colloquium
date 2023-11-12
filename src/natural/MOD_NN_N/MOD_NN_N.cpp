#include "MOD_NN_N.h"

#include "../DIV_NN_N/DIV_NN_N.h"
#include "../SUB_NDN_N/SUB_NDN_N.h"

Natural* MOD_NN_N::get(Natural* firstOperand, Natural* secondOperand) const {
    DIV_NN_N div;
    Natural* quotient = div.get(firstOperand, secondOperand);
    SUB_NDN_N sub(quotient);
    Natural* subResult = sub.get(firstOperand, secondOperand);
    return subResult;
}
