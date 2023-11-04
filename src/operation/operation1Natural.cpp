#include "operation1Natural.h"

Algebra* Operation1Natural::get(Algebra *obj) const {
    auto* objNatural = dynamic_cast<Natural*>(obj);

    return get(objNatural);
}
