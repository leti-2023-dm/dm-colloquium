#ifndef ADD_PP_P_H
#define ADD_PP_P_H

#include "../../operation/operation2Polynomial.h"

class ADD_PP_P: public Operation2Polynomial {
    public:
        Polynomial* get(Polynomial* firstOperand, Polynomial* secondOperand);
};

#endif // ADD_PP_P_H