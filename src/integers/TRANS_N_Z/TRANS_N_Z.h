#ifndef TRANS_N_Z_h
#define TRANS_N_Z_h
#include "../../operation/operation1.h"
#include "../../algebra/integer.h"
class TRANS_N_Z : public Operation1 {
	Algebra* get(Algebra* object) const;
	Integer* get(Natural* object);
};
#endif
