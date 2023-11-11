#include "ADD_ZZ_Z.h"
#include "../ABS_Z_N/ABS_Z_N.h"
#include "../../natural/ADD_NN_N/ADD_NN_N.h"
#include "../../natural/COM_NN_D/COM_NN_D.h"
// #include "../../natural/SUB_NN_N/SUB_NN_N.h"

Integer* ADD_ZZ_Z::get(Integer* firstOperand, Integer* secondOperand) const
{
    ABS_Z_N abs_z_n;
    Natural first_natural = *abs_z_n.get(firstOperand);
    Natural second_natural = *abs_z_n.get(secondOperand);

    if ((!firstOperand->hasSign() && !secondOperand->hasSign()) ||
        (firstOperand->hasSign() && secondOperand->hasSign()))
    {
        ADD_NN_N add_nn_n;
        Natural add_naturals = *add_nn_n.get(&first_natural, &second_natural);
        return new Integer(add_naturals, firstOperand->hasSign());
    }
    else
    {
        SUB_NN_N sub_nn_n;

        COM_NN_D com_nn_d;
        std::string res_comp = com_nn_d.get(&first_natural, &second_natural)->toString();
        if (res_comp == "2")
        {
            Natural sub_naturals = *sub_nn_n.get(&first_natural, &second_natural);
            return new Integer(sub_naturals, firstOperand->hasSign());
        }
        else if (res_comp == "1")
        {
            Natural sub_naturals = *sub_nn_n.get(&second_natural, &first_natural);
            return new Integer(sub_naturals, secondOperand->hasSign());
        }
        else
        {
            return new Integer("0");
        }
    }
}