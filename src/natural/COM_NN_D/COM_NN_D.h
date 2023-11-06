#ifndef COMPARETWONATURAL
#define COMPARETWONATURAL
#include "../../operation/operation2Natural.h"

class COM_NN_D: public Operation2Natural{
protected:
    Natural* get(Natural* firstOperand, Natural* secondOperand) const;
};


#endif