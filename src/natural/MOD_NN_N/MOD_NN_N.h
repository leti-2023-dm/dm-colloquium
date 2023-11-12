#ifndef MOD_NN_N
#define MOD_NN_N
#include "../../operation/operation2Natural.h"
#include "../DIV_NN_N/DIV_NN_N.h"
#include "../SUB_NDN_N/SUB_NDN_N.h"

class MOD_NN_N: public Operation2Natural {
	public:
		Natural* get(Natural* firstOperand, Natural* secondOperand) const;
};

#endif