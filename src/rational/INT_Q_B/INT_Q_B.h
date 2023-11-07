#ifndef LONG_OPERATIONS_INT_Q_B_H
#define LONG_OPERATIONS_INT_Q_B_H
#include "../../operation/operation1Rational.h"



class INT_Q_B : Operation1Rational {
public:
    Rational* get(Rational* operationObject) const final;
    bool get_bool(Rational* operationObject) const;
};

#endif //LONG_OPERATIONS_INT_Q_B_H
