#ifndef TRANS_N_Z_cpp
#define TRANS_N_Z
#include "TRANS_N_Z.h"
Algebra* TRANS_N_Z::get(Algebra* object) const
{
    auto* objectInteger = dynamic_cast<Integer*>(object);
    return get(objectInteger);
}

Integer* TRANS_N_Z::get(Natural* object)
{
    Integer* res = new Integer(object, false);
    return res;
}
#endif // !TRANS_N_Z_cpp
