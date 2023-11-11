#ifndef ABS_Z_N_H
#define ABS_Z_N_H

#include "../../operation/operation1.h"
#include "../../algebra/integer.h"

class ABS_Z_N: public Operation1
{
public:
    Algebra* get(Algebra* object) const override;
    [[nodiscard]] Natural* get(Integer* object);
};

#endif