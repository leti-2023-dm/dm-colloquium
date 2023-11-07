#ifndef TRANS_Z_N_H
#define TRANS_Z_N_H
#include "../../operation/operation1.h"
#include "../../algebra/integer.h"

class TRANS_Z_N : Operation1
{
public:
    Algebra *get(Algebra *object) const override;
    [[nodiscard]] Natural *get(Integer* object);
};

#endif // TRANS_Z_N_H