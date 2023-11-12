#ifndef ABS_Z_N_cpp
#define ABS_Z_N_cpp
#include "ABS_Z_N.h"

Natural *ABS_Z_N::get(Integer *obj) const
{
    Natural* result = new Natural(obj->getNatural());
    return result;
}

#endif