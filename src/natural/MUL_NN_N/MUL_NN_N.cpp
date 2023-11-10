#include "MUL_NN_N.h"
#include "../MUL_ND_N/MUL_ND_N.h"
#include "../MUL_Nk_N/MUL_Nk_N.h"
#include <map>
/*#include "../ADD_NN_N/ADD_NN_N.h"*/
class ADD_NN_N: Operation2Natural{
public:
    Natural * get(Natural *firstOperand, Natural *secondOperand) const override{
        return nullptr;
    }
};

Natural *MULL_NN_N::get(Natural *firstOperand, Natural *secondOperand) const {
    ADD_NN_N add;
    MUL_ND_N mulD;
    MUL_Nk_N mulK;
    auto* res = new Natural("0");
    for (size_t i = 0; i < secondOperand->len(); ++i) {
        res = add.get(res,mulD.get(mulK.get(firstOperand, i),
                               secondOperand->get(i)));
    }
    return res;
}
