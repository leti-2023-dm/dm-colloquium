#include "operation0Integer.h"

Algebra *Operation0Integer::get() const {
    return operationObject_;
}

Operation0Integer::~Operation0Integer() {
    delete operationObject_;
}
