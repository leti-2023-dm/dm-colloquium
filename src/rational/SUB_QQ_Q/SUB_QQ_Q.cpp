#include "SUB_QQ_Q.h"

#include "../ADD_QQ_Q/ADD_QQ_Q.h"

Rational* SUB_QQ_Q::get(Rational* firstOperand, Rational* secondOperand) const {
    Integer p2 = secondOperand->getNumerator();
    p2.changeSign();
    ADD_QQ_Q add;
    return add.get(firstOperand, secondOperand);
}