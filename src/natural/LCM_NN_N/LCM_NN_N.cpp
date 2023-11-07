#include "LCM_NN_N.h"


Natural* LMC_NN_N::get(Natural* firstOperand, Natural* secondOperand) const{
    MUL_NN_N mulResult;
    GCF_NN_N gcfResult;
    DIV_NN_N divResult;
    //calculating lcm using formula
    Natural* divisible = mulResult.get(firstOperand, secondOperand);
    Natural* divider = gcfResult.get(firstOperand, secondOperand);
    Natural* result = divResult.get(divisible, divider);
    return new Natural(*result);
}