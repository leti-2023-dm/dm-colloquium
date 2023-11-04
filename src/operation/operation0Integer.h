#ifndef LONG_OPERATIONS_OPERATION0INTEGER_H
#define LONG_OPERATIONS_OPERATION0INTEGER_H
#include "operation0.h"
#include "../algebra/integer.h"


class Operation0Integer: Operation0 {
    Integer* operationObject_;
public:
    [[nodiscard]] Algebra* get() const override;
    explicit Operation0Integer(const Integer& operationObject) : operationObject_(new Integer(operationObject)) {};
    ~Operation0Integer() override;
};


#endif //LONG_OPERATIONS_OPERATION0INTEGER_H
