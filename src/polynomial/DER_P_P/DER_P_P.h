#ifndef DER_P_P_H
#define DER_P_P_H
#include "../../operation/operation1Polynomial.h"
#include "../../algebra/polynomial.h"

class DER_P_P : Operation1Polynomial{
public:
    [[nodiscard]] Polynomial *get(Polynomial *operand) const override;
};

#endif // DER_P_P_H