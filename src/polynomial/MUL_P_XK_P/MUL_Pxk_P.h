#ifndef MUL_P_XK_P_H
#define MUL_P_XK_P_H
#include "../../operation/operation2Polynomial.h"
#include "../../algebra/polynomial.h"

class MUL_Pxk_P : Operation2Polynomial{
public:
    [[nodiscard]] Polynomial *get(Polynomial *firstOperand, Polynomial *secondOperand) const override;
};

#endif // MUL_P_XK_P_H