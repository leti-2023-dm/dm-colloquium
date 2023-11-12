#ifndef SUB_PP_P_H
#define SUB_PP_P_H

#include "../../operation/operation2Polynomial.h"

class SUB_PP_P: public Operation2Polynomial {
    public:
        Polynomial* get(Polynomial* firstOperand, Polynomial* secondOperand);
};


#endif // SUB_PP_P_H