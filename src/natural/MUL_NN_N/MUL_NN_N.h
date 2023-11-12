#ifndef MUL_NN_N_H
#define MUL_NN_N_H
#include "../../operation/operation2Natural.h"
class MULL_NN_N: Operation2Natural{
public:
    Natural * get(Natural *firstOperand, Natural *secondOperand) const override;
};
#endif //MUL_NN_N_H
