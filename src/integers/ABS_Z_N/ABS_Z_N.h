#ifndef ABS_Z_N_h
#define ABS_Z_N_h
#include "../../operation/operation0Integer.h"
#include "../../algebra/integer.h"

class ABS_Z_N: public Operation0Integer{
public:
    Natural* get(Integer *obj) const;
};

#endif