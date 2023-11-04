#ifndef LONG_OPERATIONS_OPERATION2INTEGER_H
#define LONG_OPERATIONS_OPERATION2INTEGER_H
#include "operation2.h"
#include "../algebra/integer.h"


class Operation2Integer : Operation2 {
protected:
    virtual Integer* get(Integer* firstOperand, Integer* secondOperand) const = 0;
public:
    [[nodiscard]] Algebra* get(Algebra* firstOperand, Algebra* secondOperand) const override;
};


#endif //LONG_OPERATIONS_OPERATION2INTEGER_H
