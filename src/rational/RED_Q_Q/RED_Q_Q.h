#ifndef LONG_OPERATIONS_RED_Q_Q_H
#define LONG_OPERATIONS_RED_Q_Q_H
#include "../../operation/operation1Rational.h"



class RED_Q_Q : Operation1Rational {
public:
    Rational* get(Rational* operationObject) const final;
};

#endif //LONG_OPERATIONS_RED_Q_Q_H
