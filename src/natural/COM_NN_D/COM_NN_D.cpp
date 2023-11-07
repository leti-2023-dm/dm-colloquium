#include "COM_NN_D.h"

Natural* COM_NN_D::get(Natural* firstOperand, Natural* secondOperand) const {
    if (firstOperand->len() > secondOperand->len()){
        return new Natural("2");
    }
    else if (firstOperand->len() < secondOperand->len()){
        return new Natural("1");
    }
    else{ // firstOperand->len() == secondOperand->len()
        int i = firstOperand->len() - 1;
        while (firstOperand->get(i) == secondOperand->get(i) && i >= 0){
            i -= 1;
        }
        if (firstOperand->get(i) > secondOperand->get(i))
            return new Natural("2");
        else if (firstOperand->get(i) < secondOperand->get(i))
            return new Natural("1");
        else
            return new Natural("0"); // *firstOperand == *secondOperand
    }
}
