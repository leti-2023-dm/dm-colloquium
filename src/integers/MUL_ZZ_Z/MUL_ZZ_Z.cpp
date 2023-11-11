#include "MUL_ZZ_Z.h"
#include "../ABS_Z_N/ABS_Z_N.h"
#include "../../natural/MUL_NN_N/MUL_NN_N.h"

Integer *MUL_ZZ_Z::get(Integer *firstOperand, Integer *secondOperand) const
{
    ABS_Z_N abs_z_n;
    Natural first_natural = *abs_z_n.get(firstOperand);
    Natural second_natural = *abs_z_n.get(secondOperand);

    bool mul_sign;
    if (!firstOperand->hasSign() != !secondOperand->hasSign())
        mul_sign = true;
    else
        mul_sign = false;

    MUL_NN_N mul_nn_n;
    Natural mul_naturals = mul_nn_n.get(&first_natural, &second_natural);
    
    return new Integer(mul_naturals, mul_sign);
}