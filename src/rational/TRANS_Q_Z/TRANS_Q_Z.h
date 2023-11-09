#ifndef LONG_OPERATIONS_TRANS_Q_Z_H
#define LONG_OPERATIONS_TRANS_Q_Z_H
#include "../../operation/operation1Rational.h"



class TRANS_Q_Z : Operation1 {
public:
    Rational* get(Integer* operationObject) const;
    Algebra* get(Algebra* operationObject) const override;
};

#endif //LONG_OPERATIONS_TRANS_Q_Z_H
