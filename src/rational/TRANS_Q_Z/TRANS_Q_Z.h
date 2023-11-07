#ifndef LONG_OPERATIONS_TRANS_Q_Z_H
#define LONG_OPERATIONS_TRANS_Q_Z_H
#include "../../operation/operation1Rational.h"



class TRANS_Q_Z : Operation1Rational {
public:
    // Rational* get(Rational* operationObject) const final;
    // There I can't change returning meaning, so...
    Integer* get_Z(Rational* operationObject) const;
};

#endif //LONG_OPERATIONS_TRANS_Q_Z_H
