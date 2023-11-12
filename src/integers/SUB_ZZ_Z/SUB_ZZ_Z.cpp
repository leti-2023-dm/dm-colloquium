#include "SUB_ZZ_Z.h"
#include "../MUL_ZM_Z/MUL_ZM_Z.h"
#include "../ADD_ZZ_Z/ADD_ZZ_Z.h"

Integer* SUB_ZZ_Z::get(Integer* firstOperand, Integer* secondOperand) const
{
    MUL_ZM_Z mul_zm_z;
    ADD_ZZ_Z add_zz_z;
    Integer integer_mul_second = *mul_zm_z.get(secondOperand);
    
    return add_zz_z.get(firstOperand, &integer_mul_second);
}