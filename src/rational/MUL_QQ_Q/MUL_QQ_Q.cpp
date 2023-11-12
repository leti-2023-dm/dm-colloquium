#include "MUL_QQ_Q.h"

#include "../../natural/MUL_NN_N/MUL_NN_N.h"
#include "../../integer/MUL_ZZ_Z/MUL_ZZ_Z.h"

Rational* MUL_QQ_Q::get(Rational* firstOperand, Rational* secondOperand) const {
    Integer p1 = firstOperand->getNumerator();
    Integer p2 = secondOperand->getNumerator();
    Natural q1 = firstOperand->getDenominator();
    Natural q2 = secondOperand->getDenominator();

    MUL_NN_N mul_N;
    MUL_ZZ_Z mul_Z;
    Integer newNumerator = *mul_Z(&p1, &p2);
    Natural newDenominator = *mul_N(&q1, &q2);
    return new Rational(newNumerator, newDenominator);
}