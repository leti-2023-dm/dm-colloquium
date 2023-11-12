#ifndef MUL_PQ_P_H
#define MUL_PQ_P_H

#include "../../rational/MUL_QQ_Q/MUL_QQ_Q.h"
#include "../../operation/operation2.h"
#include "../../algebra/polynomial.h" 

class MUL_PQ_P: public Operation2 {
    public:
        Algebra* get(Algebra* firstOperand, Algebra* secondOperand) const override;
        [[nodiscard]] Polynomial* get(Polynomial* firstOperand, Rational* secondOperand);
};

#endif // MUL_PQ_P_H