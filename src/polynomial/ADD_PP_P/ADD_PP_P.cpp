#include "ADD_PP_P.h"
#include "../../rational/ADD_QQ_Q/ADD_QQ_Q.h"

Polynomial* ADD_PP_P::get(Polynomial* firstOperand, Polynomial* secondOperand) {
    ADD_QQ_Q add;
    if (secondOperand->deg() >= firstOperand->deg()) { 
        for (size_t i = 0; i < firstOperand->deg(); i++) {
            Rational second = secondOperand->get(i);
            Rational first = firstOperand->get(i);
            secondOperand->set(i, *add.get(&second, &first));
        }
        return secondOperand;
    } else {
        for (size_t i = 0; i < secondOperand->deg(); i++) {
            Rational second = secondOperand->get(i);
            Rational first = firstOperand->get(i);
            firstOperand->set(i, *add.get(&second, &first));
        }
        return firstOperand;
    }
}