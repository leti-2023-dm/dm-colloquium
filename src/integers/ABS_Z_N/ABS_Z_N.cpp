#include "ABS_Z_N.h"

Algebra* ABS_Z_N::get(Algebra* object) const
{
    auto* objectInteger = dynamic_cast<Integer*>(object);

    return get(objectInteger);
}

Natural* ABS_Z_N::get(Integer* object)
{
    return new Natural(object->getNatural());
}