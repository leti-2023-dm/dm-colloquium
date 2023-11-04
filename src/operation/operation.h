#ifndef LONG_OPERATIONS_OPERATION_H
#define LONG_OPERATIONS_OPERATION_H
#include <cstdint>

class Operation {
public:
    [[nodiscard]] virtual uint16_t arity() const = 0;
    virtual ~Operation() = default;
};


#endif //LONG_OPERATIONS_OPERATION_H
