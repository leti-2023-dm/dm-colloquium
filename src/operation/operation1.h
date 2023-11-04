#ifndef LONG_OPERATIONS_OPERATION1_H
#define LONG_OPERATIONS_OPERATION1_H
#include "operation.h"
#include "../algebra/algebra.h"
#include <cstdint>

class Operation1 : public Operation {
public:
    [[nodiscard]] uint16_t arity() const override;
    virtual Algebra* get(Algebra* operationObject) const = 0;
};


#endif //LONG_OPERATIONS_OPERATION1_H
