#ifndef LONG_OPERATIONS_OPERATION1NATURAL_H
#define LONG_OPERATIONS_OPERATION1NATURAL_H
#include "../algebra/natural.h"
#include "operation1.h"


class Operation1Natural : Operation1 {
protected:
    virtual Natural* get(Natural* obj) const = 0;
public:
    Algebra* get(Algebra* obj) const override;
};


#endif //LONG_OPERATIONS_OPERATION1NATURAL_H
