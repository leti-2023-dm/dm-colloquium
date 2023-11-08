#include "SQRE_N_N.h"

Natural* SQRE_N_N::get(Natural* obj) const{
    MUL_NN_N mulResult;
    Natural* result = mulResult.get(obj, obj);
	return result;
}