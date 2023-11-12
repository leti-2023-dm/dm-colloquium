#include "DIV_NN_N.h"

#include "../NZER_N_B/NZER_N_B.h"
#include "../COM_NN_D/COM_NN_D.h"
#include "../SUB_NN_N/SUB_NN_N.h"

Natural* DIV_NN_N::get(Natural* firstOperand, Natural* secondOperand) const {
    NZER_N_B nzer;
    if (nzer.get(secondOperand)->get(0) == 0) {
        throw std::invalid_argument("You cannot divide by 0.");
    }
    SUB_NN_N sub;
    Natural subResult = *firstOperand;
    COM_NN_D compare; size_t com;
    size_t i = 0;
    while (true) {
        com = compare.get(firstOperand, secondOperand)->get(0);
        if (com == 2 || com == 0){
            subResult = *sub.get(&subResult, secondOperand);
            i += 1;
        }
        if (com == 1){
            break;
        }
    }
    std::string ret = "i"; ret[0] = static_cast<char>(i);
    return new Natural(ret);
}
