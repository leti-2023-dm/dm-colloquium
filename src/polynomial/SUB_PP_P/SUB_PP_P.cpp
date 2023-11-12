#include "SUB_PP_P.h"

#include "../../rational/SUB_QQ_Q/SUB_QQ_Q.h"

Polynomial* SUB_PP_P::get(Polynomial* firstOperand, Polynomial* secondOperand) {
    SUB_QQ_Q sub;
    if (firstOperand->deg() >= secondOperand->deg()) {
        for (size_t i = 0; i < secondOperand->deg(); i++) {
            Rational first = firstOperand->get(i);
            Rational second = secondOperand->get(i);
            firstOperand->set(i, *sub.get(&first, &second));
        }
        return firstOperand;
    }
    else {
        for (size_t i = 0; i < firstOperand->deg(); i++) {
            Rational second = secondOperand->get(i);
            Rational first = firstOperand->get(i);
            secondOperand->set(i, *sub.get(&first, &second));
        }
        Rational zero(Integer("0"));
        for (size_t i = firstOperand->deg(); i < secondOperand->deg(); i++) {
            Rational second = secondOperand->get(i);
            secondOperand->set(i, *sub.get(&zero, &second));
        }
        return secondOperand;
    }
}