#include "TRANS_Z_N.h"

Algebra* TRANS_Z_N::get(Algebra* object) const
{
    auto* objectInteger = dynamic_cast<Integer*>(object);

    return get(objectInteger);
}

Natural* TRANS_Z_N::get(Integer* object)
{
    if (object->hasSign())
    {
        throw std::invalid_argument("\nIt is not possible to convert a negative integer to a natural number\n");
    }
    return new Natural(object->getNatural());
}