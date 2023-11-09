#ifndef LONG_OPERATIONS_NZER_N_B_H
#define LONG_OPERATIONS_NZER_N_B_H
#include "../../operation/operation1Natural.h"



class NZER_N_B : Operation1Natural {
public:
    Natural* get(Natural* obj) const final;
    bool get_bool(Natural* obj) const;
};

#endif //LONG_OPERATIONS_NZER_N_B_
