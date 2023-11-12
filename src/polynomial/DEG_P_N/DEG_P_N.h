#ifndef DEG_P_N_H
#define DEG_P_N_H
#include "../../operation/operation1.h"
#include "../../algebra/polynomial.h"

class DEG_P_N : Operation1
{
public:
    Algebra *get(Algebra *operationObject) const override;
    [[nodiscard]] Natural *get(Polynomial *operand);
};

#endif // DEG_P_N_H