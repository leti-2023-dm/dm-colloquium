#include "DIV_QQ_Q.h"

#include "../MUL_QQ_Q/MUL_QQ_Q.h"

Rational* DIV_QQ_Q::get(Rational* firstOperand, Rational* secondOperand) const {
    Integer p2 = secondOperand->getNumerator();
    bool sign = p2.hasSign();
    Natural q2 = secondOperand->getDenominator();
    Rational newSecond(Integer(q2, sign), p2.getNatural());

    MUL_QQ_Q mul;
    return mul.get(firstOperand, &newSecond);
}
