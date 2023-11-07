#ifndef DIV_NN_DK_H
#define DIV_NN_DK_H
#include "../../operation/operation2Natural.h"
#include "../COM_NN_D/COM_NN_D.h"
#include "../MUL_ND_N/MUL_ND_N.h"
#include "../MUL_Nk_N/MUL_Nk_N.h"

class DIV_NN_Dk: public Operation2Natural{
public:
    Natural* get(Natural* firstOperand, Natural* secondOperand) const;
};

#endif