#ifndef POW_NN_N
#define POW_NN_N
#include "../../operation/operation2Natural.h"
#include "../MUL_NN_N/MUL_NN_N.h"

class POW_NN_N: public Operation2Natural {
	public:
		Natural* get(Natural* firstOperand, Natural* secondOperand) const;
};

#endif
