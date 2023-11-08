#ifndef LED_P_Q_H
#define LED_P_Q_H
#include "../../operation/operation1.h"
#include "../../algebra/polynomial.h"

class LED_P_Q : Operation1
{
public:
    Algebra *get(Algebra *operationObject) const override;
    [[nodiscard]] Rational *get(Polynomial *operand);
};

#endif // LED_P_Q_H