#include "operation0Natural.h"

Algebra* Operation0Natural::get() const {
    return operationObject_;
}

Operation0Natural::~Operation0Natural() {
    delete operationObject_;
}