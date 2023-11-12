#ifndef GCF_NN_N
#define GCF_NN_N
#include <sstream>
#include "../../operation/operation2Natural.h"
#include "../MOD_NN_N/MOD_NN_N.h"
#include "../COM_NN_D/COM_NN_D.h"
#include "../NZER_N_B/NZER_N_B.h"

class GCF_NN_N: public Operation2Natural {
    public:
        Natural* get(Natural* firstOperand, Natural* secondOperand) const;
};

#endif