#include "DIV_NN_N.h"

#include "../COM_NN_D/COM_NN_D.h"
#include "../SUB_NN_N/SUB_NN_N.h"

Natural* DIV_NN_N::get(Natural* firstOperand, Natural* secondOperand) const {
    SUB_NN_N sub;
    Natural subResult = *firstOperand;
    COM_NN_D compere; size_t com;
    size_t i = 0;
    while (true) {
        com = compere.get(firstOperand, secondOperand)->get(0);
        if (com == 2 || com == 0){
            subResult = sub.get(&subResult, secondOperand);
            i += 1;
        }
        if (com == 1){
            break;
        }
    }
    std::string ret = "i"; ret[0] = static_cast<char>(i);
    return new Natural(ret);
}
