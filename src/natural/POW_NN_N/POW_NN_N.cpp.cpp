#include "POW_NN_N.h"

Natural* POW_NN_N::get(Natural* firstOperand, Natural* secondOperand) const {
	Natural* result = new Natural("1");
   	Natural base = *firstOperand;
   	Natural exponent = *secondOperand;
    MUL_NN_N mulResult;
   	while (exponent.len() > 0) {
       		if (exponent.get(0) % 2 == 1) {
           		result = mulResult.get(result, &base);
       		}
       		base = *(mulResult.get(&base, &base));
       		exponent.set(0, exponent.get(0) / 2);
   	}
   	return result;
}