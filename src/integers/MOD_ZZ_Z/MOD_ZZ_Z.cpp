#include "MOD_ZZ_Z.h"
#include "../POZ_Z_D/POZ_Z_D.h"
#include "../ABS_Z_N/ABS_Z_N.h"
#include "../DIV_ZZ_Z/DIV_ZZ_Z.h"
#include "../MUL_ZZ_Z/MUL_ZZ_Z.h"
#include "../SUB_ZZ_Z/SUB_ZZ_Z.h"

Integer *MOD_ZZ_Z::get(Integer *firstOperand, Integer *secondOperand) const
{
    POZ_Z_D poz_z_d;
    std::string res_poz = poz_z_d.get(secondOperand)->toString();
    if (res_poz == "0")
        throw std::invalid_argument("\nWhen dividing integers, the divisor must not be zero\n");

    DIV_ZZ_Z div_zz_z;
    MUL_ZZ_Z mul_zz_z;
    SUB_ZZ_Z sub_zz_z;

    Integer* quotient = div_zz_z.get(firstOperand, secondOperand);
    Integer* mul_quotient_divisor = mul_zz_z.get(quotient, secondOperand);
    Integer* remainder = sub_zz_z.get(firstOperand, mul_quotient_divisor);

    return remainder;
}