#ifndef SQRE_N_N
#define SQRE_N_N
#include "../../operation/operation1Natural.h"
#include "../MUL_NN_N/MUL_NN_N.h"

class SQRE_N_N: public Operation1Natural {
	public:
		Natural* get(Natural* obj) const;
};

#endif