#ifndef MUL_ZM_Z_h
#define MUL_ZM_Z_h
#include "../../operation/operation1Integer.h"

class MUL_ZM_Z : public Operation1Integer { //function changes sign of number
public:
    Integer* get(Integer* obj) const;
};

#endif // !MUL_ZM_Z_h
