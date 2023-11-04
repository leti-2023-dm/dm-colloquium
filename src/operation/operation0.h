#ifndef LONG_OPERATIONS_OPERATION0_H
#define LONG_OPERATIONS_OPERATION0_H
#include <cstdint>
#include "../algebra/algebra.h"
#include "operation.h"

class Operation0: public Operation {
    Algebra* operationObject_;
public:
    [[nodiscard]] uint16_t arity() const override;
    [[nodiscard]] virtual Algebra* get() const = 0;
};


#endif //LONG_OPERATIONS_OPERATION0_H
