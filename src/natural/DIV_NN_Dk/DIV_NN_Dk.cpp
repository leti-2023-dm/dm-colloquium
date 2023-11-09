#include "DIV_NN_Dk.h"


Natural* DIV_NN_Dk::get(Natural* firstOperand, Natural* secondOperand) const{
    size_t firstOperandLen = firstOperand->len();
    size_t secondOperandLen = secondOperand->len();
    Natural firstDigit("1");
    size_t k;
    if(firstOperandLen < secondOperandLen){
        return new Natural("0"); // the second operand is supposed to be smaller than the first
    } else if(COM_NN_D().get(firstOperand, secondOperand)->get(0) == 0) {
        return new Natural("1"); // the operands are equal
    } else {
        bool flag = false;
        Natural tmp(*secondOperand); // copying secondOperand to another variable, so it remains unchanged
        Natural* divider = &tmp;                    
        for(k = firstOperandLen - 1; k >= 0; --k){
            Natural divisible(*firstOperand, k, firstOperandLen); // adding another digit
            while(COM_NN_D().get(&divisible, divider)->get(0) == 2){
                divider = MUL_ND_N().get(&divider, &firstDigit);
                firstDigit.set(0, firstDigit.get(0) + 1);
                flag = true;
            }
            if(flag){ // found a firstDigit
                if(COM_NN_D().get(&divisible, divider)->get(0) == 1) // confirming that we got an actual first digit
                    firstDigit.set(0, firstDigit.get(0) - 1);
                break;
            }
        }
    }
    std::vector<uint8_t> p = {static_cast<uint8_t>(k)};
    Natural power(p);
    Natural* result = MUL_Nk_N().get(&firstDigit, &power);
    return new Natural(*result);
}