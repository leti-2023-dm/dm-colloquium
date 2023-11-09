#include "TRANS_Z_Q.h"

Rational* TRANS_Z_Q::get(Integer* operationObject) const {
    return new Rational(*operationObject);
}

Algebra* TRANS_Z_Q::get(Algebra* operationObject) const {
    return new Rational(*operationObject);
}
