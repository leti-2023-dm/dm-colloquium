#ifndef ADD_NN_N_dir
#define ADD_NN_N_dir
#include "../../operation/operation2Natural.h"

#include "../COM_NN_D/COM_NN_D.h"

class ADD_NN_N: public Operation2Natural {
public:
        Natural* get(Natural* firstOperand, Natural* secondOperand) const;
};

#endif
