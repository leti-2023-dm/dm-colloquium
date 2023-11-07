#include "ADD_QQ_Q.h"

#include "../../natural/COM_NN_D/COM_NN_D.h"
#include "../../natural/MUL_NN_N/MUL_NN_N.h"
#include "../../integer/ADD_ZZ_Z/ADD_ZZ_Z.h"
#include "../../integer/MUL_ZZ_Z/MUL_ZZ_Z.h"
#include "../RED_Q_Q/RED_Q_Q.h"

Rational* ADD_QQ_Q::get(Rational* firstOperand, Rational* secondOperand) const {
    RED_Q_Q red;
    Rational* redFirst = red.get(firstOperand);
    Rational* redSecond = red.get(secondOperand);

    Integer p1 = redFirst->getNumerator();
    Integer p2 = redSecond->getNumerator();
    Natural q1 = redFirst->getDenominator();
    Natural q2 = redSecond->getDenominator();
    Integer q1_I = Integer(q2, false);
    Integer q2_I = Integer(q1, false);

    COM_NN_D com;
    MUL_NN_N mul_N;
    ADD_ZZ_Z add;
    MUL_ZZ_Z mul_Z;
    if (com.get(&q1, &q2))
    {
        Integer newNumerator = *add.get(mul_Z(&p1, &q2_I), mul_Z(&p2, &q1_I));
        Natural newDenominator = *mul_N(&q1, &q2);
        return new Rational(newNumerator, newDenominator);
    }
    else
    {
        return new Rational(*add.get(&p1, &p2), q1);
    }
}