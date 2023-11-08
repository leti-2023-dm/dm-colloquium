#ifndef ADD_NN_N
#define ADD_NN_N
#include "../../operation/operation2Natural.h"

#include "../COM_NN_D/COM_NN_D.h"

class ADD_NN_N: public Operation2Natural{
	Natural* get(Natural* firstOperand, Natural* secondOperand);
};
#endif
