#include "MUL_PQ_P.h"

Algebra* MUL_PQ_P::get(Algebra* firstOperand, Algebra* secondOperand) const {
    auto* firstPoly = dynamic_cast<Polynomial*>(firstOperand);
    auto* secondPoly = dynamic_cast<Rational*>(secondOperand);
    return get(firstPoly, secondPoly);
}

Polynomial* MUL_PQ_P::get(Polynomial* firstOperand, Rational* secondOperand) {
    MUL_QQ_Q mul;
    for (size_t i = 0; i < firstOperand->deg(); i++) {
        Rational t = firstOperand->get(i);
        firstOperand->set(i, *mul.get(&t, secondOperand));
    }
    return firstOperand;
}