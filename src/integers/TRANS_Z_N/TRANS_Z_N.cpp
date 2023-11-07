#include "TRANS_Z_N.h"

Algebra* TRANS_Z_N::get(Algebra* object) const
{
    auto* objectInteger = dynamic_cast<Integer*>(object);

    return get(objectInteger);
}

Natural* TRANS_Z_N::get(Integer* object)
{
    if (!object->hasSign())
    {
        Natural* result = new Natural(object->getNatural());
        return result;
    }
    return nullptr; 
}