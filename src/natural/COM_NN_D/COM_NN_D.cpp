#include "COM_NN_D.h"

Natural* COM_NN_D::get(Natural* firstOperand, Natural* secondOperand) const{
    size_t firstOperandLen = firstOperand->len();
    size_t secondOperandLen = secondOperand->len();
    if(firstOperandLen > secondOperandLen)
        return new Natural("2"); 
    else if(firstOperandLen < secondOperandLen)
        return new Natural("1");
    for(size_t i = firstOperandLen - 1; i >= 0; --i){
        if(firstOperand->get(i) > secondOperand->get(i))
            return new Natural("2");
        else if(firstOperand->get(i) < secondOperand->get(i))
            return new Natural("1");
    }
    return new Natural("0"); // these numbers are equal 
}