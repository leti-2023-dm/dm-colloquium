#ifndef LONG_OPERATIONS_OPERATION1INTEGER_H
#define LONG_OPERATIONS_OPERATION1INTEGER_H
#include "operation1.h"
#include "../algebra/integer.h"

class Operation1Integer : Operation1 {
protected:
    virtual Integer* get(Integer* object) const = 0;
public:
    Algebra* get(Algebra* object) const override;
};


#endif //LONG_OPERATIONS_OPERATION1INTEGER_H
