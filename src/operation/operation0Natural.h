#ifndef LONG_OPERATIONS_OPERATION0NATURAL_H
#define LONG_OPERATIONS_OPERATION0NATURAL_H
#include <cstdint>
#include "operation0.h"
#include "../algebra/natural.h"

class Operation0Natural: Operation0 {
    Natural *operationObject_;
public:
    [[nodiscard]] Algebra* get() const override;
    explicit Operation0Natural(const Natural& operationObject) : operationObject_(new Natural(operationObject)) {};
    ~Operation0Natural() override;
};

#endif //LONG_OPERATIONS_OPERATION0NATURAL_H
