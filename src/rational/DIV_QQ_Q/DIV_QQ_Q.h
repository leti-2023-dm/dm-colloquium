#ifndef LONG_OPERATIONS_DIV_QQ_Q_H
#define LONG_OPERATIONS_DIV_QQ_Q_H
#include "../../operation/operation2Rational.h"



class DIV_QQ_Q : Operation2Rational {
public:
    Rational* get(Rational* firstOperand, Rational* secondOperand) const final;
};

#endif //LONG_OPERATIONS_DIV_QQ_Q_H
