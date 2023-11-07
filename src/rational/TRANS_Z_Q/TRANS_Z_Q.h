#ifndef LONG_OPERATIONS_TRANS_Z_Q_H
#define LONG_OPERATIONS_TRANS_Z_Q_H
#include "../../operation/operation1Rational.h"



class TRANS_Z_Q : Operation1Rational {
public:
    Rational* get(Integer* operationObject) const;
};

#endif //LONG_OPERATIONS_TRANS_Z_Q_H
