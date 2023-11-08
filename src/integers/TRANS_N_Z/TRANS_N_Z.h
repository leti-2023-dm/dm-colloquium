#ifndef TRANS_N_Z_h
#define TRANS_N_Z_h
#include "../../operation/operation1.h"
#include "../../algebra/integer.h"
class TRANS_N_Z : public Operation1 {
	Algebra* TRANS_N_Z::get(Algebra* object) const;
	Integer* TRANS_N_Z::get(Natural* object)
};
#endif
