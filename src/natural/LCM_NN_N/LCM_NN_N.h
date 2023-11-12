#ifndef LMC_NN_N_H
#define LMC_NN_N_H
#include "../../operation/operation2Natural.h"
#include "../MUL_NN_N/MUL_NN_N.h"
#include "../GCF_NN_N/GCF_NN_N.h"
#include "../DIV_NN_N/DIV_NN_N.h"

class LMC_NN_N: public Operation2Natural{
public:
    Natural* get(Natural* firstOperand, Natural* secondOperand) const;
};

#endif