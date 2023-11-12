#include "DIV_ZZ_Z.h"
#include "../POZ_Z_D/POZ_Z_D.h"
#include "../ABS_Z_N/ABS_Z_N.h"
#include "../../natural/DIV_NN_N/DIV_NN_N.h"
#include "../../natural/ADD_1N_N/ADD_1N_N.h"

Integer* DIV_ZZ_Z::get(Integer* firstOperand, Integer* secondOperand) const
{
    POZ_Z_D poz_z_d;
    std::string res_poz = poz_z_d.get(secondOperand)->toString();
    if (res_poz == "0")
        throw std::invalid_argument("\nWhen dividing integers, the divisor must not be zero\n");

    ABS_Z_N abs_z_n;
    Natural first_natural = *abs_z_n.get(firstOperand);
    Natural second_natural = *abs_z_n.get(secondOperand);

    DIV_NN_N div_nn_n;
    ADD_1N_N add_1n_n;

    Natural div_naturals = *div_nn_n.get(&first_natural, &second_natural);
    Natural div_naturals_add_1 = *add_1n_n.get(&div_naturals);

    bool first_sign = firstOperand->hasSign();
    bool second_sign = secondOperand->hasSign();

    if (!first_sign && !second_sign)
        return new Integer(div_naturals, false);
    else if (first_sign && second_sign)
        return new Integer(div_naturals_add_1, false);
    else if (first_sign)
        return new Integer(div_naturals_add_1, true);
    else
        return new Integer(div_naturals, true);
}