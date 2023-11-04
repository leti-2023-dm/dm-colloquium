#include "operation1Integer.h"

Algebra *Operation1Integer::get(Algebra *object) const {
    auto* objectInteger = dynamic_cast<Integer*>(object);

    return get(objectInteger);
}
