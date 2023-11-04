#ifndef LONG_OPERATIONS_OPERATION3INTEGER_H
#define LONG_OPERATIONS_OPERATION3INTEGER_H
#include "operation3.h"
#include "../algebra/integer.h"

class Operation3Integer : public Operation3 {
protected:
    [[nodiscard]] virtual Integer* get(Integer* firstOperand, Integer* secondOperand, Integer* thirdOperand) const = 0;

public:
    [[nodiscard]] Algebra* get(Algebra* firstOperand, Algebra* secondOperand, Algebra* thirdOperand) const;
};


#endif //LONG_OPERATIONS_OPERATION3INTEGER_H
