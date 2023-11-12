#ifndef MUL_ZZ_Z_H
#define MUL_ZZ_Z_H

#include "../../operation/operation2Integer.h"
#include "../../algebra/integer.h"

class MUL_ZZ_Z: public Operation2Integer
{
public:
    Integer* get(Integer* firstOperand, Integer* secondOperand) const override;
};

#endif